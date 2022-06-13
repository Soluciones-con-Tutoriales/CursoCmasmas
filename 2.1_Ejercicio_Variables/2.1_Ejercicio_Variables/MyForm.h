#pragma once

namespace My21EjercicioVariables {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ Nudcantidad;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbB200;
	private: System::Windows::Forms::Label^ lbB100;
	private: System::Windows::Forms::Label^ lbB50;
	private: System::Windows::Forms::Label^ lbB5;
	private: System::Windows::Forms::Label^ lbB10;
	private: System::Windows::Forms::Label^ lbB20;
	private: System::Windows::Forms::Label^ lbB1;
	private: System::Windows::Forms::Label^ lbM1;
	private: System::Windows::Forms::Label^ lbM5;
	private: System::Windows::Forms::Label^ lbM10;
	private: System::Windows::Forms::Label^ lbM25;
	private: System::Windows::Forms::Label^ lbM50;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nudcantidad = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbB200 = (gcnew System::Windows::Forms::Label());
			this->lbB100 = (gcnew System::Windows::Forms::Label());
			this->lbB50 = (gcnew System::Windows::Forms::Label());
			this->lbB5 = (gcnew System::Windows::Forms::Label());
			this->lbB10 = (gcnew System::Windows::Forms::Label());
			this->lbB20 = (gcnew System::Windows::Forms::Label());
			this->lbB1 = (gcnew System::Windows::Forms::Label());
			this->lbM1 = (gcnew System::Windows::Forms::Label());
			this->lbM5 = (gcnew System::Windows::Forms::Label());
			this->lbM10 = (gcnew System::Windows::Forms::Label());
			this->lbM25 = (gcnew System::Windows::Forms::Label());
			this->lbM50 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nudcantidad))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad a retirar";
			// 
			// Nudcantidad
			// 
			this->Nudcantidad->DecimalPlaces = 2;
			this->Nudcantidad->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->Nudcantidad->Location = System::Drawing::Point(138, 25);
			this->Nudcantidad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -1981284352, -1966660860, 0, 0 });
			this->Nudcantidad->Name = L"Nudcantidad";
			this->Nudcantidad->Size = System::Drawing::Size(120, 20);
			this->Nudcantidad->TabIndex = 1;
			this->Nudcantidad->ValueChanged += gcnew System::EventHandler(this, &MyForm::Nudcantidad_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Billetes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(207, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Monedas";
			// 
			// lbB200
			// 
			this->lbB200->AutoSize = true;
			this->lbB200->Location = System::Drawing::Point(55, 116);
			this->lbB200->Name = L"lbB200";
			this->lbB200->Size = System::Drawing::Size(40, 13);
			this->lbB200->TabIndex = 4;
			this->lbB200->Text = L"lbB200";
			// 
			// lbB100
			// 
			this->lbB100->AutoSize = true;
			this->lbB100->Location = System::Drawing::Point(55, 149);
			this->lbB100->Name = L"lbB100";
			this->lbB100->Size = System::Drawing::Size(40, 13);
			this->lbB100->TabIndex = 5;
			this->lbB100->Text = L"lbB100";
			// 
			// lbB50
			// 
			this->lbB50->AutoSize = true;
			this->lbB50->Location = System::Drawing::Point(55, 181);
			this->lbB50->Name = L"lbB50";
			this->lbB50->Size = System::Drawing::Size(34, 13);
			this->lbB50->TabIndex = 6;
			this->lbB50->Text = L"lbB50";
			// 
			// lbB5
			// 
			this->lbB5->AutoSize = true;
			this->lbB5->Location = System::Drawing::Point(52, 267);
			this->lbB5->Name = L"lbB5";
			this->lbB5->Size = System::Drawing::Size(28, 13);
			this->lbB5->TabIndex = 9;
			this->lbB5->Text = L"lbB5";
			// 
			// lbB10
			// 
			this->lbB10->AutoSize = true;
			this->lbB10->Location = System::Drawing::Point(52, 238);
			this->lbB10->Name = L"lbB10";
			this->lbB10->Size = System::Drawing::Size(34, 13);
			this->lbB10->TabIndex = 8;
			this->lbB10->Text = L"lbB10";
			// 
			// lbB20
			// 
			this->lbB20->AutoSize = true;
			this->lbB20->Location = System::Drawing::Point(52, 209);
			this->lbB20->Name = L"lbB20";
			this->lbB20->Size = System::Drawing::Size(34, 13);
			this->lbB20->TabIndex = 7;
			this->lbB20->Text = L"lbB20";
			// 
			// lbB1
			// 
			this->lbB1->AutoSize = true;
			this->lbB1->Location = System::Drawing::Point(52, 297);
			this->lbB1->Name = L"lbB1";
			this->lbB1->Size = System::Drawing::Size(28, 13);
			this->lbB1->TabIndex = 10;
			this->lbB1->Text = L"lbB1";
			// 
			// lbM1
			// 
			this->lbM1->AutoSize = true;
			this->lbM1->Location = System::Drawing::Point(219, 238);
			this->lbM1->Name = L"lbM1";
			this->lbM1->Size = System::Drawing::Size(30, 13);
			this->lbM1->TabIndex = 15;
			this->lbM1->Text = L"lbM1";
			// 
			// lbM5
			// 
			this->lbM5->AutoSize = true;
			this->lbM5->Location = System::Drawing::Point(219, 209);
			this->lbM5->Name = L"lbM5";
			this->lbM5->Size = System::Drawing::Size(30, 13);
			this->lbM5->TabIndex = 14;
			this->lbM5->Text = L"lbM5";
			// 
			// lbM10
			// 
			this->lbM10->AutoSize = true;
			this->lbM10->Location = System::Drawing::Point(219, 181);
			this->lbM10->Name = L"lbM10";
			this->lbM10->Size = System::Drawing::Size(36, 13);
			this->lbM10->TabIndex = 13;
			this->lbM10->Text = L"lbM10";
			// 
			// lbM25
			// 
			this->lbM25->AutoSize = true;
			this->lbM25->Location = System::Drawing::Point(219, 149);
			this->lbM25->Name = L"lbM25";
			this->lbM25->Size = System::Drawing::Size(36, 13);
			this->lbM25->TabIndex = 12;
			this->lbM25->Text = L"lbM25";
			// 
			// lbM50
			// 
			this->lbM50->AutoSize = true;
			this->lbM50->Location = System::Drawing::Point(219, 116);
			this->lbM50->Name = L"lbM50";
			this->lbM50->Size = System::Drawing::Size(36, 13);
			this->lbM50->TabIndex = 11;
			this->lbM50->Text = L"lbM50";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 322);
			this->Controls->Add(this->lbM1);
			this->Controls->Add(this->lbM5);
			this->Controls->Add(this->lbM10);
			this->Controls->Add(this->lbM25);
			this->Controls->Add(this->lbM50);
			this->Controls->Add(this->lbB1);
			this->Controls->Add(this->lbB5);
			this->Controls->Add(this->lbB10);
			this->Controls->Add(this->lbB20);
			this->Controls->Add(this->lbB50);
			this->Controls->Add(this->lbB100);
			this->Controls->Add(this->lbB200);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Nudcantidad);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Nudcantidad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void Nudcantidad_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double Cantidad_Retirar = Convert::ToDouble(Nudcantidad->Value);
		int Billetes = Math::Truncate(Cantidad_Retirar);
		double Monedas = Cantidad_Retirar - Billetes;
		int B200 = Billetes / 200;
		int RB200 = Billetes % 200;
		int B100 = RB200 / 100;
		int RB100 = RB200 % 100;
		int B50 = RB100 / 50;
		int RB50 = RB100 % 50;
		int B20 = RB50 / 20;
		int RB20 = RB50 % 20;
		int B10 = RB20 / 10;
		int RB10 = RB20 % 10;
		int B5 = RB10 / 5;
		int RB5 = RB10 % 5;
		lbB200->Text = "Q200: " + B200.ToString();
		lbB100->Text = "Q100: " + B100.ToString();
		lbB50->Text = "Q50: " + B50.ToString();
		lbB20->Text = "Q20: " + B20.ToString();
		lbB10->Text = "Q10: " + B10.ToString();
		lbB5->Text = "Q5: " + B5.ToString();
		lbB1->Text = "Q1: " + RB5.ToString();
		Monedas = Math::Round(Monedas, 2);
		int Monedas_Retirar = Monedas * 100;
		int M50 = Monedas_Retirar / 50;
		int RM50 = Monedas_Retirar % 50;
		int M25 = RM50 / 25;
		int RM25 = RM50 % 25;
		int M10 = RM25 / 10;
		int RM10 = RM25 % 10;
		int M5 = RM10 / 5;
		int RM5 = RM10 % 5;
		lbM50->Text = "Q0.50 Centavos " + M50.ToString();
		lbM25->Text = "Q0.25 Centavos " + M25.ToString();
		lbM10->Text = "Q0.10 Centavos " + M10.ToString();
		lbM5->Text = "Q0.05 Centavos " + M5.ToString();
		lbM1->Text = "Q0.01 Centavos " + (RM5).ToString();




	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}
};
}
