#pragma once
#include "Controlador.h"

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

	public:
		SubMenuLugs(System::Windows::Forms::Form^ m)
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
			this->pPaises->SuspendLayout();
			this->pCiudades->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::IndianRed;
			this->titleMenu->Location = System::Drawing::Point(632, 74);
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
			this->bPaises->Location = System::Drawing::Point(626, 179);
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
			this->bCiudades->Location = System::Drawing::Point(626, 372);
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
			this->lblPaises->Location = System::Drawing::Point(650, 291);
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
			this->lblCiudades->Location = System::Drawing::Point(638, 465);
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
			this->pPaises->Location = System::Drawing::Point(756, 176);
			this->pPaises->Name = L"pPaises";
			this->pPaises->Size = System::Drawing::Size(148, 145);
			this->pPaises->TabIndex = 19;
			this->pPaises->Visible = false;
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
			this->bpElim->Visible = false;
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
			this->bpBusq->Visible = false;
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
			this->bpModif->Visible = false;
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
			this->bpInser->Visible = false;
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
			this->pCiudades->Location = System::Drawing::Point(756, 372);
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
			this->bcElim->Visible = false;
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
			this->bcBusq->Visible = false;
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
			this->bcModif->Visible = false;
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
			this->bcInser->Visible = false;
			// 
			// SubMenuLugs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 641);
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
		this->bpInser->Show();
		this->bpModif->Show();
		this->bpBusq->Show();
		this->bpElim->Show();
	}
	private: System::Void bCiudades_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pCiudades->Show();
		this->bcInser->Show();
		this->bcModif->Show();
		this->bcBusq->Show();
		this->bcElim->Show();
	}
		   /*	BOTONES PAISES	 */

	private: System::Void bpInser_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void bpModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bpBusq_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bpElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   /*	BOTONES CIUDADES   */
	private: System::Void bcInser_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bcModif_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bcBusq_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bcElim_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu->Show();

		Controlador::imprimir();

	}
private: System::Void lblLugs_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblCiudades_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
