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
	private: System::Windows::Forms::Panel^ ppBusq;
	private: System::Windows::Forms::Label^ pBusqLbl1;
	private: System::Windows::Forms::TextBox^ pBusqTxtbx1;
	private: System::Windows::Forms::Panel^ pcInser;
	private: System::Windows::Forms::TextBox^ cInserTxtbx3;
	private: System::Windows::Forms::Label^ cInserLbl3;
	private: System::Windows::Forms::Label^ cInserLbl2;
	private: System::Windows::Forms::Label^ cInserLbl1;
	private: System::Windows::Forms::TextBox^ cInserTxtbx2;
	private: System::Windows::Forms::TextBox^ cInserTxtbx1;
	private: System::Windows::Forms::Panel^ pcBusq;
	private: System::Windows::Forms::Label^ cBusqLbl1;
	private: System::Windows::Forms::TextBox^ cBusqTxtbx1;

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
			this->pInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->pInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->pInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->pInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ppBusq = (gcnew System::Windows::Forms::Panel());
			this->pBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->pBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcInser = (gcnew System::Windows::Forms::Panel());
			this->cInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcBusq = (gcnew System::Windows::Forms::Panel());
			this->cBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->cBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pPaises->SuspendLayout();
			this->pCiudades->SuspendLayout();
			this->ppInser->SuspendLayout();
			this->ppBusq->SuspendLayout();
			this->pcInser->SuspendLayout();
			this->pcBusq->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::IndianRed;
			this->titleMenu->Location = System::Drawing::Point(544, 79);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(192, 65);
			this->titleMenu->TabIndex = 1;
			this->titleMenu->Text = L"Lugares";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &SubMenuLugs::titleMenu_Click);
			// 
			// bPaises
			// 
			this->bPaises->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bPaises->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bPaises->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bPaises->ForeColor = System::Drawing::Color::White;
			this->bPaises->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bPaises.Image")));
			this->bPaises->Location = System::Drawing::Point(538, 184);
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
			this->bCiudades->Location = System::Drawing::Point(538, 377);
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
			this->lblPaises->Location = System::Drawing::Point(562, 296);
			this->lblPaises->Name = L"lblPaises";
			this->lblPaises->Size = System::Drawing::Size(69, 30);
			this->lblPaises->TabIndex = 17;
			this->lblPaises->Text = L"Países";
			this->lblPaises->Click += gcnew System::EventHandler(this, &SubMenuLugs::lblLugs_Click);
			// 
			// lblCiudades
			// 
			this->lblCiudades->AutoSize = true;
			this->lblCiudades->BackColor = System::Drawing::Color::Black;
			this->lblCiudades->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCiudades->ForeColor = System::Drawing::Color::White;
			this->lblCiudades->Location = System::Drawing::Point(550, 470);
			this->lblCiudades->Name = L"lblCiudades";
			this->lblCiudades->Size = System::Drawing::Size(98, 30);
			this->lblCiudades->TabIndex = 18;
			this->lblCiudades->Text = L"Ciudades";
			this->lblCiudades->Click += gcnew System::EventHandler(this, &SubMenuLugs::lblCiudades_Click);
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
			this->pPaises->Location = System::Drawing::Point(668, 181);
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
			this->pCiudades->Location = System::Drawing::Point(668, 377);
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
			this->bcInser->Click += gcnew System::EventHandler(this, &SubMenuLugs::bcInser_Click);
			// 
			// ppInser
			// 
			this->ppInser->AutoScroll = true;
			this->ppInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppInser->Controls->Add(this->pInserLbl2);
			this->ppInser->Controls->Add(this->pInserLbl1);
			this->ppInser->Controls->Add(this->pInserTxtbx2);
			this->ppInser->Controls->Add(this->pInserTxtbx1);
			this->ppInser->ForeColor = System::Drawing::Color::White;
			this->ppInser->Location = System::Drawing::Point(876, 184);
			this->ppInser->Name = L"ppInser";
			this->ppInser->Size = System::Drawing::Size(170, 142);
			this->ppInser->TabIndex = 24;
			this->ppInser->Visible = false;
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
			this->pInserTxtbx2->TextChanged += gcnew System::EventHandler(this, &SubMenuLugs::pInserTxtbx2_TextChanged);
			// 
			// pInserTxtbx1
			// 
			this->pInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->pInserTxtbx1->Name = L"pInserTxtbx1";
			this->pInserTxtbx1->Size = System::Drawing::Size(173, 29);
			this->pInserTxtbx1->TabIndex = 0;
			this->pInserTxtbx1->TextChanged += gcnew System::EventHandler(this, &SubMenuLugs::pInserTxtbx1_TextChanged);
			// 
			// ppBusq
			// 
			this->ppBusq->AutoScroll = true;
			this->ppBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ppBusq->Controls->Add(this->pBusqLbl1);
			this->ppBusq->Controls->Add(this->pBusqTxtbx1);
			this->ppBusq->ForeColor = System::Drawing::Color::White;
			this->ppBusq->Location = System::Drawing::Point(876, 358);
			this->ppBusq->Name = L"ppBusq";
			this->ppBusq->Size = System::Drawing::Size(170, 74);
			this->ppBusq->TabIndex = 27;
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
			this->pBusqTxtbx1->TextChanged += gcnew System::EventHandler(this, &SubMenuLugs::pBusqTxtbx1_TextChanged);
			// 
			// pcInser
			// 
			this->pcInser->AutoScroll = true;
			this->pcInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcInser->Controls->Add(this->cInserTxtbx3);
			this->pcInser->Controls->Add(this->cInserLbl3);
			this->pcInser->Controls->Add(this->cInserLbl2);
			this->pcInser->Controls->Add(this->cInserLbl1);
			this->pcInser->Controls->Add(this->cInserTxtbx2);
			this->pcInser->Controls->Add(this->cInserTxtbx1);
			this->pcInser->ForeColor = System::Drawing::Color::White;
			this->pcInser->Location = System::Drawing::Point(216, 48);
			this->pcInser->Name = L"pcInser";
			this->pcInser->Size = System::Drawing::Size(196, 208);
			this->pcInser->TabIndex = 27;
			this->pcInser->Visible = false;
			// 
			// cInserTxtbx3
			// 
			this->cInserTxtbx3->Location = System::Drawing::Point(0, 177);
			this->cInserTxtbx3->Name = L"cInserTxtbx3";
			this->cInserTxtbx3->Size = System::Drawing::Size(193, 29);
			this->cInserTxtbx3->TabIndex = 28;
			// 
			// cInserLbl3
			// 
			this->cInserLbl3->AutoSize = true;
			this->cInserLbl3->BackColor = System::Drawing::Color::Black;
			this->cInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl3->ForeColor = System::Drawing::Color::White;
			this->cInserLbl3->Location = System::Drawing::Point(53, 144);
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
			this->cInserLbl2->Location = System::Drawing::Point(20, 75);
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
			this->cInserLbl1->Location = System::Drawing::Point(36, 5);
			this->cInserLbl1->Name = L"cInserLbl1";
			this->cInserLbl1->Size = System::Drawing::Size(121, 30);
			this->cInserLbl1->TabIndex = 25;
			this->cInserLbl1->Text = L"Código País";
			// 
			// cInserTxtbx2
			// 
			this->cInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cInserTxtbx2->Name = L"cInserTxtbx2";
			this->cInserTxtbx2->Size = System::Drawing::Size(193, 29);
			this->cInserTxtbx2->TabIndex = 1;
			// 
			// cInserTxtbx1
			// 
			this->cInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->cInserTxtbx1->Name = L"cInserTxtbx1";
			this->cInserTxtbx1->Size = System::Drawing::Size(196, 29);
			this->cInserTxtbx1->TabIndex = 0;
			// 
			// pcBusq
			// 
			this->pcBusq->AutoScroll = true;
			this->pcBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcBusq->Controls->Add(this->cBusqLbl1);
			this->pcBusq->Controls->Add(this->cBusqTxtbx1);
			this->pcBusq->ForeColor = System::Drawing::Color::White;
			this->pcBusq->Location = System::Drawing::Point(239, 374);
			this->pcBusq->Name = L"pcBusq";
			this->pcBusq->Size = System::Drawing::Size(182, 74);
			this->pcBusq->TabIndex = 28;
			this->pcBusq->Visible = false;
			// 
			// cBusqLbl1
			// 
			this->cBusqLbl1->AutoSize = true;
			this->cBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->cBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->cBusqLbl1->Location = System::Drawing::Point(13, 4);
			this->cBusqLbl1->Name = L"cBusqLbl1";
			this->cBusqLbl1->Size = System::Drawing::Size(150, 30);
			this->cBusqLbl1->TabIndex = 25;
			this->cBusqLbl1->Text = L"Código Ciudad";
			// 
			// cBusqTxtbx1
			// 
			this->cBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->cBusqTxtbx1->Name = L"cBusqTxtbx1";
			this->cBusqTxtbx1->Size = System::Drawing::Size(182, 29);
			this->cBusqTxtbx1->TabIndex = 0;
			// 
			// SubMenuLugs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 641);
			this->Controls->Add(this->pcBusq);
			this->Controls->Add(this->pcInser);
			this->Controls->Add(this->ppBusq);
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
			this->MaximumSize = System::Drawing::Size(1110, 641);
			this->MinimumSize = System::Drawing::Size(1110, 641);
			this->Name = L"SubMenuLugs";
			this->Text = L"SubMenuLugs";
			this->Load += gcnew System::EventHandler(this, &SubMenuLugs::SubMenuLugs_Load);
			this->pPaises->ResumeLayout(false);
			this->pCiudades->ResumeLayout(false);
			this->ppInser->ResumeLayout(false);
			this->ppInser->PerformLayout();
			this->ppBusq->ResumeLayout(false);
			this->ppBusq->PerformLayout();
			this->pcInser->ResumeLayout(false);
			this->pcInser->PerformLayout();
			this->pcBusq->ResumeLayout(false);
			this->pcBusq->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuLugs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {
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
	}
	private: System::Void bpModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bpBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ppBusq->BringToFront();
		this->ppBusq->Show();
	}
	private: System::Void bpElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   /*	BOTONES CIUDADES   */
	private: System::Void bcInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcInser->Show();
	}
	private: System::Void bcModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bcBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pcBusq->Show();
	}
	private: System::Void bcElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();

		//Controlador::imprimir();

	}
	private: System::Void lblLugs_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblCiudades_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pInserTxtbx1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pInserTxtbx2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pBusqTxtbx1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pPaises_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
