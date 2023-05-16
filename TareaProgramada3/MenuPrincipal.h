#pragma once

#include "SubMenuMant.h"
#include "SubMenuFact.h"

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
	protected:


	private: System::Windows::Forms::Button^ bMainMant;
	private: System::Windows::Forms::Button^ bMainReps;
	private: System::Windows::Forms::Button^ bMainFact;
	private: System::Windows::Forms::Button^ bMainSucs;
	private: System::Windows::Forms::Button^ bMainAbout;
	private: System::Windows::Forms::Button^ bMainCont;

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
			this->bMainMant = (gcnew System::Windows::Forms::Button());
			this->bMainReps = (gcnew System::Windows::Forms::Button());
			this->bMainFact = (gcnew System::Windows::Forms::Button());
			this->bMainSucs = (gcnew System::Windows::Forms::Button());
			this->bMainAbout = (gcnew System::Windows::Forms::Button());
			this->bMainCont = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::White;
			this->titleMenu->Location = System::Drawing::Point(48, 90);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(457, 65);
			this->titleMenu->TabIndex = 0;
			this->titleMenu->Text = L"Mundo de Mascotas";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::titleMenu_Click);
			// 
			// subtitleMenu
			// 
			this->subtitleMenu->AutoSize = true;
			this->subtitleMenu->BackColor = System::Drawing::Color::Transparent;
			this->subtitleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleMenu->ForeColor = System::Drawing::Color::White;
			this->subtitleMenu->Location = System::Drawing::Point(54, 164);
			this->subtitleMenu->Name = L"subtitleMenu";
			this->subtitleMenu->Size = System::Drawing::Size(302, 25);
			this->subtitleMenu->TabIndex = 6;
			this->subtitleMenu->Text = L"Samuel Valverde y Erick Kauffmann";
			this->subtitleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->subtitleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::subtitleMenu_Click);
			// 
			// bMainMant
			// 
			this->bMainMant->BackColor = System::Drawing::Color::Transparent;
			this->bMainMant->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainMant->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainMant->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainMant->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainMant.Image")));
			this->bMainMant->Location = System::Drawing::Point(59, 341);
			this->bMainMant->Name = L"bMainMant";
			this->bMainMant->Size = System::Drawing::Size(110, 110);
			this->bMainMant->TabIndex = 1;
			this->bMainMant->UseVisualStyleBackColor = false;
			this->bMainMant->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainMant_Click);
			// 
			// bMainReps
			// 
			this->bMainReps->BackColor = System::Drawing::Color::Transparent;
			this->bMainReps->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainReps->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainReps->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainReps->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainReps.Image")));
			this->bMainReps->Location = System::Drawing::Point(201, 341);
			this->bMainReps->Name = L"bMainReps";
			this->bMainReps->Size = System::Drawing::Size(110, 110);
			this->bMainReps->TabIndex = 2;
			this->bMainReps->UseVisualStyleBackColor = false;
			this->bMainReps->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainReps_Click);
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
			this->bMainFact->Location = System::Drawing::Point(347, 341);
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
			this->bMainSucs->Location = System::Drawing::Point(59, 486);
			this->bMainSucs->Name = L"bMainSucs";
			this->bMainSucs->Size = System::Drawing::Size(110, 110);
			this->bMainSucs->TabIndex = 7;
			this->bMainSucs->UseVisualStyleBackColor = false;
			this->bMainSucs->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainSucs_Click);
			// 
			// bMainAbout
			// 
			this->bMainAbout->BackColor = System::Drawing::Color::Transparent;
			this->bMainAbout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainAbout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainAbout->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainAbout.Image")));
			this->bMainAbout->Location = System::Drawing::Point(201, 486);
			this->bMainAbout->Name = L"bMainAbout";
			this->bMainAbout->Size = System::Drawing::Size(110, 110);
			this->bMainAbout->TabIndex = 4;
			this->bMainAbout->UseVisualStyleBackColor = false;
			this->bMainAbout->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainAbout_Click);
			// 
			// bMainCont
			// 
			this->bMainCont->BackColor = System::Drawing::Color::Transparent;
			this->bMainCont->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainCont->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainCont->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainCont->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainCont.Image")));
			this->bMainCont->Location = System::Drawing::Point(347, 486);
			this->bMainCont->Name = L"bMainCont";
			this->bMainCont->Size = System::Drawing::Size(110, 110);
			this->bMainCont->TabIndex = 5;
			this->bMainCont->UseVisualStyleBackColor = false;
			this->bMainCont->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainCont_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Controls->Add(this->bMainSucs);
			this->Controls->Add(this->subtitleMenu);
			this->Controls->Add(this->bMainCont);
			this->Controls->Add(this->bMainAbout);
			this->Controls->Add(this->bMainFact);
			this->Controls->Add(this->bMainReps);
			this->Controls->Add(this->bMainMant);
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
	private: System::Void bMainMant_Click(System::Object^ sender, System::EventArgs^ e) {

		SubMenuMant^ sMM = gcnew SubMenuMant(this);
		sMM->Show();
		this->Hide();

	}
	private: System::Void bMainFact_Click(System::Object^ sender, System::EventArgs^ e) {

		subMenuFact^ sMF = gcnew subMenuFact(this);
		sMF->Show();
		this->Hide();

	}
	private: System::Void bMainReps_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		subMenuReps^ sMR = gcnew subMenuReps(this);
		sMR->Show();
		this->Hide();
		*/
	}
	private: System::Void bMainSucs_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		subMenuSucs^ sMS = gcnew subMenuSucs(this);
		sMS->Show();
		this->Hide();
		*/
	}
	private: System::Void bMainAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		subMenuAbout^ sMA = gcnew subMenuAbout(this);
		sMA->Show();
		this->Hide();
		*/
	}
	private: System::Void bMainCont_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		subMenuCont^ sMC = gcnew subMenuCont(this);
		sMC->Show();
		this->Hide();
		*/
	}
};
}
