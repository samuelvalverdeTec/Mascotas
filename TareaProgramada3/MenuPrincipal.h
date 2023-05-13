#pragma once

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
	protected:

	private: System::Windows::Forms::Button^ bMainMant;
	private: System::Windows::Forms::Button^ bMainReps;
	private: System::Windows::Forms::Button^ bMainFact;
	private: System::Windows::Forms::Button^ bMainAbout;
	private: System::Windows::Forms::Button^ bMainCont;
	private: System::Windows::Forms::Label^ subtitleMain;
	private: System::Windows::Forms::Button^ bMainSucs;






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
			this->bMainMant = (gcnew System::Windows::Forms::Button());
			this->bMainReps = (gcnew System::Windows::Forms::Button());
			this->bMainFact = (gcnew System::Windows::Forms::Button());
			this->bMainAbout = (gcnew System::Windows::Forms::Button());
			this->bMainCont = (gcnew System::Windows::Forms::Button());
			this->subtitleMain = (gcnew System::Windows::Forms::Label());
			this->bMainSucs = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->titleMenu->Location = System::Drawing::Point(285, 113);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(503, 63);
			this->titleMenu->TabIndex = 0;
			this->titleMenu->Text = L"Mundo de Mascotas";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// subtitleMain
			// 
			this->subtitleMain->AutoSize = true;
			this->subtitleMain->BackColor = System::Drawing::Color::Transparent;
			this->subtitleMain->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleMain->Location = System::Drawing::Point(346, 176);
			this->subtitleMain->Name = L"subtitleMain";
			this->subtitleMain->Size = System::Drawing::Size(375, 25);
			this->subtitleMain->TabIndex = 6;
			this->subtitleMain->Text = L"Samuel Valverde y Erick Kauffmann";
			this->subtitleMain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->subtitleMain->Click += gcnew System::EventHandler(this, &MenuPrincipal::subtitleMain_Click);
			// 
			// bMainMant
			// 
			this->bMainMant->BackColor = System::Drawing::Color::Transparent;
			this->bMainMant->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainMant->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainMant->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainMant.Image")));
			this->bMainMant->Location = System::Drawing::Point(296, 235);
			this->bMainMant->Name = L"bMainMant";
			this->bMainMant->Size = System::Drawing::Size(110, 110);
			this->bMainMant->TabIndex = 1;
			this->bMainMant->UseVisualStyleBackColor = false;
			this->bMainMant->Click += gcnew System::EventHandler(this, &MenuPrincipal::button1_Click);
			// 
			// bMainReps
			// 
			this->bMainReps->BackColor = System::Drawing::Color::Transparent;
			this->bMainReps->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainReps->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainReps->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainReps.Image")));
			this->bMainReps->Location = System::Drawing::Point(486, 235);
			this->bMainReps->Name = L"bMainReps";
			this->bMainReps->Size = System::Drawing::Size(110, 110);
			this->bMainReps->TabIndex = 2;
			this->bMainReps->UseVisualStyleBackColor = false;
			// 
			// bMainFact
			// 
			this->bMainFact->BackColor = System::Drawing::Color::Transparent;
			this->bMainFact->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainFact->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainFact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainFact.Image")));
			this->bMainFact->Location = System::Drawing::Point(678, 235);
			this->bMainFact->Name = L"bMainFact";
			this->bMainFact->Size = System::Drawing::Size(110, 110);
			this->bMainFact->TabIndex = 3;
			this->bMainFact->UseVisualStyleBackColor = false;
			this->bMainFact->Click += gcnew System::EventHandler(this, &MenuPrincipal::button2_Click);
			// 
			// bMainSucs
			// 
			this->bMainSucs->BackColor = System::Drawing::Color::Transparent;
			this->bMainSucs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainSucs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainSucs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainSucs.Image")));
			this->bMainSucs->Location = System::Drawing::Point(296, 366);
			this->bMainSucs->Name = L"bMainSucs";
			this->bMainSucs->Size = System::Drawing::Size(110, 110);
			this->bMainSucs->TabIndex = 7;
			this->bMainSucs->UseVisualStyleBackColor = false;
			// 
			// bMainAbout
			// 
			this->bMainAbout->BackColor = System::Drawing::Color::Transparent;
			this->bMainAbout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainAbout->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainAbout.Image")));
			this->bMainAbout->Location = System::Drawing::Point(486, 366);
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
			this->bMainCont->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainCont->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainCont.Image")));
			this->bMainCont->Location = System::Drawing::Point(678, 366);
			this->bMainCont->Name = L"bMainCont";
			this->bMainCont->Size = System::Drawing::Size(110, 110);
			this->bMainCont->TabIndex = 5;
			this->bMainCont->UseVisualStyleBackColor = false;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1094, 611);
			this->Controls->Add(this->bMainSucs);
			this->Controls->Add(this->subtitleMain);
			this->Controls->Add(this->bMainCont);
			this->Controls->Add(this->bMainAbout);
			this->Controls->Add(this->bMainFact);
			this->Controls->Add(this->bMainReps);
			this->Controls->Add(this->bMainMant);
			this->Controls->Add(this->titleMenu);
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void subtitleMain_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bMainAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
