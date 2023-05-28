#pragma once

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PopUpMenu
	/// </summary>
	public ref class PopUpMenu : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ menu;

	public:
		PopUpMenu(System::Windows::Forms::Form^ m, BinarioPaises arbolPaises, BinarioCiudades arbolCiudades, 
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
		~PopUpMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pContactos;
	protected:
	private: System::Windows::Forms::Panel^ pAcercaDe;
	private: System::Windows::Forms::Panel^ pSucursales;
	private: System::Windows::Forms::Panel^ pReportes;
	private: System::Windows::Forms::Panel^ pFacturacion;
	private: System::Windows::Forms::Panel^ pMantenimiento;
	private: System::Windows::Forms::Panel^ mainPanel;
	private: System::Windows::Forms::Button^ bContactos;
	private: System::Windows::Forms::Button^ bAcercaDe;
	private: System::Windows::Forms::Button^ bSucursales;
	private: System::Windows::Forms::Button^ bReportes;
	private: System::Windows::Forms::Button^ bFacturacion;
	private: System::Windows::Forms::Button^ bMantenimiento;
	private: System::Windows::Forms::Button^ bSalir;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PopUpMenu::typeid));
			this->pContactos = (gcnew System::Windows::Forms::Panel());
			this->pAcercaDe = (gcnew System::Windows::Forms::Panel());
			this->pSucursales = (gcnew System::Windows::Forms::Panel());
			this->pReportes = (gcnew System::Windows::Forms::Panel());
			this->pFacturacion = (gcnew System::Windows::Forms::Panel());
			this->pMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->bContactos = (gcnew System::Windows::Forms::Button());
			this->bAcercaDe = (gcnew System::Windows::Forms::Button());
			this->bSucursales = (gcnew System::Windows::Forms::Button());
			this->bReportes = (gcnew System::Windows::Forms::Button());
			this->bFacturacion = (gcnew System::Windows::Forms::Button());
			this->bMantenimiento = (gcnew System::Windows::Forms::Button());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->mainPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pContactos
			// 
			this->pContactos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pContactos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pContactos->Location = System::Drawing::Point(890, 48);
			this->pContactos->Name = L"pContactos";
			this->pContactos->Size = System::Drawing::Size(130, 210);
			this->pContactos->TabIndex = 21;
			this->pContactos->Visible = false;
			// 
			// pAcercaDe
			// 
			this->pAcercaDe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pAcercaDe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pAcercaDe->Location = System::Drawing::Point(739, 48);
			this->pAcercaDe->Name = L"pAcercaDe";
			this->pAcercaDe->Size = System::Drawing::Size(130, 210);
			this->pAcercaDe->TabIndex = 20;
			this->pAcercaDe->Visible = false;
			// 
			// pSucursales
			// 
			this->pSucursales->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pSucursales->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pSucursales->Location = System::Drawing::Point(586, 48);
			this->pSucursales->Name = L"pSucursales";
			this->pSucursales->Size = System::Drawing::Size(130, 210);
			this->pSucursales->TabIndex = 19;
			this->pSucursales->Visible = false;
			// 
			// pReportes
			// 
			this->pReportes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pReportes->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pReportes->ForeColor = System::Drawing::Color::White;
			this->pReportes->Location = System::Drawing::Point(434, 48);
			this->pReportes->Name = L"pReportes";
			this->pReportes->Size = System::Drawing::Size(130, 210);
			this->pReportes->TabIndex = 18;
			this->pReportes->Visible = false;
			// 
			// pFacturacion
			// 
			this->pFacturacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pFacturacion->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pFacturacion->Location = System::Drawing::Point(218, 48);
			this->pFacturacion->Name = L"pFacturacion";
			this->pFacturacion->Size = System::Drawing::Size(170, 210);
			this->pFacturacion->TabIndex = 17;
			this->pFacturacion->Visible = false;
			// 
			// pMantenimiento
			// 
			this->pMantenimiento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pMantenimiento->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pMantenimiento->Location = System::Drawing::Point(0, 48);
			this->pMantenimiento->Name = L"pMantenimiento";
			this->pMantenimiento->Size = System::Drawing::Size(170, 210);
			this->pMantenimiento->TabIndex = 16;
			this->pMantenimiento->Visible = false;
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->mainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mainPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->mainPanel->Controls->Add(this->bContactos);
			this->mainPanel->Controls->Add(this->bAcercaDe);
			this->mainPanel->Controls->Add(this->bSucursales);
			this->mainPanel->Controls->Add(this->bReportes);
			this->mainPanel->Controls->Add(this->bFacturacion);
			this->mainPanel->Controls->Add(this->bMantenimiento);
			this->mainPanel->Location = System::Drawing::Point(0, 1);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(1022, 41);
			this->mainPanel->TabIndex = 15;
			// 
			// bContactos
			// 
			this->bContactos->BackColor = System::Drawing::Color::Transparent;
			this->bContactos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bContactos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bContactos->ForeColor = System::Drawing::Color::White;
			this->bContactos->Location = System::Drawing::Point(910, -2);
			this->bContactos->Name = L"bContactos";
			this->bContactos->Size = System::Drawing::Size(100, 41);
			this->bContactos->TabIndex = 14;
			this->bContactos->Text = L"Contactos";
			this->bContactos->UseVisualStyleBackColor = false;
			this->bContactos->Click += gcnew System::EventHandler(this, &PopUpMenu::bContactos_Click);
			// 
			// bAcercaDe
			// 
			this->bAcercaDe->BackColor = System::Drawing::Color::Transparent;
			this->bAcercaDe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bAcercaDe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAcercaDe->ForeColor = System::Drawing::Color::White;
			this->bAcercaDe->Location = System::Drawing::Point(755, -2);
			this->bAcercaDe->Name = L"bAcercaDe";
			this->bAcercaDe->Size = System::Drawing::Size(93, 41);
			this->bAcercaDe->TabIndex = 13;
			this->bAcercaDe->Text = L"Acerca de";
			this->bAcercaDe->UseVisualStyleBackColor = false;
			this->bAcercaDe->Click += gcnew System::EventHandler(this, &PopUpMenu::bAD_Click);
			// 
			// bSucursales
			// 
			this->bSucursales->BackColor = System::Drawing::Color::Transparent;
			this->bSucursales->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSucursales->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSucursales->ForeColor = System::Drawing::Color::White;
			this->bSucursales->Location = System::Drawing::Point(599, -2);
			this->bSucursales->Name = L"bSucursales";
			this->bSucursales->Size = System::Drawing::Size(100, 41);
			this->bSucursales->TabIndex = 12;
			this->bSucursales->Text = L"Sucursales";
			this->bSucursales->UseVisualStyleBackColor = false;
			this->bSucursales->Click += gcnew System::EventHandler(this, &PopUpMenu::bS_Click);
			// 
			// bReportes
			// 
			this->bReportes->BackColor = System::Drawing::Color::Transparent;
			this->bReportes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bReportes->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bReportes->ForeColor = System::Drawing::Color::White;
			this->bReportes->Location = System::Drawing::Point(441, -2);
			this->bReportes->Name = L"bReportes";
			this->bReportes->Size = System::Drawing::Size(100, 41);
			this->bReportes->TabIndex = 11;
			this->bReportes->Text = L"Reportes";
			this->bReportes->UseVisualStyleBackColor = false;
			this->bReportes->Click += gcnew System::EventHandler(this, &PopUpMenu::bR_Click);
			// 
			// bFacturacion
			// 
			this->bFacturacion->BackColor = System::Drawing::Color::Transparent;
			this->bFacturacion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bFacturacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bFacturacion->ForeColor = System::Drawing::Color::White;
			this->bFacturacion->Location = System::Drawing::Point(246, -2);
			this->bFacturacion->Name = L"bFacturacion";
			this->bFacturacion->Size = System::Drawing::Size(100, 41);
			this->bFacturacion->TabIndex = 10;
			this->bFacturacion->Text = L"Facturación";
			this->bFacturacion->UseVisualStyleBackColor = false;
			this->bFacturacion->Click += gcnew System::EventHandler(this, &PopUpMenu::bF_Click);
			// 
			// bMantenimiento
			// 
			this->bMantenimiento->BackColor = System::Drawing::Color::Transparent;
			this->bMantenimiento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMantenimiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMantenimiento->ForeColor = System::Drawing::Color::White;
			this->bMantenimiento->Location = System::Drawing::Point(10, -2);
			this->bMantenimiento->Name = L"bMantenimiento";
			this->bMantenimiento->Size = System::Drawing::Size(145, 41);
			this->bMantenimiento->TabIndex = 9;
			this->bMantenimiento->Text = L"Mantenimiento";
			this->bMantenimiento->UseVisualStyleBackColor = false;
			this->bMantenimiento->Click += gcnew System::EventHandler(this, &PopUpMenu::bM_Click);
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::White;
			this->bSalir->Location = System::Drawing::Point(1029, 2);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(54, 40);
			this->bSalir->TabIndex = 37;
			this->bSalir->Text = L"X";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &PopUpMenu::bSalir_Click);
			// 
			// PopUpMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 611);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->pContactos);
			this->Controls->Add(this->pAcercaDe);
			this->Controls->Add(this->pSucursales);
			this->Controls->Add(this->pReportes);
			this->Controls->Add(this->pFacturacion);
			this->Controls->Add(this->pMantenimiento);
			this->Controls->Add(this->mainPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"PopUpMenu";
			this->Text = L"PopUpMenu";
			this->Load += gcnew System::EventHandler(this, &PopUpMenu::PopUpMenu_Load);
			this->mainPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bContactos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PopUpMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void mainPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bM_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pMantenimiento->Show();
	}
	private: System::Void bF_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pFacturacion->Show();
	}
	private: System::Void bR_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pReportes->Show();
	}
	private: System::Void bS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pSucursales->Show();
	}
	private: System::Void bAD_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pAcercaDe->Show();
	}
	private: System::Void bC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pContactos->Show();
	}
	private: System::Void pM_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pF_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pR_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pS_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pAD_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pC_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();
	}
};
}
