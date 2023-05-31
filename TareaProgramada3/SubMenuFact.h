#pragma once

#include "BCliente.h"
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

	public: BCliente* arbolClientes;

	public:
		SubMenuFact(System::Windows::Forms::Form^ m, BCliente* arbolClientes)
		{
			menu = m;

			this->arbolClientes = arbolClientes;

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
	private: System::Windows::Forms::Button^ bSalir;
	private: System::Windows::Forms::Label^ lblFactura;
	private: System::Windows::Forms::Button^ bDescuento;
	private: System::Windows::Forms::Button^ bFactura;
	private: System::Windows::Forms::Label^ lblSaldo;
	private: System::Windows::Forms::Button^ bSaldo;
	private: System::Windows::Forms::Label^ lblDescuentos;

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
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->lblFactura = (gcnew System::Windows::Forms::Label());
			this->bDescuento = (gcnew System::Windows::Forms::Button());
			this->bFactura = (gcnew System::Windows::Forms::Button());
			this->lblSaldo = (gcnew System::Windows::Forms::Label());
			this->bSaldo = (gcnew System::Windows::Forms::Button());
			this->lblDescuentos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::LemonChiffon;
			this->titleMenu->Location = System::Drawing::Point(679, 58);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(268, 65);
			this->titleMenu->TabIndex = 2;
			this->titleMenu->Text = L"Facturación";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &SubMenuFact::titleMenu_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::LemonChiffon;
			this->bSalir->Location = System::Drawing::Point(986, 542);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 8;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuFact::bSalir_Click);
			// 
			// lblFactura
			// 
			this->lblFactura->AutoSize = true;
			this->lblFactura->BackColor = System::Drawing::Color::Black;
			this->lblFactura->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFactura->ForeColor = System::Drawing::Color::White;
			this->lblFactura->Location = System::Drawing::Point(768, 242);
			this->lblFactura->Name = L"lblFactura";
			this->lblFactura->Size = System::Drawing::Size(80, 30);
			this->lblFactura->TabIndex = 23;
			this->lblFactura->Text = L"Factura";
			this->lblFactura->Click += gcnew System::EventHandler(this, &SubMenuFact::lblFactura_Click);
			// 
			// bDescuento
			// 
			this->bDescuento->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bDescuento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bDescuento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDescuento->ForeColor = System::Drawing::Color::White;
			this->bDescuento->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bDescuento.Image")));
			this->bDescuento->Location = System::Drawing::Point(756, 304);
			this->bDescuento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bDescuento->Name = L"bDescuento";
			this->bDescuento->Size = System::Drawing::Size(110, 91);
			this->bDescuento->TabIndex = 22;
			this->bDescuento->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bDescuento->UseVisualStyleBackColor = false;
			this->bDescuento->Click += gcnew System::EventHandler(this, &SubMenuFact::bDescuento_Click);
			// 
			// bFactura
			// 
			this->bFactura->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bFactura->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bFactura->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFactura->ForeColor = System::Drawing::Color::White;
			this->bFactura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bFactura.Image")));
			this->bFactura->Location = System::Drawing::Point(756, 138);
			this->bFactura->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bFactura->Name = L"bFactura";
			this->bFactura->Size = System::Drawing::Size(110, 99);
			this->bFactura->TabIndex = 21;
			this->bFactura->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bFactura->UseVisualStyleBackColor = false;
			this->bFactura->Click += gcnew System::EventHandler(this, &SubMenuFact::bFactura_Click);
			// 
			// lblSaldo
			// 
			this->lblSaldo->AutoSize = true;
			this->lblSaldo->BackColor = System::Drawing::Color::Black;
			this->lblSaldo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaldo->ForeColor = System::Drawing::Color::White;
			this->lblSaldo->Location = System::Drawing::Point(777, 553);
			this->lblSaldo->Name = L"lblSaldo";
			this->lblSaldo->Size = System::Drawing::Size(64, 30);
			this->lblSaldo->TabIndex = 26;
			this->lblSaldo->Text = L"Saldo";
			this->lblSaldo->Click += gcnew System::EventHandler(this, &SubMenuFact::lblSaldo_Click);
			// 
			// bSaldo
			// 
			this->bSaldo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSaldo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSaldo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSaldo->ForeColor = System::Drawing::Color::White;
			this->bSaldo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bSaldo.Image")));
			this->bSaldo->Location = System::Drawing::Point(756, 457);
			this->bSaldo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSaldo->Name = L"bSaldo";
			this->bSaldo->Size = System::Drawing::Size(110, 91);
			this->bSaldo->TabIndex = 25;
			this->bSaldo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bSaldo->UseVisualStyleBackColor = false;
			this->bSaldo->Click += gcnew System::EventHandler(this, &SubMenuFact::bSaldo_Click);
			// 
			// lblDescuentos
			// 
			this->lblDescuentos->AutoSize = true;
			this->lblDescuentos->BackColor = System::Drawing::Color::Black;
			this->lblDescuentos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescuentos->ForeColor = System::Drawing::Color::White;
			this->lblDescuentos->Location = System::Drawing::Point(751, 400);
			this->lblDescuentos->Name = L"lblDescuentos";
			this->lblDescuentos->Size = System::Drawing::Size(121, 30);
			this->lblDescuentos->TabIndex = 27;
			this->lblDescuentos->Text = L"Descuentos";
			this->lblDescuentos->Click += gcnew System::EventHandler(this, &SubMenuFact::lblDescuentos_Click);
			// 
			// SubMenuFact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 624);
			this->Controls->Add(this->lblDescuentos);
			this->Controls->Add(this->lblSaldo);
			this->Controls->Add(this->bSaldo);
			this->Controls->Add(this->lblFactura);
			this->Controls->Add(this->bDescuento);
			this->Controls->Add(this->bFactura);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(935, 380);
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximumSize = System::Drawing::Size(1110, 624);
			this->MinimumSize = System::Drawing::Size(1110, 624);
			this->Name = L"SubMenuFact";
			this->Text = L"subMenuFact";
			this->Load += gcnew System::EventHandler(this, &SubMenuFact::SubMenuFact_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bFactura_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bDescuento_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bSaldo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();

	}
private: System::Void lblFactura_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblDescuentos_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblSaldo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SubMenuFact_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
