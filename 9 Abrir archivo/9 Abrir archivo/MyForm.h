#pragma once

namespace My9Abrirarchivo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Button^ btnAbrirArchivo;
	private: System::Windows::Forms::Button^ btnGuardarArchivo;
	protected:

	protected:


	private: System::Windows::Forms::OpenFileDialog^ ofd1;
	private: System::Windows::Forms::SaveFileDialog^ sfd1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ rtxtDataArchivo;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->btnGuardarArchivo = (gcnew System::Windows::Forms::Button());
			this->ofd1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfd1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->rtxtDataArchivo = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAbrirArchivo
			// 
			this->btnAbrirArchivo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbrirArchivo.BackgroundImage")));
			this->btnAbrirArchivo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAbrirArchivo->FlatAppearance->BorderSize = 0;
			this->btnAbrirArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbrirArchivo->Location = System::Drawing::Point(187, 544);
			this->btnAbrirArchivo->Name = L"btnAbrirArchivo";
			this->btnAbrirArchivo->Size = System::Drawing::Size(165, 158);
			this->btnAbrirArchivo->TabIndex = 0;
			this->btnAbrirArchivo->UseVisualStyleBackColor = true;
			this->btnAbrirArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnAbrirArchivo_Click);
			// 
			// btnGuardarArchivo
			// 
			this->btnGuardarArchivo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGuardarArchivo.BackgroundImage")));
			this->btnGuardarArchivo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnGuardarArchivo->FlatAppearance->BorderSize = 0;
			this->btnGuardarArchivo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGuardarArchivo->Location = System::Drawing::Point(408, 544);
			this->btnGuardarArchivo->Name = L"btnGuardarArchivo";
			this->btnGuardarArchivo->Size = System::Drawing::Size(165, 158);
			this->btnGuardarArchivo->TabIndex = 1;
			this->btnGuardarArchivo->UseVisualStyleBackColor = true;
			this->btnGuardarArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnGuardarArchivo_Click);
			// 
			// ofd1
			// 
			this->ofd1->Filter = L"Archivo de texto(*.txt)|*.txt|Archivo delimitado por comas(*.csv)|*.csv";
			this->ofd1->Title = L"Abrir Archivo";
			this->ofd1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::ofd1_FileOk);
			// 
			// sfd1
			// 
			this->sfd1->Filter = L"Archivo de texto(*.txt)|*.txt|Archivo delimitado por comas(*.csv)|*.csv";
			this->sfd1->Title = L"Guardar Archivo";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(787, 526);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->rtxtDataArchivo);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(779, 497);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(779, 497);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// rtxtDataArchivo
			// 
			this->rtxtDataArchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtxtDataArchivo->Location = System::Drawing::Point(30, 15);
			this->rtxtDataArchivo->Name = L"rtxtDataArchivo";
			this->rtxtDataArchivo->Size = System::Drawing::Size(727, 447);
			this->rtxtDataArchivo->TabIndex = 4;
			this->rtxtDataArchivo->Text = L"";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 23);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(742, 436);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ndex";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(811, 714);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->btnGuardarArchivo);
			this->Controls->Add(this->btnAbrirArchivo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		


private: System::Void btnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	ofd1->ShowDialog();
}
private: System::Void ofd1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	String^ FilePath = ofd1->FileName;
	StreamReader^ sr = gcnew StreamReader(FilePath);
	if (FilePath->Contains(".csv")) {
		String^ Pokemon = "";
		String^ Linea = "";
		int Contador = 0;
		while ((Linea = sr->ReadLine()) != nullptr) {
			if (Linea[Linea->Length - 1] == ',') {
				Linea = Linea->Remove(Linea->Length - 2, 1);
			}
			array<String^>^ Datapokemon = Linea->Split(',');

			dataGridView1->Rows->Add(1);
			dataGridView1->Rows[Contador]->Cells[0]->Value = Datapokemon[0];
			dataGridView1->Rows[Contador]->Cells[1]->Value = Datapokemon[1];
			dataGridView1->Rows[Contador]->Cells[2]->Value = Datapokemon[2];
			Contador++;
		}
		tabControl1->SelectTab(tabPage2);

	}
	else {
		String^ Linea = "";
		Linea = sr->ReadLine();
		rtxtDataArchivo->Text = Linea;
	}
	sr->Close();

}
private: System::Void btnGuardarArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sfd1->ShowDialog() == Windows::Forms::DialogResult::OK|| sfd1->ShowDialog() == Windows::Forms::DialogResult::Yes) {
		StreamWriter^ sw = gcnew StreamWriter(File::Create(sfd1->FileName));
		sw->Write(rtxtDataArchivo->Text);
		sw->Close();
	}
}
};
}
