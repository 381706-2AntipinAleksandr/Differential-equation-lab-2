#pragma once
#include <chrono>
#include <string>
#include "Methods.h"

namespace VMLab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::ProgressBar^ progressBar1;
	private:

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(12, 108);
			this->chart1->Name = L"chart1";
			series7->BorderWidth = 2;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::Blue;
			series7->Legend = L"Legend1";
			series7->Name = L"fi(x)";
			series8->BorderWidth = 2;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Color = System::Drawing::Color::Red;
			series8->Legend = L"Legend1";
			series8->Name = L"y(x, T)";
			series9->BorderWidth = 2;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Color = System::Drawing::Color::Lime;
			series9->Enabled = false;
			series9->Legend = L"Legend1";
			series9->Name = L"w(x, T) / I";
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Size = System::Drawing::Size(928, 510);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"5,0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"2,0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"0,02";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(235, 65);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"0,01";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(517, 65);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"-1,0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(682, 65);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"0,23";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(840, 65);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 7;
			this->textBox7->Text = L"-0,42";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(517, 25);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"0,11";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(682, 25);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 9;
			this->textBox9->Text = L"0,41";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(978, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 58);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"l = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"T = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(194, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"h = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(182, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"tay = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(468, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"fi1 = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(633, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"fi2 = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(467, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"b0 = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(633, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"b1 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(790, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"b2 = ";
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::DarkOrange;
			this->progressBar1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->progressBar1->Location = System::Drawing::Point(946, 595);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(245, 23);
			this->progressBar1->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(946, 574);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 18);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Время выполнения:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1093, 574);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 18);
			this->label11->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1164, 574);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 18);
			this->label12->TabIndex = 23;
			this->label12->Text = L"мс";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(788, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"coef =";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(840, 25);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1192, 630);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Решение начальной краевой задачи";
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void Parse() {
			if (this->textBox1->Text == "" || this->textBox2->Text == "" ||
				this->textBox3->Text == "" || this->textBox4->Text == "" ||
				this->textBox3->Text == "" || this->textBox4->Text == "" ||
				this->textBox7->Text == "" || this->textBox8->Text == "" ||
				this->textBox9->Text == "" || this->textBox10->Text == "") {
				MessageBox::Show("Введены не все данные");
				return;
			}

			this->textBox1->Text = this->textBox1->Text->Replace(".", ",");
			this->textBox2->Text = this->textBox2->Text->Replace(".", ",");
			this->textBox3->Text = this->textBox3->Text->Replace(".", ",");
			this->textBox4->Text = this->textBox4->Text->Replace(".", ",");
			this->textBox5->Text = this->textBox5->Text->Replace(".", ",");
			this->textBox6->Text = this->textBox6->Text->Replace(".", ",");
			this->textBox7->Text = this->textBox7->Text->Replace(".", ",");
			this->textBox8->Text = this->textBox8->Text->Replace(".", ",");
			this->textBox9->Text = this->textBox9->Text->Replace(".", ",");
			this->textBox10->Text = this->textBox10->Text->Replace(".", ",");
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Parse();
		// очистка предыдущих графиков
		chart1->Series["fi(x)"]->Points->Clear();
		chart1->Series["y(x, T)"]->Points->Clear();
		chart1->Series["w(x, T) / I"]->Points->Clear();
		chart1->Series["w(x, T) / I"]->Enabled = false;

		// заполнение констант
		std::vector<std::vector<double>> gridB, gridA;
		std::vector<double> Ares;
		double l, T, h, tay, b0, b1, b2, fi1, fi2;
		int coef;

		l = Convert::ToDouble(this->textBox1->Text);
		T = Convert::ToDouble(this->textBox2->Text);
		h = Convert::ToDouble(this->textBox3->Text);
		tay = Convert::ToDouble(this->textBox4->Text);
		b0 = Convert::ToDouble(this->textBox5->Text);
		b1 = Convert::ToDouble(this->textBox6->Text);
		b2 = Convert::ToDouble(this->textBox7->Text);
		fi1 = Convert::ToDouble(this->textBox8->Text);
		fi2 = Convert::ToDouble(this->textBox9->Text);
		coef = Convert::ToInt32(this->textBox10->Text);

		//выполнение основной функции и замер времени
		std::chrono::time_point<std::chrono::system_clock> start, end;

		start = std::chrono::system_clock::now();
		Thermal(gridB, gridA, Ares, l, T, h, tay, b0, b1, b2, fi1, fi2, coef, progressBar1);
		end = std::chrono::system_clock::now();
		std::chrono::duration<double, std::milli> time(end - start);
		this->label11->Text = gcnew String(std::to_string(time.count()).c_str());
		// построение графиков
		for (size_t i = 0; i < gridB[static_cast<size_t>(T / tay) - 1].size(); ++i) {
			chart1->Series["fi(x)"]->Points->AddXY(i * h, gridB[0][i]);
			chart1->Series["y(x, T)"]->Points->AddXY(i * h, gridB[static_cast<size_t>(T / tay) - 1][i]);
			chart1->Series["w(x, T) / I"]->Points->AddXY(i * h, Ares[i]);
		}
	}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::R) {
		chart1->Series["w(x, T) / I"]->Enabled = true;
	}
}
};
}
