#pragma once

#include "RN.h"    // Tratamientos
#include "NodoRN.h"
#include "RN.cpp"
#include "AA.h"		// Medicacion
#include "NodoAA.h"
#include "AA.cpp"

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubMenuClnc
	/// </summary>
	public ref class SubMenuClnc : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ menu;

	public:
		SubMenuClnc(System::Windows::Forms::Form^ m, RNTratamiento* arbolTratamientos, AAMedicacion* arbolMedicaciones)
		{
			menu = m; 
			
			this->arbolTratamientos = arbolTratamientos;
			this->arbolMedicaciones = arbolMedicaciones;
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubMenuClnc()
		{
			if (components)
			{
				delete components;
			}
		}

	public: RNTratamiento* arbolTratamientos;
	public: AAMedicacion* arbolMedicaciones;

	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Panel^ pMeds;
	private: System::Windows::Forms::Button^ bmElim;
	private: System::Windows::Forms::Button^ bmBusq;
	private: System::Windows::Forms::Button^ bmModif;
	private: System::Windows::Forms::Button^ bmInser;
	private: System::Windows::Forms::Panel^ pTrat;
	private: System::Windows::Forms::Button^ btElim;
	private: System::Windows::Forms::Button^ btBusq;
	private: System::Windows::Forms::Button^ btModif;
	private: System::Windows::Forms::Button^ btInser;
	private: System::Windows::Forms::Label^ lblMeds;
	private: System::Windows::Forms::Label^ lblTrat;
	private: System::Windows::Forms::Button^ bMeds;
	private: System::Windows::Forms::Button^ bTrat;
	private: System::Windows::Forms::Button^ bSalir;
	private: System::Windows::Forms::Panel^ ptInser;
	private: System::Windows::Forms::TextBox^ tInserTxtbx4;
	private: System::Windows::Forms::Label^ tInserLbl4;
	private: System::Windows::Forms::TextBox^ tInserTxtbx3;
	private: System::Windows::Forms::Label^ tInserLbl3;
	private: System::Windows::Forms::Label^ tInserLbl2;
	private: System::Windows::Forms::Label^ tInserLbl1;
	private: System::Windows::Forms::TextBox^ tInserTxtbx2;
	private: System::Windows::Forms::TextBox^ tInserTxtbx1;
	private: System::Windows::Forms::Panel^ pmInser;
	private: System::Windows::Forms::TextBox^ mInserTxtbx4;
	private: System::Windows::Forms::Label^ mInserLbl4;
	private: System::Windows::Forms::TextBox^ mInserTxtbx3;
	private: System::Windows::Forms::Label^ mInserLbl3;
	private: System::Windows::Forms::Label^ mInserLbl2;
	private: System::Windows::Forms::Label^ mInserLbl1;
	private: System::Windows::Forms::TextBox^ mInserTxtbx2;
	private: System::Windows::Forms::TextBox^ mInserTxtbx1;
	private: System::Windows::Forms::Panel^ ptBusq;
	private: System::Windows::Forms::Label^ tBusqLbl1;
	private: System::Windows::Forms::TextBox^ tBusqTxtbx1;
	private: System::Windows::Forms::Panel^ pmBusq;
	private: System::Windows::Forms::Label^ mBusqLbl1;
	private: System::Windows::Forms::TextBox^ mBusqTxtbx1;
	private: System::Windows::Forms::Button^ btInsertar;
	private: System::Windows::Forms::Button^ bmInsertar;
	private: System::Windows::Forms::Button^ btBuscar;
	private: System::Windows::Forms::Button^ bmBuscar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuClnc::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->pMeds = (gcnew System::Windows::Forms::Panel());
			this->bmElim = (gcnew System::Windows::Forms::Button());
			this->bmBusq = (gcnew System::Windows::Forms::Button());
			this->bmModif = (gcnew System::Windows::Forms::Button());
			this->bmInser = (gcnew System::Windows::Forms::Button());
			this->pTrat = (gcnew System::Windows::Forms::Panel());
			this->btElim = (gcnew System::Windows::Forms::Button());
			this->btBusq = (gcnew System::Windows::Forms::Button());
			this->btModif = (gcnew System::Windows::Forms::Button());
			this->btInser = (gcnew System::Windows::Forms::Button());
			this->lblMeds = (gcnew System::Windows::Forms::Label());
			this->lblTrat = (gcnew System::Windows::Forms::Label());
			this->bMeds = (gcnew System::Windows::Forms::Button());
			this->bTrat = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->ptInser = (gcnew System::Windows::Forms::Panel());
			this->tInserTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->btInsertar = (gcnew System::Windows::Forms::Button());
			this->tInserLbl4 = (gcnew System::Windows::Forms::Label());
			this->tInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->tInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->tInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->tInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->tInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->tInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmInser = (gcnew System::Windows::Forms::Panel());
			this->bmInsertar = (gcnew System::Windows::Forms::Button());
			this->mInserTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl4 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->mInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->mInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->mInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ptBusq = (gcnew System::Windows::Forms::Panel());
			this->btBuscar = (gcnew System::Windows::Forms::Button());
			this->tBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->tBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmBusq = (gcnew System::Windows::Forms::Panel());
			this->bmBuscar = (gcnew System::Windows::Forms::Button());
			this->mBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->mBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pMeds->SuspendLayout();
			this->pTrat->SuspendLayout();
			this->ptInser->SuspendLayout();
			this->pmInser->SuspendLayout();
			this->ptBusq->SuspendLayout();
			this->pmBusq->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->titleMenu->Location = System::Drawing::Point(33, 59);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(167, 65);
			this->titleMenu->TabIndex = 2;
			this->titleMenu->Text = L"Clínica";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pMeds
			// 
			this->pMeds->AutoScroll = true;
			this->pMeds->BackColor = System::Drawing::Color::Transparent;
			this->pMeds->Controls->Add(this->bmElim);
			this->pMeds->Controls->Add(this->bmBusq);
			this->pMeds->Controls->Add(this->bmModif);
			this->pMeds->Controls->Add(this->bmInser);
			this->pMeds->ForeColor = System::Drawing::Color::White;
			this->pMeds->Location = System::Drawing::Point(192, 388);
			this->pMeds->Name = L"pMeds";
			this->pMeds->Size = System::Drawing::Size(172, 145);
			this->pMeds->TabIndex = 26;
			this->pMeds->Visible = false;
			// 
			// bmElim
			// 
			this->bmElim->BackColor = System::Drawing::Color::Transparent;
			this->bmElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmElim->ForeColor = System::Drawing::Color::White;
			this->bmElim->Location = System::Drawing::Point(3, 111);
			this->bmElim->Name = L"bmElim";
			this->bmElim->Size = System::Drawing::Size(166, 31);
			this->bmElim->TabIndex = 23;
			this->bmElim->Text = L"-> Eliminación";
			this->bmElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmElim->UseVisualStyleBackColor = false;
			this->bmElim->Visible = false;
			this->bmElim->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmElim_Click);
			// 
			// bmBusq
			// 
			this->bmBusq->BackColor = System::Drawing::Color::Transparent;
			this->bmBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmBusq->ForeColor = System::Drawing::Color::White;
			this->bmBusq->Location = System::Drawing::Point(3, 74);
			this->bmBusq->Name = L"bmBusq";
			this->bmBusq->Size = System::Drawing::Size(166, 31);
			this->bmBusq->TabIndex = 22;
			this->bmBusq->Text = L"-> Búsqueda";
			this->bmBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmBusq->UseVisualStyleBackColor = false;
			this->bmBusq->Visible = false;
			this->bmBusq->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmBusq_Click);
			// 
			// bmModif
			// 
			this->bmModif->BackColor = System::Drawing::Color::Transparent;
			this->bmModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmModif->ForeColor = System::Drawing::Color::White;
			this->bmModif->Location = System::Drawing::Point(3, 37);
			this->bmModif->Name = L"bmModif";
			this->bmModif->Size = System::Drawing::Size(166, 31);
			this->bmModif->TabIndex = 21;
			this->bmModif->Text = L"-> Modificación";
			this->bmModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmModif->UseVisualStyleBackColor = false;
			this->bmModif->Visible = false;
			this->bmModif->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmModif_Click);
			// 
			// bmInser
			// 
			this->bmInser->BackColor = System::Drawing::Color::Transparent;
			this->bmInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmInser->ForeColor = System::Drawing::Color::White;
			this->bmInser->Location = System::Drawing::Point(3, 0);
			this->bmInser->Name = L"bmInser";
			this->bmInser->Size = System::Drawing::Size(166, 31);
			this->bmInser->TabIndex = 20;
			this->bmInser->Text = L"-> Inserción";
			this->bmInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmInser->UseVisualStyleBackColor = false;
			this->bmInser->Visible = false;
			this->bmInser->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmInser_Click);
			// 
			// pTrat
			// 
			this->pTrat->AutoScroll = true;
			this->pTrat->BackColor = System::Drawing::Color::Transparent;
			this->pTrat->Controls->Add(this->btElim);
			this->pTrat->Controls->Add(this->btBusq);
			this->pTrat->Controls->Add(this->btModif);
			this->pTrat->Controls->Add(this->btInser);
			this->pTrat->ForeColor = System::Drawing::Color::White;
			this->pTrat->Location = System::Drawing::Point(189, 192);
			this->pTrat->Name = L"pTrat";
			this->pTrat->Size = System::Drawing::Size(175, 145);
			this->pTrat->TabIndex = 25;
			this->pTrat->Visible = false;
			// 
			// btElim
			// 
			this->btElim->BackColor = System::Drawing::Color::Transparent;
			this->btElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btElim->ForeColor = System::Drawing::Color::White;
			this->btElim->Location = System::Drawing::Point(3, 111);
			this->btElim->Name = L"btElim";
			this->btElim->Size = System::Drawing::Size(169, 31);
			this->btElim->TabIndex = 23;
			this->btElim->Text = L"-> Eliminación";
			this->btElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btElim->UseVisualStyleBackColor = false;
			this->btElim->Visible = false;
			this->btElim->Click += gcnew System::EventHandler(this, &SubMenuClnc::btElim_Click);
			// 
			// btBusq
			// 
			this->btBusq->BackColor = System::Drawing::Color::Transparent;
			this->btBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btBusq->ForeColor = System::Drawing::Color::White;
			this->btBusq->Location = System::Drawing::Point(3, 74);
			this->btBusq->Name = L"btBusq";
			this->btBusq->Size = System::Drawing::Size(169, 31);
			this->btBusq->TabIndex = 22;
			this->btBusq->Text = L"-> Búsqueda";
			this->btBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btBusq->UseVisualStyleBackColor = false;
			this->btBusq->Visible = false;
			this->btBusq->Click += gcnew System::EventHandler(this, &SubMenuClnc::btBusq_Click);
			// 
			// btModif
			// 
			this->btModif->BackColor = System::Drawing::Color::Transparent;
			this->btModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btModif->ForeColor = System::Drawing::Color::White;
			this->btModif->Location = System::Drawing::Point(3, 37);
			this->btModif->Name = L"btModif";
			this->btModif->Size = System::Drawing::Size(169, 31);
			this->btModif->TabIndex = 21;
			this->btModif->Text = L"-> Modificación";
			this->btModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btModif->UseVisualStyleBackColor = false;
			this->btModif->Visible = false;
			this->btModif->Click += gcnew System::EventHandler(this, &SubMenuClnc::btModif_Click);
			// 
			// btInser
			// 
			this->btInser->BackColor = System::Drawing::Color::Transparent;
			this->btInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btInser->ForeColor = System::Drawing::Color::White;
			this->btInser->Location = System::Drawing::Point(3, 0);
			this->btInser->Name = L"btInser";
			this->btInser->Size = System::Drawing::Size(169, 31);
			this->btInser->TabIndex = 20;
			this->btInser->Text = L"-> Inserción";
			this->btInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btInser->UseVisualStyleBackColor = false;
			this->btInser->Visible = false;
			this->btInser->Click += gcnew System::EventHandler(this, &SubMenuClnc::btInser_Click);
			// 
			// lblMeds
			// 
			this->lblMeds->AutoSize = true;
			this->lblMeds->BackColor = System::Drawing::Color::Transparent;
			this->lblMeds->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMeds->ForeColor = System::Drawing::Color::White;
			this->lblMeds->Location = System::Drawing::Point(39, 501);
			this->lblMeds->Name = L"lblMeds";
			this->lblMeds->Size = System::Drawing::Size(120, 30);
			this->lblMeds->TabIndex = 24;
			this->lblMeds->Text = L"Medicación";
			// 
			// lblTrat
			// 
			this->lblTrat->AutoSize = true;
			this->lblTrat->BackColor = System::Drawing::Color::Transparent;
			this->lblTrat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrat->ForeColor = System::Drawing::Color::White;
			this->lblTrat->Location = System::Drawing::Point(36, 307);
			this->lblTrat->Name = L"lblTrat";
			this->lblTrat->Size = System::Drawing::Size(132, 30);
			this->lblTrat->TabIndex = 23;
			this->lblTrat->Text = L"Tratamientos";
			// 
			// bMeds
			// 
			this->bMeds->BackColor = System::Drawing::Color::Transparent;
			this->bMeds->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMeds->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMeds->ForeColor = System::Drawing::Color::White;
			this->bMeds->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMeds.Image")));
			this->bMeds->Location = System::Drawing::Point(44, 388);
			this->bMeds->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bMeds->Name = L"bMeds";
			this->bMeds->Size = System::Drawing::Size(110, 107);
			this->bMeds->TabIndex = 22;
			this->bMeds->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bMeds->UseVisualStyleBackColor = false;
			this->bMeds->Click += gcnew System::EventHandler(this, &SubMenuClnc::bMeds_Click);
			// 
			// bTrat
			// 
			this->bTrat->BackColor = System::Drawing::Color::Transparent;
			this->bTrat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bTrat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bTrat->ForeColor = System::Drawing::Color::White;
			this->bTrat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bTrat.Image")));
			this->bTrat->Location = System::Drawing::Point(44, 195);
			this->bTrat->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bTrat->Name = L"bTrat";
			this->bTrat->Size = System::Drawing::Size(110, 107);
			this->bTrat->TabIndex = 21;
			this->bTrat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bTrat->UseVisualStyleBackColor = false;
			this->bTrat->Click += gcnew System::EventHandler(this, &SubMenuClnc::bTrat_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::Color::Transparent;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->bSalir->Location = System::Drawing::Point(44, 566);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 27;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuClnc::bSalir_Click);
			// 
			// ptInser
			// 
			this->ptInser->AutoScroll = true;
			this->ptInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ptInser->Controls->Add(this->tInserTxtbx4);
			this->ptInser->Controls->Add(this->btInsertar);
			this->ptInser->Controls->Add(this->tInserLbl4);
			this->ptInser->Controls->Add(this->tInserTxtbx3);
			this->ptInser->Controls->Add(this->tInserLbl3);
			this->ptInser->Controls->Add(this->tInserLbl2);
			this->ptInser->Controls->Add(this->tInserLbl1);
			this->ptInser->Controls->Add(this->tInserTxtbx2);
			this->ptInser->Controls->Add(this->tInserTxtbx1);
			this->ptInser->ForeColor = System::Drawing::Color::White;
			this->ptInser->Location = System::Drawing::Point(383, 192);
			this->ptInser->Name = L"ptInser";
			this->ptInser->Size = System::Drawing::Size(221, 162);
			this->ptInser->TabIndex = 43;
			this->ptInser->Visible = false;
			// 
			// tInserTxtbx4
			// 
			this->tInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->tInserTxtbx4->Name = L"tInserTxtbx4";
			this->tInserTxtbx4->Size = System::Drawing::Size(204, 33);
			this->tInserTxtbx4->TabIndex = 31;
			// 
			// btInsertar
			// 
			this->btInsertar->BackColor = System::Drawing::Color::MidnightBlue;
			this->btInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btInsertar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->btInsertar->Location = System::Drawing::Point(-1, 283);
			this->btInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btInsertar->Name = L"btInsertar";
			this->btInsertar->Size = System::Drawing::Size(205, 45);
			this->btInsertar->TabIndex = 47;
			this->btInsertar->Text = L"Insertar";
			this->btInsertar->UseVisualStyleBackColor = false;
			this->btInsertar->Click += gcnew System::EventHandler(this, &SubMenuClnc::btInsertar_Click);
			// 
			// tInserLbl4
			// 
			this->tInserLbl4->AutoSize = true;
			this->tInserLbl4->BackColor = System::Drawing::Color::Black;
			this->tInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl4->ForeColor = System::Drawing::Color::White;
			this->tInserLbl4->Location = System::Drawing::Point(51, 217);
			this->tInserLbl4->Name = L"tInserLbl4";
			this->tInserLbl4->Size = System::Drawing::Size(96, 30);
			this->tInserLbl4->TabIndex = 29;
			this->tInserLbl4->Text = L"Cantidad";
			// 
			// tInserTxtbx3
			// 
			this->tInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->tInserTxtbx3->Name = L"tInserTxtbx3";
			this->tInserTxtbx3->Size = System::Drawing::Size(204, 33);
			this->tInserTxtbx3->TabIndex = 28;
			// 
			// tInserLbl3
			// 
			this->tInserLbl3->AutoSize = true;
			this->tInserLbl3->BackColor = System::Drawing::Color::Black;
			this->tInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl3->ForeColor = System::Drawing::Color::White;
			this->tInserLbl3->Location = System::Drawing::Point(36, 149);
			this->tInserLbl3->Name = L"tInserLbl3";
			this->tInserLbl3->Size = System::Drawing::Size(138, 25);
			this->tInserLbl3->TabIndex = 27;
			this->tInserLbl3->Text = L"Precio Unitario";
			// 
			// tInserLbl2
			// 
			this->tInserLbl2->AutoSize = true;
			this->tInserLbl2->BackColor = System::Drawing::Color::Black;
			this->tInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl2->ForeColor = System::Drawing::Color::White;
			this->tInserLbl2->Location = System::Drawing::Point(58, 79);
			this->tInserLbl2->Name = L"tInserLbl2";
			this->tInserLbl2->Size = System::Drawing::Size(89, 30);
			this->tInserLbl2->TabIndex = 26;
			this->tInserLbl2->Text = L"Nombre";
			// 
			// tInserLbl1
			// 
			this->tInserLbl1->AutoSize = true;
			this->tInserLbl1->BackColor = System::Drawing::Color::Black;
			this->tInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl1->ForeColor = System::Drawing::Color::White;
			this->tInserLbl1->Location = System::Drawing::Point(3, 3);
			this->tInserLbl1->Name = L"tInserLbl1";
			this->tInserLbl1->Size = System::Drawing::Size(195, 30);
			this->tInserLbl1->TabIndex = 25;
			this->tInserLbl1->Text = L"Código Tratamiento";
			// 
			// tInserTxtbx2
			// 
			this->tInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->tInserTxtbx2->Name = L"tInserTxtbx2";
			this->tInserTxtbx2->Size = System::Drawing::Size(204, 33);
			this->tInserTxtbx2->TabIndex = 1;
			// 
			// tInserTxtbx1
			// 
			this->tInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->tInserTxtbx1->Name = L"tInserTxtbx1";
			this->tInserTxtbx1->Size = System::Drawing::Size(207, 33);
			this->tInserTxtbx1->TabIndex = 0;
			// 
			// pmInser
			// 
			this->pmInser->AutoScroll = true;
			this->pmInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmInser->Controls->Add(this->bmInsertar);
			this->pmInser->Controls->Add(this->mInserTxtbx4);
			this->pmInser->Controls->Add(this->mInserLbl4);
			this->pmInser->Controls->Add(this->mInserTxtbx3);
			this->pmInser->Controls->Add(this->mInserLbl3);
			this->pmInser->Controls->Add(this->mInserLbl2);
			this->pmInser->Controls->Add(this->mInserLbl1);
			this->pmInser->Controls->Add(this->mInserTxtbx2);
			this->pmInser->Controls->Add(this->mInserTxtbx1);
			this->pmInser->ForeColor = System::Drawing::Color::White;
			this->pmInser->Location = System::Drawing::Point(383, 388);
			this->pmInser->Name = L"pmInser";
			this->pmInser->Size = System::Drawing::Size(222, 145);
			this->pmInser->TabIndex = 44;
			this->pmInser->Visible = false;
			// 
			// bmInsertar
			// 
			this->bmInsertar->BackColor = System::Drawing::Color::MidnightBlue;
			this->bmInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmInsertar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->bmInsertar->Location = System::Drawing::Point(-3, 283);
			this->bmInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmInsertar->Name = L"bmInsertar";
			this->bmInsertar->Size = System::Drawing::Size(208, 45);
			this->bmInsertar->TabIndex = 48;
			this->bmInsertar->Text = L"Insertar";
			this->bmInsertar->UseVisualStyleBackColor = false;
			this->bmInsertar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmInsertar_Click);
			// 
			// mInserTxtbx4
			// 
			this->mInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->mInserTxtbx4->Name = L"mInserTxtbx4";
			this->mInserTxtbx4->Size = System::Drawing::Size(205, 33);
			this->mInserTxtbx4->TabIndex = 31;
			// 
			// mInserLbl4
			// 
			this->mInserLbl4->AutoSize = true;
			this->mInserLbl4->BackColor = System::Drawing::Color::Black;
			this->mInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl4->ForeColor = System::Drawing::Color::White;
			this->mInserLbl4->Location = System::Drawing::Point(12, 218);
			this->mInserLbl4->Name = L"mInserLbl4";
			this->mInserLbl4->Size = System::Drawing::Size(187, 30);
			this->mInserLbl4->TabIndex = 29;
			this->mInserLbl4->Text = L"Cantidad Recetada";
			// 
			// mInserTxtbx3
			// 
			this->mInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->mInserTxtbx3->Name = L"mInserTxtbx3";
			this->mInserTxtbx3->Size = System::Drawing::Size(205, 33);
			this->mInserTxtbx3->TabIndex = 28;
			// 
			// mInserLbl3
			// 
			this->mInserLbl3->AutoSize = true;
			this->mInserLbl3->BackColor = System::Drawing::Color::Black;
			this->mInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl3->ForeColor = System::Drawing::Color::White;
			this->mInserLbl3->Location = System::Drawing::Point(0, 154);
			this->mInserLbl3->Name = L"mInserLbl3";
			this->mInserLbl3->Size = System::Drawing::Size(205, 25);
			this->mInserLbl3->TabIndex = 27;
			this->mInserLbl3->Text = L"Lista de Medicamentos";
			// 
			// mInserLbl2
			// 
			this->mInserLbl2->AutoSize = true;
			this->mInserLbl2->BackColor = System::Drawing::Color::Black;
			this->mInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl2->ForeColor = System::Drawing::Color::White;
			this->mInserLbl2->Location = System::Drawing::Point(18, 79);
			this->mInserLbl2->Name = L"mInserLbl2";
			this->mInserLbl2->Size = System::Drawing::Size(172, 25);
			this->mInserLbl2->TabIndex = 26;
			this->mInserLbl2->Text = L"Fecha Última Visita";
			// 
			// mInserLbl1
			// 
			this->mInserLbl1->AutoSize = true;
			this->mInserLbl1->BackColor = System::Drawing::Color::Black;
			this->mInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl1->ForeColor = System::Drawing::Color::White;
			this->mInserLbl1->Location = System::Drawing::Point(51, 3);
			this->mInserLbl1->Name = L"mInserLbl1";
			this->mInserLbl1->Size = System::Drawing::Size(105, 30);
			this->mInserLbl1->TabIndex = 25;
			this->mInserLbl1->Text = L"ID Animal";
			// 
			// mInserTxtbx2
			// 
			this->mInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->mInserTxtbx2->Name = L"mInserTxtbx2";
			this->mInserTxtbx2->Size = System::Drawing::Size(205, 33);
			this->mInserTxtbx2->TabIndex = 1;
			// 
			// mInserTxtbx1
			// 
			this->mInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->mInserTxtbx1->Name = L"mInserTxtbx1";
			this->mInserTxtbx1->Size = System::Drawing::Size(208, 33);
			this->mInserTxtbx1->TabIndex = 0;
			// 
			// ptBusq
			// 
			this->ptBusq->AutoScroll = true;
			this->ptBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ptBusq->Controls->Add(this->btBuscar);
			this->ptBusq->Controls->Add(this->tBusqLbl1);
			this->ptBusq->Controls->Add(this->tBusqTxtbx1);
			this->ptBusq->ForeColor = System::Drawing::Color::White;
			this->ptBusq->Location = System::Drawing::Point(793, 195);
			this->ptBusq->Name = L"ptBusq";
			this->ptBusq->Size = System::Drawing::Size(213, 121);
			this->ptBusq->TabIndex = 45;
			this->ptBusq->Visible = false;
			// 
			// btBuscar
			// 
			this->btBuscar->BackColor = System::Drawing::Color::MidnightBlue;
			this->btBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBuscar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->btBuscar->Location = System::Drawing::Point(-1, 74);
			this->btBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btBuscar->Name = L"btBuscar";
			this->btBuscar->Size = System::Drawing::Size(213, 45);
			this->btBuscar->TabIndex = 48;
			this->btBuscar->Text = L"Buscar";
			this->btBuscar->UseVisualStyleBackColor = false;
			this->btBuscar->Click += gcnew System::EventHandler(this, &SubMenuClnc::btBuscar_Click);
			// 
			// tBusqLbl1
			// 
			this->tBusqLbl1->AutoSize = true;
			this->tBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->tBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->tBusqLbl1->Location = System::Drawing::Point(13, 4);
			this->tBusqLbl1->Name = L"tBusqLbl1";
			this->tBusqLbl1->Size = System::Drawing::Size(195, 30);
			this->tBusqLbl1->TabIndex = 25;
			this->tBusqLbl1->Text = L"Código Tratamiento";
			// 
			// tBusqTxtbx1
			// 
			this->tBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->tBusqTxtbx1->Name = L"tBusqTxtbx1";
			this->tBusqTxtbx1->Size = System::Drawing::Size(213, 33);
			this->tBusqTxtbx1->TabIndex = 0;
			// 
			// pmBusq
			// 
			this->pmBusq->AutoScroll = true;
			this->pmBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmBusq->Controls->Add(this->bmBuscar);
			this->pmBusq->Controls->Add(this->mBusqLbl1);
			this->pmBusq->Controls->Add(this->mBusqTxtbx1);
			this->pmBusq->ForeColor = System::Drawing::Color::White;
			this->pmBusq->Location = System::Drawing::Point(793, 394);
			this->pmBusq->Name = L"pmBusq";
			this->pmBusq->Size = System::Drawing::Size(208, 129);
			this->pmBusq->TabIndex = 46;
			this->pmBusq->Visible = false;
			// 
			// bmBuscar
			// 
			this->bmBuscar->BackColor = System::Drawing::Color::MidnightBlue;
			this->bmBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmBuscar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->bmBuscar->Location = System::Drawing::Point(0, 84);
			this->bmBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmBuscar->Name = L"bmBuscar";
			this->bmBuscar->Size = System::Drawing::Size(208, 45);
			this->bmBuscar->TabIndex = 49;
			this->bmBuscar->Text = L"Buscar";
			this->bmBuscar->UseVisualStyleBackColor = false;
			this->bmBuscar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmBuscar_Click);
			// 
			// mBusqLbl1
			// 
			this->mBusqLbl1->AutoSize = true;
			this->mBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->mBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->mBusqLbl1->Location = System::Drawing::Point(13, 9);
			this->mBusqLbl1->Name = L"mBusqLbl1";
			this->mBusqLbl1->Size = System::Drawing::Size(192, 30);
			this->mBusqLbl1->TabIndex = 25;
			this->mBusqLbl1->Text = L"Código Medicacion";
			// 
			// mBusqTxtbx1
			// 
			this->mBusqTxtbx1->Location = System::Drawing::Point(-1, 51);
			this->mBusqTxtbx1->Name = L"mBusqTxtbx1";
			this->mBusqTxtbx1->Size = System::Drawing::Size(208, 33);
			this->mBusqTxtbx1->TabIndex = 0;
			// 
			// SubMenuClnc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Controls->Add(this->pmBusq);
			this->Controls->Add(this->ptBusq);
			this->Controls->Add(this->pmInser);
			this->Controls->Add(this->ptInser);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->pMeds);
			this->Controls->Add(this->pTrat);
			this->Controls->Add(this->lblMeds);
			this->Controls->Add(this->lblTrat);
			this->Controls->Add(this->bMeds);
			this->Controls->Add(this->bTrat);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SubMenuClnc";
			this->Text = L"SubMenuClnc";
			this->Load += gcnew System::EventHandler(this, &SubMenuClnc::SubMenuClnc_Load);
			this->pMeds->ResumeLayout(false);
			this->pTrat->ResumeLayout(false);
			this->ptInser->ResumeLayout(false);
			this->ptInser->PerformLayout();
			this->pmInser->ResumeLayout(false);
			this->pmInser->PerformLayout();
			this->ptBusq->ResumeLayout(false);
			this->ptBusq->PerformLayout();
			this->pmBusq->ResumeLayout(false);
			this->pmBusq->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuClnc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bTrat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pTrat->Show();
		this->btInser->Show();
		this->btModif->Show();
		this->btBusq->Show();
		this->btElim->Show();
	}
	private: System::Void bMeds_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pMeds->Show();
		this->bmInser->Show();
		this->bmModif->Show();
		this->bmBusq->Show();
		this->bmElim->Show();
	}
	// *************
	private: System::Void btInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ptInser->Show();
	}
	private: System::Void btModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ptBusq->Show();
	}
	private: System::Void btElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// *************
	private: System::Void bmInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmInser->Show();
	}
	private: System::Void bmModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmBusq->Show();
	}
	private: System::Void bmElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// *************
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();
	}
private: System::Void bmInsercion_Click(System::Object^ sender, System::EventArgs^ e) {
}
							   /*	FUNCIONES  */

	private: System::Void btInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codT = this->tInserTxtbx1->Text;
		String^ nombre = this->tInserTxtbx2->Text;
		String^ precioUnitario = this->tInserTxtbx3->Text;
		String^ cantidad = this->tInserTxtbx4->Text;


	}
	private: System::Void bmInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idAnimal = this->mInserTxtbx1->Text;
		String^ fuv = this->mInserTxtbx2->Text;
		String^ lista = this->mInserTxtbx3->Text;
		String^ cantidadRecetada = this->mInserTxtbx4->Text;

	}/*
	private: System::Void btModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bmModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}*/
	private: System::Void btBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codT = this->tBusqTxtbx1->Text;
	}
	private: System::Void bmBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codM = this->mBusqTxtbx1->Text;
	}/*
	private: System::Void bcElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bmElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}*/
};
}
