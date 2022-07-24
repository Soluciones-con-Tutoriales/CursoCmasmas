#pragma once
#include "Animal.h"
namespace My8Ahorcado {
#pragma region Imports

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace Newtonsoft::Json;
	using namespace Microsoft::VisualBasic;
#pragma endregion
	/// <summary>
	/// Summary for Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	#pragma region Forms
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ TimerPartida;
	protected:

	protected:














	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tpJuego;
	private: System::Windows::Forms::Button^ btnReload;
	private: System::Windows::Forms::ListBox^ lbLetrasUsadas;
	private: System::Windows::Forms::PictureBox^ pbImagen;

	private: System::Windows::Forms::GroupBox^ gbTextbox;
	private: System::Windows::Forms::NumericUpDown^ nudIntentos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblTimer;
	private: System::Windows::Forms::TextBox^ txtLetra;

	private: System::Windows::Forms::Label^ lblAnimal;
	private: System::Windows::Forms::TabPage^ tpRecords;
	private: System::Windows::Forms::DataGridView^ dgvJuagadores;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->TimerPartida = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tpJuego = (gcnew System::Windows::Forms::TabPage());
			this->btnReload = (gcnew System::Windows::Forms::Button());
			this->lbLetrasUsadas = (gcnew System::Windows::Forms::ListBox());
			this->pbImagen = (gcnew System::Windows::Forms::PictureBox());
			this->gbTextbox = (gcnew System::Windows::Forms::GroupBox());
			this->nudIntentos = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->txtLetra = (gcnew System::Windows::Forms::TextBox());
			this->lblAnimal = (gcnew System::Windows::Forms::Label());
			this->tpRecords = (gcnew System::Windows::Forms::TabPage());
			this->dgvJuagadores = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tpJuego->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudIntentos))->BeginInit();
			this->tpRecords->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvJuagadores))->BeginInit();
			this->SuspendLayout();
			// 
			// TimerPartida
			// 
			this->TimerPartida->Interval = 1000;
			this->TimerPartida->Tick += gcnew System::EventHandler(this, &Inicio::TimerPartida_Tick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tpJuego);
			this->tabControl1->Controls->Add(this->tpRecords);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1554, 568);
			this->tabControl1->TabIndex = 0;
			// 
			// tpJuego
			// 
			this->tpJuego->Controls->Add(this->btnReload);
			this->tpJuego->Controls->Add(this->lbLetrasUsadas);
			this->tpJuego->Controls->Add(this->pbImagen);
			this->tpJuego->Controls->Add(this->gbTextbox);
			this->tpJuego->Controls->Add(this->nudIntentos);
			this->tpJuego->Controls->Add(this->label1);
			this->tpJuego->Controls->Add(this->lblTimer);
			this->tpJuego->Controls->Add(this->txtLetra);
			this->tpJuego->Controls->Add(this->lblAnimal);
			this->tpJuego->Location = System::Drawing::Point(4, 25);
			this->tpJuego->Name = L"tpJuego";
			this->tpJuego->Padding = System::Windows::Forms::Padding(3);
			this->tpJuego->Size = System::Drawing::Size(1546, 539);
			this->tpJuego->TabIndex = 0;
			this->tpJuego->Text = L"Juego";
			this->tpJuego->UseVisualStyleBackColor = true;
			// 
			// btnReload
			// 
			this->btnReload->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReload.BackgroundImage")));
			this->btnReload->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnReload->FlatAppearance->BorderSize = 0;
			this->btnReload->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReload->Location = System::Drawing::Point(671, 326);
			this->btnReload->Name = L"btnReload";
			this->btnReload->Size = System::Drawing::Size(199, 194);
			this->btnReload->TabIndex = 8;
			this->btnReload->UseVisualStyleBackColor = true;
			this->btnReload->Click += gcnew System::EventHandler(this, &Inicio::btnReload_Click);
			// 
			// lbLetrasUsadas
			// 
			this->lbLetrasUsadas->FormattingEnabled = true;
			this->lbLetrasUsadas->ItemHeight = 16;
			this->lbLetrasUsadas->Location = System::Drawing::Point(9, 308);
			this->lbLetrasUsadas->Name = L"lbLetrasUsadas";
			this->lbLetrasUsadas->Size = System::Drawing::Size(198, 212);
			this->lbLetrasUsadas->TabIndex = 7;
			// 
			// pbImagen
			// 
			this->pbImagen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbImagen.Image")));
			this->pbImagen->Location = System::Drawing::Point(895, 3);
			this->pbImagen->Name = L"pbImagen";
			this->pbImagen->Size = System::Drawing::Size(648, 540);
			this->pbImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImagen->TabIndex = 6;
			this->pbImagen->TabStop = false;
			// 
			// gbTextbox
			// 
			this->gbTextbox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gbTextbox->Location = System::Drawing::Point(9, 133);
			this->gbTextbox->Name = L"gbTextbox";
			this->gbTextbox->Size = System::Drawing::Size(861, 159);
			this->gbTextbox->TabIndex = 5;
			this->gbTextbox->TabStop = false;
			this->gbTextbox->Text = L"Animal a encontrar";
			// 
			// nudIntentos
			// 
			this->nudIntentos->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->nudIntentos->Location = System::Drawing::Point(714, 80);
			this->nudIntentos->Name = L"nudIntentos";
			this->nudIntentos->ReadOnly = true;
			this->nudIntentos->Size = System::Drawing::Size(77, 22);
			this->nudIntentos->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(641, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"#Intentos";
			// 
			// lblTimer
			// 
			this->lblTimer->AutoSize = true;
			this->lblTimer->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTimer->Location = System::Drawing::Point(392, 11);
			this->lblTimer->Name = L"lblTimer";
			this->lblTimer->Size = System::Drawing::Size(420, 56);
			this->lblTimer->TabIndex = 2;
			this->lblTimer->Text = L"Tiempo: 00:00:00";
			// 
			// txtLetra
			// 
			this->txtLetra->Location = System::Drawing::Point(24, 26);
			this->txtLetra->Name = L"txtLetra";
			this->txtLetra->Size = System::Drawing::Size(44, 22);
			this->txtLetra->TabIndex = 1;
			this->txtLetra->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Inicio::txtLetra_KeyDown);
			// 
			// lblAnimal
			// 
			this->lblAnimal->AutoSize = true;
			this->lblAnimal->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnimal->Location = System::Drawing::Point(136, 13);
			this->lblAnimal->Name = L"lblAnimal";
			this->lblAnimal->Size = System::Drawing::Size(237, 56);
			this->lblAnimal->TabIndex = 0;
			this->lblAnimal->Text = L"lblAnimal";
			// 
			// tpRecords
			// 
			this->tpRecords->Controls->Add(this->dgvJuagadores);
			this->tpRecords->Location = System::Drawing::Point(4, 25);
			this->tpRecords->Name = L"tpRecords";
			this->tpRecords->Padding = System::Windows::Forms::Padding(3);
			this->tpRecords->Size = System::Drawing::Size(1546, 539);
			this->tpRecords->TabIndex = 1;
			this->tpRecords->Text = L"Ganadores";
			this->tpRecords->UseVisualStyleBackColor = true;
			// 
			// dgvJuagadores
			// 
			this->dgvJuagadores->AllowUserToAddRows = false;
			this->dgvJuagadores->AllowUserToDeleteRows = false;
			this->dgvJuagadores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvJuagadores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dgvJuagadores->Location = System::Drawing::Point(8, 30);
			this->dgvJuagadores->Name = L"dgvJuagadores";
			this->dgvJuagadores->ReadOnly = true;
			this->dgvJuagadores->RowHeadersWidth = 51;
			this->dgvJuagadores->RowTemplate->Height = 24;
			this->dgvJuagadores->Size = System::Drawing::Size(770, 501);
			this->dgvJuagadores->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre Completo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tiempo";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1554, 568);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->tabControl1->ResumeLayout(false);
			this->tpJuego->ResumeLayout(false);
			this->tpJuego->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudIntentos))->EndInit();
			this->tpRecords->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvJuagadores))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma endregion

	#pragma region Variables globales
			int horas;
			int minutos;
			int segundos;
			String^ animal;
			int intentos;
	#pragma endregion
	public: String^ GetAnimal() {
		try
		{
			bool Bandera = true;
			Animal^ objAnimal;
			while (Bandera) {
				String^ Text_Response;
				HttpWebRequest^ request = (HttpWebRequest^)WebRequest::Create("https://palabras-aleatorias-public-api.herokuapp.com/animal/random");
				HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();
				Stream^ stream = response->GetResponseStream();
				StreamReader^ reader = gcnew StreamReader(stream);
				Text_Response = reader->ReadToEnd();
				Text_Response = Text_Response->Remove(1, 711);
				Text_Response = Text_Response->Remove(Text_Response->Length - 3 ,2);
				objAnimal = JsonConvert::DeserializeObject<Animal^>(Text_Response);
				array<unsigned char>^ tempBytes;
				tempBytes = System::Text::Encoding::GetEncoding("ISO-8859-8")->GetBytes(objAnimal->name->ToLower());
				objAnimal->name = System::Text::Encoding::UTF8->GetString(tempBytes);
				if (objAnimal->name->Length <= 7) {
					Bandera = false;
				}
				
			}
			return objAnimal->name;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("La api no funciona");
			MessageBox::Show("Error: " + ex->Message);
			Application::Exit();
		}
		
	}
	public: void IniciarPartida() {
		try
		{
			MessageBox::Show("Listo para iniciar", "Soluciones con tutoriales | Suscibete", MessageBoxButtons::OK, MessageBoxIcon::Question);
			pbImagen->Image = Image::FromFile(Path::Combine(Application::StartupPath, "Imagenes", "Fondo.jpeg"));
			txtLetra->Enabled = true;
			horas = 0;
			minutos = 0;
			segundos = 0;
			TimerPartida->Enabled = true;
			intentos = 0;
			lblAnimal->Visible = false;
			animal = GetAnimal();
			lbLetrasUsadas->Items->Clear();
			nudIntentos->Value = 0;
			lblAnimal->Text = animal;
			gbTextbox->Controls->Clear();
			for (int i = 0; i < animal->Length; i++)
			{
				TextBox^ txt = gcnew TextBox();
				txt->Name = "txt_letra" + Convert::ToString(i);
				txt->Location = Point(40 * (i + 1), 50);
				txt->Visible = true;
				txt->Enabled = false;
				txt->ReadOnly = true;
				txt->BackColor = Color::White;
				txt->Height = 20;
				txt->Width = 34;
				txt->Margin.All = 3;
				txt->Show();
				txt->BringToFront();
				gbTextbox->Controls->Add(txt);
			}
			gbTextbox->Refresh();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	public: void Confirmacion() {
		lblAnimal->Visible = true;
		if (MessageBox::Show("Desea jugar otra partida?", "Ahorcado", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			IniciarPartida();
		}
	}
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
		IniciarPartida();
	}


private: System::Void txtLetra_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode==Keys::Enter) {
		if (txtLetra->Text->Length != 1) {
			MessageBox::Show("La letra ingresa es invalida ya que no cumple la caracteristica de solo un caracter", "Ahorcado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!lbLetrasUsadas->Items->Contains(txtLetra->Text)) {
				if (intentos < 6) {
					lbLetrasUsadas->Items->Add(txtLetra->Text);
					if (animal->Contains(txtLetra->Text)) {
						for (int i = 0; i < animal->Length; i++) {
							if (Convert::ToString(animal[i]) == txtLetra->Text) {
								String^ txt_name = "txt_letra" + (i).ToString();
								TextBox^ txt_letra_a_colocar = (TextBox^)gbTextbox->Controls->Find(txt_name, true)[0];
								txt_letra_a_colocar->Text = txtLetra->Text;

							}
						}
						String^ palabraFinal = "";
						for (int i = 0; i < animal->Length; i++) {
								String^ txt_name = "txt_letra" + (i).ToString();
								TextBox^ txt_letra_Colocada = (TextBox^)gbTextbox->Controls->Find(txt_name, true)[0];
								palabraFinal += txt_letra_Colocada->Text;
						}
						if (palabraFinal == animal) {
							TimerPartida->Enabled = false;
							MessageBox::Show("Gaanste");
							Confirmacion();
							//(x,y)
							Point^ Coordenada = gcnew Point(Convert::ToInt32(Width/2),Convert::ToInt32(Height/2));
							String^ Nombre = Interaction::InputBox("Ingrese su nombre", "Fin Partida", "", Coordenada->X, Coordenada->Y);
							dgvJuagadores->Rows->Add(1);
							dgvJuagadores->Rows[dgvJuagadores->RowCount - 1]->Cells[0]->Value = Nombre;
							dgvJuagadores->Rows[dgvJuagadores->RowCount - 1]->Cells[1]->Value = Convert::ToString(horas) + ":" + Convert::ToString(minutos) + ":" + Convert::ToString(segundos);
							txtLetra->Enabled = false;
						}
					}
					else {
						intentos++;
						nudIntentos->Value = Convert::ToInt32(intentos);
						pbImagen->Image = Image::FromFile(Path::Combine(Application::StartupPath,"Imagenes","H"+(intentos).ToString()+".png"));
						pbImagen->Refresh();
						if (intentos == 6) {
							TimerPartida->Enabled = false;
							MessageBox::Show("Perdiste, ya acumulaste 6 oportunidades");
							txtLetra->Enabled = false;
							Confirmacion();

						}
					}	
				
				}

			}
			else {
				MessageBox::Show("La letra ya fue usada");
			}
			txtLetra->Clear();
		
		}
	}
}
private: System::Void btnReload_Click(System::Object^ sender, System::EventArgs^ e) {
	IniciarPartida();
}
private: System::Void TimerPartida_Tick(System::Object^ sender, System::EventArgs^ e) {
	segundos++;
	if (segundos > 59) {
		minutos++;
		segundos = 0;
	}
	if (minutos > 59) {
		horas++;
		minutos = 0;
	}
	lblTimer->Text= "Tiempo: "+Convert::ToString(horas) + ":" + Convert::ToString(minutos) + ":" + Convert::ToString(segundos);
}
};
}
