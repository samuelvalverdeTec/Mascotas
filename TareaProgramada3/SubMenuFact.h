#pragma once

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class SubMenuFact : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public:
		SubMenuFact(System::Windows::Forms::Form^ m)
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
		~SubMenuFact()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Button^ bFacturacion;

	private: System::Windows::Forms::Button^ bDescuentos;

	private: System::Windows::Forms::Button^ bSaldos;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuFact::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->bFacturacion = (gcnew System::Windows::Forms::Button());
			this->bDescuentos = (gcnew System::Windows::Forms::Button());
			this->bSaldos = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->titleMenu->Location = System::Drawing::Point(779, 131);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(268, 65);
			this->titleMenu->TabIndex = 2;
			this->titleMenu->Text = L"Facturación";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &SubMenuFact::titleMenu_Click);
			// 
			// bFacturacion
			// 
			this->bFacturacion->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bFacturacion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bFacturacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFacturacion->ForeColor = System::Drawing::Color::White;
			this->bFacturacion->Location = System::Drawing::Point(876, 352);
			this->bFacturacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bFacturacion->Name = L"bFacturacion";
			this->bFacturacion->Size = System::Drawing::Size(171, 45);
			this->bFacturacion->TabIndex = 7;
			this->bFacturacion->Text = L"3. Facturación";
			this->bFacturacion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bFacturacion->UseVisualStyleBackColor = false;
			this->bFacturacion->Click += gcnew System::EventHandler(this, &SubMenuFact::bFacturacion_Click);
			// 
			// bDescuentos
			// 
			this->bDescuentos->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bDescuentos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bDescuentos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDescuentos->ForeColor = System::Drawing::Color::White;
			this->bDescuentos->Location = System::Drawing::Point(876, 297);
			this->bDescuentos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bDescuentos->Name = L"bDescuentos";
			this->bDescuentos->Size = System::Drawing::Size(171, 45);
			this->bDescuentos->TabIndex = 6;
			this->bDescuentos->Text = L"2. Descuentos";
			this->bDescuentos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bDescuentos->UseVisualStyleBackColor = false;
			this->bDescuentos->Click += gcnew System::EventHandler(this, &SubMenuFact::bDescuentos_Click);
			// 
			// bSaldos
			// 
			this->bSaldos->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSaldos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSaldos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSaldos->ForeColor = System::Drawing::Color::White;
			this->bSaldos->Location = System::Drawing::Point(914, 242);
			this->bSaldos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSaldos->Name = L"bSaldos";
			this->bSaldos->Size = System::Drawing::Size(133, 45);
			this->bSaldos->TabIndex = 5;
			this->bSaldos->Text = L"1. Saldos";
			this->bSaldos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bSaldos->UseVisualStyleBackColor = false;
			this->bSaldos->Click += gcnew System::EventHandler(this, &SubMenuFact::bSaldos_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->bSalir->Location = System::Drawing::Point(963, 540);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 8;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuFact::bSalir_Click);
			// 
			// subMenuFact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 624);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->bFacturacion);
			this->Controls->Add(this->bDescuentos);
			this->Controls->Add(this->bSaldos);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximumSize = System::Drawing::Size(1110, 624);
			this->MinimumSize = System::Drawing::Size(1110, 624);
			this->Name = L"subMenuFact";
			this->Text = L"subMenuFact";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bSaldos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bDescuentos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bFacturacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu->Show();

	}
};
}
