#pragma once

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
		SubMenuClnc(System::Windows::Forms::Form^ m)
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
			this->pMeds->SuspendLayout();
			this->pTrat->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::AntiqueWhite;
			this->titleMenu->Location = System::Drawing::Point(64, 59);
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
			this->pMeds->Location = System::Drawing::Point(235, 388);
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
			this->pTrat->Location = System::Drawing::Point(232, 192);
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
			this->lblMeds->Location = System::Drawing::Point(58, 500);
			this->lblMeds->Name = L"lblMeds";
			this->lblMeds->Size = System::Drawing::Size(150, 30);
			this->lblMeds->TabIndex = 24;
			this->lblMeds->Text = L"Medicamentos";
			// 
			// lblTrat
			// 
			this->lblTrat->AutoSize = true;
			this->lblTrat->BackColor = System::Drawing::Color::Transparent;
			this->lblTrat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrat->ForeColor = System::Drawing::Color::White;
			this->lblTrat->Location = System::Drawing::Point(67, 307);
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
			this->bMeds->Location = System::Drawing::Point(75, 388);
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
			this->bTrat->Location = System::Drawing::Point(75, 195);
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
			this->bSalir->Location = System::Drawing::Point(75, 566);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 27;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuClnc::bSalir_Click);
			// 
			// SubMenuClnc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 650);
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
	}
	private: System::Void btModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btBusq_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// *************
	private: System::Void bmInser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmModif_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmBusq_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bmElim_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// *************
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu->Show();
	}
};
}
