#pragma once

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

	public:
		SubMenuClts(System::Windows::Forms::Form^ m)
		{
			menu = m;
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
			this->pClientes->SuspendLayout();
			this->pMascotas->SuspendLayout();
			this->pVisitas->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::Gold;
			this->titleMenu->Location = System::Drawing::Point(183, 52);
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
			this->lblMascotas->Location = System::Drawing::Point(225, 384);
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
			this->lblVisitas->Location = System::Drawing::Point(237, 537);
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
			this->bVisitas->Location = System::Drawing::Point(216, 441);
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
			this->lblClientes->Location = System::Drawing::Point(232, 237);
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
			this->bMascotas->Location = System::Drawing::Point(216, 288);
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
			this->bClientes->Location = System::Drawing::Point(216, 133);
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
			this->bSalir->Location = System::Drawing::Point(55, 522);
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
			this->pClientes->Location = System::Drawing::Point(340, 133);
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
			this->bcElim->Visible = false;
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
			this->bcBusq->Visible = false;
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
			this->bcModif->Visible = false;
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
			this->bcInser->Visible = false;
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
			this->pMascotas->Location = System::Drawing::Point(340, 288);
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
			this->bmElim->Visible = false;
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
			this->bmBusq->Visible = false;
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
			this->bmModif->Visible = false;
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
			this->bmInser->Visible = false;
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
			this->pVisitas->Location = System::Drawing::Point(340, 441);
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
			this->bvElim->Visible = false;
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
			this->bvBusq->Visible = false;
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
			this->bvModif->Visible = false;
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
			this->bvInser->Visible = false;
			this->bvInser->Click += gcnew System::EventHandler(this, &SubMenuClts::bvInser_Click);
			// 
			// SubMenuClts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1094, 611);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuClts_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pClientes->Show();
		this->bcInser->Show();
		this->bcModif->Show();
		this->bcBusq->Show();
		this->bcElim->Show();
	}
	private: System::Void bMascotas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pMascotas->Show();
		this->bmInser->Show();
		this->bmModif->Show();
		this->bmBusq->Show();
		this->bmElim->Show();
	}
	private: System::Void bVisitas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pVisitas->Show();
		this->bvInser->Show();
		this->bvModif->Show();
		this->bvBusq->Show();
		this->bvElim->Show();
	}
		   /*	BOTONES CLIENTES	 */

	private: System::Void bcInser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcBusq_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bcElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   /*	BOTONES MASCOTAS	 */

	private: System::Void bmInser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmBusq_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   /*	BOTONES VISITAS	 */

	private: System::Void bvInser_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bvModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bvBusq_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bvElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	// ************
private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu->Show();

	}
/*private: System::Void lblClientes_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblMascotas_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblVisitas_Click(System::Object^ sender, System::EventArgs^ e) {
}*/
	};
}
