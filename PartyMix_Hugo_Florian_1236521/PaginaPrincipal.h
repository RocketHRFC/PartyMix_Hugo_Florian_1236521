#pragma once
#include "Lista.h"
#include "Pila.h"
#include "Cola.h"
#include "Cancion.h"
#include "NameComparator.h"
#include "AleatorioComparator.h"
#include "TituloComparator.h"
#include <string>
#include <iostream>
#include<fstream>
#include<stdlib.h>

namespace PartyMixHugoFlorian1236521 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PaginaPrincipal : public Form
	{
		Lista<Cancion>* Playlist_Canciones = new Lista<Cancion>();
		Cola<Cancion>* Cola_Reproduccion = new Cola<Cancion>();
		Cola<Cancion>* Cola_Reproduccion_recurso = new Cola<Cancion>();
	private: System::Windows::Forms::Button^  BTN_EXPORTAR;


	private: System::Windows::Forms::TextBox^  TXT_DIRPLAY;

	private: System::Windows::Forms::Button^  BTN_AGRPLAY;
	private: System::Windows::Forms::Button^  BTN_REP;

			 Pila<Cancion>* Canciones_Anteriores = new Pila<Cancion>();
		
		

	public:
		PaginaPrincipal()
		{
			InitializeComponent();

			
			
		}

	protected:

		~PaginaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  DataGrid_Playlist;
	protected:


		private: System::Windows::Forms::GroupBox^  groupBox1;
		private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  DataGrid_Cola;






		private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  BTN_INCIARCOLA;
	private: System::Windows::Forms::Button^  BTN_SORTTIT;


	private: System::Windows::Forms::Button^  BTN_SORTART;
	private: System::Windows::Forms::Button^  BTN_SORTALE;


	private: System::Windows::Forms::Label^  LBL_ART;
	private: System::Windows::Forms::Button^  BTN_SIG;


	private: System::Windows::Forms::Button^  BTN_ANT;
	private: System::Windows::Forms::Label^  LBL_TITULO;


		private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  BTN_DELINTILE;


	private: System::Windows::Forms::Button^  BTN_ADDTOTAIL;

		private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Titulo_Cancion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Artista_Cancion;
	private: System::Windows::Forms::Button^  BTN_ADDTOPLAY;
	private: System::Windows::Forms::TextBox^  TXT_CANCION;


	private: System::Windows::Forms::Button^  BTN_DELTOPLAY;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::TextBox^  TXT_CANCIONACOLA;







		private: System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DataGrid_Playlist = (gcnew System::Windows::Forms::DataGridView());
			this->Titulo_Cancion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Artista_Cancion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->BTN_EXPORTAR = (gcnew System::Windows::Forms::Button());
			this->BTN_INCIARCOLA = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataGrid_Cola = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BTN_REP = (gcnew System::Windows::Forms::Button());
			this->BTN_SORTTIT = (gcnew System::Windows::Forms::Button());
			this->BTN_SORTART = (gcnew System::Windows::Forms::Button());
			this->BTN_SORTALE = (gcnew System::Windows::Forms::Button());
			this->LBL_ART = (gcnew System::Windows::Forms::Label());
			this->BTN_SIG = (gcnew System::Windows::Forms::Button());
			this->BTN_ANT = (gcnew System::Windows::Forms::Button());
			this->LBL_TITULO = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->TXT_CANCIONACOLA = (gcnew System::Windows::Forms::TextBox());
			this->BTN_DELINTILE = (gcnew System::Windows::Forms::Button());
			this->BTN_ADDTOTAIL = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BTN_ADDTOPLAY = (gcnew System::Windows::Forms::Button());
			this->TXT_CANCION = (gcnew System::Windows::Forms::TextBox());
			this->BTN_DELTOPLAY = (gcnew System::Windows::Forms::Button());
			this->TXT_DIRPLAY = (gcnew System::Windows::Forms::TextBox());
			this->BTN_AGRPLAY = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Playlist))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Cola))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(261, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(456, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ZOUND";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGrid_Playlist
			// 
			this->DataGrid_Playlist->AllowUserToAddRows = false;
			this->DataGrid_Playlist->AllowUserToDeleteRows = false;
			this->DataGrid_Playlist->BackgroundColor = System::Drawing::Color::MediumPurple;
			this->DataGrid_Playlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid_Playlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Titulo_Cancion,
					this->Artista_Cancion
			});
			this->DataGrid_Playlist->Location = System::Drawing::Point(6, 60);
			this->DataGrid_Playlist->Name = L"DataGrid_Playlist";
			this->DataGrid_Playlist->ReadOnly = true;
			this->DataGrid_Playlist->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->DataGrid_Playlist->RowHeadersVisible = false;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DataGrid_Playlist->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->DataGrid_Playlist->RowTemplate->Height = 24;
			this->DataGrid_Playlist->Size = System::Drawing::Size(223, 306);
			this->DataGrid_Playlist->TabIndex = 1;
			// 
			// Titulo_Cancion
			// 
			this->Titulo_Cancion->HeaderText = L"Titulo";
			this->Titulo_Cancion->Name = L"Titulo_Cancion";
			this->Titulo_Cancion->ReadOnly = true;
			this->Titulo_Cancion->Width = 150;
			// 
			// Artista_Cancion
			// 
			this->Artista_Cancion->HeaderText = L"Artista";
			this->Artista_Cancion->Name = L"Artista_Cancion";
			this->Artista_Cancion->ReadOnly = true;
			this->Artista_Cancion->Width = 150;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BTN_EXPORTAR);
			this->groupBox1->Controls->Add(this->BTN_INCIARCOLA);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->DataGrid_Playlist);
			this->groupBox1->Location = System::Drawing::Point(12, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 372);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// BTN_EXPORTAR
			// 
			this->BTN_EXPORTAR->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_EXPORTAR->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_EXPORTAR->Location = System::Drawing::Point(106, 19);
			this->BTN_EXPORTAR->Name = L"BTN_EXPORTAR";
			this->BTN_EXPORTAR->Size = System::Drawing::Size(54, 33);
			this->BTN_EXPORTAR->TabIndex = 13;
			this->BTN_EXPORTAR->Text = L"EXP";
			this->BTN_EXPORTAR->UseVisualStyleBackColor = false;
			this->BTN_EXPORTAR->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button11_Click_1);
			// 
			// BTN_INCIARCOLA
			// 
			this->BTN_INCIARCOLA->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_INCIARCOLA->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_INCIARCOLA->Location = System::Drawing::Point(166, 19);
			this->BTN_INCIARCOLA->Name = L"BTN_INCIARCOLA";
			this->BTN_INCIARCOLA->Size = System::Drawing::Size(54, 33);
			this->BTN_INCIARCOLA->TabIndex = 12;
			this->BTN_INCIARCOLA->Text = L"||>";
			this->BTN_INCIARCOLA->UseVisualStyleBackColor = false;
			this->BTN_INCIARCOLA->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button7_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::BlueViolet;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 41);
			this->label2->TabIndex = 4;
			this->label2->Text = L"    LISTA";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DataGrid_Cola
			// 
			this->DataGrid_Cola->AllowUserToAddRows = false;
			this->DataGrid_Cola->AllowUserToDeleteRows = false;
			this->DataGrid_Cola->BackgroundColor = System::Drawing::Color::Indigo;
			this->DataGrid_Cola->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrid_Cola->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->DataGrid_Cola->Location = System::Drawing::Point(6, 62);
			this->DataGrid_Cola->Name = L"DataGrid_Cola";
			this->DataGrid_Cola->ReadOnly = true;
			this->DataGrid_Cola->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->DataGrid_Cola->RowHeadersVisible = false;
			this->DataGrid_Cola->RowTemplate->Height = 24;
			this->DataGrid_Cola->Size = System::Drawing::Size(444, 168);
			this->DataGrid_Cola->TabIndex = 4;
			this->DataGrid_Cola->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PaginaPrincipal::dataGridView3_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Frozen = true;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Titulo";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 220;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->Frozen = true;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Artista";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 220;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->BTN_REP);
			this->groupBox2->Controls->Add(this->BTN_SORTTIT);
			this->groupBox2->Controls->Add(this->BTN_SORTART);
			this->groupBox2->Controls->Add(this->BTN_SORTALE);
			this->groupBox2->Controls->Add(this->LBL_ART);
			this->groupBox2->Controls->Add(this->BTN_SIG);
			this->groupBox2->Controls->Add(this->BTN_ANT);
			this->groupBox2->Controls->Add(this->LBL_TITULO);
			this->groupBox2->Location = System::Drawing::Point(262, 51);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(449, 155);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// BTN_REP
			// 
			this->BTN_REP->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_REP->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_REP->Location = System::Drawing::Point(176, 100);
			this->BTN_REP->Name = L"BTN_REP";
			this->BTN_REP->Size = System::Drawing::Size(54, 33);
			this->BTN_REP->TabIndex = 13;
			this->BTN_REP->Text = L"||>";
			this->BTN_REP->UseVisualStyleBackColor = false;
			this->BTN_REP->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button2_Click_1);
			// 
			// BTN_SORTTIT
			// 
			this->BTN_SORTTIT->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_SORTTIT->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_SORTTIT->Location = System::Drawing::Point(401, 57);
			this->BTN_SORTTIT->Name = L"BTN_SORTTIT";
			this->BTN_SORTTIT->Size = System::Drawing::Size(41, 39);
			this->BTN_SORTTIT->TabIndex = 11;
			this->BTN_SORTTIT->Text = L"TIT";
			this->BTN_SORTTIT->UseVisualStyleBackColor = false;
			this->BTN_SORTTIT->Click += gcnew System::EventHandler(this, &PaginaPrincipal::BTN_SORTTIT_Click);
			// 
			// BTN_SORTART
			// 
			this->BTN_SORTART->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_SORTART->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_SORTART->Location = System::Drawing::Point(402, 11);
			this->BTN_SORTART->Name = L"BTN_SORTART";
			this->BTN_SORTART->Size = System::Drawing::Size(41, 39);
			this->BTN_SORTART->TabIndex = 10;
			this->BTN_SORTART->Text = L"ART";
			this->BTN_SORTART->UseVisualStyleBackColor = false;
			this->BTN_SORTART->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button5_Click);
			// 
			// BTN_SORTALE
			// 
			this->BTN_SORTALE->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_SORTALE->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_SORTALE->Location = System::Drawing::Point(401, 104);
			this->BTN_SORTALE->Name = L"BTN_SORTALE";
			this->BTN_SORTALE->Size = System::Drawing::Size(41, 39);
			this->BTN_SORTALE->TabIndex = 9;
			this->BTN_SORTALE->Text = L"ALT";
			this->BTN_SORTALE->UseVisualStyleBackColor = false;
			this->BTN_SORTALE->Click += gcnew System::EventHandler(this, &PaginaPrincipal::BTN_SORTALE_Click);
			// 
			// LBL_ART
			// 
			this->LBL_ART->BackColor = System::Drawing::Color::Black;
			this->LBL_ART->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL_ART->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->LBL_ART->Location = System::Drawing::Point(13, 56);
			this->LBL_ART->Name = L"LBL_ART";
			this->LBL_ART->Size = System::Drawing::Size(383, 24);
			this->LBL_ART->TabIndex = 8;
			this->LBL_ART->Text = L"ARTISTA";
			this->LBL_ART->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BTN_SIG
			// 
			this->BTN_SIG->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_SIG->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_SIG->Location = System::Drawing::Point(253, 97);
			this->BTN_SIG->Name = L"BTN_SIG";
			this->BTN_SIG->Size = System::Drawing::Size(54, 39);
			this->BTN_SIG->TabIndex = 7;
			this->BTN_SIG->Text = L"SIG";
			this->BTN_SIG->UseVisualStyleBackColor = false;
			this->BTN_SIG->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button3_Click);
			// 
			// BTN_ANT
			// 
			this->BTN_ANT->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_ANT->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ANT->Location = System::Drawing::Point(106, 97);
			this->BTN_ANT->Name = L"BTN_ANT";
			this->BTN_ANT->Size = System::Drawing::Size(45, 39);
			this->BTN_ANT->TabIndex = 6;
			this->BTN_ANT->Text = L"ANT";
			this->BTN_ANT->UseVisualStyleBackColor = false;
			this->BTN_ANT->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button2_Click);
			// 
			// LBL_TITULO
			// 
			this->LBL_TITULO->BackColor = System::Drawing::Color::Black;
			this->LBL_TITULO->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL_TITULO->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->LBL_TITULO->Location = System::Drawing::Point(13, 18);
			this->LBL_TITULO->Name = L"LBL_TITULO";
			this->LBL_TITULO->Size = System::Drawing::Size(383, 27);
			this->LBL_TITULO->TabIndex = 5;
			this->LBL_TITULO->Text = L"TITULO";
			this->LBL_TITULO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->TXT_CANCIONACOLA);
			this->groupBox3->Controls->Add(this->BTN_DELINTILE);
			this->groupBox3->Controls->Add(this->BTN_ADDTOTAIL);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->DataGrid_Cola);
			this->groupBox3->Location = System::Drawing::Point(261, 221);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(456, 236);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			// 
			// TXT_CANCIONACOLA
			// 
			this->TXT_CANCIONACOLA->Location = System::Drawing::Point(89, 26);
			this->TXT_CANCIONACOLA->Name = L"TXT_CANCIONACOLA";
			this->TXT_CANCIONACOLA->Size = System::Drawing::Size(203, 22);
			this->TXT_CANCIONACOLA->TabIndex = 10;
			// 
			// BTN_DELINTILE
			// 
			this->BTN_DELINTILE->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_DELINTILE->Font = (gcnew System::Drawing::Font(L"Agency FB", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_DELINTILE->Location = System::Drawing::Point(374, 22);
			this->BTN_DELINTILE->Name = L"BTN_DELINTILE";
			this->BTN_DELINTILE->Size = System::Drawing::Size(70, 28);
			this->BTN_DELINTILE->TabIndex = 6;
			this->BTN_DELINTILE->Text = L"ELM";
			this->BTN_DELINTILE->UseVisualStyleBackColor = false;
			this->BTN_DELINTILE->Click += gcnew System::EventHandler(this, &PaginaPrincipal::BTN_DELINTILE_Click);
			// 
			// BTN_ADDTOTAIL
			// 
			this->BTN_ADDTOTAIL->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_ADDTOTAIL->Font = (gcnew System::Drawing::Font(L"Agency FB", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ADDTOTAIL->Location = System::Drawing::Point(298, 22);
			this->BTN_ADDTOTAIL->Name = L"BTN_ADDTOTAIL";
			this->BTN_ADDTOTAIL->Size = System::Drawing::Size(70, 28);
			this->BTN_ADDTOTAIL->TabIndex = 5;
			this->BTN_ADDTOTAIL->Text = L"AGR";
			this->BTN_ADDTOTAIL->UseVisualStyleBackColor = false;
			this->BTN_ADDTOTAIL->Click += gcnew System::EventHandler(this, &PaginaPrincipal::BTN_ADDTOTAIL_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::BlueViolet;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label5->Location = System::Drawing::Point(6, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(444, 41);
			this->label5->TabIndex = 5;
			this->label5->Text = L"     COLA";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// BTN_ADDTOPLAY
			// 
			this->BTN_ADDTOPLAY->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_ADDTOPLAY->Font = (gcnew System::Drawing::Font(L"Agency FB", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_ADDTOPLAY->Location = System::Drawing::Point(178, 429);
			this->BTN_ADDTOPLAY->Name = L"BTN_ADDTOPLAY";
			this->BTN_ADDTOPLAY->Size = System::Drawing::Size(70, 28);
			this->BTN_ADDTOPLAY->TabIndex = 8;
			this->BTN_ADDTOPLAY->Text = L"AGR";
			this->BTN_ADDTOPLAY->UseVisualStyleBackColor = false;
			this->BTN_ADDTOPLAY->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button1_Click_1);
			// 
			// TXT_CANCION
			// 
			this->TXT_CANCION->Location = System::Drawing::Point(12, 433);
			this->TXT_CANCION->Name = L"TXT_CANCION";
			this->TXT_CANCION->Size = System::Drawing::Size(84, 22);
			this->TXT_CANCION->TabIndex = 9;
			// 
			// BTN_DELTOPLAY
			// 
			this->BTN_DELTOPLAY->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_DELTOPLAY->Font = (gcnew System::Drawing::Font(L"Agency FB", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_DELTOPLAY->Location = System::Drawing::Point(102, 429);
			this->BTN_DELTOPLAY->Name = L"BTN_DELTOPLAY";
			this->BTN_DELTOPLAY->Size = System::Drawing::Size(70, 28);
			this->BTN_DELTOPLAY->TabIndex = 7;
			this->BTN_DELTOPLAY->Text = L"ELM";
			this->BTN_DELTOPLAY->UseVisualStyleBackColor = false;
			this->BTN_DELTOPLAY->Click += gcnew System::EventHandler(this, &PaginaPrincipal::button10_Click);
			// 
			// TXT_DIRPLAY
			// 
			this->TXT_DIRPLAY->Location = System::Drawing::Point(12, 19);
			this->TXT_DIRPLAY->Name = L"TXT_DIRPLAY";
			this->TXT_DIRPLAY->Size = System::Drawing::Size(154, 22);
			this->TXT_DIRPLAY->TabIndex = 10;
			// 
			// BTN_AGRPLAY
			// 
			this->BTN_AGRPLAY->BackColor = System::Drawing::Color::GhostWhite;
			this->BTN_AGRPLAY->Font = (gcnew System::Drawing::Font(L"Agency FB", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_AGRPLAY->Location = System::Drawing::Point(194, 12);
			this->BTN_AGRPLAY->Name = L"BTN_AGRPLAY";
			this->BTN_AGRPLAY->Size = System::Drawing::Size(54, 33);
			this->BTN_AGRPLAY->TabIndex = 14;
			this->BTN_AGRPLAY->Text = L"AGR";
			this->BTN_AGRPLAY->UseVisualStyleBackColor = false;
			this->BTN_AGRPLAY->Click += gcnew System::EventHandler(this, &PaginaPrincipal::BTN_AGRPLAY_Click);
			// 
			// PaginaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(729, 469);
			this->Controls->Add(this->BTN_AGRPLAY);
			this->Controls->Add(this->TXT_DIRPLAY);
			this->Controls->Add(this->BTN_DELTOPLAY);
			this->Controls->Add(this->TXT_CANCION);
			this->Controls->Add(this->BTN_ADDTOPLAY);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"PaginaPrincipal";
			this->Text = L"PaginaPrincipal";
			this->Load += gcnew System::EventHandler(this, &PaginaPrincipal::PaginaPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Playlist))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Cola))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		Void PaginaPrincipal_Load(Object^  sender, EventArgs^  e) {

			

			


		}

		Void button1_Click(Object^  sender, EventArgs^  e) {

		

		}
		Void dataGridView3_CellContentClick(Object^  sender, DataGridViewCellEventArgs^  e) {
		}
		Void openFileDialog1_FileOk(Object^  sender, CancelEventArgs^  e) {
		}

		Void Mostar_Cola(Cola<Cancion>* Cola_Mostrar)
		{
			DataGrid_Cola->Rows->Clear();

			for (int i = 0; i < Cola_Mostrar->Tamano(); i++)
			{
				Cancion* cancion = Cola_Mostrar->DesEncolar();

				String^ name = gcnew String(cancion->getTitutlo().c_str());

				String^ artist = gcnew String(cancion->getArtista().c_str());

				DataGrid_Cola->Rows->Add(name, artist);

				Cola_Mostrar->EnColar(cancion);
				
			}

		}


		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		Void ExportarPlaylist(String^ filePath)
		{
			std::ofstream playlist;
			string direccion;

			MarshalString(filePath, direccion);

			playlist.open(direccion);

			for (int i = 0; i < Playlist_Canciones->getSize(); i++)
			{
					playlist << Playlist_Canciones->get(i)->getTitutlo() << "-" << Playlist_Canciones->get(i)->getArtista()<<std::endl;
			}

			playlist.close();
		}

		Void Create_playlist()
		{
			this->DataGrid_Playlist->Rows->Clear();
			for (int i = 0; i < Playlist_Canciones->getSize(); i++)
			{
				Cancion* cancion = Playlist_Canciones->get(i);

				String^ name = gcnew String(cancion->getTitutlo().c_str());

				String^ artist = gcnew String(cancion->getArtista().c_str());
				
				this->DataGrid_Playlist->Rows->Add(name, artist);

			}

		}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {



	}

	

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	this->DataGrid_Cola->Rows->Clear();

	for (int i = 0; i < Playlist_Canciones->getSize(); i++)
	{
		Cancion* cancion = Playlist_Canciones->get(i);

		String^ name = gcnew String(cancion->getTitutlo().c_str());

		String^ artist = gcnew String(cancion->getArtista().c_str());

		Cola_Reproduccion = Cola_Reproduccion->ColaCanciones(Playlist_Canciones);

		this->DataGrid_Cola->Rows->Add(name, artist);
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	Cola_Reproduccion_recurso->Limpiar();
	
	Cancion* cancion = Canciones_Anteriores->Pop();

	Cola_Reproduccion_recurso->EnColar(cancion);

	int size_Cola_Reproduccion = Cola_Reproduccion->Tamano();


	for (int i = 0; i < size_Cola_Reproduccion; i++)
	{
		cancion = Cola_Reproduccion->DesEncolar();

		Cola_Reproduccion_recurso->EnColar(cancion);
	}

	size_Cola_Reproduccion = Cola_Reproduccion_recurso->Tamano();

	for (int i = 0; i < size_Cola_Reproduccion; i++)
	{
		cancion = Cola_Reproduccion_recurso->DesEncolar();

		Cola_Reproduccion->EnColar(cancion);
	}

	Mostar_Cola(Cola_Reproduccion);

	cancion = Canciones_Anteriores->Pop();

	String^ name = gcnew String(cancion->getTitutlo().c_str());

	String^ artist = gcnew String(cancion->getArtista().c_str());

	LBL_ART->Text = artist;
	LBL_TITULO->Text = name;

	Canciones_Anteriores->Push(cancion);


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	Cancion* cancion = Cola_Reproduccion->DesEncolar();

	String^ name = gcnew String(cancion->getTitutlo().c_str());

	String^ artist = gcnew String(cancion->getArtista().c_str());

	LBL_ART->Text = artist;
	LBL_TITULO->Text = name;

	Canciones_Anteriores->Push(cancion);

	Mostar_Cola(Cola_Reproduccion);


}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	Cancion* cancion = Cola_Reproduccion->DesEncolar();

	String^ name = gcnew String(cancion->getTitutlo().c_str());

	String^ artist = gcnew String(cancion->getArtista().c_str());

	LBL_ART->Text = artist;
	LBL_TITULO->Text = name;

	Canciones_Anteriores->Push(cancion);

	Mostar_Cola(Cola_Reproduccion);

	BTN_REP->Enabled = false;

}
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {

	

	ExportarPlaylist(TXT_DIRPLAY->Text);
}
private: System::Void BTN_AGRPLAY_Click(System::Object^  sender, System::EventArgs^  e) {

	Playlist_Canciones = Playlist_Canciones->LeerCanciones(TXT_DIRPLAY->Text);
	Create_playlist();

}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	
	array<String^> ^Cancion_add = TXT_CANCION->Text->Split('-');

	string name, artist;

	MarshalString(Cancion_add[0], name);
	MarshalString(Cancion_add[1], artist);
	
	Playlist_Canciones->remove(name, artist);

	Create_playlist();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	array<String^> ^Cancion_add = TXT_CANCION->Text->Split('-');

	string name, artist;

	if (Cancion_add->Length == 1)
	{
		MarshalString(Cancion_add[0], name);
		artist = "Desconocido";
	}
	else {
		MarshalString(Cancion_add[0], name);
		MarshalString(Cancion_add[1], artist);
	}

	Cancion* cancion = new Cancion(name, artist);

	Playlist_Canciones->add(cancion);

	Create_playlist();
}
private: System::Void BTN_ADDTOTAIL_Click(System::Object^  sender, System::EventArgs^  e) {

	array<String^> ^Cancion_add = TXT_CANCIONACOLA->Text->Split('-');

	string name, artist;

	if (Cancion_add->Length == 1)
	{
		MarshalString(Cancion_add[0], name);
		artist = "Desconocido";
	}
	else {
		MarshalString(Cancion_add[0], name);
		MarshalString(Cancion_add[1], artist);
	}

	Cancion* cancion = new Cancion(name, artist);
	Cola_Reproduccion->EnColar(cancion);

	Mostar_Cola(Cola_Reproduccion);
}
private: System::Void BTN_DELINTILE_Click(System::Object^  sender, System::EventArgs^  e) {

	Cola_Reproduccion_recurso->Limpiar();

	array<String^> ^Cancion_add = TXT_CANCIONACOLA->Text->Split('-');

	string name, artist;

	if (Cancion_add->Length == 1)
	{
		MarshalString(Cancion_add[0], name);
		artist = "Desconocido";
	}
	else {
		MarshalString(Cancion_add[0], name);
		MarshalString(Cancion_add[1], artist);
	}

	int size = Cola_Reproduccion->Tamano();


	for (int i = 0; i < size; i++) {

		Cancion* cancion_cola = Cola_Reproduccion->DesEncolar();

		if ((cancion_cola->getArtista() != artist) && (cancion_cola->getTitutlo() != name)) {

			Cola_Reproduccion->EnColar(cancion_cola);

		}

	}

	Mostar_Cola(Cola_Reproduccion);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	Playlist_Canciones = Playlist_Canciones->bubbleSort(new NameComparator());

	Create_playlist();
}
private: System::Void BTN_SORTTIT_Click(System::Object^  sender, System::EventArgs^  e) {

	Playlist_Canciones = Playlist_Canciones->bubbleSort(new TituloComparator());

	Create_playlist();

}
private: System::Void BTN_SORTALE_Click(System::Object^  sender, System::EventArgs^  e) {
	


	Playlist_Canciones = Playlist_Canciones->Al_Sort();

	Create_playlist();
}
};


} 
