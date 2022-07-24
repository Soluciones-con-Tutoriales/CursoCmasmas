#pragma once

namespace My3Condiciones {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnVDecimal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNdecimal;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNumeroV;
	private: System::Windows::Forms::Button^ txtVerificarParImpar;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNota;
	private: System::Windows::Forms::Button^ btnVerificarN;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnVDecimal = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNdecimal = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroV = (gcnew System::Windows::Forms::TextBox());
			this->txtVerificarParImpar = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNota = (gcnew System::Windows::Forms::TextBox());
			this->btnVerificarN = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(371, 329);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnVDecimal);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txtNdecimal);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(363, 303);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Verificador decimal";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnVDecimal
			// 
			this->btnVDecimal->Location = System::Drawing::Point(122, 78);
			this->btnVDecimal->Name = L"btnVDecimal";
			this->btnVDecimal->Size = System::Drawing::Size(75, 23);
			this->btnVDecimal->TabIndex = 2;
			this->btnVDecimal->Text = L"Verificar";
			this->btnVDecimal->UseVisualStyleBackColor = true;
			this->btnVDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnVDecimal_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Número decimal";
			// 
			// txtNdecimal
			// 
			this->txtNdecimal->Location = System::Drawing::Point(122, 25);
			this->txtNdecimal->Name = L"txtNdecimal";
			this->txtNdecimal->Size = System::Drawing::Size(100, 20);
			this->txtNdecimal->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->txtNumeroV);
			this->tabPage2->Controls->Add(this->txtVerificarParImpar);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(363, 303);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Verificador Par Impar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Número a ingresar";
			// 
			// txtNumeroV
			// 
			this->txtNumeroV->Location = System::Drawing::Point(152, 43);
			this->txtNumeroV->Name = L"txtNumeroV";
			this->txtNumeroV->Size = System::Drawing::Size(100, 20);
			this->txtNumeroV->TabIndex = 1;
			// 
			// txtVerificarParImpar
			// 
			this->txtVerificarParImpar->Location = System::Drawing::Point(142, 108);
			this->txtVerificarParImpar->Name = L"txtVerificarParImpar";
			this->txtVerificarParImpar->Size = System::Drawing::Size(75, 23);
			this->txtVerificarParImpar->TabIndex = 0;
			this->txtVerificarParImpar->Text = L"Verficar";
			this->txtVerificarParImpar->UseVisualStyleBackColor = true;
			this->txtVerificarParImpar->Click += gcnew System::EventHandler(this, &MyForm::txtVerificarParImpar_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->txtNota);
			this->tabPage3->Controls->Add(this->btnVerificarN);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(363, 303);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Verificador de notas";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Nota a ingresar";
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(156, 30);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(100, 20);
			this->txtNota->TabIndex = 4;
			// 
			// btnVerificarN
			// 
			this->btnVerificarN->Location = System::Drawing::Point(146, 95);
			this->btnVerificarN->Name = L"btnVerificarN";
			this->btnVerificarN->Size = System::Drawing::Size(75, 23);
			this->btnVerificarN->TabIndex = 3;
			this->btnVerificarN->Text = L"Verficar";
			this->btnVerificarN->UseVisualStyleBackColor = true;
			this->btnVerificarN->Click += gcnew System::EventHandler(this, &MyForm::btnVerificarN_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 332);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Condiciones";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnVDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double Numero = Convert::ToDouble(txtNdecimal->Text);
			int Numero_sin_Decimal = Math::Truncate(Numero);
			double Numero_Decimal = Numero - Numero_sin_Decimal;
			/*
				if(Condicion){
					Instrucciones
				}else{
					Instrucciones
				}
			*/
			if (Numero_Decimal > 0) {
				MessageBox::Show("El número ingresado es decimal");
			}
			else {
				MessageBox::Show("El número ingresado no es decimal");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void txtVerificarParImpar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int Numero_a_verificar = Convert::ToInt32(txtNumeroV->Text);
		if ((Numero_a_verificar % 2) == 0) {
			MessageBox::Show("El número ingresado es par");
		}
		else {
			MessageBox::Show("El número ingresado es impar");

		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btnVerificarN_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double Nota = Convert::ToDouble(txtNota->Text);
		if (Nota < 40) {
			MessageBox::Show("Clasificación: Pesimo");
		}
		else if (Nota >= 40 && Nota < 60) {
			MessageBox::Show("Clasificación: Malo");

		}
		else if (Nota >= 60 && Nota < 75) {
			MessageBox::Show("Clasificación: Regular");
		}
		else if (Nota >= 75 && Nota <= 100) {
			MessageBox::Show("Clasificación: Excelente");

		}
		else {
			MessageBox::Show("No puede tener una nota mayor a 100");

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
