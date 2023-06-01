#pragma once

#include "BCliente.h"
#include "AVLMascotas.h"
#include "BinarioVisitas.h"
namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubMenuCont
	/// </summary>
	public ref class SubMenuClts : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public: BCliente* arbolClientes;
	public: AVLMascotas* arbolMascotas;
	private: System::Windows::Forms::Panel^ pvElim;
	public:
	private: System::Windows::Forms::Button^ bvEliminar;
	private: System::Windows::Forms::Label^ vElimLbl1;
	private: System::Windows::Forms::TextBox^ vElimTxtbx1;
	private: System::Windows::Forms::Panel^ pmElim;
	private: System::Windows::Forms::Button^ bmEliminar;

	private: System::Windows::Forms::Label^ mElimLbl1;

	private: System::Windows::Forms::TextBox^ mElimTxtbx1;

	private: System::Windows::Forms::Panel^ pcElim;
	private: System::Windows::Forms::Button^ bcEliminar;

	private: System::Windows::Forms::Label^ cElimLbl1;

	private: System::Windows::Forms::TextBox^ cElimTxtbx1;
	private: System::Windows::Forms::Panel^ pvModif;

	private: System::Windows::Forms::TextBox^ vModifTxtbx3;
	private: System::Windows::Forms::Label^ vModifLbl2;


	private: System::Windows::Forms::Label^ vModifLbl1;

	private: System::Windows::Forms::TextBox^ vModifTxtbx2;
	private: System::Windows::Forms::TextBox^ vModifTxtbx1;


	private: System::Windows::Forms::Button^ bvModificar;
	private: System::Windows::Forms::Label^ vModifLbl3;
	private: System::Windows::Forms::Panel^ pmModif;
	private: System::Windows::Forms::Button^ bmModificar;
	private: System::Windows::Forms::TextBox^ mModifTxtbx3;
	private: System::Windows::Forms::Label^ mModifLbl2;


	private: System::Windows::Forms::Label^ mModifLbl1;
	private: System::Windows::Forms::Label^ mModifLbl3;


	private: System::Windows::Forms::TextBox^ mModifTxtbx2;

	private: System::Windows::Forms::TextBox^ mModifTxtbx1;
	private: System::Windows::Forms::TextBox^ mModifTxtbx4;
	private: System::Windows::Forms::Label^ mModifLbl4;
	private: System::Windows::Forms::Panel^ pcModif;

	private: System::Windows::Forms::Button^ bcModificar;
	private: System::Windows::Forms::TextBox^ cModifTxtbx6;


	private: System::Windows::Forms::Label^ cModifLbl6;
	private: System::Windows::Forms::TextBox^ cModifTxtbx5;


	private: System::Windows::Forms::TextBox^ cModifTxtbx4;

	private: System::Windows::Forms::Label^ cModifLbl5;

	private: System::Windows::Forms::Label^ cModifLbl4;
	private: System::Windows::Forms::TextBox^ cModifTxtbx3;


	private: System::Windows::Forms::Label^ cModifLbl3;

	private: System::Windows::Forms::Label^ cModifLbl2;

	private: System::Windows::Forms::Label^ cModifLbl1;
	private: System::Windows::Forms::TextBox^ cModifTxtbx2;


	private: System::Windows::Forms::TextBox^ cModifTxtbx1;







	public: BinarioVisitas* arbolVisitas;

	public:
		SubMenuClts(System::Windows::Forms::Form^ m, BCliente* arbolClientes, AVLMascotas* arbolMascotas, BinarioVisitas* arbolVisitas)
		{
			menu = m;

			this->arbolClientes = arbolClientes;
			this->arbolMascotas = arbolMascotas;
			this->arbolVisitas = arbolVisitas;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubMenuClts()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Label^ lblMascotas;
	private: System::Windows::Forms::Label^ lblVisitas;
	private: System::Windows::Forms::Button^ bVisitas;
	private: System::Windows::Forms::Label^ lblClientes;
	private: System::Windows::Forms::Button^ bMascotas;
	private: System::Windows::Forms::Button^ bClientes;
	private: System::Windows::Forms::Button^ bSalir;
	private: System::Windows::Forms::Panel^ pClientes;
	private: System::Windows::Forms::Button^ bcElim;
	private: System::Windows::Forms::Button^ bcBusq;
	private: System::Windows::Forms::Button^ bcModif;
	private: System::Windows::Forms::Button^ bcInser;
	private: System::Windows::Forms::Panel^ pMascotas;
	private: System::Windows::Forms::Button^ bmElim;
	private: System::Windows::Forms::Button^ bmBusq;
	private: System::Windows::Forms::Button^ bmModif;
	private: System::Windows::Forms::Button^ bmInser;
	private: System::Windows::Forms::Panel^ pVisitas;
	private: System::Windows::Forms::Button^ bvElim;
	private: System::Windows::Forms::Button^ bvBusq;
	private: System::Windows::Forms::Button^ bvModif;
	private: System::Windows::Forms::Button^ bvInser;
	private: System::Windows::Forms::Panel^ pcInser;
	private: System::Windows::Forms::TextBox^ cInserTxtbx8;
	private: System::Windows::Forms::TextBox^ cInserTxtbx7;
	private: System::Windows::Forms::Label^ cInserLbl7;
	private: System::Windows::Forms::TextBox^ cInserTxtbx6;
	private: System::Windows::Forms::Label^ cInserLbl6;
	private: System::Windows::Forms::TextBox^ cInserTxtbx5;
	private: System::Windows::Forms::TextBox^ cInserTxtbx4;
	private: System::Windows::Forms::Label^ cInserLbl5;
	private: System::Windows::Forms::Label^ cInserLbl4;
	private: System::Windows::Forms::TextBox^ cInserTxtbx3;
	private: System::Windows::Forms::Label^ cInserLbl3;
	private: System::Windows::Forms::Label^ cInserLbl2;
	private: System::Windows::Forms::Label^ cInserLbl1;
	private: System::Windows::Forms::TextBox^ cInserTxtbx2;
	private: System::Windows::Forms::TextBox^ cInserTxtbx1;
	private: System::Windows::Forms::TextBox^ cInserTxtbx9;
	private: System::Windows::Forms::Label^ cInserLbl9;
	private: System::Windows::Forms::Label^ cInserLbl8;
	private: System::Windows::Forms::Panel^ pcBusq;
	private: System::Windows::Forms::Label^ cBusqLbl1;
	private: System::Windows::Forms::TextBox^ cBusqTxtbx1;
	private: System::Windows::Forms::Panel^ pmInser;
	private: System::Windows::Forms::TextBox^ mInserTxtbx9;
	private: System::Windows::Forms::Label^ mInserLbl9;
	private: System::Windows::Forms::TextBox^ mInserTxtbx8;
	private: System::Windows::Forms::Label^ mInserLbl8;
	private: System::Windows::Forms::TextBox^ mInserTxtbx7;
	private: System::Windows::Forms::Label^ mInserLbl7;
	private: System::Windows::Forms::TextBox^ mInserTxtbx6;
	private: System::Windows::Forms::Label^ mInserLbl6;
	private: System::Windows::Forms::TextBox^ mInserTxtbx5;
	private: System::Windows::Forms::TextBox^ mInserTxtbx4;
	private: System::Windows::Forms::Label^ mInserLbl5;
	private: System::Windows::Forms::Label^ mInserLbl4;
	private: System::Windows::Forms::TextBox^ mInserTxtbx3;
	private: System::Windows::Forms::Label^ mInserLbl3;
	private: System::Windows::Forms::Label^ mInserLbl2;
	private: System::Windows::Forms::Label^ mInserLbl1;
	private: System::Windows::Forms::TextBox^ mInserTxtbx2;
	private: System::Windows::Forms::TextBox^ mInserTxtbx1;
	private: System::Windows::Forms::TextBox^ mInserTxtbx10;
	private: System::Windows::Forms::Label^ mInserLbl10;
	private: System::Windows::Forms::Panel^ pmBusq;
	private: System::Windows::Forms::Label^ mBusqLbl1;
	private: System::Windows::Forms::TextBox^ mBusqTxtbx1;
	private: System::Windows::Forms::Panel^ pvBusq;
	private: System::Windows::Forms::Label^ vBusqLbl1;
	private: System::Windows::Forms::TextBox^ vBusqTxtbx1;
	private: System::Windows::Forms::Panel^ pvInser;
	private: System::Windows::Forms::TextBox^ vInserTxtbx5;
	private: System::Windows::Forms::TextBox^ vInserTxtbx4;
	private: System::Windows::Forms::Label^ vInserLbl5;
	private: System::Windows::Forms::Label^ vInserLbl4;
	private: System::Windows::Forms::TextBox^ vInserTxtbx3;
	private: System::Windows::Forms::Label^ vInserLbl3;
	private: System::Windows::Forms::Label^ vInserLbl2;
	private: System::Windows::Forms::Label^ vInserLbl1;
	private: System::Windows::Forms::TextBox^ vInserTxtbx2;
	private: System::Windows::Forms::TextBox^ vInserTxtbx1;
	private: System::Windows::Forms::Button^ bcBuscar;
	private: System::Windows::Forms::Button^ bmBuscar;
	private: System::Windows::Forms::Button^ bvBuscar;
	private: System::Windows::Forms::Button^ bcInsertar;
	private: System::Windows::Forms::Button^ bvInsertar;
	private: System::Windows::Forms::Button^ bmInsertar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuClts::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->lblMascotas = (gcnew System::Windows::Forms::Label());
			this->lblVisitas = (gcnew System::Windows::Forms::Label());
			this->bVisitas = (gcnew System::Windows::Forms::Button());
			this->lblClientes = (gcnew System::Windows::Forms::Label());
			this->bMascotas = (gcnew System::Windows::Forms::Button());
			this->bClientes = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->pClientes = (gcnew System::Windows::Forms::Panel());
			this->bcElim = (gcnew System::Windows::Forms::Button());
			this->bcBusq = (gcnew System::Windows::Forms::Button());
			this->bcModif = (gcnew System::Windows::Forms::Button());
			this->bcInser = (gcnew System::Windows::Forms::Button());
			this->pMascotas = (gcnew System::Windows::Forms::Panel());
			this->bmElim = (gcnew System::Windows::Forms::Button());
			this->bmBusq = (gcnew System::Windows::Forms::Button());
			this->bmModif = (gcnew System::Windows::Forms::Button());
			this->bmInser = (gcnew System::Windows::Forms::Button());
			this->pVisitas = (gcnew System::Windows::Forms::Panel());
			this->bvElim = (gcnew System::Windows::Forms::Button());
			this->bvBusq = (gcnew System::Windows::Forms::Button());
			this->bvModif = (gcnew System::Windows::Forms::Button());
			this->bvInser = (gcnew System::Windows::Forms::Button());
			this->pcInser = (gcnew System::Windows::Forms::Panel());
			this->bcInsertar = (gcnew System::Windows::Forms::Button());
			this->cInserTxtbx9 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl9 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx8 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl8 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx7 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl7 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx6 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl6 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx5 = (gcnew System::Windows::Forms::TextBox());
			this->cInserTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl5 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl4 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->cInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->cInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->cInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcBusq = (gcnew System::Windows::Forms::Panel());
			this->bcBuscar = (gcnew System::Windows::Forms::Button());
			this->cBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->cBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmInser = (gcnew System::Windows::Forms::Panel());
			this->bmInsertar = (gcnew System::Windows::Forms::Button());
			this->mInserTxtbx10 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl10 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx9 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl9 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx8 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl8 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx7 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl7 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx6 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl6 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx5 = (gcnew System::Windows::Forms::TextBox());
			this->mInserTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl5 = (gcnew System::Windows::Forms::Label());
			this->mInserLbl4 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->mInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->mInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->mInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->mInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->mInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmBusq = (gcnew System::Windows::Forms::Panel());
			this->bmBuscar = (gcnew System::Windows::Forms::Button());
			this->mBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->mBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pvBusq = (gcnew System::Windows::Forms::Panel());
			this->bvBuscar = (gcnew System::Windows::Forms::Button());
			this->vBusqLbl1 = (gcnew System::Windows::Forms::Label());
			this->vBusqTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pvInser = (gcnew System::Windows::Forms::Panel());
			this->bvInsertar = (gcnew System::Windows::Forms::Button());
			this->vInserTxtbx5 = (gcnew System::Windows::Forms::TextBox());
			this->vInserTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->vInserLbl5 = (gcnew System::Windows::Forms::Label());
			this->vInserLbl4 = (gcnew System::Windows::Forms::Label());
			this->vInserTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->vInserLbl3 = (gcnew System::Windows::Forms::Label());
			this->vInserLbl2 = (gcnew System::Windows::Forms::Label());
			this->vInserLbl1 = (gcnew System::Windows::Forms::Label());
			this->vInserTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->vInserTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pvElim = (gcnew System::Windows::Forms::Panel());
			this->bvEliminar = (gcnew System::Windows::Forms::Button());
			this->vElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->vElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmElim = (gcnew System::Windows::Forms::Panel());
			this->bmEliminar = (gcnew System::Windows::Forms::Button());
			this->mElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->mElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcElim = (gcnew System::Windows::Forms::Panel());
			this->bcEliminar = (gcnew System::Windows::Forms::Button());
			this->cElimLbl1 = (gcnew System::Windows::Forms::Label());
			this->cElimTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pvModif = (gcnew System::Windows::Forms::Panel());
			this->bvModificar = (gcnew System::Windows::Forms::Button());
			this->vModifTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->vModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->vModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->vModifLbl3 = (gcnew System::Windows::Forms::Label());
			this->vModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->vModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pmModif = (gcnew System::Windows::Forms::Panel());
			this->mModifTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->mModifLbl4 = (gcnew System::Windows::Forms::Label());
			this->bmModificar = (gcnew System::Windows::Forms::Button());
			this->mModifTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->mModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->mModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->mModifLbl3 = (gcnew System::Windows::Forms::Label());
			this->mModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->mModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pcModif = (gcnew System::Windows::Forms::Panel());
			this->bcModificar = (gcnew System::Windows::Forms::Button());
			this->cModifTxtbx6 = (gcnew System::Windows::Forms::TextBox());
			this->cModifLbl6 = (gcnew System::Windows::Forms::Label());
			this->cModifTxtbx5 = (gcnew System::Windows::Forms::TextBox());
			this->cModifTxtbx4 = (gcnew System::Windows::Forms::TextBox());
			this->cModifLbl5 = (gcnew System::Windows::Forms::Label());
			this->cModifLbl4 = (gcnew System::Windows::Forms::Label());
			this->cModifTxtbx3 = (gcnew System::Windows::Forms::TextBox());
			this->cModifLbl3 = (gcnew System::Windows::Forms::Label());
			this->cModifLbl2 = (gcnew System::Windows::Forms::Label());
			this->cModifLbl1 = (gcnew System::Windows::Forms::Label());
			this->cModifTxtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->cModifTxtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->pClientes->SuspendLayout();
			this->pMascotas->SuspendLayout();
			this->pVisitas->SuspendLayout();
			this->pcInser->SuspendLayout();
			this->pcBusq->SuspendLayout();
			this->pmInser->SuspendLayout();
			this->pmBusq->SuspendLayout();
			this->pvBusq->SuspendLayout();
			this->pvInser->SuspendLayout();
			this->pvElim->SuspendLayout();
			this->pmElim->SuspendLayout();
			this->pcElim->SuspendLayout();
			this->pvModif->SuspendLayout();
			this->pmModif->SuspendLayout();
			this->pcModif->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::Gold;
			this->titleMenu->Location = System::Drawing::Point(48, 40);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(195, 65);
			this->titleMenu->TabIndex = 3;
			this->titleMenu->Text = L"Clientes";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblMascotas
			// 
			this->lblMascotas->AutoSize = true;
			this->lblMascotas->BackColor = System::Drawing::Color::Black;
			this->lblMascotas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMascotas->ForeColor = System::Drawing::Color::White;
			this->lblMascotas->Location = System::Drawing::Point(42, 417);
			this->lblMascotas->Name = L"lblMascotas";
			this->lblMascotas->Size = System::Drawing::Size(101, 30);
			this->lblMascotas->TabIndex = 33;
			this->lblMascotas->Text = L"Mascotas";
			// 
			// lblVisitas
			// 
			this->lblVisitas->AutoSize = true;
			this->lblVisitas->BackColor = System::Drawing::Color::Black;
			this->lblVisitas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVisitas->ForeColor = System::Drawing::Color::White;
			this->lblVisitas->Location = System::Drawing::Point(54, 570);
			this->lblVisitas->Name = L"lblVisitas";
			this->lblVisitas->Size = System::Drawing::Size(72, 30);
			this->lblVisitas->TabIndex = 32;
			this->lblVisitas->Text = L"Visitas";
			// 
			// bVisitas
			// 
			this->bVisitas->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bVisitas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bVisitas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bVisitas->ForeColor = System::Drawing::Color::White;
			this->bVisitas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bVisitas.Image")));
			this->bVisitas->Location = System::Drawing::Point(33, 474);
			this->bVisitas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bVisitas->Name = L"bVisitas";
			this->bVisitas->Size = System::Drawing::Size(110, 91);
			this->bVisitas->TabIndex = 31;
			this->bVisitas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bVisitas->UseVisualStyleBackColor = false;
			this->bVisitas->Click += gcnew System::EventHandler(this, &SubMenuClts::bVisitas_Click);
			// 
			// lblClientes
			// 
			this->lblClientes->AutoSize = true;
			this->lblClientes->BackColor = System::Drawing::Color::Black;
			this->lblClientes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblClientes->ForeColor = System::Drawing::Color::White;
			this->lblClientes->Location = System::Drawing::Point(49, 270);
			this->lblClientes->Name = L"lblClientes";
			this->lblClientes->Size = System::Drawing::Size(86, 30);
			this->lblClientes->TabIndex = 30;
			this->lblClientes->Text = L"Clientes";
			// 
			// bMascotas
			// 
			this->bMascotas->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bMascotas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMascotas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMascotas->ForeColor = System::Drawing::Color::White;
			this->bMascotas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMascotas.Image")));
			this->bMascotas->Location = System::Drawing::Point(33, 321);
			this->bMascotas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bMascotas->Name = L"bMascotas";
			this->bMascotas->Size = System::Drawing::Size(110, 91);
			this->bMascotas->TabIndex = 29;
			this->bMascotas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bMascotas->UseVisualStyleBackColor = false;
			this->bMascotas->Click += gcnew System::EventHandler(this, &SubMenuClts::bMascotas_Click);
			// 
			// bClientes
			// 
			this->bClientes->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bClientes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bClientes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bClientes->ForeColor = System::Drawing::Color::White;
			this->bClientes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bClientes.Image")));
			this->bClientes->Location = System::Drawing::Point(33, 166);
			this->bClientes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bClientes->Name = L"bClientes";
			this->bClientes->Size = System::Drawing::Size(117, 99);
			this->bClientes->TabIndex = 28;
			this->bClientes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bClientes->UseVisualStyleBackColor = false;
			this->bClientes->Click += gcnew System::EventHandler(this, &SubMenuClts::bClientes_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::Gold;
			this->bSalir->Location = System::Drawing::Point(1101, 671);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 34;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuClts::bSalir_Click);
			// 
			// pClientes
			// 
			this->pClientes->AutoScroll = true;
			this->pClientes->BackColor = System::Drawing::Color::Transparent;
			this->pClientes->Controls->Add(this->bcElim);
			this->pClientes->Controls->Add(this->bcBusq);
			this->pClientes->Controls->Add(this->bcModif);
			this->pClientes->Controls->Add(this->bcInser);
			this->pClientes->ForeColor = System::Drawing::Color::White;
			this->pClientes->Location = System::Drawing::Point(157, 166);
			this->pClientes->Name = L"pClientes";
			this->pClientes->Size = System::Drawing::Size(175, 145);
			this->pClientes->TabIndex = 35;
			this->pClientes->Visible = false;
			// 
			// bcElim
			// 
			this->bcElim->BackColor = System::Drawing::Color::Transparent;
			this->bcElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcElim->ForeColor = System::Drawing::Color::White;
			this->bcElim->Location = System::Drawing::Point(3, 111);
			this->bcElim->Name = L"bcElim";
			this->bcElim->Size = System::Drawing::Size(169, 31);
			this->bcElim->TabIndex = 23;
			this->bcElim->Text = L"-> Eliminación";
			this->bcElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcElim->UseVisualStyleBackColor = false;
			this->bcElim->Click += gcnew System::EventHandler(this, &SubMenuClts::bcElim_Click);
			// 
			// bcBusq
			// 
			this->bcBusq->BackColor = System::Drawing::Color::Transparent;
			this->bcBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcBusq->ForeColor = System::Drawing::Color::White;
			this->bcBusq->Location = System::Drawing::Point(3, 74);
			this->bcBusq->Name = L"bcBusq";
			this->bcBusq->Size = System::Drawing::Size(169, 31);
			this->bcBusq->TabIndex = 22;
			this->bcBusq->Text = L"-> Búsqueda";
			this->bcBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcBusq->UseVisualStyleBackColor = false;
			this->bcBusq->Click += gcnew System::EventHandler(this, &SubMenuClts::bcBusq_Click);
			// 
			// bcModif
			// 
			this->bcModif->BackColor = System::Drawing::Color::Transparent;
			this->bcModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcModif->ForeColor = System::Drawing::Color::White;
			this->bcModif->Location = System::Drawing::Point(3, 37);
			this->bcModif->Name = L"bcModif";
			this->bcModif->Size = System::Drawing::Size(169, 31);
			this->bcModif->TabIndex = 21;
			this->bcModif->Text = L"-> Modificación";
			this->bcModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcModif->UseVisualStyleBackColor = false;
			this->bcModif->Click += gcnew System::EventHandler(this, &SubMenuClts::bcModif_Click);
			// 
			// bcInser
			// 
			this->bcInser->BackColor = System::Drawing::Color::Transparent;
			this->bcInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bcInser->ForeColor = System::Drawing::Color::White;
			this->bcInser->Location = System::Drawing::Point(3, 0);
			this->bcInser->Name = L"bcInser";
			this->bcInser->Size = System::Drawing::Size(169, 31);
			this->bcInser->TabIndex = 20;
			this->bcInser->Text = L"-> Inserción";
			this->bcInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bcInser->UseVisualStyleBackColor = false;
			this->bcInser->Click += gcnew System::EventHandler(this, &SubMenuClts::bcInser_Click);
			// 
			// pMascotas
			// 
			this->pMascotas->AutoScroll = true;
			this->pMascotas->BackColor = System::Drawing::Color::Transparent;
			this->pMascotas->Controls->Add(this->bmElim);
			this->pMascotas->Controls->Add(this->bmBusq);
			this->pMascotas->Controls->Add(this->bmModif);
			this->pMascotas->Controls->Add(this->bmInser);
			this->pMascotas->ForeColor = System::Drawing::Color::White;
			this->pMascotas->Location = System::Drawing::Point(157, 321);
			this->pMascotas->Name = L"pMascotas";
			this->pMascotas->Size = System::Drawing::Size(175, 145);
			this->pMascotas->TabIndex = 36;
			this->pMascotas->Visible = false;
			// 
			// bmElim
			// 
			this->bmElim->BackColor = System::Drawing::Color::Transparent;
			this->bmElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmElim->ForeColor = System::Drawing::Color::White;
			this->bmElim->Location = System::Drawing::Point(3, 111);
			this->bmElim->Name = L"bmElim";
			this->bmElim->Size = System::Drawing::Size(169, 31);
			this->bmElim->TabIndex = 23;
			this->bmElim->Text = L"-> Eliminación";
			this->bmElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmElim->UseVisualStyleBackColor = false;
			this->bmElim->Click += gcnew System::EventHandler(this, &SubMenuClts::bmElim_Click);
			// 
			// bmBusq
			// 
			this->bmBusq->BackColor = System::Drawing::Color::Transparent;
			this->bmBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmBusq->ForeColor = System::Drawing::Color::White;
			this->bmBusq->Location = System::Drawing::Point(3, 74);
			this->bmBusq->Name = L"bmBusq";
			this->bmBusq->Size = System::Drawing::Size(169, 31);
			this->bmBusq->TabIndex = 22;
			this->bmBusq->Text = L"-> Búsqueda";
			this->bmBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmBusq->UseVisualStyleBackColor = false;
			this->bmBusq->Click += gcnew System::EventHandler(this, &SubMenuClts::bmBusq_Click);
			// 
			// bmModif
			// 
			this->bmModif->BackColor = System::Drawing::Color::Transparent;
			this->bmModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmModif->ForeColor = System::Drawing::Color::White;
			this->bmModif->Location = System::Drawing::Point(3, 37);
			this->bmModif->Name = L"bmModif";
			this->bmModif->Size = System::Drawing::Size(169, 31);
			this->bmModif->TabIndex = 21;
			this->bmModif->Text = L"-> Modificación";
			this->bmModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmModif->UseVisualStyleBackColor = false;
			this->bmModif->Click += gcnew System::EventHandler(this, &SubMenuClts::bmModif_Click);
			// 
			// bmInser
			// 
			this->bmInser->BackColor = System::Drawing::Color::Transparent;
			this->bmInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bmInser->ForeColor = System::Drawing::Color::White;
			this->bmInser->Location = System::Drawing::Point(3, 0);
			this->bmInser->Name = L"bmInser";
			this->bmInser->Size = System::Drawing::Size(169, 31);
			this->bmInser->TabIndex = 20;
			this->bmInser->Text = L"-> Inserción";
			this->bmInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bmInser->UseVisualStyleBackColor = false;
			this->bmInser->Click += gcnew System::EventHandler(this, &SubMenuClts::bmInser_Click);
			// 
			// pVisitas
			// 
			this->pVisitas->AutoScroll = true;
			this->pVisitas->BackColor = System::Drawing::Color::Transparent;
			this->pVisitas->Controls->Add(this->bvElim);
			this->pVisitas->Controls->Add(this->bvBusq);
			this->pVisitas->Controls->Add(this->bvModif);
			this->pVisitas->Controls->Add(this->bvInser);
			this->pVisitas->ForeColor = System::Drawing::Color::White;
			this->pVisitas->Location = System::Drawing::Point(157, 474);
			this->pVisitas->Name = L"pVisitas";
			this->pVisitas->Size = System::Drawing::Size(175, 145);
			this->pVisitas->TabIndex = 37;
			this->pVisitas->Visible = false;
			// 
			// bvElim
			// 
			this->bvElim->BackColor = System::Drawing::Color::Transparent;
			this->bvElim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bvElim->ForeColor = System::Drawing::Color::White;
			this->bvElim->Location = System::Drawing::Point(3, 111);
			this->bvElim->Name = L"bvElim";
			this->bvElim->Size = System::Drawing::Size(169, 31);
			this->bvElim->TabIndex = 23;
			this->bvElim->Text = L"-> Eliminación";
			this->bvElim->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bvElim->UseVisualStyleBackColor = false;
			this->bvElim->Click += gcnew System::EventHandler(this, &SubMenuClts::bvElim_Click);
			// 
			// bvBusq
			// 
			this->bvBusq->BackColor = System::Drawing::Color::Transparent;
			this->bvBusq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bvBusq->ForeColor = System::Drawing::Color::White;
			this->bvBusq->Location = System::Drawing::Point(3, 74);
			this->bvBusq->Name = L"bvBusq";
			this->bvBusq->Size = System::Drawing::Size(169, 31);
			this->bvBusq->TabIndex = 22;
			this->bvBusq->Text = L"-> Búsqueda";
			this->bvBusq->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bvBusq->UseVisualStyleBackColor = false;
			this->bvBusq->Click += gcnew System::EventHandler(this, &SubMenuClts::bvBusq_Click);
			// 
			// bvModif
			// 
			this->bvModif->BackColor = System::Drawing::Color::Transparent;
			this->bvModif->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bvModif->ForeColor = System::Drawing::Color::White;
			this->bvModif->Location = System::Drawing::Point(3, 37);
			this->bvModif->Name = L"bvModif";
			this->bvModif->Size = System::Drawing::Size(169, 31);
			this->bvModif->TabIndex = 21;
			this->bvModif->Text = L"-> Modificación";
			this->bvModif->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bvModif->UseVisualStyleBackColor = false;
			this->bvModif->Click += gcnew System::EventHandler(this, &SubMenuClts::bvModif_Click);
			// 
			// bvInser
			// 
			this->bvInser->BackColor = System::Drawing::Color::Transparent;
			this->bvInser->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bvInser->ForeColor = System::Drawing::Color::White;
			this->bvInser->Location = System::Drawing::Point(3, 0);
			this->bvInser->Name = L"bvInser";
			this->bvInser->Size = System::Drawing::Size(169, 31);
			this->bvInser->TabIndex = 20;
			this->bvInser->Text = L"-> Inserción";
			this->bvInser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bvInser->UseVisualStyleBackColor = false;
			this->bvInser->Click += gcnew System::EventHandler(this, &SubMenuClts::bvInser_Click);
			// 
			// pcInser
			// 
			this->pcInser->AutoScroll = true;
			this->pcInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcInser->Controls->Add(this->bcInsertar);
			this->pcInser->Controls->Add(this->cInserTxtbx9);
			this->pcInser->Controls->Add(this->cInserLbl9);
			this->pcInser->Controls->Add(this->cInserTxtbx8);
			this->pcInser->Controls->Add(this->cInserLbl8);
			this->pcInser->Controls->Add(this->cInserTxtbx7);
			this->pcInser->Controls->Add(this->cInserLbl7);
			this->pcInser->Controls->Add(this->cInserTxtbx6);
			this->pcInser->Controls->Add(this->cInserLbl6);
			this->pcInser->Controls->Add(this->cInserTxtbx5);
			this->pcInser->Controls->Add(this->cInserTxtbx4);
			this->pcInser->Controls->Add(this->cInserLbl5);
			this->pcInser->Controls->Add(this->cInserLbl4);
			this->pcInser->Controls->Add(this->cInserTxtbx3);
			this->pcInser->Controls->Add(this->cInserLbl3);
			this->pcInser->Controls->Add(this->cInserLbl2);
			this->pcInser->Controls->Add(this->cInserLbl1);
			this->pcInser->Controls->Add(this->cInserTxtbx2);
			this->pcInser->Controls->Add(this->cInserTxtbx1);
			this->pcInser->ForeColor = System::Drawing::Color::White;
			this->pcInser->Location = System::Drawing::Point(366, 166);
			this->pcInser->Name = L"pcInser";
			this->pcInser->Size = System::Drawing::Size(214, 148);
			this->pcInser->TabIndex = 38;
			this->pcInser->Visible = false;
			// 
			// bcInsertar
			// 
			this->bcInsertar->BackColor = System::Drawing::Color::DimGray;
			this->bcInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcInsertar->ForeColor = System::Drawing::Color::Gold;
			this->bcInsertar->Location = System::Drawing::Point(3, 628);
			this->bcInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcInsertar->Name = L"bcInsertar";
			this->bcInsertar->Size = System::Drawing::Size(193, 45);
			this->bcInsertar->TabIndex = 52;
			this->bcInsertar->Text = L"Insertar";
			this->bcInsertar->UseVisualStyleBackColor = false;
			this->bcInsertar->Click += gcnew System::EventHandler(this, &SubMenuClts::bcInsertar_Click);
			// 
			// cInserTxtbx9
			// 
			this->cInserTxtbx9->Location = System::Drawing::Point(3, 598);
			this->cInserTxtbx9->Name = L"cInserTxtbx9";
			this->cInserTxtbx9->Size = System::Drawing::Size(193, 33);
			this->cInserTxtbx9->TabIndex = 40;
			// 
			// cInserLbl9
			// 
			this->cInserLbl9->AutoSize = true;
			this->cInserLbl9->BackColor = System::Drawing::Color::Black;
			this->cInserLbl9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl9->ForeColor = System::Drawing::Color::White;
			this->cInserLbl9->Location = System::Drawing::Point(66, 565);
			this->cInserLbl9->Name = L"cInserLbl9";
			this->cInserLbl9->Size = System::Drawing::Size(64, 30);
			this->cInserLbl9->TabIndex = 39;
			this->cInserLbl9->Text = L"Saldo";
			// 
			// cInserTxtbx8
			// 
			this->cInserTxtbx8->Location = System::Drawing::Point(3, 529);
			this->cInserTxtbx8->Name = L"cInserTxtbx8";
			this->cInserTxtbx8->Size = System::Drawing::Size(193, 33);
			this->cInserTxtbx8->TabIndex = 38;
			// 
			// cInserLbl8
			// 
			this->cInserLbl8->AutoSize = true;
			this->cInserLbl8->BackColor = System::Drawing::Color::Black;
			this->cInserLbl8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl8->ForeColor = System::Drawing::Color::White;
			this->cInserLbl8->Location = System::Drawing::Point(45, 496);
			this->cInserLbl8->Name = L"cInserLbl8";
			this->cInserLbl8->Size = System::Drawing::Size(112, 30);
			this->cInserLbl8->TabIndex = 37;
			this->cInserLbl8->Text = L"Descuento";
			// 
			// cInserTxtbx7
			// 
			this->cInserTxtbx7->Location = System::Drawing::Point(3, 460);
			this->cInserTxtbx7->Name = L"cInserTxtbx7";
			this->cInserTxtbx7->Size = System::Drawing::Size(193, 33);
			this->cInserTxtbx7->TabIndex = 36;
			// 
			// cInserLbl7
			// 
			this->cInserLbl7->AutoSize = true;
			this->cInserLbl7->BackColor = System::Drawing::Color::Black;
			this->cInserLbl7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl7->ForeColor = System::Drawing::Color::White;
			this->cInserLbl7->Location = System::Drawing::Point(14, 427);
			this->cInserLbl7->Name = L"cInserLbl7";
			this->cInserLbl7->Size = System::Drawing::Size(172, 25);
			this->cInserLbl7->TabIndex = 35;
			this->cInserLbl7->Text = L"Fecha Última Visita";
			// 
			// cInserTxtbx6
			// 
			this->cInserTxtbx6->Location = System::Drawing::Point(3, 391);
			this->cInserTxtbx6->Name = L"cInserTxtbx6";
			this->cInserTxtbx6->Size = System::Drawing::Size(193, 33);
			this->cInserTxtbx6->TabIndex = 34;
			// 
			// cInserLbl6
			// 
			this->cInserLbl6->AutoSize = true;
			this->cInserLbl6->BackColor = System::Drawing::Color::Black;
			this->cInserLbl6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl6->ForeColor = System::Drawing::Color::White;
			this->cInserLbl6->Location = System::Drawing::Point(51, 358);
			this->cInserLbl6->Name = L"cInserLbl6";
			this->cInserLbl6->Size = System::Drawing::Size(92, 30);
			this->cInserLbl6->TabIndex = 33;
			this->cInserLbl6->Text = L"Teléfono";
			// 
			// cInserTxtbx5
			// 
			this->cInserTxtbx5->Location = System::Drawing::Point(0, 322);
			this->cInserTxtbx5->Name = L"cInserTxtbx5";
			this->cInserTxtbx5->Size = System::Drawing::Size(196, 33);
			this->cInserTxtbx5->TabIndex = 32;
			// 
			// cInserTxtbx4
			// 
			this->cInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->cInserTxtbx4->Name = L"cInserTxtbx4";
			this->cInserTxtbx4->Size = System::Drawing::Size(196, 33);
			this->cInserTxtbx4->TabIndex = 31;
			// 
			// cInserLbl5
			// 
			this->cInserLbl5->AutoSize = true;
			this->cInserLbl5->BackColor = System::Drawing::Color::Black;
			this->cInserLbl5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl5->ForeColor = System::Drawing::Color::White;
			this->cInserLbl5->Location = System::Drawing::Point(29, 286);
			this->cInserLbl5->Name = L"cInserLbl5";
			this->cInserLbl5->Size = System::Drawing::Size(150, 30);
			this->cInserLbl5->TabIndex = 30;
			this->cInserLbl5->Text = L"Código Ciudad";
			// 
			// cInserLbl4
			// 
			this->cInserLbl4->AutoSize = true;
			this->cInserLbl4->BackColor = System::Drawing::Color::Black;
			this->cInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl4->ForeColor = System::Drawing::Color::White;
			this->cInserLbl4->Location = System::Drawing::Point(36, 217);
			this->cInserLbl4->Name = L"cInserLbl4";
			this->cInserLbl4->Size = System::Drawing::Size(121, 30);
			this->cInserLbl4->TabIndex = 29;
			this->cInserLbl4->Text = L"Código País";
			// 
			// cInserTxtbx3
			// 
			this->cInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->cInserTxtbx3->Name = L"cInserTxtbx3";
			this->cInserTxtbx3->Size = System::Drawing::Size(196, 33);
			this->cInserTxtbx3->TabIndex = 28;
			// 
			// cInserLbl3
			// 
			this->cInserLbl3->AutoSize = true;
			this->cInserLbl3->BackColor = System::Drawing::Color::Black;
			this->cInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl3->ForeColor = System::Drawing::Color::White;
			this->cInserLbl3->Location = System::Drawing::Point(51, 149);
			this->cInserLbl3->Name = L"cInserLbl3";
			this->cInserLbl3->Size = System::Drawing::Size(100, 30);
			this->cInserLbl3->TabIndex = 27;
			this->cInserLbl3->Text = L"Dirección";
			// 
			// cInserLbl2
			// 
			this->cInserLbl2->AutoSize = true;
			this->cInserLbl2->BackColor = System::Drawing::Color::Black;
			this->cInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl2->ForeColor = System::Drawing::Color::White;
			this->cInserLbl2->Location = System::Drawing::Point(51, 79);
			this->cInserLbl2->Name = L"cInserLbl2";
			this->cInserLbl2->Size = System::Drawing::Size(89, 30);
			this->cInserLbl2->TabIndex = 26;
			this->cInserLbl2->Text = L"Nombre";
			// 
			// cInserLbl1
			// 
			this->cInserLbl1->AutoSize = true;
			this->cInserLbl1->BackColor = System::Drawing::Color::Black;
			this->cInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cInserLbl1->ForeColor = System::Drawing::Color::White;
			this->cInserLbl1->Location = System::Drawing::Point(20, 10);
			this->cInserLbl1->Name = L"cInserLbl1";
			this->cInserLbl1->Size = System::Drawing::Size(159, 30);
			this->cInserLbl1->TabIndex = 25;
			this->cInserLbl1->Text = L"Número Cliente";
			// 
			// cInserTxtbx2
			// 
			this->cInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cInserTxtbx2->Name = L"cInserTxtbx2";
			this->cInserTxtbx2->Size = System::Drawing::Size(196, 33);
			this->cInserTxtbx2->TabIndex = 1;
			// 
			// cInserTxtbx1
			// 
			this->cInserTxtbx1->Location = System::Drawing::Point(0, 43);
			this->cInserTxtbx1->Name = L"cInserTxtbx1";
			this->cInserTxtbx1->Size = System::Drawing::Size(196, 33);
			this->cInserTxtbx1->TabIndex = 0;
			// 
			// pcBusq
			// 
			this->pcBusq->AutoScroll = true;
			this->pcBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcBusq->Controls->Add(this->bcBuscar);
			this->pcBusq->Controls->Add(this->cBusqLbl1);
			this->pcBusq->Controls->Add(this->cBusqTxtbx1);
			this->pcBusq->ForeColor = System::Drawing::Color::White;
			this->pcBusq->Location = System::Drawing::Point(836, 166);
			this->pcBusq->Name = L"pcBusq";
			this->pcBusq->Size = System::Drawing::Size(182, 120);
			this->pcBusq->TabIndex = 39;
			this->pcBusq->Visible = false;
			// 
			// bcBuscar
			// 
			this->bcBuscar->BackColor = System::Drawing::Color::DimGray;
			this->bcBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcBuscar->ForeColor = System::Drawing::Color::Gold;
			this->bcBuscar->Location = System::Drawing::Point(0, 73);
			this->bcBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcBuscar->Name = L"bcBuscar";
			this->bcBuscar->Size = System::Drawing::Size(182, 45);
			this->bcBuscar->TabIndex = 49;
			this->bcBuscar->Text = L"Buscar";
			this->bcBuscar->UseVisualStyleBackColor = false;
			this->bcBuscar->Click += gcnew System::EventHandler(this, &SubMenuClts::bcBuscar_Click);
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
			this->cBusqLbl1->Size = System::Drawing::Size(149, 30);
			this->cBusqLbl1->TabIndex = 25;
			this->cBusqLbl1->Text = L"Código Cliente";
			// 
			// cBusqTxtbx1
			// 
			this->cBusqTxtbx1->Location = System::Drawing::Point(0, 42);
			this->cBusqTxtbx1->Name = L"cBusqTxtbx1";
			this->cBusqTxtbx1->Size = System::Drawing::Size(182, 33);
			this->cBusqTxtbx1->TabIndex = 0;
			// 
			// pmInser
			// 
			this->pmInser->AutoScroll = true;
			this->pmInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmInser->Controls->Add(this->bmInsertar);
			this->pmInser->Controls->Add(this->mInserTxtbx10);
			this->pmInser->Controls->Add(this->mInserLbl10);
			this->pmInser->Controls->Add(this->mInserTxtbx9);
			this->pmInser->Controls->Add(this->mInserLbl9);
			this->pmInser->Controls->Add(this->mInserTxtbx8);
			this->pmInser->Controls->Add(this->mInserLbl8);
			this->pmInser->Controls->Add(this->mInserTxtbx7);
			this->pmInser->Controls->Add(this->mInserLbl7);
			this->pmInser->Controls->Add(this->mInserTxtbx6);
			this->pmInser->Controls->Add(this->mInserLbl6);
			this->pmInser->Controls->Add(this->mInserTxtbx5);
			this->pmInser->Controls->Add(this->mInserTxtbx4);
			this->pmInser->Controls->Add(this->mInserLbl5);
			this->pmInser->Controls->Add(this->mInserLbl4);
			this->pmInser->Controls->Add(this->mInserTxtbx3);
			this->pmInser->Controls->Add(this->mInserLbl3);
			this->pmInser->Controls->Add(this->mInserLbl2);
			this->pmInser->Controls->Add(this->mInserLbl1);
			this->pmInser->Controls->Add(this->mInserTxtbx2);
			this->pmInser->Controls->Add(this->mInserTxtbx1);
			this->pmInser->ForeColor = System::Drawing::Color::White;
			this->pmInser->Location = System::Drawing::Point(366, 321);
			this->pmInser->Name = L"pmInser";
			this->pmInser->Size = System::Drawing::Size(213, 145);
			this->pmInser->TabIndex = 41;
			this->pmInser->Visible = false;
			// 
			// bmInsertar
			// 
			this->bmInsertar->BackColor = System::Drawing::Color::DimGray;
			this->bmInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmInsertar->ForeColor = System::Drawing::Color::Gold;
			this->bmInsertar->Location = System::Drawing::Point(3, 692);
			this->bmInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmInsertar->Name = L"bmInsertar";
			this->bmInsertar->Size = System::Drawing::Size(193, 45);
			this->bmInsertar->TabIndex = 53;
			this->bmInsertar->Text = L"Insertar";
			this->bmInsertar->UseVisualStyleBackColor = false;
			this->bmInsertar->Click += gcnew System::EventHandler(this, &SubMenuClts::bmInsertar_Click);
			// 
			// mInserTxtbx10
			// 
			this->mInserTxtbx10->Location = System::Drawing::Point(3, 667);
			this->mInserTxtbx10->Name = L"mInserTxtbx10";
			this->mInserTxtbx10->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx10->TabIndex = 42;
			// 
			// mInserLbl10
			// 
			this->mInserLbl10->AutoSize = true;
			this->mInserLbl10->BackColor = System::Drawing::Color::Black;
			this->mInserLbl10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl10->ForeColor = System::Drawing::Color::White;
			this->mInserLbl10->Location = System::Drawing::Point(13, 636);
			this->mInserLbl10->Name = L"mInserLbl10";
			this->mInserLbl10->Size = System::Drawing::Size(172, 25);
			this->mInserLbl10->TabIndex = 41;
			this->mInserLbl10->Text = L"Fecha Ultima Visita";
			// 
			// mInserTxtbx9
			// 
			this->mInserTxtbx9->Location = System::Drawing::Point(3, 598);
			this->mInserTxtbx9->Name = L"mInserTxtbx9";
			this->mInserTxtbx9->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx9->TabIndex = 40;
			// 
			// mInserLbl9
			// 
			this->mInserLbl9->AutoSize = true;
			this->mInserLbl9->BackColor = System::Drawing::Color::Black;
			this->mInserLbl9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl9->ForeColor = System::Drawing::Color::White;
			this->mInserLbl9->Location = System::Drawing::Point(55, 565);
			this->mInserLbl9->Name = L"mInserLbl9";
			this->mInserLbl9->Size = System::Drawing::Size(95, 30);
			this->mInserLbl9->TabIndex = 39;
			this->mInserLbl9->Text = L"Castrado";
			// 
			// mInserTxtbx8
			// 
			this->mInserTxtbx8->Location = System::Drawing::Point(3, 529);
			this->mInserTxtbx8->Name = L"mInserTxtbx8";
			this->mInserTxtbx8->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx8->TabIndex = 38;
			// 
			// mInserLbl8
			// 
			this->mInserLbl8->AutoSize = true;
			this->mInserLbl8->BackColor = System::Drawing::Color::Black;
			this->mInserLbl8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl8->ForeColor = System::Drawing::Color::White;
			this->mInserLbl8->Location = System::Drawing::Point(65, 496);
			this->mInserLbl8->Name = L"mInserLbl8";
			this->mInserLbl8->Size = System::Drawing::Size(62, 30);
			this->mInserLbl8->TabIndex = 37;
			this->mInserLbl8->Text = L"Color";
			// 
			// mInserTxtbx7
			// 
			this->mInserTxtbx7->Location = System::Drawing::Point(3, 460);
			this->mInserTxtbx7->Name = L"mInserTxtbx7";
			this->mInserTxtbx7->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx7->TabIndex = 36;
			// 
			// mInserLbl7
			// 
			this->mInserLbl7->AutoSize = true;
			this->mInserLbl7->BackColor = System::Drawing::Color::Black;
			this->mInserLbl7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl7->ForeColor = System::Drawing::Color::White;
			this->mInserLbl7->Location = System::Drawing::Point(70, 427);
			this->mInserLbl7->Name = L"mInserLbl7";
			this->mInserLbl7->Size = System::Drawing::Size(57, 30);
			this->mInserLbl7->TabIndex = 35;
			this->mInserLbl7->Text = L"Sexo";
			// 
			// mInserTxtbx6
			// 
			this->mInserTxtbx6->Location = System::Drawing::Point(3, 391);
			this->mInserTxtbx6->Name = L"mInserTxtbx6";
			this->mInserTxtbx6->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx6->TabIndex = 34;
			// 
			// mInserLbl6
			// 
			this->mInserLbl6->AutoSize = true;
			this->mInserLbl6->BackColor = System::Drawing::Color::Black;
			this->mInserLbl6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl6->ForeColor = System::Drawing::Color::White;
			this->mInserLbl6->Location = System::Drawing::Point(12, 358);
			this->mInserLbl6->Name = L"mInserLbl6";
			this->mInserLbl6->Size = System::Drawing::Size(180, 30);
			this->mInserLbl6->TabIndex = 33;
			this->mInserLbl6->Text = L"Fecha Nacimiento";
			// 
			// mInserTxtbx5
			// 
			this->mInserTxtbx5->Location = System::Drawing::Point(0, 322);
			this->mInserTxtbx5->Name = L"mInserTxtbx5";
			this->mInserTxtbx5->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx5->TabIndex = 32;
			// 
			// mInserTxtbx4
			// 
			this->mInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->mInserTxtbx4->Name = L"mInserTxtbx4";
			this->mInserTxtbx4->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx4->TabIndex = 31;
			// 
			// mInserLbl5
			// 
			this->mInserLbl5->AutoSize = true;
			this->mInserLbl5->BackColor = System::Drawing::Color::Black;
			this->mInserLbl5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl5->ForeColor = System::Drawing::Color::White;
			this->mInserLbl5->Location = System::Drawing::Point(66, 290);
			this->mInserLbl5->Name = L"mInserLbl5";
			this->mInserLbl5->Size = System::Drawing::Size(58, 30);
			this->mInserLbl5->TabIndex = 30;
			this->mInserLbl5->Text = L"Raza";
			// 
			// mInserLbl4
			// 
			this->mInserLbl4->AutoSize = true;
			this->mInserLbl4->BackColor = System::Drawing::Color::Black;
			this->mInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl4->ForeColor = System::Drawing::Color::White;
			this->mInserLbl4->Location = System::Drawing::Point(36, 217);
			this->mInserLbl4->Name = L"mInserLbl4";
			this->mInserLbl4->Size = System::Drawing::Size(138, 30);
			this->mInserLbl4->TabIndex = 29;
			this->mInserLbl4->Text = L"Tipo Mascota";
			// 
			// mInserTxtbx3
			// 
			this->mInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->mInserTxtbx3->Name = L"mInserTxtbx3";
			this->mInserTxtbx3->Size = System::Drawing::Size(193, 33);
			this->mInserTxtbx3->TabIndex = 28;
			// 
			// mInserLbl3
			// 
			this->mInserLbl3->AutoSize = true;
			this->mInserLbl3->BackColor = System::Drawing::Color::Black;
			this->mInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl3->ForeColor = System::Drawing::Color::White;
			this->mInserLbl3->Location = System::Drawing::Point(51, 149);
			this->mInserLbl3->Name = L"mInserLbl3";
			this->mInserLbl3->Size = System::Drawing::Size(89, 30);
			this->mInserLbl3->TabIndex = 27;
			this->mInserLbl3->Text = L"Nombre";
			// 
			// mInserLbl2
			// 
			this->mInserLbl2->AutoSize = true;
			this->mInserLbl2->BackColor = System::Drawing::Color::Black;
			this->mInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl2->ForeColor = System::Drawing::Color::White;
			this->mInserLbl2->Location = System::Drawing::Point(51, 79);
			this->mInserLbl2->Name = L"mInserLbl2";
			this->mInserLbl2->Size = System::Drawing::Size(105, 30);
			this->mInserLbl2->TabIndex = 26;
			this->mInserLbl2->Text = L"ID Animal";
			// 
			// mInserLbl1
			// 
			this->mInserLbl1->AutoSize = true;
			this->mInserLbl1->BackColor = System::Drawing::Color::Black;
			this->mInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mInserLbl1->ForeColor = System::Drawing::Color::White;
			this->mInserLbl1->Location = System::Drawing::Point(20, 10);
			this->mInserLbl1->Name = L"mInserLbl1";
			this->mInserLbl1->Size = System::Drawing::Size(159, 30);
			this->mInserLbl1->TabIndex = 25;
			this->mInserLbl1->Text = L"Número Cliente";
			// 
			// mInserTxtbx2
			// 
			this->mInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->mInserTxtbx2->Name = L"mInserTxtbx2";
			this->mInserTxtbx2->Size = System::Drawing::Size(196, 33);
			this->mInserTxtbx2->TabIndex = 1;
			// 
			// mInserTxtbx1
			// 
			this->mInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->mInserTxtbx1->Name = L"mInserTxtbx1";
			this->mInserTxtbx1->Size = System::Drawing::Size(199, 33);
			this->mInserTxtbx1->TabIndex = 0;
			// 
			// pmBusq
			// 
			this->pmBusq->AutoScroll = true;
			this->pmBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmBusq->Controls->Add(this->bmBuscar);
			this->pmBusq->Controls->Add(this->mBusqLbl1);
			this->pmBusq->Controls->Add(this->mBusqTxtbx1);
			this->pmBusq->ForeColor = System::Drawing::Color::White;
			this->pmBusq->Location = System::Drawing::Point(836, 320);
			this->pmBusq->Name = L"pmBusq";
			this->pmBusq->Size = System::Drawing::Size(182, 126);
			this->pmBusq->TabIndex = 40;
			this->pmBusq->Visible = false;
			// 
			// bmBuscar
			// 
			this->bmBuscar->BackColor = System::Drawing::Color::DimGray;
			this->bmBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmBuscar->ForeColor = System::Drawing::Color::Gold;
			this->bmBuscar->Location = System::Drawing::Point(0, 81);
			this->bmBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmBuscar->Name = L"bmBuscar";
			this->bmBuscar->Size = System::Drawing::Size(182, 45);
			this->bmBuscar->TabIndex = 50;
			this->bmBuscar->Text = L"Buscar";
			this->bmBuscar->UseVisualStyleBackColor = false;
			this->bmBuscar->Click += gcnew System::EventHandler(this, &SubMenuClts::bmBuscar_Click);
			// 
			// mBusqLbl1
			// 
			this->mBusqLbl1->AutoSize = true;
			this->mBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->mBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->mBusqLbl1->Location = System::Drawing::Point(13, 10);
			this->mBusqLbl1->Name = L"mBusqLbl1";
			this->mBusqLbl1->Size = System::Drawing::Size(164, 30);
			this->mBusqLbl1->TabIndex = 25;
			this->mBusqLbl1->Text = L"Código Mascota";
			// 
			// mBusqTxtbx1
			// 
			this->mBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->mBusqTxtbx1->Name = L"mBusqTxtbx1";
			this->mBusqTxtbx1->Size = System::Drawing::Size(182, 33);
			this->mBusqTxtbx1->TabIndex = 0;
			// 
			// pvBusq
			// 
			this->pvBusq->AutoScroll = true;
			this->pvBusq->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pvBusq->Controls->Add(this->bvBuscar);
			this->pvBusq->Controls->Add(this->vBusqLbl1);
			this->pvBusq->Controls->Add(this->vBusqTxtbx1);
			this->pvBusq->ForeColor = System::Drawing::Color::White;
			this->pvBusq->Location = System::Drawing::Point(836, 473);
			this->pvBusq->Name = L"pvBusq";
			this->pvBusq->Size = System::Drawing::Size(182, 126);
			this->pvBusq->TabIndex = 41;
			this->pvBusq->Visible = false;
			// 
			// bvBuscar
			// 
			this->bvBuscar->BackColor = System::Drawing::Color::DimGray;
			this->bvBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bvBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bvBuscar->ForeColor = System::Drawing::Color::Gold;
			this->bvBuscar->Location = System::Drawing::Point(0, 75);
			this->bvBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bvBuscar->Name = L"bvBuscar";
			this->bvBuscar->Size = System::Drawing::Size(182, 45);
			this->bvBuscar->TabIndex = 51;
			this->bvBuscar->Text = L"Buscar";
			this->bvBuscar->UseVisualStyleBackColor = false;
			this->bvBuscar->Click += gcnew System::EventHandler(this, &SubMenuClts::bvBuscar_Click);
			// 
			// vBusqLbl1
			// 
			this->vBusqLbl1->AutoSize = true;
			this->vBusqLbl1->BackColor = System::Drawing::Color::Black;
			this->vBusqLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vBusqLbl1->ForeColor = System::Drawing::Color::White;
			this->vBusqLbl1->Location = System::Drawing::Point(27, 6);
			this->vBusqLbl1->Name = L"vBusqLbl1";
			this->vBusqLbl1->Size = System::Drawing::Size(135, 30);
			this->vBusqLbl1->TabIndex = 25;
			this->vBusqLbl1->Text = L"Código Visita";
			// 
			// vBusqTxtbx1
			// 
			this->vBusqTxtbx1->Location = System::Drawing::Point(0, 43);
			this->vBusqTxtbx1->Name = L"vBusqTxtbx1";
			this->vBusqTxtbx1->Size = System::Drawing::Size(182, 33);
			this->vBusqTxtbx1->TabIndex = 0;
			// 
			// pvInser
			// 
			this->pvInser->AutoScroll = true;
			this->pvInser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pvInser->Controls->Add(this->bvInsertar);
			this->pvInser->Controls->Add(this->vInserTxtbx5);
			this->pvInser->Controls->Add(this->vInserTxtbx4);
			this->pvInser->Controls->Add(this->vInserLbl5);
			this->pvInser->Controls->Add(this->vInserLbl4);
			this->pvInser->Controls->Add(this->vInserTxtbx3);
			this->pvInser->Controls->Add(this->vInserLbl3);
			this->pvInser->Controls->Add(this->vInserLbl2);
			this->pvInser->Controls->Add(this->vInserLbl1);
			this->pvInser->Controls->Add(this->vInserTxtbx2);
			this->pvInser->Controls->Add(this->vInserTxtbx1);
			this->pvInser->ForeColor = System::Drawing::Color::White;
			this->pvInser->Location = System::Drawing::Point(366, 474);
			this->pvInser->Name = L"pvInser";
			this->pvInser->Size = System::Drawing::Size(214, 146);
			this->pvInser->TabIndex = 42;
			this->pvInser->Visible = false;
			// 
			// bvInsertar
			// 
			this->bvInsertar->BackColor = System::Drawing::Color::DimGray;
			this->bvInsertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bvInsertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bvInsertar->ForeColor = System::Drawing::Color::Gold;
			this->bvInsertar->Location = System::Drawing::Point(0, 350);
			this->bvInsertar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bvInsertar->Name = L"bvInsertar";
			this->bvInsertar->Size = System::Drawing::Size(196, 45);
			this->bvInsertar->TabIndex = 51;
			this->bvInsertar->Text = L"Insertar";
			this->bvInsertar->UseVisualStyleBackColor = false;
			this->bvInsertar->Click += gcnew System::EventHandler(this, &SubMenuClts::bvInsertar_Click);
			// 
			// vInserTxtbx5
			// 
			this->vInserTxtbx5->Location = System::Drawing::Point(0, 322);
			this->vInserTxtbx5->Name = L"vInserTxtbx5";
			this->vInserTxtbx5->Size = System::Drawing::Size(196, 33);
			this->vInserTxtbx5->TabIndex = 32;
			// 
			// vInserTxtbx4
			// 
			this->vInserTxtbx4->Location = System::Drawing::Point(0, 250);
			this->vInserTxtbx4->Name = L"vInserTxtbx4";
			this->vInserTxtbx4->Size = System::Drawing::Size(196, 33);
			this->vInserTxtbx4->TabIndex = 31;
			// 
			// vInserLbl5
			// 
			this->vInserLbl5->AutoSize = true;
			this->vInserLbl5->BackColor = System::Drawing::Color::Black;
			this->vInserLbl5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vInserLbl5->ForeColor = System::Drawing::Color::White;
			this->vInserLbl5->Location = System::Drawing::Point(29, 286);
			this->vInserLbl5->Name = L"vInserLbl5";
			this->vInserLbl5->Size = System::Drawing::Size(152, 30);
			this->vInserLbl5->TabIndex = 30;
			this->vInserLbl5->Text = L"Forma de Pago";
			// 
			// vInserLbl4
			// 
			this->vInserLbl4->AutoSize = true;
			this->vInserLbl4->BackColor = System::Drawing::Color::Black;
			this->vInserLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vInserLbl4->ForeColor = System::Drawing::Color::White;
			this->vInserLbl4->Location = System::Drawing::Point(36, 217);
			this->vInserLbl4->Name = L"vInserLbl4";
			this->vInserLbl4->Size = System::Drawing::Size(130, 30);
			this->vInserLbl4->TabIndex = 29;
			this->vInserLbl4->Text = L"Total Factura";
			// 
			// vInserTxtbx3
			// 
			this->vInserTxtbx3->Location = System::Drawing::Point(0, 182);
			this->vInserTxtbx3->Name = L"vInserTxtbx3";
			this->vInserTxtbx3->Size = System::Drawing::Size(196, 33);
			this->vInserTxtbx3->TabIndex = 28;
			// 
			// vInserLbl3
			// 
			this->vInserLbl3->AutoSize = true;
			this->vInserLbl3->BackColor = System::Drawing::Color::Black;
			this->vInserLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vInserLbl3->ForeColor = System::Drawing::Color::White;
			this->vInserLbl3->Location = System::Drawing::Point(17, 150);
			this->vInserLbl3->Name = L"vInserLbl3";
			this->vInserLbl3->Size = System::Drawing::Size(172, 25);
			this->vInserLbl3->TabIndex = 27;
			this->vInserLbl3->Text = L"Fecha Última Visita";
			// 
			// vInserLbl2
			// 
			this->vInserLbl2->AutoSize = true;
			this->vInserLbl2->BackColor = System::Drawing::Color::Black;
			this->vInserLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vInserLbl2->ForeColor = System::Drawing::Color::White;
			this->vInserLbl2->Location = System::Drawing::Point(51, 79);
			this->vInserLbl2->Name = L"vInserLbl2";
			this->vInserLbl2->Size = System::Drawing::Size(105, 30);
			this->vInserLbl2->TabIndex = 26;
			this->vInserLbl2->Text = L"ID Animal";
			// 
			// vInserLbl1
			// 
			this->vInserLbl1->AutoSize = true;
			this->vInserLbl1->BackColor = System::Drawing::Color::Black;
			this->vInserLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vInserLbl1->ForeColor = System::Drawing::Color::White;
			this->vInserLbl1->Location = System::Drawing::Point(39, 10);
			this->vInserLbl1->Name = L"vInserLbl1";
			this->vInserLbl1->Size = System::Drawing::Size(135, 30);
			this->vInserLbl1->TabIndex = 25;
			this->vInserLbl1->Text = L"Código Visita";
			// 
			// vInserTxtbx2
			// 
			this->vInserTxtbx2->Location = System::Drawing::Point(0, 113);
			this->vInserTxtbx2->Name = L"vInserTxtbx2";
			this->vInserTxtbx2->Size = System::Drawing::Size(196, 33);
			this->vInserTxtbx2->TabIndex = 1;
			// 
			// vInserTxtbx1
			// 
			this->vInserTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->vInserTxtbx1->Name = L"vInserTxtbx1";
			this->vInserTxtbx1->Size = System::Drawing::Size(199, 33);
			this->vInserTxtbx1->TabIndex = 0;
			// 
			// pvElim
			// 
			this->pvElim->AutoScroll = true;
			this->pvElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pvElim->Controls->Add(this->bvEliminar);
			this->pvElim->Controls->Add(this->vElimLbl1);
			this->pvElim->Controls->Add(this->vElimTxtbx1);
			this->pvElim->ForeColor = System::Drawing::Color::White;
			this->pvElim->Location = System::Drawing::Point(1031, 473);
			this->pvElim->Name = L"pvElim";
			this->pvElim->Size = System::Drawing::Size(182, 126);
			this->pvElim->TabIndex = 54;
			this->pvElim->Visible = false;
			// 
			// bvEliminar
			// 
			this->bvEliminar->BackColor = System::Drawing::Color::DimGray;
			this->bvEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bvEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bvEliminar->ForeColor = System::Drawing::Color::Gold;
			this->bvEliminar->Location = System::Drawing::Point(0, 75);
			this->bvEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bvEliminar->Name = L"bvEliminar";
			this->bvEliminar->Size = System::Drawing::Size(182, 45);
			this->bvEliminar->TabIndex = 51;
			this->bvEliminar->Text = L"Eliminar";
			this->bvEliminar->UseVisualStyleBackColor = false;
			this->bvEliminar->Click += gcnew System::EventHandler(this, &SubMenuClts::bvEliminar_Click);
			// 
			// vElimLbl1
			// 
			this->vElimLbl1->AutoSize = true;
			this->vElimLbl1->BackColor = System::Drawing::Color::Black;
			this->vElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vElimLbl1->ForeColor = System::Drawing::Color::White;
			this->vElimLbl1->Location = System::Drawing::Point(27, 6);
			this->vElimLbl1->Name = L"vElimLbl1";
			this->vElimLbl1->Size = System::Drawing::Size(135, 30);
			this->vElimLbl1->TabIndex = 25;
			this->vElimLbl1->Text = L"Código Visita";
			// 
			// vElimTxtbx1
			// 
			this->vElimTxtbx1->Location = System::Drawing::Point(0, 43);
			this->vElimTxtbx1->Name = L"vElimTxtbx1";
			this->vElimTxtbx1->Size = System::Drawing::Size(182, 33);
			this->vElimTxtbx1->TabIndex = 0;
			// 
			// pmElim
			// 
			this->pmElim->AutoScroll = true;
			this->pmElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmElim->Controls->Add(this->bmEliminar);
			this->pmElim->Controls->Add(this->mElimLbl1);
			this->pmElim->Controls->Add(this->mElimTxtbx1);
			this->pmElim->ForeColor = System::Drawing::Color::White;
			this->pmElim->Location = System::Drawing::Point(1031, 320);
			this->pmElim->Name = L"pmElim";
			this->pmElim->Size = System::Drawing::Size(182, 126);
			this->pmElim->TabIndex = 53;
			this->pmElim->Visible = false;
			// 
			// bmEliminar
			// 
			this->bmEliminar->BackColor = System::Drawing::Color::DimGray;
			this->bmEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmEliminar->ForeColor = System::Drawing::Color::Gold;
			this->bmEliminar->Location = System::Drawing::Point(0, 81);
			this->bmEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmEliminar->Name = L"bmEliminar";
			this->bmEliminar->Size = System::Drawing::Size(182, 45);
			this->bmEliminar->TabIndex = 50;
			this->bmEliminar->Text = L"Eliminar";
			this->bmEliminar->UseVisualStyleBackColor = false;
			this->bmEliminar->Click += gcnew System::EventHandler(this, &SubMenuClts::bmEliminar_Click);
			// 
			// mElimLbl1
			// 
			this->mElimLbl1->AutoSize = true;
			this->mElimLbl1->BackColor = System::Drawing::Color::Black;
			this->mElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mElimLbl1->ForeColor = System::Drawing::Color::White;
			this->mElimLbl1->Location = System::Drawing::Point(13, 10);
			this->mElimLbl1->Name = L"mElimLbl1";
			this->mElimLbl1->Size = System::Drawing::Size(164, 30);
			this->mElimLbl1->TabIndex = 25;
			this->mElimLbl1->Text = L"Código Mascota";
			// 
			// mElimTxtbx1
			// 
			this->mElimTxtbx1->Location = System::Drawing::Point(0, 43);
			this->mElimTxtbx1->Name = L"mElimTxtbx1";
			this->mElimTxtbx1->Size = System::Drawing::Size(182, 33);
			this->mElimTxtbx1->TabIndex = 0;
			// 
			// pcElim
			// 
			this->pcElim->AutoScroll = true;
			this->pcElim->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcElim->Controls->Add(this->bcEliminar);
			this->pcElim->Controls->Add(this->cElimLbl1);
			this->pcElim->Controls->Add(this->cElimTxtbx1);
			this->pcElim->ForeColor = System::Drawing::Color::White;
			this->pcElim->Location = System::Drawing::Point(1031, 166);
			this->pcElim->Name = L"pcElim";
			this->pcElim->Size = System::Drawing::Size(182, 120);
			this->pcElim->TabIndex = 52;
			this->pcElim->Visible = false;
			// 
			// bcEliminar
			// 
			this->bcEliminar->BackColor = System::Drawing::Color::DimGray;
			this->bcEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcEliminar->ForeColor = System::Drawing::Color::Gold;
			this->bcEliminar->Location = System::Drawing::Point(0, 73);
			this->bcEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcEliminar->Name = L"bcEliminar";
			this->bcEliminar->Size = System::Drawing::Size(182, 45);
			this->bcEliminar->TabIndex = 49;
			this->bcEliminar->Text = L"Eliminar";
			this->bcEliminar->UseVisualStyleBackColor = false;
			this->bcEliminar->Click += gcnew System::EventHandler(this, &SubMenuClts::bcEliminar_Click);
			// 
			// cElimLbl1
			// 
			this->cElimLbl1->AutoSize = true;
			this->cElimLbl1->BackColor = System::Drawing::Color::Black;
			this->cElimLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cElimLbl1->ForeColor = System::Drawing::Color::White;
			this->cElimLbl1->Location = System::Drawing::Point(13, 4);
			this->cElimLbl1->Name = L"cElimLbl1";
			this->cElimLbl1->Size = System::Drawing::Size(149, 30);
			this->cElimLbl1->TabIndex = 25;
			this->cElimLbl1->Text = L"Código Cliente";
			// 
			// cElimTxtbx1
			// 
			this->cElimTxtbx1->Location = System::Drawing::Point(0, 42);
			this->cElimTxtbx1->Name = L"cElimTxtbx1";
			this->cElimTxtbx1->Size = System::Drawing::Size(182, 33);
			this->cElimTxtbx1->TabIndex = 0;
			// 
			// pvModif
			// 
			this->pvModif->AutoScroll = true;
			this->pvModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pvModif->Controls->Add(this->bvModificar);
			this->pvModif->Controls->Add(this->vModifTxtbx3);
			this->pvModif->Controls->Add(this->vModifLbl2);
			this->pvModif->Controls->Add(this->vModifLbl1);
			this->pvModif->Controls->Add(this->vModifLbl3);
			this->pvModif->Controls->Add(this->vModifTxtbx2);
			this->pvModif->Controls->Add(this->vModifTxtbx1);
			this->pvModif->ForeColor = System::Drawing::Color::White;
			this->pvModif->Location = System::Drawing::Point(596, 473);
			this->pvModif->Name = L"pvModif";
			this->pvModif->Size = System::Drawing::Size(216, 147);
			this->pvModif->TabIndex = 52;
			this->pvModif->Visible = false;
			// 
			// bvModificar
			// 
			this->bvModificar->BackColor = System::Drawing::Color::DimGray;
			this->bvModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bvModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bvModificar->ForeColor = System::Drawing::Color::Gold;
			this->bvModificar->Location = System::Drawing::Point(0, 220);
			this->bvModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bvModificar->Name = L"bvModificar";
			this->bvModificar->Size = System::Drawing::Size(196, 45);
			this->bvModificar->TabIndex = 51;
			this->bvModificar->Text = L"Modificar";
			this->bvModificar->UseVisualStyleBackColor = false;
			this->bvModificar->Click += gcnew System::EventHandler(this, &SubMenuClts::bvModificar_Click);
			// 
			// vModifTxtbx3
			// 
			this->vModifTxtbx3->Location = System::Drawing::Point(0, 186);
			this->vModifTxtbx3->Name = L"vModifTxtbx3";
			this->vModifTxtbx3->Size = System::Drawing::Size(196, 33);
			this->vModifTxtbx3->TabIndex = 32;
			// 
			// vModifLbl2
			// 
			this->vModifLbl2->AutoSize = true;
			this->vModifLbl2->BackColor = System::Drawing::Color::Black;
			this->vModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vModifLbl2->ForeColor = System::Drawing::Color::White;
			this->vModifLbl2->Location = System::Drawing::Point(51, 79);
			this->vModifLbl2->Name = L"vModifLbl2";
			this->vModifLbl2->Size = System::Drawing::Size(105, 30);
			this->vModifLbl2->TabIndex = 26;
			this->vModifLbl2->Text = L"ID Animal";
			// 
			// vModifLbl1
			// 
			this->vModifLbl1->AutoSize = true;
			this->vModifLbl1->BackColor = System::Drawing::Color::Black;
			this->vModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vModifLbl1->ForeColor = System::Drawing::Color::White;
			this->vModifLbl1->Location = System::Drawing::Point(39, 10);
			this->vModifLbl1->Name = L"vModifLbl1";
			this->vModifLbl1->Size = System::Drawing::Size(135, 30);
			this->vModifLbl1->TabIndex = 25;
			this->vModifLbl1->Text = L"Código Visita";
			// 
			// vModifLbl3
			// 
			this->vModifLbl3->AutoSize = true;
			this->vModifLbl3->BackColor = System::Drawing::Color::Black;
			this->vModifLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vModifLbl3->ForeColor = System::Drawing::Color::White;
			this->vModifLbl3->Location = System::Drawing::Point(22, 149);
			this->vModifLbl3->Name = L"vModifLbl3";
			this->vModifLbl3->Size = System::Drawing::Size(152, 30);
			this->vModifLbl3->TabIndex = 30;
			this->vModifLbl3->Text = L"Forma de Pago";
			// 
			// vModifTxtbx2
			// 
			this->vModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->vModifTxtbx2->Name = L"vModifTxtbx2";
			this->vModifTxtbx2->Size = System::Drawing::Size(196, 33);
			this->vModifTxtbx2->TabIndex = 1;
			// 
			// vModifTxtbx1
			// 
			this->vModifTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->vModifTxtbx1->Name = L"vModifTxtbx1";
			this->vModifTxtbx1->Size = System::Drawing::Size(199, 33);
			this->vModifTxtbx1->TabIndex = 0;
			// 
			// pmModif
			// 
			this->pmModif->AutoScroll = true;
			this->pmModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pmModif->Controls->Add(this->mModifTxtbx4);
			this->pmModif->Controls->Add(this->mModifLbl4);
			this->pmModif->Controls->Add(this->bmModificar);
			this->pmModif->Controls->Add(this->mModifTxtbx3);
			this->pmModif->Controls->Add(this->mModifLbl2);
			this->pmModif->Controls->Add(this->mModifLbl1);
			this->pmModif->Controls->Add(this->mModifLbl3);
			this->pmModif->Controls->Add(this->mModifTxtbx2);
			this->pmModif->Controls->Add(this->mModifTxtbx1);
			this->pmModif->ForeColor = System::Drawing::Color::White;
			this->pmModif->Location = System::Drawing::Point(596, 321);
			this->pmModif->Name = L"pmModif";
			this->pmModif->Size = System::Drawing::Size(216, 146);
			this->pmModif->TabIndex = 53;
			this->pmModif->Visible = false;
			// 
			// mModifTxtbx4
			// 
			this->mModifTxtbx4->Location = System::Drawing::Point(0, 259);
			this->mModifTxtbx4->Name = L"mModifTxtbx4";
			this->mModifTxtbx4->Size = System::Drawing::Size(196, 33);
			this->mModifTxtbx4->TabIndex = 53;
			// 
			// mModifLbl4
			// 
			this->mModifLbl4->AutoSize = true;
			this->mModifLbl4->BackColor = System::Drawing::Color::Black;
			this->mModifLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl4->ForeColor = System::Drawing::Color::White;
			this->mModifLbl4->Location = System::Drawing::Point(51, 222);
			this->mModifLbl4->Name = L"mModifLbl4";
			this->mModifLbl4->Size = System::Drawing::Size(95, 30);
			this->mModifLbl4->TabIndex = 52;
			this->mModifLbl4->Text = L"Castrado";
			// 
			// bmModificar
			// 
			this->bmModificar->BackColor = System::Drawing::Color::DimGray;
			this->bmModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bmModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmModificar->ForeColor = System::Drawing::Color::Gold;
			this->bmModificar->Location = System::Drawing::Point(0, 292);
			this->bmModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bmModificar->Name = L"bmModificar";
			this->bmModificar->Size = System::Drawing::Size(196, 45);
			this->bmModificar->TabIndex = 51;
			this->bmModificar->Text = L"Modificar";
			this->bmModificar->UseVisualStyleBackColor = false;
			this->bmModificar->Click += gcnew System::EventHandler(this, &SubMenuClts::bmModificar_Click);
			// 
			// mModifTxtbx3
			// 
			this->mModifTxtbx3->Location = System::Drawing::Point(0, 186);
			this->mModifTxtbx3->Name = L"mModifTxtbx3";
			this->mModifTxtbx3->Size = System::Drawing::Size(196, 33);
			this->mModifTxtbx3->TabIndex = 32;
			// 
			// mModifLbl2
			// 
			this->mModifLbl2->AutoSize = true;
			this->mModifLbl2->BackColor = System::Drawing::Color::Black;
			this->mModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl2->ForeColor = System::Drawing::Color::White;
			this->mModifLbl2->Location = System::Drawing::Point(51, 79);
			this->mModifLbl2->Name = L"mModifLbl2";
			this->mModifLbl2->Size = System::Drawing::Size(105, 30);
			this->mModifLbl2->TabIndex = 26;
			this->mModifLbl2->Text = L"ID Animal";
			// 
			// mModifLbl1
			// 
			this->mModifLbl1->AutoSize = true;
			this->mModifLbl1->BackColor = System::Drawing::Color::Black;
			this->mModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl1->ForeColor = System::Drawing::Color::White;
			this->mModifLbl1->Location = System::Drawing::Point(22, 10);
			this->mModifLbl1->Name = L"mModifLbl1";
			this->mModifLbl1->Size = System::Drawing::Size(159, 30);
			this->mModifLbl1->TabIndex = 25;
			this->mModifLbl1->Text = L"Número Cliente";
			// 
			// mModifLbl3
			// 
			this->mModifLbl3->AutoSize = true;
			this->mModifLbl3->BackColor = System::Drawing::Color::Black;
			this->mModifLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mModifLbl3->ForeColor = System::Drawing::Color::White;
			this->mModifLbl3->Location = System::Drawing::Point(22, 149);
			this->mModifLbl3->Name = L"mModifLbl3";
			this->mModifLbl3->Size = System::Drawing::Size(174, 30);
			this->mModifLbl3->TabIndex = 30;
			this->mModifLbl3->Text = L"Nombre Mascota";
			// 
			// mModifTxtbx2
			// 
			this->mModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->mModifTxtbx2->Name = L"mModifTxtbx2";
			this->mModifTxtbx2->Size = System::Drawing::Size(196, 33);
			this->mModifTxtbx2->TabIndex = 1;
			// 
			// mModifTxtbx1
			// 
			this->mModifTxtbx1->Location = System::Drawing::Point(-3, 43);
			this->mModifTxtbx1->Name = L"mModifTxtbx1";
			this->mModifTxtbx1->Size = System::Drawing::Size(199, 33);
			this->mModifTxtbx1->TabIndex = 0;
			// 
			// pcModif
			// 
			this->pcModif->AutoScroll = true;
			this->pcModif->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pcModif->Controls->Add(this->bcModificar);
			this->pcModif->Controls->Add(this->cModifTxtbx6);
			this->pcModif->Controls->Add(this->cModifLbl6);
			this->pcModif->Controls->Add(this->cModifTxtbx5);
			this->pcModif->Controls->Add(this->cModifTxtbx4);
			this->pcModif->Controls->Add(this->cModifLbl5);
			this->pcModif->Controls->Add(this->cModifLbl4);
			this->pcModif->Controls->Add(this->cModifTxtbx3);
			this->pcModif->Controls->Add(this->cModifLbl3);
			this->pcModif->Controls->Add(this->cModifLbl2);
			this->pcModif->Controls->Add(this->cModifLbl1);
			this->pcModif->Controls->Add(this->cModifTxtbx2);
			this->pcModif->Controls->Add(this->cModifTxtbx1);
			this->pcModif->ForeColor = System::Drawing::Color::White;
			this->pcModif->Location = System::Drawing::Point(596, 166);
			this->pcModif->Name = L"pcModif";
			this->pcModif->Size = System::Drawing::Size(214, 146);
			this->pcModif->TabIndex = 53;
			this->pcModif->Visible = false;
			// 
			// bcModificar
			// 
			this->bcModificar->BackColor = System::Drawing::Color::DimGray;
			this->bcModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bcModificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bcModificar->ForeColor = System::Drawing::Color::Gold;
			this->bcModificar->Location = System::Drawing::Point(4, 420);
			this->bcModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bcModificar->Name = L"bcModificar";
			this->bcModificar->Size = System::Drawing::Size(193, 45);
			this->bcModificar->TabIndex = 52;
			this->bcModificar->Text = L"Modificar";
			this->bcModificar->UseVisualStyleBackColor = false;
			this->bcModificar->Click += gcnew System::EventHandler(this, &SubMenuClts::bcModificar_Click);
			// 
			// cModifTxtbx6
			// 
			this->cModifTxtbx6->Location = System::Drawing::Point(3, 391);
			this->cModifTxtbx6->Name = L"cModifTxtbx6";
			this->cModifTxtbx6->Size = System::Drawing::Size(193, 33);
			this->cModifTxtbx6->TabIndex = 34;
			// 
			// cModifLbl6
			// 
			this->cModifLbl6->AutoSize = true;
			this->cModifLbl6->BackColor = System::Drawing::Color::Black;
			this->cModifLbl6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl6->ForeColor = System::Drawing::Color::White;
			this->cModifLbl6->Location = System::Drawing::Point(51, 358);
			this->cModifLbl6->Name = L"cModifLbl6";
			this->cModifLbl6->Size = System::Drawing::Size(92, 30);
			this->cModifLbl6->TabIndex = 33;
			this->cModifLbl6->Text = L"Teléfono";
			// 
			// cModifTxtbx5
			// 
			this->cModifTxtbx5->Location = System::Drawing::Point(0, 322);
			this->cModifTxtbx5->Name = L"cModifTxtbx5";
			this->cModifTxtbx5->Size = System::Drawing::Size(196, 33);
			this->cModifTxtbx5->TabIndex = 32;
			// 
			// cModifTxtbx4
			// 
			this->cModifTxtbx4->Location = System::Drawing::Point(0, 250);
			this->cModifTxtbx4->Name = L"cModifTxtbx4";
			this->cModifTxtbx4->Size = System::Drawing::Size(196, 33);
			this->cModifTxtbx4->TabIndex = 31;
			// 
			// cModifLbl5
			// 
			this->cModifLbl5->AutoSize = true;
			this->cModifLbl5->BackColor = System::Drawing::Color::Black;
			this->cModifLbl5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl5->ForeColor = System::Drawing::Color::White;
			this->cModifLbl5->Location = System::Drawing::Point(29, 286);
			this->cModifLbl5->Name = L"cModifLbl5";
			this->cModifLbl5->Size = System::Drawing::Size(150, 30);
			this->cModifLbl5->TabIndex = 30;
			this->cModifLbl5->Text = L"Código Ciudad";
			// 
			// cModifLbl4
			// 
			this->cModifLbl4->AutoSize = true;
			this->cModifLbl4->BackColor = System::Drawing::Color::Black;
			this->cModifLbl4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl4->ForeColor = System::Drawing::Color::White;
			this->cModifLbl4->Location = System::Drawing::Point(36, 217);
			this->cModifLbl4->Name = L"cModifLbl4";
			this->cModifLbl4->Size = System::Drawing::Size(121, 30);
			this->cModifLbl4->TabIndex = 29;
			this->cModifLbl4->Text = L"Código País";
			// 
			// cModifTxtbx3
			// 
			this->cModifTxtbx3->Location = System::Drawing::Point(0, 182);
			this->cModifTxtbx3->Name = L"cModifTxtbx3";
			this->cModifTxtbx3->Size = System::Drawing::Size(196, 33);
			this->cModifTxtbx3->TabIndex = 28;
			// 
			// cModifLbl3
			// 
			this->cModifLbl3->AutoSize = true;
			this->cModifLbl3->BackColor = System::Drawing::Color::Black;
			this->cModifLbl3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl3->ForeColor = System::Drawing::Color::White;
			this->cModifLbl3->Location = System::Drawing::Point(51, 149);
			this->cModifLbl3->Name = L"cModifLbl3";
			this->cModifLbl3->Size = System::Drawing::Size(100, 30);
			this->cModifLbl3->TabIndex = 27;
			this->cModifLbl3->Text = L"Dirección";
			// 
			// cModifLbl2
			// 
			this->cModifLbl2->AutoSize = true;
			this->cModifLbl2->BackColor = System::Drawing::Color::Black;
			this->cModifLbl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl2->ForeColor = System::Drawing::Color::White;
			this->cModifLbl2->Location = System::Drawing::Point(51, 79);
			this->cModifLbl2->Name = L"cModifLbl2";
			this->cModifLbl2->Size = System::Drawing::Size(89, 30);
			this->cModifLbl2->TabIndex = 26;
			this->cModifLbl2->Text = L"Nombre";
			// 
			// cModifLbl1
			// 
			this->cModifLbl1->AutoSize = true;
			this->cModifLbl1->BackColor = System::Drawing::Color::Black;
			this->cModifLbl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cModifLbl1->ForeColor = System::Drawing::Color::White;
			this->cModifLbl1->Location = System::Drawing::Point(20, 10);
			this->cModifLbl1->Name = L"cModifLbl1";
			this->cModifLbl1->Size = System::Drawing::Size(159, 30);
			this->cModifLbl1->TabIndex = 25;
			this->cModifLbl1->Text = L"Número Cliente";
			// 
			// cModifTxtbx2
			// 
			this->cModifTxtbx2->Location = System::Drawing::Point(0, 113);
			this->cModifTxtbx2->Name = L"cModifTxtbx2";
			this->cModifTxtbx2->Size = System::Drawing::Size(196, 33);
			this->cModifTxtbx2->TabIndex = 1;
			// 
			// cModifTxtbx1
			// 
			this->cModifTxtbx1->Location = System::Drawing::Point(0, 43);
			this->cModifTxtbx1->Name = L"cModifTxtbx1";
			this->cModifTxtbx1->Size = System::Drawing::Size(196, 33);
			this->cModifTxtbx1->TabIndex = 0;
			// 
			// SubMenuClts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1225, 734);
			this->Controls->Add(this->pcModif);
			this->Controls->Add(this->pmModif);
			this->Controls->Add(this->pvModif);
			this->Controls->Add(this->pvElim);
			this->Controls->Add(this->pvInser);
			this->Controls->Add(this->pmElim);
			this->Controls->Add(this->pvBusq);
			this->Controls->Add(this->pcElim);
			this->Controls->Add(this->pmBusq);
			this->Controls->Add(this->pmInser);
			this->Controls->Add(this->pcBusq);
			this->Controls->Add(this->pcInser);
			this->Controls->Add(this->pVisitas);
			this->Controls->Add(this->pMascotas);
			this->Controls->Add(this->pClientes);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->lblMascotas);
			this->Controls->Add(this->lblVisitas);
			this->Controls->Add(this->bVisitas);
			this->Controls->Add(this->lblClientes);
			this->Controls->Add(this->bMascotas);
			this->Controls->Add(this->bClientes);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SubMenuClts";
			this->Text = L"SubMenuClts";
			this->Load += gcnew System::EventHandler(this, &SubMenuClts::SubMenuClts_Load);
			this->pClientes->ResumeLayout(false);
			this->pMascotas->ResumeLayout(false);
			this->pVisitas->ResumeLayout(false);
			this->pcInser->ResumeLayout(false);
			this->pcInser->PerformLayout();
			this->pcBusq->ResumeLayout(false);
			this->pcBusq->PerformLayout();
			this->pmInser->ResumeLayout(false);
			this->pmInser->PerformLayout();
			this->pmBusq->ResumeLayout(false);
			this->pmBusq->PerformLayout();
			this->pvBusq->ResumeLayout(false);
			this->pvBusq->PerformLayout();
			this->pvInser->ResumeLayout(false);
			this->pvInser->PerformLayout();
			this->pvElim->ResumeLayout(false);
			this->pvElim->PerformLayout();
			this->pmElim->ResumeLayout(false);
			this->pmElim->PerformLayout();
			this->pcElim->ResumeLayout(false);
			this->pcElim->PerformLayout();
			this->pvModif->ResumeLayout(false);
			this->pvModif->PerformLayout();
			this->pmModif->ResumeLayout(false);
			this->pmModif->PerformLayout();
			this->pcModif->ResumeLayout(false);
			this->pcModif->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuClts_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pClientes->Show();
	}
	private: System::Void bMascotas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pMascotas->Show();
	}
	private: System::Void bVisitas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pVisitas->Show();
	}
		   /*	BOTONES CLIENTES	 */

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
		   /*	BOTONES MASCOTAS	 */

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
		   /*	BOTONES VISITAS	 */

	private: System::Void bvInser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pvInser->Show();
		this->pvModif->Hide();
		this->pvBusq->Hide();
		this->pvElim->Hide();
	}
	private: System::Void bvModif_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pvInser->Hide();
		this->pvModif->Show();
		this->pvBusq->Hide();
		this->pvElim->Hide();
	}
	private: System::Void bvBusq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pvInser->Hide();
		this->pvModif->Hide();
		this->pvBusq->Show();
		this->pvElim->Hide();
	}
	private: System::Void bvElim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pvInser->Hide();
		this->pvModif->Hide();
		this->pvBusq->Hide();
		this->pvElim->Show();
	}
	// ************
private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();

	}

								/*	FUNCIONES  */

	private: System::Void bcInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numCliente = this->cInserTxtbx1->Text;
		String^ nombre = this->cInserTxtbx2->Text;
		String^ direccion = this->cInserTxtbx3->Text;
		String^ codpais = this->cInserTxtbx4->Text;
		String^ codciudad = this->cInserTxtbx5->Text;
		String^ telefono = this->cInserTxtbx6->Text;
		String^ fuv = this->cInserTxtbx7->Text;
	}
	private: System::Void bmInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numCliente = this->mInserTxtbx1->Text;
		String^ id = this->mInserTxtbx2->Text;
		String^ nombre = this->mInserTxtbx3->Text;
		String^ tipo = this->mInserTxtbx4->Text;
		String^ raza = this->mInserTxtbx5->Text;
		String^ fnacimiento = this->mInserTxtbx6->Text;
		String^ sexo = this->mInserTxtbx7->Text;
		String^ color = this->mInserTxtbx8->Text;
		String^ castrado = this->mInserTxtbx9->Text;
		String^ fuv = this->mInserTxtbx10->Text;
	}
	private: System::Void bvInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codVisita = this->vInserTxtbx1->Text;
		String^ idAnimal = this->vInserTxtbx2->Text;
		String^ fuv = this->vInserTxtbx3->Text;
		String^ totalFactura = this->vInserTxtbx4->Text;
		String^ formaDePago = this->vInserTxtbx5->Text;
	}
	private: System::Void bcModificar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bmModificar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bvModificar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bcBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codCliente = this->cBusqTxtbx1->Text;
	}
	private: System::Void bmBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codMascota = this->mBusqTxtbx1->Text;
	}
	private: System::Void bvBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codVisita = this->vBusqTxtbx1->Text;
	}
	private: System::Void bcEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bmEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bvEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
