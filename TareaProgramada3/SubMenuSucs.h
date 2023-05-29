#pragma once

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubMenuSucs
	/// </summary>
	public ref class SubMenuSucs : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public:
		SubMenuSucs(System::Windows::Forms::Form^ m)
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
		~SubMenuSucs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleMenu;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuSucs::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::RoyalBlue;
			this->titleMenu->Location = System::Drawing::Point(799, 66);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(248, 65);
			this->titleMenu->TabIndex = 2;
			this->titleMenu->Text = L"Sucursales";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::RoyalBlue;
			this->bSalir->Location = System::Drawing::Point(963, 554);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 7;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuSucs::bSalir_Click);
			// 
			// SubMenuSucs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SubMenuSucs";
			this->Text = L"SubMenuSucs";
			this->Load += gcnew System::EventHandler(this, &SubMenuSucs::SubMenuSucs_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuSucs_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();

		//Controlador::imprimir();

	}

	};
}
