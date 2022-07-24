#pragma once
#include "LogicaVector.h";
namespace My6Arrays {

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
	private: System::Windows::Forms::Button^ btnLLenar;
	private: System::Windows::Forms::ListBox^ lbNumeros;
	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLLenar = (gcnew System::Windows::Forms::Button());
			this->lbNumeros = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnLLenar
			// 
			this->btnLLenar->Location = System::Drawing::Point(116, 21);
			this->btnLLenar->Margin = System::Windows::Forms::Padding(2);
			this->btnLLenar->Name = L"btnLLenar";
			this->btnLLenar->Size = System::Drawing::Size(94, 49);
			this->btnLLenar->TabIndex = 0;
			this->btnLLenar->Text = L"Llenar";
			this->btnLLenar->UseVisualStyleBackColor = true;
			this->btnLLenar->Click += gcnew System::EventHandler(this, &MyForm::btnLLenar_Click);
			// 
			// lbNumeros
			// 
			this->lbNumeros->FormattingEnabled = true;
			this->lbNumeros->Location = System::Drawing::Point(105, 103);
			this->lbNumeros->Margin = System::Windows::Forms::Padding(2);
			this->lbNumeros->Name = L"lbNumeros";
			this->lbNumeros->Size = System::Drawing::Size(129, 160);
			this->lbNumeros->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 370);
			this->Controls->Add(this->lbNumeros);
			this->Controls->Add(this->btnLLenar);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void btnLLenar_Click(System::Object^ sender, System::EventArgs^ e) {
		LogicaVector^ objVector = gcnew LogicaVector();
		objVector->listarVector(lbNumeros);
	}
	};
};
