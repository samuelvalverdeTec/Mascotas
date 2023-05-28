#pragma once

#include "Binario.h"	// Paises, Ciudades & Visitas
#include "NodoBinario.h"
#include "ABB.cpp"
#include "B.h"		// Clientes
#include "NodoB.h"
#include "B.cpp"
#include "AVL.h"	// Mascotas
#include "NodoAVL.h"
#include "AVL.cpp"
#include "RN.h"    // Tratamientos
#include "NodoRN.h"
#include "RN.cpp"
#include "AA.h"		// Medicacion
#include "NodoAA.h"
#include "AA.cpp"

#include "Funciones.cpp"

#include "PopUpMenu.h"
#include "IconMenu.h"

#include <iostream>
#include <fstream>
#include <iomanip>

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// **************************************************************
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
	private: System::Windows::Forms::Label^ nombres;
	private: System::Windows::Forms::Label^ subtitleMenu;
	private: System::Windows::Forms::Button^ bPopUp;
	private: System::Windows::Forms::Label^ popUpLbl;
	private: System::Windows::Forms::Label^ iconLbl;
	private: System::Windows::Forms::Button^ bIcon;
	private: System::Windows::Forms::Button^ bSalir;
	/*
	public: BinarioPaises arbolPaises;
			BinarioCiudades arbolCiudades;
			BCliente arbolClientes;
			AVLMascotas arbolMascotas;
			BinarioVisitas arbolVisitas;
			RNTratamiento arbolTratamientos;
			AAMedicacion arbolMedicaciones;
	*/
	public: void static leerArchivos() {
			
		BinarioPaises arbolPaises;
		BinarioCiudades arbolCiudades;
		BCliente arbolClientes;
		AVLMascotas arbolMascotas;
		BinarioVisitas arbolVisitas;
		RNTratamiento arbolTratamientos;
		AAMedicacion arbolMedicaciones;
			
		string linea1, linea2, linea3, linea4, linea5, linea6, linea7;

		ifstream archivo1("Paises.txt");
		while (getline(archivo1, linea1)) {

			int codPais = stoi(SeparaString1(linea1));//SeparaString(linea1, 1);
			string nombrePais = SeparaString2(linea1);//SeparaString(linea1, 2);

			pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
			if (pais == NULL) {
				arbolPaises.InsertaNodoPaises(codPais, nombrePais);
			}
		}
		archivo1.close();

		// **************************************************************

		ifstream archivo2("Ciudades.txt");
		while (getline(archivo2, linea2)) {

			int codPais = stoi(SeparaString1(linea2));
			int codCiudad = stoi(SeparaString2(linea2));
			string nombreCiudad = SeparaString3(linea2);

			pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
			pNodoBinarioCiudades ciudad = buscaCiudad(arbolCiudades.raiz, codCiudad);
			pNodoBinarioCiudades ciudadYpais = buscaCiudadRepetida(arbolCiudades.raiz, codPais, codCiudad);
			if (pais != NULL) {
				if (ciudadYpais == NULL) {
					arbolCiudades.InsertaNodoCiudad(codPais, codCiudad, nombreCiudad);
				}
			}
		}
		archivo2.close();

		// **************************************************************

		ifstream archivo3("Clientes.txt");
		while (getline(archivo3, linea3)) {

			int codCliente = stoi(SeparaString1(linea3));
			string nomCliente = SeparaString2(linea3);
			string dirCliente = SeparaString3(linea3);
			int codPais = stoi(SeparaString4(linea3));
			int codCiudad = stoi(SeparaString5(linea3));
			int tel = stoi(SeparaString6(linea3));
			string ultVisita = fechaFormato(SeparaString7(linea3), SeparaString8(linea3), SeparaString9(linea3));
			int desc = stoi(SeparaString10(linea3));
			int saldo = stoi(SeparaString11(linea3));

			pNodoBinarioPaises pais = buscaPais(arbolPaises.raiz, codPais);
			pNodoBinarioCiudades ciudad = buscaCiudadRepetida(arbolCiudades.raiz, codPais, codCiudad);
			pNodoBCliente cliente = buscaCliente(arbolClientes.raiz, codCliente);
			if (pais != NULL) {
				if (ciudad != NULL) {
					if (cliente == NULL) {
						arbolClientes.InsertaNodoCliente(codCliente, nomCliente, dirCliente, codPais, codCiudad, tel, ultVisita, desc, saldo);
					}
				}
			}
		}
		archivo3.close();

		// **************************************************************

		ifstream archivo4("Mascotas.txt");
		while (getline(archivo4, linea4)) {

			int numCliente = stoi(SeparaString1(linea4));
			int idAnimal = stoi(SeparaString2(linea4));
			string nombre = SeparaString3(linea4);
			string tipo = SeparaString4(linea4);
			string raza = SeparaString5(linea4);
			string fechaNacimiento = fechaFormato(SeparaString6(linea4), SeparaString7(linea4), SeparaString8(linea4));
			string sexo = SeparaString9(linea4);
			string color = SeparaString10(linea4);
			string castrado = SeparaString11(linea4);
			string ultimaVisita = fechaFormato(SeparaString12(linea4), SeparaString13(linea4), SeparaString14(linea4));

			pNodoBCliente cliente = buscaCliente(arbolClientes.raiz, numCliente);
			pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
			if (cliente != NULL) {
				if (mascota == NULL) {
					arbolMascotas.InsertaNodoMascota(numCliente, idAnimal, nombre, tipo, raza, fechaNacimiento, sexo, color, castrado, ultimaVisita);
				}
			}
		}
		archivo4.close();

		// **************************************************************

		ifstream archivo5("Visitas.txt");
		while (getline(archivo5, linea5)) {

			int codVisita = stoi(SeparaString1(linea5));
			int idAnimal = stoi(SeparaString2(linea5));
			string ultimaVisita = fechaFormato(SeparaString3(linea5), SeparaString4(linea5), SeparaString5(linea5));
			int totalFactura = stoi(SeparaString6(linea5));
			int formaPago = stoi(SeparaString7(linea5));

			pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
			pNodoBinarioVisitas visita = buscaVisita(arbolVisitas.raiz, codVisita);
			if (mascota != NULL) {
				if (visita == NULL) {
					arbolVisitas.InsertaNodoVisitas(codVisita, idAnimal, ultimaVisita, totalFactura, formaPago);
				}
			}
		}
		archivo5.close();

		// **************************************************************

		ifstream archivo6("Tratamiento.txt");
		while (getline(archivo6, linea6)) {

			int codTratamiento = stoi(SeparaString1(linea6));
			string nombreTratamiento = SeparaString2(linea6);
			int precio = stoi(SeparaString3(linea6));

			pNodoRNTratamiento tratamiento = buscaTratamiento(arbolTratamientos.raiz, codTratamiento);

			if (tratamiento == NULL) {
				arbolTratamientos.InsertaNodoTratamiento(codTratamiento, nombreTratamiento, precio);
			}
		}
		archivo6.close();

		// **************************************************************

		ifstream archivo7("Medicacion.txt");
		while (getline(archivo7, linea7)) {

			int idAnimal = stoi(SeparaString1(linea7));
			int codMed = stoi(SeparaString2(linea7));
			string ultVisita = fechaFormato(SeparaString3(linea7), SeparaString4(linea7), SeparaString5(linea7));
			int LMed = stoi(SeparaString6(linea7));
			int costU = stoi(SeparaString7(linea7));
			int cant = stoi(SeparaString8(linea7));
			int costT = stoi(SeparaString9(linea7));

			pNodoAVLMascotas mascota = buscaMascota(arbolMascotas.raiz, idAnimal);
			pNodoAAMedicacion med = buscaMedicacion(arbolMedicaciones.raiz, codMed);
			pNodoAAMedicacion medicacionValida = buscaMedicacionRepetida(arbolMedicaciones.raiz, codMed, idAnimal, ultVisita);
			if (mascota != NULL) {
				if (medicacionValida == NULL) {
					arbolMedicaciones.InsertaNodoMedicacion(idAnimal, codMed, ultVisita, LMed, costU, cant, costT);
				}
			}
		}
		archivo7.close();

		}

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
			this->nombres = (gcnew System::Windows::Forms::Label());
			this->subtitleMenu = (gcnew System::Windows::Forms::Label());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->bPopUp = (gcnew System::Windows::Forms::Button());
			this->popUpLbl = (gcnew System::Windows::Forms::Label());
			this->iconLbl = (gcnew System::Windows::Forms::Label());
			this->bIcon = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::White;
			this->titleMenu->Location = System::Drawing::Point(601, 90);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(381, 112);
			this->titleMenu->TabIndex = 0;
			this->titleMenu->Text = L"Fauna Life";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::titleMenu_Click);
			// 
			// nombres
			// 
			this->nombres->AutoSize = true;
			this->nombres->BackColor = System::Drawing::Color::Transparent;
			this->nombres->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombres->ForeColor = System::Drawing::Color::White;
			this->nombres->Location = System::Drawing::Point(864, 564);
			this->nombres->Name = L"nombres";
			this->nombres->Size = System::Drawing::Size(234, 20);
			this->nombres->TabIndex = 6;
			this->nombres->Text = L"Samuel Valverde y Erick Kauffmann";
			this->nombres->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// subtitleMenu
			// 
			this->subtitleMenu->AutoSize = true;
			this->subtitleMenu->BackColor = System::Drawing::Color::Transparent;
			this->subtitleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleMenu->ForeColor = System::Drawing::Color::White;
			this->subtitleMenu->Location = System::Drawing::Point(703, 177);
			this->subtitleMenu->Name = L"subtitleMenu";
			this->subtitleMenu->Size = System::Drawing::Size(181, 25);
			this->subtitleMenu->TabIndex = 20;
			this->subtitleMenu->Text = L"Clínica especializada";
			this->subtitleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::White;
			this->bSalir->Location = System::Drawing::Point(1061, -1);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(54, 40);
			this->bSalir->TabIndex = 35;
			this->bSalir->Text = L"X";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &MenuPrincipal::bSalir_Click);
			// 
			// bPopUp
			// 
			this->bPopUp->BackColor = System::Drawing::Color::Transparent;
			this->bPopUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bPopUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bPopUp->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bPopUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bPopUp.Image")));
			this->bPopUp->Location = System::Drawing::Point(659, 283);
			this->bPopUp->Name = L"bPopUp";
			this->bPopUp->Size = System::Drawing::Size(110, 110);
			this->bPopUp->TabIndex = 36;
			this->bPopUp->UseVisualStyleBackColor = false;
			this->bPopUp->Click += gcnew System::EventHandler(this, &MenuPrincipal::bPopUp_Click);
			// 
			// popUpLbl
			// 
			this->popUpLbl->AutoSize = true;
			this->popUpLbl->ForeColor = System::Drawing::Color::White;
			this->popUpLbl->Location = System::Drawing::Point(643, 406);
			this->popUpLbl->Name = L"popUpLbl";
			this->popUpLbl->Size = System::Drawing::Size(140, 30);
			this->popUpLbl->TabIndex = 37;
			this->popUpLbl->Text = L"Menú Pop Up";
			// 
			// iconLbl
			// 
			this->iconLbl->AutoSize = true;
			this->iconLbl->ForeColor = System::Drawing::Color::White;
			this->iconLbl->Location = System::Drawing::Point(806, 406);
			this->iconLbl->Name = L"iconLbl";
			this->iconLbl->Size = System::Drawing::Size(134, 30);
			this->iconLbl->TabIndex = 39;
			this->iconLbl->Text = L"Menú Íconos";
			// 
			// bIcon
			// 
			this->bIcon->BackColor = System::Drawing::Color::Transparent;
			this->bIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bIcon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bIcon->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bIcon.Image")));
			this->bIcon->Location = System::Drawing::Point(820, 283);
			this->bIcon->Name = L"bIcon";
			this->bIcon->Size = System::Drawing::Size(110, 110);
			this->bIcon->TabIndex = 38;
			this->bIcon->UseVisualStyleBackColor = false;
			this->bIcon->Click += gcnew System::EventHandler(this, &MenuPrincipal::bIcon_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1110, 593);
			this->Controls->Add(this->iconLbl);
			this->Controls->Add(this->bIcon);
			this->Controls->Add(this->popUpLbl);
			this->Controls->Add(this->bPopUp);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->subtitleMenu);
			this->Controls->Add(this->nombres);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(1110, 593);
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

	/*	POP UP MENU  */

	private: System::Void bPopUp_Click(System::Object^ sender, System::EventArgs^ e) {
		PopUpMenu^ popUpMenu = gcnew PopUpMenu(this, this->arbolPaises, arbolCiudades,
			arbolClientes, arbolMascotas, arbolVisitas, arbolTratamientos, arbolMedicaciones);
		popUpMenu->Show();
		this->Hide();
	}
	
	/*	ICON MENU  */

	private: System::Void bIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		IconMenu^ iconMenu = gcnew IconMenu(this, this->arbolPaises, arbolCiudades,
			arbolClientes, arbolMascotas, arbolVisitas, arbolTratamientos, arbolMedicaciones);
		iconMenu->Show();
		this->Hide();
	}

// *****************************************************************************************************

private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
private: System::Void titleMenu_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
