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
	/// Summary for IconMenu
	/// </summary>
	public ref class IconMenu : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ menu;

	public:
		IconMenu(System::Windows::Forms::Form^ m, BinarioPaises arbolPaises, BinarioCiudades arbolCiudades,
			BCliente arbolClientes, AVLMascotas arbolMascotas, BinarioVisitas arbolVisitas, RNTratamiento arbolTratamientos,
			AAMedicacion arbolMedicaciones)
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
		~IconMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblClts;
	protected:
	private: System::Windows::Forms::Label^ lblFact;
	private: System::Windows::Forms::Label^ lblSucs;
	private: System::Windows::Forms::Label^ lblLugs;
	private: System::Windows::Forms::Label^ lblClnc;
	private: System::Windows::Forms::Button^ bMainSucs;
	private: System::Windows::Forms::Button^ bMainClts;
	private: System::Windows::Forms::Button^ bMainFact;
	private: System::Windows::Forms::Button^ bMainClnc;
	private: System::Windows::Forms::Button^ bMainLugs;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IconMenu::typeid));
			this->lblClts = (gcnew System::Windows::Forms::Label());
			this->lblFact = (gcnew System::Windows::Forms::Label());
			this->lblSucs = (gcnew System::Windows::Forms::Label());
			this->lblLugs = (gcnew System::Windows::Forms::Label());
			this->lblClnc = (gcnew System::Windows::Forms::Label());
			this->bMainSucs = (gcnew System::Windows::Forms::Button());
			this->bMainClts = (gcnew System::Windows::Forms::Button());
			this->bMainFact = (gcnew System::Windows::Forms::Button());
			this->bMainClnc = (gcnew System::Windows::Forms::Button());
			this->bMainLugs = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblClts
			// 
			this->lblClts->AutoSize = true;
			this->lblClts->ForeColor = System::Drawing::Color::White;
			this->lblClts->Location = System::Drawing::Point(687, 520);
			this->lblClts->Name = L"lblClts";
			this->lblClts->Size = System::Drawing::Size(86, 30);
			this->lblClts->TabIndex = 29;
			this->lblClts->Text = L"Clientes";
			// 
			// lblFact
			// 
			this->lblFact->AutoSize = true;
			this->lblFact->ForeColor = System::Drawing::Color::White;
			this->lblFact->Location = System::Drawing::Point(606, 359);
			this->lblFact->Name = L"lblFact";
			this->lblFact->Size = System::Drawing::Size(119, 30);
			this->lblFact->TabIndex = 28;
			this->lblFact->Text = L"Facturación";
			// 
			// lblSucs
			// 
			this->lblSucs->AutoSize = true;
			this->lblSucs->ForeColor = System::Drawing::Color::White;
			this->lblSucs->Location = System::Drawing::Point(737, 359);
			this->lblSucs->Name = L"lblSucs";
			this->lblSucs->Size = System::Drawing::Size(110, 30);
			this->lblSucs->TabIndex = 27;
			this->lblSucs->Text = L"Sucursales";
			// 
			// lblLugs
			// 
			this->lblLugs->AutoSize = true;
			this->lblLugs->ForeColor = System::Drawing::Color::White;
			this->lblLugs->Location = System::Drawing::Point(630, 189);
			this->lblLugs->Name = L"lblLugs";
			this->lblLugs->Size = System::Drawing::Size(85, 30);
			this->lblLugs->TabIndex = 26;
			this->lblLugs->Text = L"Lugares";
			// 
			// lblClnc
			// 
			this->lblClnc->AutoSize = true;
			this->lblClnc->ForeColor = System::Drawing::Color::White;
			this->lblClnc->Location = System::Drawing::Point(758, 189);
			this->lblClnc->Name = L"lblClnc";
			this->lblClnc->Size = System::Drawing::Size(74, 30);
			this->lblClnc->TabIndex = 25;
			this->lblClnc->Text = L"Clínica";
			// 
			// bMainSucs
			// 
			this->bMainSucs->BackColor = System::Drawing::Color::Transparent;
			this->bMainSucs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainSucs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainSucs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainSucs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainSucs.Image")));
			this->bMainSucs->Location = System::Drawing::Point(737, 246);
			this->bMainSucs->Name = L"bMainSucs";
			this->bMainSucs->Size = System::Drawing::Size(110, 110);
			this->bMainSucs->TabIndex = 24;
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
			this->bMainClts->Location = System::Drawing::Point(673, 407);
			this->bMainClts->Name = L"bMainClts";
			this->bMainClts->Size = System::Drawing::Size(110, 110);
			this->bMainClts->TabIndex = 23;
			this->bMainClts->UseVisualStyleBackColor = false;
			this->bMainClts->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClts_Click);
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
			this->bMainFact->Location = System::Drawing::Point(611, 246);
			this->bMainFact->Name = L"bMainFact";
			this->bMainFact->Size = System::Drawing::Size(110, 110);
			this->bMainFact->TabIndex = 22;
			this->bMainFact->UseVisualStyleBackColor = false;
			this->bMainFact->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainFact_Click);
			// 
			// bMainClnc
			// 
			this->bMainClnc->BackColor = System::Drawing::Color::Transparent;
			this->bMainClnc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainClnc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainClnc->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainClnc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainClnc.Image")));
			this->bMainClnc->Location = System::Drawing::Point(737, 76);
			this->bMainClnc->Name = L"bMainClnc";
			this->bMainClnc->Size = System::Drawing::Size(110, 110);
			this->bMainClnc->TabIndex = 21;
			this->bMainClnc->UseVisualStyleBackColor = false;
			this->bMainClnc->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClnc_Click);
			// 
			// bMainLugs
			// 
			this->bMainLugs->BackColor = System::Drawing::Color::Transparent;
			this->bMainLugs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainLugs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainLugs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainLugs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainLugs.Image")));
			this->bMainLugs->Location = System::Drawing::Point(612, 76);
			this->bMainLugs->Name = L"bMainLugs";
			this->bMainLugs->Size = System::Drawing::Size(110, 110);
			this->bMainLugs->TabIndex = 20;
			this->bMainLugs->UseVisualStyleBackColor = false;
			this->bMainLugs->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainLugs_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::White;
			this->bSalir->Location = System::Drawing::Point(1048, 2);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(54, 40);
			this->bSalir->TabIndex = 36;
			this->bSalir->Text = L"X";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &IconMenu::bSalir_Click);
			// 
			// IconMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1100, 593);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->lblClts);
			this->Controls->Add(this->lblFact);
			this->Controls->Add(this->lblSucs);
			this->Controls->Add(this->lblLugs);
			this->Controls->Add(this->lblClnc);
			this->Controls->Add(this->bMainSucs);
			this->Controls->Add(this->bMainClts);
			this->Controls->Add(this->bMainFact);
			this->Controls->Add(this->bMainClnc);
			this->Controls->Add(this->bMainLugs);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"IconMenu";
			this->Text = L"IconMenu";
			this->Load += gcnew System::EventHandler(this, &IconMenu::IconMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IconMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	


	private: System::Void bMainLugs_Click(System::Object^ sender, System::EventArgs^ e) {

		SubMenuLugs^ sMLugs = gcnew SubMenuLugs(this/*, BinarioPaises arbolPaises, BinarioCiudades arbolCiudades*/);
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

	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		menu->Show();

}
};
}
