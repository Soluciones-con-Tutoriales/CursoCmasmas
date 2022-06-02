#pragma once

namespace My2Declaraciondevariables {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtn1;
	private: System::Windows::Forms::TextBox^ txtn2;
	private: System::Windows::Forms::Button^ btnCalcular;


	protected:

	protected:





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtn1 = (gcnew System::Windows::Forms::TextBox());
			this->txtn2 = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(283, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero 2";
			// 
			// txtn1
			// 
			this->txtn1->Location = System::Drawing::Point(105, 33);
			this->txtn1->Name = L"txtn1";
			this->txtn1->Size = System::Drawing::Size(100, 22);
			this->txtn1->TabIndex = 2;
			// 
			// txtn2
			// 
			this->txtn2->Location = System::Drawing::Point(365, 33);
			this->txtn2->Name = L"txtn2";
			this->txtn2->Size = System::Drawing::Size(100, 22);
			this->txtn2->TabIndex = 3;
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(196, 132);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(75, 23);
			this->btnCalcular->TabIndex = 4;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 182);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->txtn2);
			this->Controls->Add(this->txtn1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		char caracter = 'D';
		bool Bandera = false;
		double Total = 300.25;
		int Resultato = 80;
		String^ Texto = "Hola mundo";
		//MessageBox::Show("String: " + Texto->ToString());
	}

private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int N1 = Convert::ToInt32(txtn1->Text);
		int N2 = Convert::ToInt32(txtn2->Text);
		int Total = N1 + N2;
		MessageBox::Show("El total de la suma es: " + Total.ToString());
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("ERROR: " + ex->Message);
	}

}
};
}
