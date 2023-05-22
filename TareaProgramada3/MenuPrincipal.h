#pragma once

#include "SubMenuLugs.h"
#include "SubMenuClnc.h"
#include "SubMenuFact.h"
#include "SubMenuSucs.h"
#include "SubMenuClts.h"

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Label^ subtitleMenu;
	private: System::Windows::Forms::Button^ bMainLugs;
	private: System::Windows::Forms::Button^ bMainClnc;
	protected:




	private: System::Windows::Forms::Button^ bMainFact;
	private: System::Windows::Forms::Button^ bMainSucs;
	private: System::Windows::Forms::Button^ bMainClts;


	private: System::Windows::Forms::Panel^ mainPanel;


	private: System::Windows::Forms::Button^ bMantenimiento;

	private: System::Windows::Forms::Button^ bReportes;
	private: System::Windows::Forms::Button^ bFacturacion;


	private: System::Windows::Forms::Button^ bAcercaDe;
	private: System::Windows::Forms::Button^ bSucursales;


	private: System::Windows::Forms::Button^ bContactos;
	private: System::Windows::Forms::Panel^ pMantenimiento;
	private: System::Windows::Forms::Panel^ pFacturacion;
	private: System::Windows::Forms::Panel^ pReportes;
	private: System::Windows::Forms::Panel^ pSucursales;
	private: System::Windows::Forms::Panel^ pAcercaDe;
	private: System::Windows::Forms::Panel^ pContactos;
	private: System::Windows::Forms::Label^ lblClnc;
	private: System::Windows::Forms::Label^ lblLugs;
	private: System::Windows::Forms::Label^ lblSucs;
	private: System::Windows::Forms::Label^ lblFact;
	private: System::Windows::Forms::Label^ lblClts;
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->subtitleMenu = (gcnew System::Windows::Forms::Label());
			this->bMainLugs = (gcnew System::Windows::Forms::Button());
			this->bMainClnc = (gcnew System::Windows::Forms::Button());
			this->bMainFact = (gcnew System::Windows::Forms::Button());
			this->bMainSucs = (gcnew System::Windows::Forms::Button());
			this->bMainClts = (gcnew System::Windows::Forms::Button());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->bContactos = (gcnew System::Windows::Forms::Button());
			this->bAcercaDe = (gcnew System::Windows::Forms::Button());
			this->bSucursales = (gcnew System::Windows::Forms::Button());
			this->bReportes = (gcnew System::Windows::Forms::Button());
			this->bFacturacion = (gcnew System::Windows::Forms::Button());
			this->bMantenimiento = (gcnew System::Windows::Forms::Button());
			this->pMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->pFacturacion = (gcnew System::Windows::Forms::Panel());
			this->pReportes = (gcnew System::Windows::Forms::Panel());
			this->pSucursales = (gcnew System::Windows::Forms::Panel());
			this->pAcercaDe = (gcnew System::Windows::Forms::Panel());
			this->pContactos = (gcnew System::Windows::Forms::Panel());
			this->lblClnc = (gcnew System::Windows::Forms::Label());
			this->lblLugs = (gcnew System::Windows::Forms::Label());
			this->lblSucs = (gcnew System::Windows::Forms::Label());
			this->lblFact = (gcnew System::Windows::Forms::Label());
			this->lblClts = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mainPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::White;
			this->titleMenu->Location = System::Drawing::Point(734, 310);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(381, 112);
			this->titleMenu->TabIndex = 0;
			this->titleMenu->Text = L"Fauna Life";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::titleMenu_Click);
			// 
			// subtitleMenu
			// 
			this->subtitleMenu->AutoSize = true;
			this->subtitleMenu->BackColor = System::Drawing::Color::Transparent;
			this->subtitleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleMenu->ForeColor = System::Drawing::Color::White;
			this->subtitleMenu->Location = System::Drawing::Point(12, 621);
			this->subtitleMenu->Name = L"subtitleMenu";
			this->subtitleMenu->Size = System::Drawing::Size(234, 20);
			this->subtitleMenu->TabIndex = 6;
			this->subtitleMenu->Text = L"Samuel Valverde y Erick Kauffmann";
			this->subtitleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->subtitleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::subtitleMenu_Click);
			// 
			// bMainLugs
			// 
			this->bMainLugs->BackColor = System::Drawing::Color::Transparent;
			this->bMainLugs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainLugs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainLugs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainLugs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainLugs.Image")));
			this->bMainLugs->Location = System::Drawing::Point(469, 453);
			this->bMainLugs->Name = L"bMainLugs";
			this->bMainLugs->Size = System::Drawing::Size(110, 110);
			this->bMainLugs->TabIndex = 1;
			this->bMainLugs->UseVisualStyleBackColor = false;
			this->bMainLugs->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainLugs_Click);
			// 
			// bMainClnc
			// 
			this->bMainClnc->BackColor = System::Drawing::Color::Transparent;
			this->bMainClnc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainClnc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainClnc->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainClnc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainClnc.Image")));
			this->bMainClnc->Location = System::Drawing::Point(594, 453);
			this->bMainClnc->Name = L"bMainClnc";
			this->bMainClnc->Size = System::Drawing::Size(110, 110);
			this->bMainClnc->TabIndex = 2;
			this->bMainClnc->UseVisualStyleBackColor = false;
			this->bMainClnc->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClnc_Click);
			// 
			// bMainFact
			// 
			this->bMainFact->BackColor = System::Drawing::Color::Transparent;
			this->bMainFact->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainFact->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainFact->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainFact->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bMainFact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainFact.Image")));
			this->bMainFact->Location = System::Drawing::Point(719, 453);
			this->bMainFact->Name = L"bMainFact";
			this->bMainFact->Size = System::Drawing::Size(110, 110);
			this->bMainFact->TabIndex = 3;
			this->bMainFact->UseVisualStyleBackColor = false;
			this->bMainFact->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainFact_Click);
			// 
			// bMainSucs
			// 
			this->bMainSucs->BackColor = System::Drawing::Color::Transparent;
			this->bMainSucs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainSucs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainSucs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainSucs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainSucs.Image")));
			this->bMainSucs->Location = System::Drawing::Point(845, 453);
			this->bMainSucs->Name = L"bMainSucs";
			this->bMainSucs->Size = System::Drawing::Size(110, 110);
			this->bMainSucs->TabIndex = 7;
			this->bMainSucs->UseVisualStyleBackColor = false;
			this->bMainSucs->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainSucs_Click);
			// 
			// bMainClts
			// 
			this->bMainClts->BackColor = System::Drawing::Color::Transparent;
			this->bMainClts->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainClts->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainClts->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainClts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainClts.Image")));
			this->bMainClts->Location = System::Drawing::Point(971, 453);
			this->bMainClts->Name = L"bMainClts";
			this->bMainClts->Size = System::Drawing::Size(110, 110);
			this->bMainClts->TabIndex = 5;
			this->bMainClts->UseVisualStyleBackColor = false;
			this->bMainClts->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClts_Click);
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->mainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mainPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->mainPanel->Controls->Add(this->bContactos);
			this->mainPanel->Controls->Add(this->bAcercaDe);
			this->mainPanel->Controls->Add(this->bSucursales);
			this->mainPanel->Controls->Add(this->bReportes);
			this->mainPanel->Controls->Add(this->bFacturacion);
			this->mainPanel->Controls->Add(this->bMantenimiento);
			this->mainPanel->Location = System::Drawing::Point(-1, -2);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(890, 41);
			this->mainPanel->TabIndex = 8;
			this->mainPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::mainPanel_Paint);
			// 
			// bContactos
			// 
			this->bContactos->BackColor = System::Drawing::Color::Transparent;
			this->bContactos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bContactos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bContactos->ForeColor = System::Drawing::Color::White;
			this->bContactos->Location = System::Drawing::Point(765, -2);
			this->bContactos->Name = L"bContactos";
			this->bContactos->Size = System::Drawing::Size(100, 41);
			this->bContactos->TabIndex = 14;
			this->bContactos->Text = L"Contactos";
			this->bContactos->UseVisualStyleBackColor = false;
			this->bContactos->Click += gcnew System::EventHandler(this, &MenuPrincipal::bC_Click);
			// 
			// bAcercaDe
			// 
			this->bAcercaDe->BackColor = System::Drawing::Color::Transparent;
			this->bAcercaDe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bAcercaDe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAcercaDe->ForeColor = System::Drawing::Color::White;
			this->bAcercaDe->Location = System::Drawing::Point(628, -2);
			this->bAcercaDe->Name = L"bAcercaDe";
			this->bAcercaDe->Size = System::Drawing::Size(93, 41);
			this->bAcercaDe->TabIndex = 13;
			this->bAcercaDe->Text = L"Acerca de";
			this->bAcercaDe->UseVisualStyleBackColor = false;
			this->bAcercaDe->Click += gcnew System::EventHandler(this, &MenuPrincipal::bAD_Click);
			// 
			// bSucursales
			// 
			this->bSucursales->BackColor = System::Drawing::Color::Transparent;
			this->bSucursales->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSucursales->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSucursales->ForeColor = System::Drawing::Color::White;
			this->bSucursales->Location = System::Drawing::Point(482, -2);
			this->bSucursales->Name = L"bSucursales";
			this->bSucursales->Size = System::Drawing::Size(100, 41);
			this->bSucursales->TabIndex = 12;
			this->bSucursales->Text = L"Sucursales";
			this->bSucursales->UseVisualStyleBackColor = false;
			this->bSucursales->Click += gcnew System::EventHandler(this, &MenuPrincipal::bS_Click);
			// 
			// bReportes
			// 
			this->bReportes->BackColor = System::Drawing::Color::Transparent;
			this->bReportes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bReportes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bReportes->ForeColor = System::Drawing::Color::White;
			this->bReportes->Location = System::Drawing::Point(329, -2);
			this->bReportes->Name = L"bReportes";
			this->bReportes->Size = System::Drawing::Size(100, 41);
			this->bReportes->TabIndex = 11;
			this->bReportes->Text = L"Reportes";
			this->bReportes->UseVisualStyleBackColor = false;
			this->bReportes->Click += gcnew System::EventHandler(this, &MenuPrincipal::bR_Click);
			// 
			// bFacturacion
			// 
			this->bFacturacion->BackColor = System::Drawing::Color::Transparent;
			this->bFacturacion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bFacturacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFacturacion->ForeColor = System::Drawing::Color::White;
			this->bFacturacion->Location = System::Drawing::Point(177, -2);
			this->bFacturacion->Name = L"bFacturacion";
			this->bFacturacion->Size = System::Drawing::Size(100, 41);
			this->bFacturacion->TabIndex = 10;
			this->bFacturacion->Text = L"Facturación";
			this->bFacturacion->UseVisualStyleBackColor = false;
			this->bFacturacion->Click += gcnew System::EventHandler(this, &MenuPrincipal::bF_Click);
			// 
			// bMantenimiento
			// 
			this->bMantenimiento->BackColor = System::Drawing::Color::Transparent;
			this->bMantenimiento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMantenimiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMantenimiento->ForeColor = System::Drawing::Color::White;
			this->bMantenimiento->Location = System::Drawing::Point(0, -2);
			this->bMantenimiento->Name = L"bMantenimiento";
			this->bMantenimiento->Size = System::Drawing::Size(145, 41);
			this->bMantenimiento->TabIndex = 9;
			this->bMantenimiento->Text = L"Mantenimiento";
			this->bMantenimiento->UseVisualStyleBackColor = false;
			this->bMantenimiento->Click += gcnew System::EventHandler(this, &MenuPrincipal::bM_Click);
			// 
			// pMantenimiento
			// 
			this->pMantenimiento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pMantenimiento->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pMantenimiento->Location = System::Drawing::Point(-1, 37);
			this->pMantenimiento->Name = L"pMantenimiento";
			this->pMantenimiento->Size = System::Drawing::Size(147, 208);
			this->pMantenimiento->TabIndex = 9;
			this->pMantenimiento->Visible = false;
			this->pMantenimiento->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pM_Paint);
			// 
			// pFacturacion
			// 
			this->pFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pFacturacion->Location = System::Drawing::Point(152, 37);
			this->pFacturacion->Name = L"pFacturacion";
			this->pFacturacion->Size = System::Drawing::Size(151, 208);
			this->pFacturacion->TabIndex = 10;
			this->pFacturacion->Visible = false;
			this->pFacturacion->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pF_Paint);
			// 
			// pReportes
			// 
			this->pReportes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pReportes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pReportes->ForeColor = System::Drawing::Color::White;
			this->pReportes->Location = System::Drawing::Point(309, 37);
			this->pReportes->Name = L"pReportes";
			this->pReportes->Size = System::Drawing::Size(148, 208);
			this->pReportes->TabIndex = 11;
			this->pReportes->Visible = false;
			this->pReportes->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pR_Paint);
			// 
			// pSucursales
			// 
			this->pSucursales->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pSucursales->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pSucursales->Location = System::Drawing::Point(463, 37);
			this->pSucursales->Name = L"pSucursales";
			this->pSucursales->Size = System::Drawing::Size(142, 208);
			this->pSucursales->TabIndex = 12;
			this->pSucursales->Visible = false;
			this->pSucursales->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pS_Paint);
			// 
			// pAcercaDe
			// 
			this->pAcercaDe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pAcercaDe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pAcercaDe->Location = System::Drawing::Point(611, 37);
			this->pAcercaDe->Name = L"pAcercaDe";
			this->pAcercaDe->Size = System::Drawing::Size(131, 208);
			this->pAcercaDe->TabIndex = 13;
			this->pAcercaDe->Visible = false;
			this->pAcercaDe->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pAD_Paint);
			// 
			// pContactos
			// 
			this->pContactos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pContactos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pContactos->Location = System::Drawing::Point(748, 37);
			this->pContactos->Name = L"pContactos";
			this->pContactos->Size = System::Drawing::Size(140, 208);
			this->pContactos->TabIndex = 14;
			this->pContactos->Visible = false;
			this->pContactos->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::pC_Paint);
			// 
			// lblClnc
			// 
			this->lblClnc->AutoSize = true;
			this->lblClnc->ForeColor = System::Drawing::Color::White;
			this->lblClnc->Location = System::Drawing::Point(615, 566);
			this->lblClnc->Name = L"lblClnc";
			this->lblClnc->Size = System::Drawing::Size(74, 30);
			this->lblClnc->TabIndex = 15;
			this->lblClnc->Text = L"Clínica";
			// 
			// lblLugs
			// 
			this->lblLugs->AutoSize = true;
			this->lblLugs->ForeColor = System::Drawing::Color::White;
			this->lblLugs->Location = System::Drawing::Point(487, 566);
			this->lblLugs->Name = L"lblLugs";
			this->lblLugs->Size = System::Drawing::Size(85, 30);
			this->lblLugs->TabIndex = 16;
			this->lblLugs->Text = L"Lugares";
			// 
			// lblSucs
			// 
			this->lblSucs->AutoSize = true;
			this->lblSucs->ForeColor = System::Drawing::Color::White;
			this->lblSucs->Location = System::Drawing::Point(845, 566);
			this->lblSucs->Name = L"lblSucs";
			this->lblSucs->Size = System::Drawing::Size(110, 30);
			this->lblSucs->TabIndex = 17;
			this->lblSucs->Text = L"Sucursales";
			// 
			// lblFact
			// 
			this->lblFact->AutoSize = true;
			this->lblFact->ForeColor = System::Drawing::Color::White;
			this->lblFact->Location = System::Drawing::Point(714, 566);
			this->lblFact->Name = L"lblFact";
			this->lblFact->Size = System::Drawing::Size(119, 30);
			this->lblFact->TabIndex = 18;
			this->lblFact->Text = L"Facturación";
			// 
			// lblClts
			// 
			this->lblClts->AutoSize = true;
			this->lblClts->ForeColor = System::Drawing::Color::White;
			this->lblClts->Location = System::Drawing::Point(985, 566);
			this->lblClts->Name = L"lblClts";
			this->lblClts->Size = System::Drawing::Size(86, 30);
			this->lblClts->TabIndex = 19;
			this->lblClts->Text = L"Clientes";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(900, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Clínica especializada";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblClts);
			this->Controls->Add(this->lblFact);
			this->Controls->Add(this->lblSucs);
			this->Controls->Add(this->lblLugs);
			this->Controls->Add(this->lblClnc);
			this->Controls->Add(this->pContactos);
			this->Controls->Add(this->pAcercaDe);
			this->Controls->Add(this->pSucursales);
			this->Controls->Add(this->pReportes);
			this->Controls->Add(this->pFacturacion);
			this->Controls->Add(this->pMantenimiento);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->bMainSucs);
			this->Controls->Add(this->subtitleMenu);
			this->Controls->Add(this->bMainClts);
			this->Controls->Add(this->bMainFact);
			this->Controls->Add(this->bMainClnc);
			this->Controls->Add(this->bMainLugs);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1110, 650);
			this->MinimumSize = System::Drawing::Size(1110, 650);
			this->Name = L"MenuPrincipal";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Principal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->mainPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void subtitleMenu_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bMainLugs_Click(System::Object^ sender, System::EventArgs^ e) {

		SubMenuLugs^ sMLugs = gcnew SubMenuLugs(this);
		sMLugs->Show();
		this->Hide();

	}
	private: System::Void bMainClnc_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SubMenuClnc^ sMClnc = gcnew SubMenuClnc(this);
		sMClnc->Show();
		this->Hide();
		
	}
	private: System::Void bMainFact_Click(System::Object^ sender, System::EventArgs^ e) {

		SubMenuFact^ sMF = gcnew SubMenuFact(this);
		sMF->Show();
		this->Hide();

	}
	private: System::Void bMainSucs_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SubMenuSucs^ sMS = gcnew SubMenuSucs(this);
		sMS->Show();
		this->Hide();
		
	}
	private: System::Void bMainClts_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SubMenuClts^ sMClts = gcnew SubMenuClts(this);
		sMClts->Show();
		this->Hide();
		
	}

// *****************************************************************************************************
private: System::Void mainPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void bM_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pMantenimiento->Show();
}
private: System::Void bF_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pFacturacion->Show();
}
private: System::Void bR_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pReportes->Show();
}
private: System::Void bS_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pSucursales->Show();
}
private: System::Void bAD_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pAcercaDe->Show();
}
private: System::Void bC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->pContactos->Show();
}
private: System::Void pM_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pF_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pR_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pS_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pAD_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pC_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
