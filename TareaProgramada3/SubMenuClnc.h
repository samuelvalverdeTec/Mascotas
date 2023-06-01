#pragma once

#include "RNTratamiento.h"
#include "AAMedicacion.h"
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

	public: RNTratamiento* arbolTratamientos;
	public: AAMedicacion* arbolMedicaciones;

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
	private: System::Windows::Forms::Panel^ ptModif;
	private: System::Windows::Forms::Label^ tModifLbl2;
	private: System::Windows::Forms::TextBox^ tModifTxtbx2;
	private: System::Windows::Forms::Button^ btModificar;
	private: System::Windows::Forms::Label^ tModifLbl1;
	private: System::Windows::Forms::TextBox^ tModifTxtbx1;
	private: System::Windows::Forms::Panel^ pmElim;
	private: System::Windows::Forms::Button^ bmEliminar;
	private: System::Windows::Forms::Label^ mElimLbl1;
	private: System::Windows::Forms::TextBox^ mElimTxtbx1;
	private: System::Windows::Forms::Panel^ ptElim;
	private: System::Windows::Forms::Button^ btEliminar;
	private: System::Windows::Forms::Label^ tElimLbl1;
	private: System::Windows::Forms::TextBox^ tElimTxtbx1;
	private: System::Windows::Forms::Panel^ pmModif;
	private: System::Windows::Forms::TextBox^ mModifTxtbx5;
	private: System::Windows::Forms::Label^ mModifLbl5;
	private: System::Windows::Forms::Label^ mModifLbl4;
	private: System::Windows::Forms::Button^ bmModificar;
	private: System::Windows::Forms::TextBox^ mModifTxtbx4;
	private: System::Windows::Forms::Label^ mModifLbl3;
	private: System::Windows::Forms::TextBox^ mModifTxtbx3;
	private: System::Windows::Forms::Label^ mModifLbl1;
	private: System::Windows::Forms::Label^ mModifLbl2;
	private: System::Windows::Forms::TextBox^ mModifTxtbx2;
	private: System::Windows::Forms::TextBox^ mModifTxtbx1;

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
			this->ptModif = (gcnew System::Windows::Forms::Panel());
			this->tModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->tModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->btModificar = (gcnew System::Windows::Forms::Button());
			this->tModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->tModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmElim = (gcnew System::Windows::Forms::Panel());
			this->bmEliminar = (gcnew System::Windows::Forms::Button());
			this->mElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->mElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->ptElim = (gcnew System::Windows::Forms::Panel());
			this->btEliminar = (gcnew System::Windows::Forms::Button());
			this->tElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->tElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmModif = (gcnew System::Windows::Forms::Panel());
			this->mModifTxtbx5 = (gcnew System::Windows::Forms::TextBox());
			this->mModifLbl5 = (gcnew System::Windows::Forms::Label());
			this->mModifLbl4 = (gcnew System::Windows::Forms::Label());
			this->bmModificar = (gcnew System::Windows::Forms::Button());
			this->mModifTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->mModifLbl3 = (gcnew System::Windows::Forms::Label());
			this->mModifTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->mModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->mModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->mModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->mModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pMeds->SuspendLayout();
			this->pTrat->SuspendLayout();
			this->ptInser->SuspendLayout();
			this->pmInser->SuspendLayout();
			this->ptBusq->SuspendLayout();
			this->pmBusq->SuspendLayout();
			this->ptModif->SuspendLayout();
			this->pmElim->SuspendLayout();
			this->ptElim->SuspendLayout();
			this->pmModif->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->titleMenu->Location = System::Drawing::Point(33, 76);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(167, 65);
			this->titleMenu->TabIndex = 2;
			this->titleMenu->Text = L"Cl�nica";
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
			this->pMeds->Location = System::Drawing::Point(171, 374);
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
			this->bmElim->Text = L"-> Eliminaci�n";
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
			this->bmBusq->Text = L"-> B�squeda";
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
			this->bmModif->Text = L"-> Modificaci�n";
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
			this->bmInser->Text = L"-> Inserci�n";
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
			this->pTrat->Location = System::Drawing::Point(171, 195);
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
			this->btElim->Text = L"-> Eliminaci�n";
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
			this->btBusq->Text = L"-> B�squeda";
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
			this->btModif->Text = L"-> Modificaci�n";
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
			this->btInser->Text = L"-> Inserci�n";
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
			this->lblMeds->Location = System::Drawing::Point(39, 487);
			this->lblMeds->Name = L"lblMeds";
			this->lblMeds->Size = System::Drawing::Size(120, 30);
			this->lblMeds->TabIndex = 24;
			this->lblMeds->Text = L"Medicaci�n";
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
			this->bMeds->Location = System::Drawing::Point(44, 374);
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
			this->ptInser->Location = System::Drawing::Point(366, 164);
			this->ptInser->Name = L"ptInser";
			this->ptInser->Size = System::Drawing::Size(203, 145);
			this->ptInser->TabIndex = 43;
			this->ptInser->Visible = false;
			// 
			// tInserTxtbx4
			// 
			this->tInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->tInserTxtbx4->Name = L"tInserTxtbx4";
			this->tInserTxtbx4->Size = System::Drawing::Size(185, 33);
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
			this->btInsertar->Size = System::Drawing::Size(186, 45);
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
			this->tInserLbl4->Location = System::Drawing::Point(36, 217);
			this->tInserLbl4->Name = L"tInserLbl4";
			this->tInserLbl4->Size = System::Drawing::Size(96, 30);
			this->tInserLbl4->TabIndex = 29;
			this->tInserLbl4->Text = L"Cantidad";
			// 
			// tInserTxtbx3
			// 
			this->tInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->tInserTxtbx3->Name = L"tInserTxtbx3";
			this->tInserTxtbx3->Size = System::Drawing::Size(185, 33);
			this->tInserTxtbx3->TabIndex = 28;
			// 
			// tInserLbl3
			// 
			this->tInserLbl3->AutoSize = true;
			this->tInserLbl3->BackColor = System::Drawing::Color::Black;
			this->tInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl3->ForeColor = System::Drawing::Color::White;
			this->tInserLbl3->Location = System::Drawing::Point(18, 149);
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
			this->tInserLbl2->Location = System::Drawing::Point(52, 79);
			this->tInserLbl2->Name = L"tInserLbl2";
			this->tInserLbl2->Size = System::Drawing::Size(89, 30);
			this->tInserLbl2->TabIndex = 26;
			this->tInserLbl2->Text = L"Nombre";
			// 
			// tInserLbl1
			// 
			this->tInserLbl1->AutoSize = true;
			this->tInserLbl1->BackColor = System::Drawing::Color::Black;
			this->tInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tInserLbl1->ForeColor = System::Drawing::Color::White;
			this->tInserLbl1->Location = System::Drawing::Point(5, 11);
			this->tInserLbl1->Name = L"tInserLbl1";
			this->tInserLbl1->Size = System::Drawing::Size(178, 25);
			this->tInserLbl1->TabIndex = 25;
			this->tInserLbl1->Text = L"C�digo Tratamiento";
			// 
			// tInserTxtbx2
			// 
			this->tInserTxtbx2->Location = System::Drawing::Point(0, 112);
			this->tInserTxtbx2->Name = L"tInserTxtbx2";
			this->tInserTxtbx2->Size = System::Drawing::Size(185, 33);
			this->tInserTxtbx2->TabIndex = 1;
			// 
			// tInserTxtbx1
			// 
			this->tInserTxtbx1->Location = System::Drawing::Point(-1, 43);
			this->tInserTxtbx1->Name = L"tInserTxtbx1";
			this->tInserTxtbx1->Size = System::Drawing::Size(186, 33);
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
			this->pmInser->Location = System::Drawing::Point(360, 409);
			this->pmInser->Name = L"pmInser";
			this->pmInser->Size = System::Drawing::Size(203, 145);
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
			this->bmInsertar->Size = System::Drawing::Size(188, 45);
			this->bmInsertar->TabIndex = 48;
			this->bmInsertar->Text = L"Insertar";
			this->bmInsertar->UseVisualStyleBackColor = false;
			this->bmInsertar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmInsertar_Click);
			// 
			// mInserTxtbx4
			// 
			this->mInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->mInserTxtbx4->Name = L"mInserTxtbx4";
			this->mInserTxtbx4->Size = System::Drawing::Size(185, 33);
			this->mInserTxtbx4->TabIndex = 31;
			// 
			// mInserLbl4
			// 
			this->mInserLbl4->AutoSize = true;
			this->mInserLbl4->BackColor = System::Drawing::Color::Black;
			this->mInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl4->ForeColor = System::Drawing::Color::White;
			this->mInserLbl4->Location = System::Drawing::Point(3, 218);
			this->mInserLbl4->Name = L"mInserLbl4";
			this->mInserLbl4->Size = System::Drawing::Size(169, 25);
			this->mInserLbl4->TabIndex = 29;
			this->mInserLbl4->Text = L"Cantidad Recetada";
			// 
			// mInserTxtbx3
			// 
			this->mInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->mInserTxtbx3->Name = L"mInserTxtbx3";
			this->mInserTxtbx3->Size = System::Drawing::Size(185, 33);
			this->mInserTxtbx3->TabIndex = 28;
			// 
			// mInserLbl3
			// 
			this->mInserLbl3->AutoSize = true;
			this->mInserLbl3->BackColor = System::Drawing::Color::Black;
			this->mInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl3->ForeColor = System::Drawing::Color::White;
			this->mInserLbl3->Location = System::Drawing::Point(4, 154);
			this->mInserLbl3->Name = L"mInserLbl3";
			this->mInserLbl3->Size = System::Drawing::Size(169, 21);
			this->mInserLbl3->TabIndex = 27;
			this->mInserLbl3->Text = L"Lista de Medicamentos";
			// 
			// mInserLbl2
			// 
			this->mInserLbl2->AutoSize = true;
			this->mInserLbl2->BackColor = System::Drawing::Color::Black;
			this->mInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl2->ForeColor = System::Drawing::Color::White;
			this->mInserLbl2->Location = System::Drawing::Point(19, 84);
			this->mInserLbl2->Name = L"mInserLbl2";
			this->mInserLbl2->Size = System::Drawing::Size(142, 21);
			this->mInserLbl2->TabIndex = 26;
			this->mInserLbl2->Text = L"Fecha �ltima Visita";
			// 
			// mInserLbl1
			// 
			this->mInserLbl1->AutoSize = true;
			this->mInserLbl1->BackColor = System::Drawing::Color::Black;
			this->mInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl1->ForeColor = System::Drawing::Color::White;
			this->mInserLbl1->Location = System::Drawing::Point(36, 6);
			this->mInserLbl1->Name = L"mInserLbl1";
			this->mInserLbl1->Size = System::Drawing::Size(105, 30);
			this->mInserLbl1->TabIndex = 25;
			this->mInserLbl1->Text = L"ID Animal";
			// 
			// mInserTxtbx2
			// 
			this->mInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->mInserTxtbx2->Name = L"mInserTxtbx2";
			this->mInserTxtbx2->Size = System::Drawing::Size(185, 33);
			this->mInserTxtbx2->TabIndex = 1;
			// 
			// mInserTxtbx1
			// 
			this->mInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->mInserTxtbx1->Name = L"mInserTxtbx1";
			this->mInserTxtbx1->Size = System::Drawing::Size(188, 33);
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
			this->ptBusq->Location = System::Drawing::Point(777, 160);
			this->ptBusq->Name = L"ptBusq";
			this->ptBusq->Size = System::Drawing::Size(183, 121);
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
			this->btBuscar->Size = System::Drawing::Size(182, 45);
			this->btBuscar->TabIndex = 48;
			this->btBuscar->Text = L"Buscar";
			this->btBuscar->UseVisualStyleBackColor = false;
			this->btBuscar->Click += gcnew System::EventHandler(this, &SubMenuClnc::btBuscar_Click);
			// 
			// tBusqLbl1
			// 
			this->tBusqLbl1->AutoSize = true;
			this->tBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->tBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->tBusqLbl1->Location = System::Drawing::Point(3, 4);
			this->tBusqLbl1->Name = L"tBusqLbl1";
			this->tBusqLbl1->Size = System::Drawing::Size(178, 25);
			this->tBusqLbl1->TabIndex = 25;
			this->tBusqLbl1->Text = L"C�digo Tratamiento";
			// 
			// tBusqTxtbx1
			// 
			this->tBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->tBusqTxtbx1->Name = L"tBusqTxtbx1";
			this->tBusqTxtbx1->Size = System::Drawing::Size(181, 33);
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
			this->pmBusq->Location = System::Drawing::Point(777, 409);
			this->pmBusq->Name = L"pmBusq";
			this->pmBusq->Size = System::Drawing::Size(186, 129);
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
			this->bmBuscar->Size = System::Drawing::Size(186, 45);
			this->bmBuscar->TabIndex = 49;
			this->bmBuscar->Text = L"Buscar";
			this->bmBuscar->UseVisualStyleBackColor = false;
			this->bmBuscar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmBuscar_Click);
			// 
			// mBusqLbl1
			// 
			this->mBusqLbl1->AutoSize = true;
			this->mBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->mBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->mBusqLbl1->Location = System::Drawing::Point(3, 13);
			this->mBusqLbl1->Name = L"mBusqLbl1";
			this->mBusqLbl1->Size = System::Drawing::Size(176, 25);
			this->mBusqLbl1->TabIndex = 25;
			this->mBusqLbl1->Text = L"C�digo Medicacion";
			// 
			// mBusqTxtbx1
			// 
			this->mBusqTxtbx1->Location = System::Drawing::Point(-1, 51);
			this->mBusqTxtbx1->Name = L"mBusqTxtbx1";
			this->mBusqTxtbx1->Size = System::Drawing::Size(187, 33);
			this->mBusqTxtbx1->TabIndex = 0;
			// 
			// ptModif
			// 
			this->ptModif->AutoScroll = true;
			this->ptModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ptModif->Controls->Add(this->tModifLbl2);
			this->ptModif->Controls->Add(this->tModifTxtbx2);
			this->ptModif->Controls->Add(this->btModificar);
			this->ptModif->Controls->Add(this->tModifLbl1);
			this->ptModif->Controls->Add(this->tModifTxtbx1);
			this->ptModif->ForeColor = System::Drawing::Color::White;
			this->ptModif->Location = System::Drawing::Point(575, 164);
			this->ptModif->Name = L"ptModif";
			this->ptModif->Size = System::Drawing::Size(199, 152);
			this->ptModif->TabIndex = 49;
			this->ptModif->Visible = false;
			// 
			// tModifLbl2
			// 
			this->tModifLbl2->AutoSize = true;
			this->tModifLbl2->BackColor = System::Drawing::Color::Black;
			this->tModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tModifLbl2->ForeColor = System::Drawing::Color::White;
			this->tModifLbl2->Location = System::Drawing::Point(60, 83);
			this->tModifLbl2->Name = L"tModifLbl2";
			this->tModifLbl2->Size = System::Drawing::Size(65, 25);
			this->tModifLbl2->TabIndex = 50;
			this->tModifLbl2->Text = L"Precio";
			// 
			// tModifTxtbx2
			// 
			this->tModifTxtbx2->Location = System::Drawing::Point(0, 119);
			this->tModifTxtbx2->Name = L"tModifTxtbx2";
			this->tModifTxtbx2->Size = System::Drawing::Size(181, 33);
			this->tModifTxtbx2->TabIndex = 49;
			// 
			// btModificar
			// 
			this->btModificar->BackColor = System::Drawing::Color::MidnightBlue;
			this->btModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btModificar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->btModificar->Location = System::Drawing::Point(1, 149);
			this->btModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btModificar->Name = L"btModificar";
			this->btModificar->Size = System::Drawing::Size(180, 45);
			this->btModificar->TabIndex = 48;
			this->btModificar->Text = L"Modificar";
			this->btModificar->UseVisualStyleBackColor = false;
			this->btModificar->Click += gcnew System::EventHandler(this, &SubMenuClnc::btModificar_Click);
			// 
			// tModifLbl1
			// 
			this->tModifLbl1->AutoSize = true;
			this->tModifLbl1->BackColor = System::Drawing::Color::Black;
			this->tModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tModifLbl1->ForeColor = System::Drawing::Color::White;
			this->tModifLbl1->Location = System::Drawing::Point(3, 7);
			this->tModifLbl1->Name = L"tModifLbl1";
			this->tModifLbl1->Size = System::Drawing::Size(178, 25);
			this->tModifLbl1->TabIndex = 25;
			this->tModifLbl1->Text = L"C�digo Tratamiento";
			// 
			// tModifTxtbx1
			// 
			this->tModifTxtbx1->Location = System::Drawing::Point(0, 43);
			this->tModifTxtbx1->Name = L"tModifTxtbx1";
			this->tModifTxtbx1->Size = System::Drawing::Size(181, 33);
			this->tModifTxtbx1->TabIndex = 0;
			// 
			// pmElim
			// 
			this->pmElim->AutoScroll = true;
			this->pmElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmElim->Controls->Add(this->bmEliminar);
			this->pmElim->Controls->Add(this->mElimLbl1);
			this->pmElim->Controls->Add(this->mElimTxtbx1);
			this->pmElim->ForeColor = System::Drawing::Color::White;
			this->pmElim->Location = System::Drawing::Point(969, 409);
			this->pmElim->Name = L"pmElim";
			this->pmElim->Size = System::Drawing::Size(186, 129);
			this->pmElim->TabIndex = 51;
			this->pmElim->Visible = false;
			// 
			// bmEliminar
			// 
			this->bmEliminar->BackColor = System::Drawing::Color::MidnightBlue;
			this->bmEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmEliminar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->bmEliminar->Location = System::Drawing::Point(0, 84);
			this->bmEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmEliminar->Name = L"bmEliminar";
			this->bmEliminar->Size = System::Drawing::Size(186, 45);
			this->bmEliminar->TabIndex = 49;
			this->bmEliminar->Text = L"Eliminar";
			this->bmEliminar->UseVisualStyleBackColor = false;
			this->bmEliminar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmEliminar_Click);
			// 
			// mElimLbl1
			// 
			this->mElimLbl1->AutoSize = true;
			this->mElimLbl1->BackColor = System::Drawing::Color::Black;
			this->mElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mElimLbl1->ForeColor = System::Drawing::Color::White;
			this->mElimLbl1->Location = System::Drawing::Point(3, 13);
			this->mElimLbl1->Name = L"mElimLbl1";
			this->mElimLbl1->Size = System::Drawing::Size(176, 25);
			this->mElimLbl1->TabIndex = 25;
			this->mElimLbl1->Text = L"C�digo Medicacion";
			// 
			// mElimTxtbx1
			// 
			this->mElimTxtbx1->Location = System::Drawing::Point(-1, 51);
			this->mElimTxtbx1->Name = L"mElimTxtbx1";
			this->mElimTxtbx1->Size = System::Drawing::Size(187, 33);
			this->mElimTxtbx1->TabIndex = 0;
			// 
			// ptElim
			// 
			this->ptElim->AutoScroll = true;
			this->ptElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ptElim->Controls->Add(this->btEliminar);
			this->ptElim->Controls->Add(this->tElimLbl1);
			this->ptElim->Controls->Add(this->tElimTxtbx1);
			this->ptElim->ForeColor = System::Drawing::Color::White;
			this->ptElim->Location = System::Drawing::Point(972, 160);
			this->ptElim->Name = L"ptElim";
			this->ptElim->Size = System::Drawing::Size(183, 121);
			this->ptElim->TabIndex = 50;
			this->ptElim->Visible = false;
			// 
			// btEliminar
			// 
			this->btEliminar->BackColor = System::Drawing::Color::MidnightBlue;
			this->btEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btEliminar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->btEliminar->Location = System::Drawing::Point(-1, 74);
			this->btEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btEliminar->Name = L"btEliminar";
			this->btEliminar->Size = System::Drawing::Size(182, 45);
			this->btEliminar->TabIndex = 48;
			this->btEliminar->Text = L"Eliminar";
			this->btEliminar->UseVisualStyleBackColor = false;
			this->btEliminar->Click += gcnew System::EventHandler(this, &SubMenuClnc::btEliminar_Click);
			// 
			// tElimLbl1
			// 
			this->tElimLbl1->AutoSize = true;
			this->tElimLbl1->BackColor = System::Drawing::Color::Black;
			this->tElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tElimLbl1->ForeColor = System::Drawing::Color::White;
			this->tElimLbl1->Location = System::Drawing::Point(3, 4);
			this->tElimLbl1->Name = L"tElimLbl1";
			this->tElimLbl1->Size = System::Drawing::Size(178, 25);
			this->tElimLbl1->TabIndex = 25;
			this->tElimLbl1->Text = L"C�digo Tratamiento";
			// 
			// tElimTxtbx1
			// 
			this->tElimTxtbx1->Location = System::Drawing::Point(0, 43);
			this->tElimTxtbx1->Name = L"tElimTxtbx1";
			this->tElimTxtbx1->Size = System::Drawing::Size(181, 33);
			this->tElimTxtbx1->TabIndex = 0;
			// 
			// pmModif
			// 
			this->pmModif->AutoScroll = true;
			this->pmModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmModif->Controls->Add(this->mModifTxtbx5);
			this->pmModif->Controls->Add(this->mModifLbl5);
			this->pmModif->Controls->Add(this->mModifLbl4);
			this->pmModif->Controls->Add(this->bmModificar);
			this->pmModif->Controls->Add(this->mModifTxtbx4);
			this->pmModif->Controls->Add(this->mModifLbl3);
			this->pmModif->Controls->Add(this->mModifTxtbx3);
			this->pmModif->Controls->Add(this->mModifLbl1);
			this->pmModif->Controls->Add(this->mModifLbl2);
			this->pmModif->Controls->Add(this->mModifTxtbx2);
			this->pmModif->Controls->Add(this->mModifTxtbx1);
			this->pmModif->ForeColor = System::Drawing::Color::White;
			this->pmModif->Location = System::Drawing::Point(569, 409);
			this->pmModif->Name = L"pmModif";
			this->pmModif->Size = System::Drawing::Size(202, 146);
			this->pmModif->TabIndex = 49;
			this->pmModif->Visible = false;
			// 
			// mModifTxtbx5
			// 
			this->mModifTxtbx5->Location = System::Drawing::Point(-2, 319);
			this->mModifTxtbx5->Name = L"mModifTxtbx5";
			this->mModifTxtbx5->Size = System::Drawing::Size(185, 33);
			this->mModifTxtbx5->TabIndex = 51;
			// 
			// mModifLbl5
			// 
			this->mModifLbl5->AutoSize = true;
			this->mModifLbl5->BackColor = System::Drawing::Color::Black;
			this->mModifLbl5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl5->ForeColor = System::Drawing::Color::White;
			this->mModifLbl5->Location = System::Drawing::Point(33, 291);
			this->mModifLbl5->Name = L"mModifLbl5";
			this->mModifLbl5->Size = System::Drawing::Size(105, 25);
			this->mModifLbl5->TabIndex = 50;
			this->mModifLbl5->Text = L"Costo Total";
			// 
			// mModifLbl4
			// 
			this->mModifLbl4->AutoSize = true;
			this->mModifLbl4->BackColor = System::Drawing::Color::Black;
			this->mModifLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl4->ForeColor = System::Drawing::Color::White;
			this->mModifLbl4->Location = System::Drawing::Point(52, 222);
			this->mModifLbl4->Name = L"mModifLbl4";
			this->mModifLbl4->Size = System::Drawing::Size(65, 25);
			this->mModifLbl4->TabIndex = 49;
			this->mModifLbl4->Text = L"Precio";
			// 
			// bmModificar
			// 
			this->bmModificar->BackColor = System::Drawing::Color::MidnightBlue;
			this->bmModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmModificar->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->bmModificar->Location = System::Drawing::Point(0, 351);
			this->bmModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmModificar->Name = L"bmModificar";
			this->bmModificar->Size = System::Drawing::Size(183, 45);
			this->bmModificar->TabIndex = 48;
			this->bmModificar->Text = L"Modificar";
			this->bmModificar->UseVisualStyleBackColor = false;
			this->bmModificar->Click += gcnew System::EventHandler(this, &SubMenuClnc::bmModificar_Click);
			// 
			// mModifTxtbx4
			// 
			this->mModifTxtbx4->Location = System::Drawing::Point(0, 250);
			this->mModifTxtbx4->Name = L"mModifTxtbx4";
			this->mModifTxtbx4->Size = System::Drawing::Size(185, 33);
			this->mModifTxtbx4->TabIndex = 31;
			// 
			// mModifLbl3
			// 
			this->mModifLbl3->AutoSize = true;
			this->mModifLbl3->BackColor = System::Drawing::Color::Black;
			this->mModifLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl3->ForeColor = System::Drawing::Color::White;
			this->mModifLbl3->Location = System::Drawing::Point(40, 153);
			this->mModifLbl3->Name = L"mModifLbl3";
			this->mModifLbl3->Size = System::Drawing::Size(88, 25);
			this->mModifLbl3->TabIndex = 29;
			this->mModifLbl3->Text = L"Cantidad";
			// 
			// mModifTxtbx3
			// 
			this->mModifTxtbx3->Location = System::Drawing::Point(0, 182);
			this->mModifTxtbx3->Name = L"mModifTxtbx3";
			this->mModifTxtbx3->Size = System::Drawing::Size(185, 33);
			this->mModifTxtbx3->TabIndex = 28;
			// 
			// mModifLbl1
			// 
			this->mModifLbl1->AutoSize = true;
			this->mModifLbl1->BackColor = System::Drawing::Color::Black;
			this->mModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl1->ForeColor = System::Drawing::Color::White;
			this->mModifLbl1->Location = System::Drawing::Point(7, 8);
			this->mModifLbl1->Name = L"mModifLbl1";
			this->mModifLbl1->Size = System::Drawing::Size(176, 25);
			this->mModifLbl1->TabIndex = 26;
			this->mModifLbl1->Text = L"C�digo Medicacion";
			// 
			// mModifLbl2
			// 
			this->mModifLbl2->AutoSize = true;
			this->mModifLbl2->BackColor = System::Drawing::Color::Black;
			this->mModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl2->ForeColor = System::Drawing::Color::White;
			this->mModifLbl2->Location = System::Drawing::Point(40, 76);
			this->mModifLbl2->Name = L"mModifLbl2";
			this->mModifLbl2->Size = System::Drawing::Size(105, 30);
			this->mModifLbl2->TabIndex = 25;
			this->mModifLbl2->Text = L"ID Animal";
			// 
			// mModifTxtbx2
			// 
			this->mModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->mModifTxtbx2->Name = L"mModifTxtbx2";
			this->mModifTxtbx2->Size = System::Drawing::Size(185, 33);
			this->mModifTxtbx2->TabIndex = 1;
			// 
			// mModifTxtbx1
			// 
			this->mModifTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->mModifTxtbx1->Name = L"mModifTxtbx1";
			this->mModifTxtbx1->Size = System::Drawing::Size(188, 33);
			this->mModifTxtbx1->TabIndex = 0;
			// 
			// SubMenuClnc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1180, 638);
			this->Controls->Add(this->pmModif);
			this->Controls->Add(this->pmElim);
			this->Controls->Add(this->ptModif);
			this->Controls->Add(this->ptElim);
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
			this->ptModif->ResumeLayout(false);
			this->ptModif->PerformLayout();
			this->pmElim->ResumeLayout(false);
			this->pmElim->PerformLayout();
			this->ptElim->ResumeLayout(false);
			this->ptElim->PerformLayout();
			this->pmModif->ResumeLayout(false);
			this->pmModif->PerformLayout();
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
		this->ptModif->Hide();
		this->ptBusq->Hide();
		this->ptElim->Hide();
	}
	private: System::Void btModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ptInser->Hide();
		this->ptModif->Show();
		this->ptBusq->Hide();
		this->ptElim->Hide();
	}
	private: System::Void btBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ptInser->Hide();
		this->ptModif->Hide();
		this->ptBusq->Show();
		this->ptElim->Hide();
	}
	private: System::Void btElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ptInser->Hide();
		this->ptModif->Hide();
		this->ptBusq->Hide();
		this->ptElim->Show();
	}
	// *************
	private: System::Void bmInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmInser->Show();
		this->pmModif->Hide();
		this->pmBusq->Hide();
		this->pmElim->Hide();
	}
	private: System::Void bmModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmInser->Hide();
		this->pmModif->Show();
		this->pmBusq->Hide();
		this->pmElim->Hide();
	}
	private: System::Void bmBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmInser->Hide();
		this->pmModif->Hide();
		this->pmBusq->Show();
		this->pmElim->Hide();
	}
	private: System::Void bmElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pmInser->Hide();
		this->pmModif->Hide();
		this->pmBusq->Hide();
		this->pmElim->Show();
	}
	// *************
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();
	}
private: System::Void bmInsercion_Click(System::Object^ sender, System::EventArgs^ e) {
}
			/*	FUNCIONES TRATAMIENTO  */

	private: System::Void btInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codT = this->tInserTxtbx1->Text;
		String^ nombre = this->tInserTxtbx2->Text;
		String^ precioUnitario = this->tInserTxtbx3->Text;
		String^ cantidad = this->tInserTxtbx4->Text;
	}
	private: System::Void btModificar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codT = this->tBusqTxtbx1->Text;
	}
	private: System::Void btEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}

		   /*	FUNCIONES MEDICACION  */

	private: System::Void bmInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ idAnimal = this->mInserTxtbx1->Text;
		String^ fuv = this->mInserTxtbx2->Text;
		String^ lista = this->mInserTxtbx3->Text;
		String^ cantidadRecetada = this->mInserTxtbx4->Text;
	}
	private: System::Void bmModificar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bmBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codM = this->mBusqTxtbx1->Text;
	}
	private: System::Void bmEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
