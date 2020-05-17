#define _USE_MATH_DEFINES
#include <cmath>
#include "Methods.h"

// структура с константами
constants Constants;

// функция fi
double fi(const double x, double fi2) {
    return 1.0 / Constants.l + Constants.fi1 * cos(M_PI * x / Constants.l)
        + fi2 * cos(2.0 * M_PI * x / Constants.l);
}

// функция b
double b(const double x, double b0, double b2) { 
    return b0 + Constants.b1 * cos(M_PI * x / Constants.l)
        + b2 * cos(2.0 * M_PI * x / Constants.l);
}

// интегрирование методом Симпсона для части А
double IntegralA(std::vector<std::vector<double>>& grid, size_t j) {
    double integral = grid[j][0];

    for (int i = 1; i < Constants.stepL - 1; i += 2) {
        integral += 4.0 * grid[j][i];
        integral += 2.0 * grid[j][i + 1];
    }

    integral += grid[j][Constants.stepL - 1];
    integral = integral * Constants.h / 3.0;
    return integral;
}

// интегрирование методом Симпсона для части В
double IntegralB(std::vector<std::vector<double>>& grid, std::vector<double>& b_array, size_t j) {
    double integral = grid[j][0] * b_array[0];

    for (int i = 1; i < Constants.stepL - 1; i += 2) {
        integral += 4.0 * grid[j][i] * b_array[i];
        integral += 2.0 * grid[j][i + 1] * b_array[i + 1];
    }

    integral += grid[j][Constants.stepL - 1] * b_array[Constants.stepL - 1];
    integral = integral * Constants.h / 3.0;
    return integral;
}

// Метод прогонки
void TridiagonalMatrixAlgorithm(std::vector<double>& a, std::vector<double>& b, std::vector<double>& c,
    std::vector<double>& f, std::vector<double>& x) {
    size_t size = x.size();
    std::vector<double> A(size), B(size);
    
    A[0] = -c[0] / b[0];
    B[0] = f[0] / b[0];

    for (size_t i = 1; i < size; ++i) {
        if (i == size - 1) {
            A[i] = -c[2] / (a[2] * A[i - 1] + b[2]);
            B[i] = (f[i] - a[2] * B[i - 1]) / (a[2] * A[i - 1] + b[2]);
            break;
        }
        A[i] = -c[1] / (a[1] * A[i - 1] + b[1]);
        B[i] = (f[i] - a[1] * B[i - 1]) / (a[1] * A[i - 1] + b[1]);
    }

    x[size - 1] = B[size - 1];

    for (int i = size - 2; i >= 0; i--)
        x[i] = A[i] * x[i + 1] + B[i];
}

void Thermal(std::vector<std::vector<double>>& gridB, std::vector<std::vector<double>>& gridA, std::vector<double>& Ares,
    double _l, double _T, double _h, double _tay, double _b0, double _b1, double _b2, double _fi1, double _fi2, int coef,
    System::Windows::Forms::ProgressBar^ pb) {
    // инициализация констант
    Constants.l = _l; Constants.T = _T;
    Constants.h = _h; Constants.tay = _tay;
    Constants.b0 = _b0; Constants.b1 = _b1; Constants.b2 = _b2;
    Constants.fi1 = _fi1; Constants.fi2 = _fi2;
    Constants.stepL = _l / _h; Constants.stepT = _T / _tay;
    pb->Value = 0;
    pb->Maximum = Constants.stepL;
    gridB.resize(Constants.stepT);
    gridA.resize(Constants.stepT);
    gridB[0].resize(Constants.stepL);
    gridA[0].resize(Constants.stepL);

    // правая часть основного уравнения из А и В
    std::vector<double> fB(Constants.stepL), fA(Constants.stepL);
    std::vector<double> b_array(Constants.stepL);
    std::vector<double> x(Constants.stepL);

    // вычисление значений функций, зависящих от x
    for (size_t i = 0; i < Constants.stepL; ++i) {
        gridB[0][i] = fi(i * Constants.h, Constants.fi2);
        gridA[0][i] = fi(i * Constants.h, Constants.fi2);
        b_array[i] = b(i * Constants.h, Constants.b0, Constants.b2);
    }

    std::vector<double> a(3), b(3), c(3);

    // заполнение векторов коэффициентов метода прогонки
    a[0] = 0.0; b[0] = 1.0; c[0] = -1.0;

    a[1] = Constants.tay * coef * coef / Constants.h / Constants.h;
    b[1] = -2.0 * Constants.tay * coef * coef / Constants.h / Constants.h - 1.0;
    c[1] = Constants.tay * coef * coef / Constants.h / Constants.h;

    a[2] = -1.0; b[2] = 1.0; c[2] = 0.0;

    // нахождение значений сетки
    for (size_t j = 1; j < Constants.stepT; ++j) {
        gridB[j].resize(Constants.stepL);
        gridA[j].resize(Constants.stepL);
        double integral = IntegralB(gridB, b_array, j - 1);
        for (size_t i = 1; i < Constants.stepL - 1; i++) {
            fB[i] = -gridB[j - 1][i] * (Constants.tay * Constants.tay * b_array[i]
                - integral * Constants.tay * Constants.tay + 1.0);
            fA[i] = -gridA[j - 1][i] * (Constants.tay * Constants.tay * b_array[i] + 1.0);
        }
        fB[0] = fB[Constants.stepL - 1] = 0;
        fA[0] = fA[Constants.stepL - 1] = 0;

        // применение метод прогонки для части В
        TridiagonalMatrixAlgorithm(a, b, c, fB, x);
        for (size_t i = 0; i < Constants.stepL; i++)
            gridB[j][i] = x[i];

        // применение метод прогонки для части А
        TridiagonalMatrixAlgorithm(a, b, c, fA, x);
        for (size_t i = 0; i < Constants.stepL; i++)
            gridA[j][i] = x[i];
        pb->PerformStep();
    }

    Ares.resize(Constants.stepL);
    double Aintegral = IntegralA(gridA, Constants.stepT - 1);
    for (size_t i = 0; i < Constants.stepL; i++)
        Ares[i] = gridA[Constants.stepT - 1][i] / Aintegral;
    pb->Value = Constants.stepL;
}
