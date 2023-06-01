#pragma once
#include "BinarioPaises.h"
#include "BinarioCiudades.h"
namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubMenuLugs
	/// </summary>
	public ref class SubMenuLugs : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public: BinarioPaises* arbolPaises;
	public: BinarioCiudades* arbolCiudades;

	public:
		SubMenuLugs(System::Windows::Forms::Form^ m, BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades)
		{
			menu = m;

			this->arbolPaises = arbolPaises;
			this->arbolCiudades = arbolCiudades;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubMenuLugs()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Button^ bPaises;
	private: System::Windows::Forms::Button^ bCiudades;
	private: System::Windows::Forms::Button^ bSalir;
	private: System::Windows::Forms::Label^ lblPaises;
	private: System::Windows::Forms::Label^ lblCiudades;
	private: System::Windows::Forms::Panel^ pPaises;
	private: System::Windows::Forms::Button^ bpElim;
	private: System::Windows::Forms::Button^ bpBusq;
	private: System::Windows::Forms::Button^ bpModif;
	private: System::Windows::Forms::Button^ bpInser;
	private: System::Windows::Forms::Panel^ pCiudades;
	private: System::Windows::Forms::Button^ bcElim;
	private: System::Windows::Forms::Button^ bcBusq;
	private: System::Windows::Forms::Button^ bcModif;
	private: System::Windows::Forms::Button^ bcInser;
	private: System::Windows::Forms::Panel^ ppInser;
	private: System::Windows::Forms::Label^ pInserLbl1;
	private: System::Windows::Forms::TextBox^ pInserTxtbx2;
	private: System::Windows::Forms::TextBox^ pInserTxtbx1;
	private: System::Windows::Forms::Label^ pInserLbl2;
	private: System::Windows::Forms::Label^ cModifLbl1;
	private: System::Windows::Forms::Panel^ ppBusq;
	private: System::Windows::Forms::Label^ pBusqLbl1;
	private: System::Windows::Forms::TextBox^ pBusqTxtbx1;
	private: System::Windows::Forms::Button^ bpBuscar;

	private: System::Windows::Forms::Panel^ pcBusq;
	private: System::Windows::Forms::Label^ cBusqLbl1;
	private: System::Windows::Forms::Label^ cBusqLbl2;
	private: System::Windows::Forms::Button^ bcBuscar;
	private: System::Windows::Forms::TextBox^ cBusqTxtbx2;
	private: System::Windows::Forms::TextBox^ cBusqTxtbx1;
	private: System::Windows::Forms::Panel^ ppModif;
	private: System::Windows::Forms::Button^ bpModificar;
	private: System::Windows::Forms::Label^ pModifLbl2;
	private: System::Windows::Forms::Label^ pModifLbl1;
	private: System::Windows::Forms::TextBox^ pModifTxtbx2;
	private: System::Windows::Forms::TextBox^ pModifTxtbx1;
	private: System::Windows::Forms::Panel^ pcInser;
	private: System::Windows::Forms::TextBox^ cInserTxtbx3;
	private: System::Windows::Forms::Label^ cInserLbl3;
	private: System::Windows::Forms::Label^ cInserLbl2;
	private: System::Windows::Forms::Label^ cInserLbl1;
	private: System::Windows::Forms::TextBox^ cInserTxtbx2;
	private: System::Windows::Forms::TextBox^ cInserTxtbx1;
	private: System::Windows::Forms::Button^ bcInsertar;
	private: System::Windows::Forms::Button^ bcModificar;
	private: System::Windows::Forms::Button^ bpEliminar;
	private: System::Windows::Forms::Button^ bpInsertar;
	private: System::Windows::Forms::Panel^ pcModif;
	private: System::Windows::Forms::TextBox^ cModifTxtbx3;
	private: System::Windows::Forms::Label^ cModifLbl3;
	private: System::Windows::Forms::Label^ cModifLbl2;
	private: System::Windows::Forms::TextBox^ cModifTxtbx2;
	private: System::Windows::Forms::TextBox^ cModifTxtbx1;
	private: System::Windows::Forms::Panel^ pcElim;
	private: System::Windows::Forms::Label^ cElimLbl2;
	private: System::Windows::Forms::Label^ cElimLbl1;
	private: System::Windows::Forms::Button^ bcEliminar;
	private: System::Windows::Forms::TextBox^ cElimTxtbx2;
	private: System::Windows::Forms::TextBox^ cElimTxtbx1;
	private: System::Windows::Forms::Panel^ ppElim;
	private: System::Windows::Forms::Label^ pElimLbl1;
	private: System::Windows::Forms::TextBox^ pElimTxtbx1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuLugs::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->bPaises = (gcnew System::Windows::Forms::Button());
			this->bCiudades = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->lblPaises = (gcnew System::Windows::Forms::Label());
			this->lblCiudades = (gcnew System::Windows::Forms::Label());
			this->pPaises = (gcnew System::Windows::Forms::Panel());
			this->bpElim = (gcnew System::Windows::Forms::Button());
			this->bpBusq = (gcnew System::Windows::Forms::Button());
			this->bpModif = (gcnew System::Windows::Forms::Button());
			this->bpInser = (gcnew System::Windows::Forms::Button());
			this->pCiudades = (gcnew System::Windows::Forms::Panel());
			this->bcElim = (gcnew System::Windows::Forms::Button());
			this->bcBusq = (gcnew System::Windows::Forms::Button());
			this->bcModif = (gcnew System::Windows::Forms::Button());
			this->bcInser = (gcnew System::Windows::Forms::Button());
			this->ppInser = (gcnew System::Windows::Forms::Panel());
			this->bpInsertar = (gcnew System::Windows::Forms::Button());
			this->pInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->pInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->pInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->pInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcInser = (gcnew System::Windows::Forms::Panel());
			this->cInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->bcInsertar = (gcnew System::Windows::Forms::Button());
			this->cInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->bcModificar = (gcnew System::Windows::Forms::Button());
			this->bpEliminar = (gcnew System::Windows::Forms::Button());
			this->pcModif = (gcnew System::Windows::Forms::Panel());
			this->cModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->cModifTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->cModifLbl3 = (gcnew System::Windows::Forms::Label());
			this->cModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->cModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcElim = (gcnew System::Windows::Forms::Panel());
			this->cElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->cElimLbl2 = (gcnew System::Windows::Forms::Label());
			this->bcEliminar = (gcnew System::Windows::Forms::Button());
			this->cElimTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ppElim = (gcnew System::Windows::Forms::Panel());
			this->pElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->pElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ppBusq = (gcnew System::Windows::Forms::Panel());
			this->pBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->pBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->bpBuscar = (gcnew System::Windows::Forms::Button());
			this->pcBusq = (gcnew System::Windows::Forms::Panel());
			this->cBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->cBusqLbl2 = (gcnew System::Windows::Forms::Label());
			this->bcBuscar = (gcnew System::Windows::Forms::Button());
			this->cBusqTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ppModif = (gcnew System::Windows::Forms::Panel());
			this->bpModificar = (gcnew System::Windows::Forms::Button());
			this->pModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->pModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->pModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->pModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pPaises->SuspendLayout();
			this->pCiudades->SuspendLayout();
			this->ppInser->SuspendLayout();
			this->pcInser->SuspendLayout();
			this->pcModif->SuspendLayout();
			this->pcElim->SuspendLayout();
			this->ppElim->SuspendLayout();
			this->ppBusq->SuspendLayout();
			this->pcBusq->SuspendLayout();
			this->ppModif->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::IndianRed;
			this->titleMenu->Location = System::Drawing::Point(69, 50);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(192, 65);
			this->titleMenu->TabIndex = 1;
			this->titleMenu->Text = L"Lugares";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bPaises
			// 
			this->bPaises->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bPaises->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bPaises->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bPaises->ForeColor = System::Drawing::Color::White;
			this->bPaises->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bPaises.Image")));
			this->bPaises->Location = System::Drawing::Point(51, 136);
			this->bPaises->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bPaises->Name = L"bPaises";
			this->bPaises->Size = System::Drawing::Size(110, 107);
			this->bPaises->TabIndex = 2;
			this->bPaises->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bPaises->UseVisualStyleBackColor = false;
			this->bPaises->Click += gcnew System::EventHandler(this, &SubMenuLugs::bPaises_Click);
			// 
			// bCiudades
			// 
			this->bCiudades->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bCiudades->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bCiudades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCiudades->ForeColor = System::Drawing::Color::White;
			this->bCiudades->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bCiudades.Image")));
			this->bCiudades->Location = System::Drawing::Point(51, 338);
			this->bCiudades->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bCiudades->Name = L"bCiudades";
			this->bCiudades->Size = System::Drawing::Size(110, 89);
			this->bCiudades->TabIndex = 3;
			this->bCiudades->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bCiudades->UseVisualStyleBackColor = false;
			this->bCiudades->Click += gcnew System::EventHandler(this, &SubMenuLugs::bCiudades_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::IndianRed;
			this->bSalir->Location = System::Drawing::Point(962, 557);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 6;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuLugs::bSalir_Click);
			// 
			// lblPaises
			// 
			this->lblPaises->AutoSize = true;
			this->lblPaises->BackColor = System::Drawing::Color::Black;
			this->lblPaises->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPaises->ForeColor = System::Drawing::Color::White;
			this->lblPaises->Location = System::Drawing::Point(75, 248);
			this->lblPaises->Name = L"lblPaises";
			this->lblPaises->Size = System::Drawing::Size(69, 30);
			this->lblPaises->TabIndex = 17;
			this->lblPaises->Text = L"Países";
			// 
			// lblCiudades
			// 
			this->lblCiudades->AutoSize = true;
			this->lblCiudades->BackColor = System::Drawing::Color::Black;
			this->lblCiudades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCiudades->ForeColor = System::Drawing::Color::White;
			this->lblCiudades->Location = System::Drawing::Point(63, 431);
			this->lblCiudades->Name = L"lblCiudades";
			this->lblCiudades->Size = System::Drawing::Size(98, 30);
			this->lblCiudades->TabIndex = 18;
			this->lblCiudades->Text = L"Ciudades";
			// 
			// pPaises
			// 
			this->pPaises->AutoScroll = true;
			this->pPaises->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pPaises->Controls->Add(this->bpElim);
			this->pPaises->Controls->Add(this->bpBusq);
			this->pPaises->Controls->Add(this->bpModif);
			this->pPaises->Controls->Add(this->bpInser);
			this->pPaises->ForeColor = System::Drawing::Color::White;
			this->pPaises->Location = System::Drawing::Point(184, 141);
			this->pPaises->Name = L"pPaises";
			this->pPaises->Size = System::Drawing::Size(148, 145);
			this->pPaises->TabIndex = 19;
			this->pPaises->Visible = false;
			this->pPaises->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SubMenuLugs::pPaises_Paint);
			// 
			// bpElim
			// 
			this->bpElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bpElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bpElim->ForeColor = System::Drawing::Color::White;
			this->bpElim->Location = System::Drawing::Point(3, 111);
			this->bpElim->Name = L"bpElim";
			this->bpElim->Size = System::Drawing::Size(142, 31);
			this->bpElim->TabIndex = 23;
			this->bpElim->Text = L"-> Eliminación";
			this->bpElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bpElim->UseVisualStyleBackColor = false;
			this->bpElim->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbpElim_Click);
			this->bpElim->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpElim_Click);
			// 
			// bpBusq
			// 
			this->bpBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bpBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bpBusq->ForeColor = System::Drawing::Color::White;
			this->bpBusq->Location = System::Drawing::Point(3, 77);
			this->bpBusq->Name = L"bpBusq";
			this->bpBusq->Size = System::Drawing::Size(142, 31);
			this->bpBusq->TabIndex = 22;
			this->bpBusq->Text = L"-> Búsqueda";
			this->bpBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bpBusq->UseVisualStyleBackColor = false;
			this->bpBusq->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbpBusq_Click);
			this->bpBusq->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpBusq_Click);
			// 
			// bpModif
			// 
			this->bpModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bpModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bpModif->ForeColor = System::Drawing::Color::White;
			this->bpModif->Location = System::Drawing::Point(3, 40);
			this->bpModif->Name = L"bpModif";
			this->bpModif->Size = System::Drawing::Size(142, 31);
			this->bpModif->TabIndex = 21;
			this->bpModif->Text = L"-> Modificación";
			this->bpModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bpModif->UseVisualStyleBackColor = false;
			this->bpModif->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbpModif_Click);
			this->bpModif->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpModif_Click);
			// 
			// bpInser
			// 
			this->bpInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bpInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bpInser->ForeColor = System::Drawing::Color::White;
			this->bpInser->Location = System::Drawing::Point(3, 3);
			this->bpInser->Name = L"bpInser";
			this->bpInser->Size = System::Drawing::Size(142, 31);
			this->bpInser->TabIndex = 20;
			this->bpInser->Text = L"-> Inserción";
			this->bpInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bpInser->UseVisualStyleBackColor = false;
			this->bpInser->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbpInser_Click);
			this->bpInser->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpInser_Click);
			// 
			// pCiudades
			// 
			this->pCiudades->AutoScroll = true;
			this->pCiudades->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pCiudades->Controls->Add(this->bcElim);
			this->pCiudades->Controls->Add(this->bcBusq);
			this->pCiudades->Controls->Add(this->bcModif);
			this->pCiudades->Controls->Add(this->bcInser);
			this->pCiudades->ForeColor = System::Drawing::Color::White;
			this->pCiudades->Location = System::Drawing::Point(181, 338);
			this->pCiudades->Name = L"pCiudades";
			this->pCiudades->Size = System::Drawing::Size(148, 145);
			this->pCiudades->TabIndex = 20;
			this->pCiudades->Visible = false;
			// 
			// bcElim
			// 
			this->bcElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bcElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcElim->ForeColor = System::Drawing::Color::White;
			this->bcElim->Location = System::Drawing::Point(3, 111);
			this->bcElim->Name = L"bcElim";
			this->bcElim->Size = System::Drawing::Size(142, 31);
			this->bcElim->TabIndex = 23;
			this->bcElim->Text = L"-> Eliminación";
			this->bcElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcElim->UseVisualStyleBackColor = false;
			this->bcElim->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbcElim_Click);
			this->bcElim->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcElim_Click);
			// 
			// bcBusq
			// 
			this->bcBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bcBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcBusq->ForeColor = System::Drawing::Color::White;
			this->bcBusq->Location = System::Drawing::Point(3, 77);
			this->bcBusq->Name = L"bcBusq";
			this->bcBusq->Size = System::Drawing::Size(142, 31);
			this->bcBusq->TabIndex = 22;
			this->bcBusq->Text = L"-> Búsqueda";
			this->bcBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcBusq->UseVisualStyleBackColor = false;
			this->bcBusq->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbcBusq_Click);
			this->bcBusq->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcBusq_Click);
			// 
			// bcModif
			// 
			this->bcModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bcModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcModif->ForeColor = System::Drawing::Color::White;
			this->bcModif->Location = System::Drawing::Point(3, 40);
			this->bcModif->Name = L"bcModif";
			this->bcModif->Size = System::Drawing::Size(142, 31);
			this->bcModif->TabIndex = 21;
			this->bcModif->Text = L"-> Modificación";
			this->bcModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcModif->UseVisualStyleBackColor = false;
			this->bcModif->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbcModif_Click);
			this->bcModif->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcModif_Click);
			// 
			// bcInser
			// 
			this->bcInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bcInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcInser->ForeColor = System::Drawing::Color::White;
			this->bcInser->Location = System::Drawing::Point(3, 3);
			this->bcInser->Name = L"bcInser";
			this->bcInser->Size = System::Drawing::Size(142, 31);
			this->bcInser->TabIndex = 20;
			this->bcInser->Text = L"-> Inserción";
			this->bcInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcInser->UseVisualStyleBackColor = false;
			this->bcInser->DoubleClick += gcnew System::EventHandler(this, &SubMenuLugs::dbcInser_Click);
			this->bcInser->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcInser_Click);
			// 
			// ppInser
			// 
			this->ppInser->AutoScroll = true;
			this->ppInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppInser->Controls->Add(this->bpInsertar);
			this->ppInser->Controls->Add(this->pInserLbl2);
			this->ppInser->Controls->Add(this->pInserLbl1);
			this->ppInser->Controls->Add(this->pInserTxtbx2);
			this->ppInser->Controls->Add(this->pInserTxtbx1);
			this->ppInser->ForeColor = System::Drawing::Color::White;
			this->ppInser->Location = System::Drawing::Point(349, 141);
			this->ppInser->Name = L"ppInser";
			this->ppInser->Size = System::Drawing::Size(172, 186);
			this->ppInser->TabIndex = 24;
			this->ppInser->Visible = false;
			// 
			// bpInsertar
			// 
			this->bpInsertar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bpInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bpInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpInsertar->ForeColor = System::Drawing::Color::IndianRed;
			this->bpInsertar->Location = System::Drawing::Point(-3, 140);
			this->bpInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bpInsertar->Name = L"bpInsertar";
			this->bpInsertar->Size = System::Drawing::Size(173, 45);
			this->bpInsertar->TabIndex = 50;
			this->bpInsertar->Text = L"Insertar";
			this->bpInsertar->UseVisualStyleBackColor = false;
			this->bpInsertar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpInsertar_Click);
			// 
			// pInserLbl2
			// 
			this->pInserLbl2->AutoSize = true;
			this->pInserLbl2->BackColor = System::Drawing::Color::Black;
			this->pInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pInserLbl2->ForeColor = System::Drawing::Color::White;
			this->pInserLbl2->Location = System::Drawing::Point(45, 77);
			this->pInserLbl2->Name = L"pInserLbl2";
			this->pInserLbl2->Size = System::Drawing::Size(89, 30);
			this->pInserLbl2->TabIndex = 26;
			this->pInserLbl2->Text = L"Nombre";
			// 
			// pInserLbl1
			// 
			this->pInserLbl1->AutoSize = true;
			this->pInserLbl1->BackColor = System::Drawing::Color::Black;
			this->pInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pInserLbl1->ForeColor = System::Drawing::Color::White;
			this->pInserLbl1->Location = System::Drawing::Point(25, 8);
			this->pInserLbl1->Name = L"pInserLbl1";
			this->pInserLbl1->Size = System::Drawing::Size(121, 30);
			this->pInserLbl1->TabIndex = 25;
			this->pInserLbl1->Text = L"Código País";
			// 
			// pInserTxtbx2
			// 
			this->pInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->pInserTxtbx2->Name = L"pInserTxtbx2";
			this->pInserTxtbx2->Size = System::Drawing::Size(170, 29);
			this->pInserTxtbx2->TabIndex = 1;
			// 
			// pInserTxtbx1
			// 
			this->pInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->pInserTxtbx1->Name = L"pInserTxtbx1";
			this->pInserTxtbx1->Size = System::Drawing::Size(173, 29);
			this->pInserTxtbx1->TabIndex = 0;
			// 
			// pcInser
			// 
			this->pcInser->AutoScroll = true;
			this->pcInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcInser->Controls->Add(this->cInserTxtbx3);
			this->pcInser->Controls->Add(this->bcInsertar);
			this->pcInser->Controls->Add(this->cInserLbl3);
			this->pcInser->Controls->Add(this->cInserLbl2);
			this->pcInser->Controls->Add(this->cInserLbl1);
			this->pcInser->Controls->Add(this->cInserTxtbx2);
			this->pcInser->Controls->Add(this->cInserTxtbx1);
			this->pcInser->ForeColor = System::Drawing::Color::White;
			this->pcInser->Location = System::Drawing::Point(346, 341);
			this->pcInser->Name = L"pcInser";
			this->pcInser->Size = System::Drawing::Size(175, 250);
			this->pcInser->TabIndex = 27;
			this->pcInser->Visible = false;
			// 
			// cInserTxtbx3
			// 
			this->cInserTxtbx3->Location = System::Drawing::Point(0, 177);
			this->cInserTxtbx3->Name = L"cInserTxtbx3";
			this->cInserTxtbx3->Size = System::Drawing::Size(170, 29);
			this->cInserTxtbx3->TabIndex = 28;
			// 
			// bcInsertar
			// 
			this->bcInsertar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bcInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcInsertar->ForeColor = System::Drawing::Color::IndianRed;
			this->bcInsertar->Location = System::Drawing::Point(0, 205);
			this->bcInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcInsertar->Name = L"bcInsertar";
			this->bcInsertar->Size = System::Drawing::Size(170, 45);
			this->bcInsertar->TabIndex = 49;
			this->bcInsertar->Text = L"Insertar";
			this->bcInsertar->UseVisualStyleBackColor = false;
			this->bcInsertar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcInsertar_Click);
			// 
			// cInserLbl3
			// 
			this->cInserLbl3->AutoSize = true;
			this->cInserLbl3->BackColor = System::Drawing::Color::Black;
			this->cInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl3->ForeColor = System::Drawing::Color::White;
			this->cInserLbl3->Location = System::Drawing::Point(45, 144);
			this->cInserLbl3->Name = L"cInserLbl3";
			this->cInserLbl3->Size = System::Drawing::Size(89, 30);
			this->cInserLbl3->TabIndex = 27;
			this->cInserLbl3->Text = L"Nombre";
			// 
			// cInserLbl2
			// 
			this->cInserLbl2->AutoSize = true;
			this->cInserLbl2->BackColor = System::Drawing::Color::Black;
			this->cInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl2->ForeColor = System::Drawing::Color::White;
			this->cInserLbl2->Location = System::Drawing::Point(7, 75);
			this->cInserLbl2->Name = L"cInserLbl2";
			this->cInserLbl2->Size = System::Drawing::Size(150, 30);
			this->cInserLbl2->TabIndex = 26;
			this->cInserLbl2->Text = L"Código Ciudad";
			// 
			// cInserLbl1
			// 
			this->cInserLbl1->AutoSize = true;
			this->cInserLbl1->BackColor = System::Drawing::Color::Black;
			this->cInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl1->ForeColor = System::Drawing::Color::White;
			this->cInserLbl1->Location = System::Drawing::Point(28, 1);
			this->cInserLbl1->Name = L"cInserLbl1";
			this->cInserLbl1->Size = System::Drawing::Size(121, 30);
			this->cInserLbl1->TabIndex = 25;
			this->cInserLbl1->Text = L"Código País";
			// 
			// cInserTxtbx2
			// 
			this->cInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cInserTxtbx2->Name = L"cInserTxtbx2";
			this->cInserTxtbx2->Size = System::Drawing::Size(170, 29);
			this->cInserTxtbx2->TabIndex = 1;
			// 
			// cInserTxtbx1
			// 
			this->cInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->cInserTxtbx1->Name = L"cInserTxtbx1";
			this->cInserTxtbx1->Size = System::Drawing::Size(173, 29);
			this->cInserTxtbx1->TabIndex = 0;
			// 
			// bcModificar
			// 
			this->bcModificar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bcModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcModificar->ForeColor = System::Drawing::Color::IndianRed;
			this->bcModificar->Location = System::Drawing::Point(-3, 204);
			this->bcModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcModificar->Name = L"bcModificar";
			this->bcModificar->Size = System::Drawing::Size(170, 45);
			this->bcModificar->TabIndex = 51;
			this->bcModificar->Text = L"Modificar";
			this->bcModificar->UseVisualStyleBackColor = false;
			this->bcModificar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcModificar_Click);
			// 
			// bpEliminar
			// 
			this->bpEliminar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bpEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bpEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpEliminar->ForeColor = System::Drawing::Color::IndianRed;
			this->bpEliminar->Location = System::Drawing::Point(0, 71);
			this->bpEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bpEliminar->Name = L"bpEliminar";
			this->bpEliminar->Size = System::Drawing::Size(170, 45);
			this->bpEliminar->TabIndex = 55;
			this->bpEliminar->Text = L"Eliminar";
			this->bpEliminar->UseVisualStyleBackColor = false;
			this->bpEliminar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpEliminar_Click);
			// 
			// pcModif
			// 
			this->pcModif->AutoScroll = true;
			this->pcModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcModif->Controls->Add(this->cModifLbl1);
			this->pcModif->Controls->Add(this->cModifTxtbx3);
			this->pcModif->Controls->Add(this->cModifLbl3);
			this->pcModif->Controls->Add(this->cModifLbl2);
			this->pcModif->Controls->Add(this->bcModificar);
			this->pcModif->Controls->Add(this->cModifTxtbx2);
			this->pcModif->Controls->Add(this->cModifTxtbx1);
			this->pcModif->ForeColor = System::Drawing::Color::White;
			this->pcModif->Location = System::Drawing::Point(545, 341);
			this->pcModif->Name = L"pcModif";
			this->pcModif->Size = System::Drawing::Size(169, 249);
			this->pcModif->TabIndex = 50;
			this->pcModif->Visible = false;
			// 
			// cModifLbl1
			// 
			this->cModifLbl1->AutoSize = true;
			this->cModifLbl1->BackColor = System::Drawing::Color::Black;
			this->cModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl1->ForeColor = System::Drawing::Color::White;
			this->cModifLbl1->Location = System::Drawing::Point(21, 9);
			this->cModifLbl1->Name = L"cModifLbl1";
			this->cModifLbl1->Size = System::Drawing::Size(121, 30);
			this->cModifLbl1->TabIndex = 50;
			this->cModifLbl1->Text = L"Código País";
			// 
			// cModifTxtbx3
			// 
			this->cModifTxtbx3->Location = System::Drawing::Point(0, 177);
			this->cModifTxtbx3->Name = L"cModifTxtbx3";
			this->cModifTxtbx3->Size = System::Drawing::Size(167, 29);
			this->cModifTxtbx3->TabIndex = 28;
			// 
			// cModifLbl3
			// 
			this->cModifLbl3->AutoSize = true;
			this->cModifLbl3->BackColor = System::Drawing::Color::Black;
			this->cModifLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl3->ForeColor = System::Drawing::Color::White;
			this->cModifLbl3->Location = System::Drawing::Point(35, 144);
			this->cModifLbl3->Name = L"cModifLbl3";
			this->cModifLbl3->Size = System::Drawing::Size(89, 30);
			this->cModifLbl3->TabIndex = 27;
			this->cModifLbl3->Text = L"Nombre";
			// 
			// cModifLbl2
			// 
			this->cModifLbl2->AutoSize = true;
			this->cModifLbl2->BackColor = System::Drawing::Color::Black;
			this->cModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl2->ForeColor = System::Drawing::Color::White;
			this->cModifLbl2->Location = System::Drawing::Point(7, 75);
			this->cModifLbl2->Name = L"cModifLbl2";
			this->cModifLbl2->Size = System::Drawing::Size(150, 30);
			this->cModifLbl2->TabIndex = 26;
			this->cModifLbl2->Text = L"Código Ciudad";
			// 
			// cModifTxtbx2
			// 
			this->cModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cModifTxtbx2->Name = L"cModifTxtbx2";
			this->cModifTxtbx2->Size = System::Drawing::Size(167, 29);
			this->cModifTxtbx2->TabIndex = 1;
			// 
			// cModifTxtbx1
			// 
			this->cModifTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->cModifTxtbx1->Name = L"cModifTxtbx1";
			this->cModifTxtbx1->Size = System::Drawing::Size(170, 29);
			this->cModifTxtbx1->TabIndex = 0;
			// 
			// pcElim
			// 
			this->pcElim->AutoScroll = true;
			this->pcElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcElim->Controls->Add(this->cElimLbl1);
			this->pcElim->Controls->Add(this->cElimLbl2);
			this->pcElim->Controls->Add(this->bcEliminar);
			this->pcElim->Controls->Add(this->cElimTxtbx2);
			this->pcElim->Controls->Add(this->cElimTxtbx1);
			this->pcElim->ForeColor = System::Drawing::Color::White;
			this->pcElim->Location = System::Drawing::Point(927, 341);
			this->pcElim->Name = L"pcElim";
			this->pcElim->Size = System::Drawing::Size(171, 195);
			this->pcElim->TabIndex = 56;
			this->pcElim->Visible = false;
			// 
			// cElimLbl1
			// 
			this->cElimLbl1->AutoSize = true;
			this->cElimLbl1->BackColor = System::Drawing::Color::Black;
			this->cElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cElimLbl1->ForeColor = System::Drawing::Color::White;
			this->cElimLbl1->Location = System::Drawing::Point(22, 10);
			this->cElimLbl1->Name = L"cElimLbl1";
			this->cElimLbl1->Size = System::Drawing::Size(121, 30);
			this->cElimLbl1->TabIndex = 25;
			this->cElimLbl1->Text = L"Código País";
			// 
			// cElimLbl2
			// 
			this->cElimLbl2->AutoSize = true;
			this->cElimLbl2->BackColor = System::Drawing::Color::Black;
			this->cElimLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cElimLbl2->ForeColor = System::Drawing::Color::White;
			this->cElimLbl2->Location = System::Drawing::Point(3, 75);
			this->cElimLbl2->Name = L"cElimLbl2";
			this->cElimLbl2->Size = System::Drawing::Size(150, 30);
			this->cElimLbl2->TabIndex = 26;
			this->cElimLbl2->Text = L"Código Ciudad";
			// 
			// bcEliminar
			// 
			this->bcEliminar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bcEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcEliminar->ForeColor = System::Drawing::Color::IndianRed;
			this->bcEliminar->Location = System::Drawing::Point(-3, 147);
			this->bcEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcEliminar->Name = L"bcEliminar";
			this->bcEliminar->Size = System::Drawing::Size(173, 45);
			this->bcEliminar->TabIndex = 51;
			this->bcEliminar->Text = L"Eliminar";
			this->bcEliminar->UseVisualStyleBackColor = false;
			this->bcEliminar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcEliminar_Click);
			// 
			// cElimTxtbx2
			// 
			this->cElimTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cElimTxtbx2->Name = L"cElimTxtbx2";
			this->cElimTxtbx2->Size = System::Drawing::Size(170, 29);
			this->cElimTxtbx2->TabIndex = 1;
			// 
			// cElimTxtbx1
			// 
			this->cElimTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->cElimTxtbx1->Name = L"cElimTxtbx1";
			this->cElimTxtbx1->Size = System::Drawing::Size(173, 29);
			this->cElimTxtbx1->TabIndex = 0;
			// 
			// ppElim
			// 
			this->ppElim->AutoScroll = true;
			this->ppElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppElim->Controls->Add(this->pElimLbl1);
			this->ppElim->Controls->Add(this->pElimTxtbx1);
			this->ppElim->Controls->Add(this->bpEliminar);
			this->ppElim->ForeColor = System::Drawing::Color::White;
			this->ppElim->Location = System::Drawing::Point(924, 141);
			this->ppElim->Name = L"ppElim";
			this->ppElim->Size = System::Drawing::Size(170, 116);
			this->ppElim->TabIndex = 57;
			this->ppElim->Visible = false;
			// 
			// pElimLbl1
			// 
			this->pElimLbl1->AutoSize = true;
			this->pElimLbl1->BackColor = System::Drawing::Color::Black;
			this->pElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pElimLbl1->ForeColor = System::Drawing::Color::White;
			this->pElimLbl1->Location = System::Drawing::Point(25, 2);
			this->pElimLbl1->Name = L"pElimLbl1";
			this->pElimLbl1->Size = System::Drawing::Size(121, 30);
			this->pElimLbl1->TabIndex = 25;
			this->pElimLbl1->Text = L"Código País";
			// 
			// pElimTxtbx1
			// 
			this->pElimTxtbx1->Location = System::Drawing::Point(0, 43);
			this->pElimTxtbx1->Name = L"pElimTxtbx1";
			this->pElimTxtbx1->Size = System::Drawing::Size(170, 29);
			this->pElimTxtbx1->TabIndex = 0;
			// 
			// ppBusq
			// 
			this->ppBusq->AutoScroll = true;
			this->ppBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppBusq->Controls->Add(this->pBusqLbl1);
			this->ppBusq->Controls->Add(this->pBusqTxtbx1);
			this->ppBusq->Controls->Add(this->bpBuscar);
			this->ppBusq->ForeColor = System::Drawing::Color::White;
			this->ppBusq->Location = System::Drawing::Point(747, 141);
			this->ppBusq->Name = L"ppBusq";
			this->ppBusq->Size = System::Drawing::Size(170, 116);
			this->ppBusq->TabIndex = 58;
			this->ppBusq->Visible = false;
			// 
			// pBusqLbl1
			// 
			this->pBusqLbl1->AutoSize = true;
			this->pBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->pBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->pBusqLbl1->Location = System::Drawing::Point(25, 2);
			this->pBusqLbl1->Name = L"pBusqLbl1";
			this->pBusqLbl1->Size = System::Drawing::Size(121, 30);
			this->pBusqLbl1->TabIndex = 25;
			this->pBusqLbl1->Text = L"Código País";
			// 
			// pBusqTxtbx1
			// 
			this->pBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->pBusqTxtbx1->Name = L"pBusqTxtbx1";
			this->pBusqTxtbx1->Size = System::Drawing::Size(170, 29);
			this->pBusqTxtbx1->TabIndex = 0;
			// 
			// bpBuscar
			// 
			this->bpBuscar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bpBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bpBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpBuscar->ForeColor = System::Drawing::Color::IndianRed;
			this->bpBuscar->Location = System::Drawing::Point(0, 71);
			this->bpBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bpBuscar->Name = L"bpBuscar";
			this->bpBuscar->Size = System::Drawing::Size(170, 45);
			this->bpBuscar->TabIndex = 55;
			this->bpBuscar->Text = L"Buscar";
			this->bpBuscar->UseVisualStyleBackColor = false;
			this->bpBuscar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpBuscar_Click);
			// 
			// pcBusq
			// 
			this->pcBusq->AutoScroll = true;
			this->pcBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcBusq->Controls->Add(this->cBusqLbl1);
			this->pcBusq->Controls->Add(this->cBusqLbl2);
			this->pcBusq->Controls->Add(this->bcBuscar);
			this->pcBusq->Controls->Add(this->cBusqTxtbx2);
			this->pcBusq->Controls->Add(this->cBusqTxtbx1);
			this->pcBusq->ForeColor = System::Drawing::Color::White;
			this->pcBusq->Location = System::Drawing::Point(747, 341);
			this->pcBusq->Name = L"pcBusq";
			this->pcBusq->Size = System::Drawing::Size(171, 195);
			this->pcBusq->TabIndex = 57;
			this->pcBusq->Visible = false;
			// 
			// cBusqLbl1
			// 
			this->cBusqLbl1->AutoSize = true;
			this->cBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->cBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->cBusqLbl1->Location = System::Drawing::Point(22, 10);
			this->cBusqLbl1->Name = L"cBusqLbl1";
			this->cBusqLbl1->Size = System::Drawing::Size(121, 30);
			this->cBusqLbl1->TabIndex = 25;
			this->cBusqLbl1->Text = L"Código País";
			// 
			// cBusqLbl2
			// 
			this->cBusqLbl2->AutoSize = true;
			this->cBusqLbl2->BackColor = System::Drawing::Color::Black;
			this->cBusqLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBusqLbl2->ForeColor = System::Drawing::Color::White;
			this->cBusqLbl2->Location = System::Drawing::Point(3, 75);
			this->cBusqLbl2->Name = L"cBusqLbl2";
			this->cBusqLbl2->Size = System::Drawing::Size(150, 30);
			this->cBusqLbl2->TabIndex = 26;
			this->cBusqLbl2->Text = L"Código Ciudad";
			// 
			// bcBuscar
			// 
			this->bcBuscar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bcBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcBuscar->ForeColor = System::Drawing::Color::IndianRed;
			this->bcBuscar->Location = System::Drawing::Point(-3, 147);
			this->bcBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcBuscar->Name = L"bcBuscar";
			this->bcBuscar->Size = System::Drawing::Size(173, 45);
			this->bcBuscar->TabIndex = 51;
			this->bcBuscar->Text = L"Buscar";
			this->bcBuscar->UseVisualStyleBackColor = false;
			this->bcBuscar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcBuscar_Click);
			// 
			// cBusqTxtbx2
			// 
			this->cBusqTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cBusqTxtbx2->Name = L"cBusqTxtbx2";
			this->cBusqTxtbx2->Size = System::Drawing::Size(170, 29);
			this->cBusqTxtbx2->TabIndex = 1;
			// 
			// cBusqTxtbx1
			// 
			this->cBusqTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->cBusqTxtbx1->Name = L"cBusqTxtbx1";
			this->cBusqTxtbx1->Size = System::Drawing::Size(173, 29);
			this->cBusqTxtbx1->TabIndex = 0;
			// 
			// ppModif
			// 
			this->ppModif->AutoScroll = true;
			this->ppModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppModif->Controls->Add(this->bpModificar);
			this->ppModif->Controls->Add(this->pModifLbl2);
			this->ppModif->Controls->Add(this->pModifLbl1);
			this->ppModif->Controls->Add(this->pModifTxtbx2);
			this->ppModif->Controls->Add(this->pModifTxtbx1);
			this->ppModif->ForeColor = System::Drawing::Color::White;
			this->ppModif->Location = System::Drawing::Point(548, 141);
			this->ppModif->Name = L"ppModif";
			this->ppModif->Size = System::Drawing::Size(172, 186);
			this->ppModif->TabIndex = 51;
			this->ppModif->Visible = false;
			// 
			// bpModificar
			// 
			this->bpModificar->BackColor = System::Drawing::SystemColors::MenuText;
			this->bpModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bpModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bpModificar->ForeColor = System::Drawing::Color::IndianRed;
			this->bpModificar->Location = System::Drawing::Point(-3, 140);
			this->bpModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bpModificar->Name = L"bpModificar";
			this->bpModificar->Size = System::Drawing::Size(173, 45);
			this->bpModificar->TabIndex = 50;
			this->bpModificar->Text = L"Modificar";
			this->bpModificar->UseVisualStyleBackColor = false;
			this->bpModificar->Click += gcnew System::EventHandler(this, &SubMenuLugs::bpModificar_Click);
			// 
			// pModifLbl2
			// 
			this->pModifLbl2->AutoSize = true;
			this->pModifLbl2->BackColor = System::Drawing::Color::Black;
			this->pModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pModifLbl2->ForeColor = System::Drawing::Color::White;
			this->pModifLbl2->Location = System::Drawing::Point(45, 77);
			this->pModifLbl2->Name = L"pModifLbl2";
			this->pModifLbl2->Size = System::Drawing::Size(89, 30);
			this->pModifLbl2->TabIndex = 26;
			this->pModifLbl2->Text = L"Nombre";
			// 
			// pModifLbl1
			// 
			this->pModifLbl1->AutoSize = true;
			this->pModifLbl1->BackColor = System::Drawing::Color::Black;
			this->pModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pModifLbl1->ForeColor = System::Drawing::Color::White;
			this->pModifLbl1->Location = System::Drawing::Point(25, 8);
			this->pModifLbl1->Name = L"pModifLbl1";
			this->pModifLbl1->Size = System::Drawing::Size(121, 30);
			this->pModifLbl1->TabIndex = 25;
			this->pModifLbl1->Text = L"Código País";
			// 
			// pModifTxtbx2
			// 
			this->pModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->pModifTxtbx2->Name = L"pModifTxtbx2";
			this->pModifTxtbx2->Size = System::Drawing::Size(170, 29);
			this->pModifTxtbx2->TabIndex = 1;
			// 
			// pModifTxtbx1
			// 
			this->pModifTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->pModifTxtbx1->Name = L"pModifTxtbx1";
			this->pModifTxtbx1->Size = System::Drawing::Size(173, 29);
			this->pModifTxtbx1->TabIndex = 0;
			// 
			// SubMenuLugs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 641);
			this->Controls->Add(this->ppModif);
			this->Controls->Add(this->pcBusq);
			this->Controls->Add(this->ppBusq);
			this->Controls->Add(this->ppElim);
			this->Controls->Add(this->pcElim);
			this->Controls->Add(this->pcModif);
			this->Controls->Add(this->pcInser);
			this->Controls->Add(this->ppInser);
			this->Controls->Add(this->pCiudades);
			this->Controls->Add(this->pPaises);
			this->Controls->Add(this->lblCiudades);
			this->Controls->Add(this->lblPaises);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->bCiudades);
			this->Controls->Add(this->bPaises);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(1110, 641);
			this->Name = L"SubMenuLugs";
			this->Text = L"SubMenuLugs";
			this->Load += gcnew System::EventHandler(this, &SubMenuLugs::SubMenuLugs_Load);
			this->pPaises->ResumeLayout(false);
			this->pCiudades->ResumeLayout(false);
			this->ppInser->ResumeLayout(false);
			this->ppInser->PerformLayout();
			this->pcInser->ResumeLayout(false);
			this->pcInser->PerformLayout();
			this->pcModif->ResumeLayout(false);
			this->pcModif->PerformLayout();
			this->pcElim->ResumeLayout(false);
			this->pcElim->PerformLayout();
			this->ppElim->ResumeLayout(false);
			this->ppElim->PerformLayout();
			this->ppBusq->ResumeLayout(false);
			this->ppBusq->PerformLayout();
			this->pcBusq->ResumeLayout(false);
			this->pcBusq->PerformLayout();
			this->ppModif->ResumeLayout(false);
			this->ppModif->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuLugs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bPaises_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pPaises->Show();
	}
	private: System::Void bCiudades_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pCiudades->Show();
	}
		   /*	BOTONES PAISES	 */

	private: System::Void bpInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppInser->Show();
		this->ppModif->Hide();
		this->ppBusq->Hide();
		this->ppElim->Hide();
	}
	private: System::Void bpModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppInser->Hide();
		this->ppModif->Show();
		this->ppBusq->Hide();
		this->ppElim->Hide();
	}
	private: System::Void bpBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppBusq->Show();
		this->ppInser->Hide();
		this->ppModif->Hide();
		this->ppElim->Hide();
	}
	private: System::Void bpElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppElim->Show();
		this->ppInser->Hide();
		this->ppModif->Hide();
		this->ppBusq->Hide();
	}
		   /*	BOTONES CIUDADES   */
	private: System::Void bcInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Show();
		this->pcModif->Hide();
		this->pcBusq->Hide();
		this->pcElim->Hide();
	}
	private: System::Void bcModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Hide();
		this->pcModif->Show();
		this->pcBusq->Hide();
		this->pcElim->Hide();
	}
	private: System::Void bcBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Hide();
		this->pcModif->Hide();
		this->pcBusq->Show();
		this->pcElim->Hide();
	}
	private: System::Void bcElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Hide();
		this->pcModif->Hide();
		this->pcBusq->Hide();
		this->pcElim->Show();
	}

	/*  DOUBLE CLICKS  */

	private: System::Void dbpInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppInser->Hide();
	}
	private: System::Void dbpModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppModif->Hide();
	}
	private: System::Void dbpBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppBusq->Hide();
	}
	private: System::Void dbpElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppElim->Hide();
	}
		   /*	BOTONES CIUDADES   */
	private: System::Void dbcInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Hide();
	}
	private: System::Void dbcModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcModif->Hide();
	}
	private: System::Void dbcBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcBusq->Hide();
	}
	private: System::Void dbcElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcElim->Hide();
	}

	/*	//////////////////////////////////	*/

	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();
	}
	private: System::Void pPaises_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	/* FUNCIONALIDAD */

	private: System::Void bpInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bpModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bpBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bpEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// ***********************************************************************************

	private: System::Void bcInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
