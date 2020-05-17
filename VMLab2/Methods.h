#ifndef METHODS_H
#define METHODS_H

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include <vector>

struct constants {
    double l, T;                  // длина и время
    double h, tay;                // шаг по длине и времени
    size_t stepL, stepT;          // размерность сетки
    double b0, b1, b2, fi1, fi2;  // константы
};

double fi(const double x, double fi2);

double b(const double x, double b0, double b);

double IntegralA(std::vector<std::vector<double>>& grid, size_t j);

double IntegralB(std::vector<std::vector<double>>& grid, std::vector<double>& b_array, size_t j);

void TridiagonalMatrixAlgorithm(std::vector<double>& a, std::vector<double>& b, std::vector<double>& c,
    std::vector<double>& f, std::vector<double>& x);

void Thermal(std::vector<std::vector<double>>& gridB, std::vector<std::vector<double>>& gridA, std::vector<double>& Ares,
    double _l, double _T, double _h, double _tay, double _b0, double _b1, double _b2, double _fi1, double _fi2, int coef,
    System::Windows::Forms::ProgressBar^ pb);

#endif  // METHODS_H