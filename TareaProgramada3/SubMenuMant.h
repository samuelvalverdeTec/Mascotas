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
	/// Summary for SubMenuMant
	/// </summary>
	public ref class SubMenuMant : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public:
		SubMenuMant(System::Windows::Forms::Form^ m)
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
		~SubMenuMant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titleMenu;
	private: System::Windows::Forms::Button^ bInsercion;
	private: System::Windows::Forms::Button^ bModificacion;
	private: System::Windows::Forms::Button^ bConsultas;
	private: System::Windows::Forms::Button^ bEliminacion;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SubMenuMant::typeid));
			this->titleMenu = (gcnew System::Windows::Forms::Label());
			this->bInsercion = (gcnew System::Windows::Forms::Button());
			this->bModificacion = (gcnew System::Windows::Forms::Button());
			this->bConsultas = (gcnew System::Windows::Forms::Button());
			this->bEliminacion = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::IndianRed;
			this->titleMenu->Location = System::Drawing::Point(48, 132);
			this->titleMenu->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(351, 65);
			this->titleMenu->TabIndex = 1;
			this->titleMenu->Text = L"Mantenimiento";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &SubMenuMant::titleMenu_Click);
			// 
			// bInsercion
			// 
			this->bInsercion->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bInsercion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bInsercion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInsercion->ForeColor = System::Drawing::Color::White;
			this->bInsercion->Location = System::Drawing::Point(59, 260);
			this->bInsercion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInsercion->Name = L"bInsercion";
			this->bInsercion->Size = System::Drawing::Size(148, 45);
			this->bInsercion->TabIndex = 2;
			this->bInsercion->Text = L"1. Inserción";
			this->bInsercion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bInsercion->UseVisualStyleBackColor = false;
			this->bInsercion->Click += gcnew System::EventHandler(this, &SubMenuMant::bInsercion_Click);
			// 
			// bModificacion
			// 
			this->bModificacion->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bModificacion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bModificacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModificacion->ForeColor = System::Drawing::Color::White;
			this->bModificacion->Location = System::Drawing::Point(59, 315);
			this->bModificacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModificacion->Name = L"bModificacion";
			this->bModificacion->Size = System::Drawing::Size(187, 45);
			this->bModificacion->TabIndex = 3;
			this->bModificacion->Text = L"2. Modificación";
			this->bModificacion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bModificacion->UseVisualStyleBackColor = false;
			this->bModificacion->Click += gcnew System::EventHandler(this, &SubMenuMant::bModificacion_Click);
			// 
			// bConsultas
			// 
			this->bConsultas->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bConsultas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bConsultas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bConsultas->ForeColor = System::Drawing::Color::White;
			this->bConsultas->Location = System::Drawing::Point(59, 370);
			this->bConsultas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bConsultas->Name = L"bConsultas";
			this->bConsultas->Size = System::Drawing::Size(280, 45);
			this->bConsultas->TabIndex = 4;
			this->bConsultas->Text = L"3. Consulta (Búsquedas)";
			this->bConsultas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bConsultas->UseVisualStyleBackColor = false;
			this->bConsultas->Click += gcnew System::EventHandler(this, &SubMenuMant::bConsultas_Click);
			// 
			// bEliminacion
			// 
			this->bEliminacion->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bEliminacion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bEliminacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminacion->ForeColor = System::Drawing::Color::White;
			this->bEliminacion->Location = System::Drawing::Point(59, 425);
			this->bEliminacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminacion->Name = L"bEliminacion";
			this->bEliminacion->Size = System::Drawing::Size(187, 45);
			this->bEliminacion->TabIndex = 5;
			this->bEliminacion->Text = L"4. Eliminación";
			this->bEliminacion->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bEliminacion->UseVisualStyleBackColor = false;
			this->bEliminacion->Click += gcnew System::EventHandler(this, &SubMenuMant::bEliminacion_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::IndianRed;
			this->bSalir->Location = System::Drawing::Point(59, 559);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 6;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &SubMenuMant::bSalir_Click);
			// 
			// SubMenuMant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1110, 641);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->bEliminacion);
			this->Controls->Add(this->bConsultas);
			this->Controls->Add(this->bModificacion);
			this->Controls->Add(this->bInsercion);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(1110, 641);
			this->MinimumSize = System::Drawing::Size(1110, 641);
			this->Name = L"SubMenuMant";
			this->Text = L"SubMenuMant";
			this->Load += gcnew System::EventHandler(this, &SubMenuMant::SubMenuMant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubMenuMant_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bInsercion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bModificacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bConsultas_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu->Show();

		Controlador::imprimir();

	}
};
}
