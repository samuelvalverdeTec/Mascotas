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
#include "SubMenuLugs.h"
#include "SubMenuClnc.h"
#include "SubMenuFact.h"
#include "SubMenuSucs.h"
#include "SubMenuClts.h"

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
	private: System::Windows::Forms::Label^ subtitleMenu;
	private: System::Windows::Forms::Button^ bMainLugs;
	private: System::Windows::Forms::Button^ bMainClnc;
	protected:




	private: System::Windows::Forms::Button^ bMainFact;
	private: System::Windows::Forms::Button^ bMainSucs;
	private: System::Windows::Forms::Button^ bMainClts;





	private: System::Windows::Forms::Button^ bMantenimiento;

	private: System::Windows::Forms::Button^ bReportes;
	private: System::Windows::Forms::Button^ bFacturacion;


	private: System::Windows::Forms::Button^ bAcercaDe;
	private: System::Windows::Forms::Button^ bSucursales;


	private: System::Windows::Forms::Button^ bContactos;






	private: System::Windows::Forms::Label^ lblClnc;
	private: System::Windows::Forms::Label^ lblLugs;
	private: System::Windows::Forms::Label^ lblSucs;
	private: System::Windows::Forms::Label^ lblFact;
	private: System::Windows::Forms::Label^ lblClts;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bPopUp;
	private: System::Windows::Forms::Label^ popUpLbl;

	private: System::Windows::Forms::Button^ bSalir;

	public:

		static void leerArchivos() {

			BinarioPaises arbolPaises;
			BinarioCiudades arbolCiudades;
			BCliente arbolClientes;
			AVLMascotas arbolMascotas;
			BinarioVisitas arbolVisitas;
			RNTratamiento arbolTratamientos;
			AAMedicacion arbolMedicaciones;

			string linea1;
			string linea2;
			string linea3;
			string linea4;
			string linea5;
			string linea6;
			string linea7;

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
			this->subtitleMenu = (gcnew System::Windows::Forms::Label());
			this->bMainLugs = (gcnew System::Windows::Forms::Button());
			this->bMainClnc = (gcnew System::Windows::Forms::Button());
			this->bMainFact = (gcnew System::Windows::Forms::Button());
			this->bMainSucs = (gcnew System::Windows::Forms::Button());
			this->bMainClts = (gcnew System::Windows::Forms::Button());
			this->bContactos = (gcnew System::Windows::Forms::Button());
			this->bAcercaDe = (gcnew System::Windows::Forms::Button());
			this->bSucursales = (gcnew System::Windows::Forms::Button());
			this->bReportes = (gcnew System::Windows::Forms::Button());
			this->bFacturacion = (gcnew System::Windows::Forms::Button());
			this->bMantenimiento = (gcnew System::Windows::Forms::Button());
			this->lblClnc = (gcnew System::Windows::Forms::Label());
			this->lblLugs = (gcnew System::Windows::Forms::Label());
			this->lblSucs = (gcnew System::Windows::Forms::Label());
			this->lblFact = (gcnew System::Windows::Forms::Label());
			this->lblClts = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->bPopUp = (gcnew System::Windows::Forms::Button());
			this->popUpLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titleMenu
			// 
			this->titleMenu->AutoSize = true;
			this->titleMenu->BackColor = System::Drawing::Color::Transparent;
			this->titleMenu->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleMenu->ForeColor = System::Drawing::Color::White;
			this->titleMenu->Location = System::Drawing::Point(734, 310);
			this->titleMenu->Name = L"titleMenu";
			this->titleMenu->Size = System::Drawing::Size(381, 112);
			this->titleMenu->TabIndex = 0;
			this->titleMenu->Text = L"Fauna Life";
			this->titleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// subtitleMenu
			// 
			this->subtitleMenu->AutoSize = true;
			this->subtitleMenu->BackColor = System::Drawing::Color::Transparent;
			this->subtitleMenu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtitleMenu->ForeColor = System::Drawing::Color::White;
			this->subtitleMenu->Location = System::Drawing::Point(12, 621);
			this->subtitleMenu->Name = L"subtitleMenu";
			this->subtitleMenu->Size = System::Drawing::Size(234, 20);
			this->subtitleMenu->TabIndex = 6;
			this->subtitleMenu->Text = L"Samuel Valverde y Erick Kauffmann";
			this->subtitleMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bMainLugs
			// 
			this->bMainLugs->BackColor = System::Drawing::Color::Transparent;
			this->bMainLugs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainLugs->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainLugs->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainLugs->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainLugs.Image")));
			this->bMainLugs->Location = System::Drawing::Point(469, 453);
			this->bMainLugs->Name = L"bMainLugs";
			this->bMainLugs->Size = System::Drawing::Size(110, 110);
			this->bMainLugs->TabIndex = 1;
			this->bMainLugs->UseVisualStyleBackColor = false;
			this->bMainLugs->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainLugs_Click);
			// 
			// bMainClnc
			// 
			this->bMainClnc->BackColor = System::Drawing::Color::Transparent;
			this->bMainClnc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bMainClnc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bMainClnc->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMainClnc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bMainClnc.Image")));
			this->bMainClnc->Location = System::Drawing::Point(594, 453);
			this->bMainClnc->Name = L"bMainClnc";
			this->bMainClnc->Size = System::Drawing::Size(110, 110);
			this->bMainClnc->TabIndex = 2;
			this->bMainClnc->UseVisualStyleBackColor = false;
			this->bMainClnc->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClnc_Click);
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
			this->bMainFact->Location = System::Drawing::Point(719, 453);
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
			this->bMainSucs->Location = System::Drawing::Point(845, 453);
			this->bMainSucs->Name = L"bMainSucs";
			this->bMainSucs->Size = System::Drawing::Size(110, 110);
			this->bMainSucs->TabIndex = 7;
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
			this->bMainClts->Location = System::Drawing::Point(971, 453);
			this->bMainClts->Name = L"bMainClts";
			this->bMainClts->Size = System::Drawing::Size(110, 110);
			this->bMainClts->TabIndex = 5;
			this->bMainClts->UseVisualStyleBackColor = false;
			this->bMainClts->Click += gcnew System::EventHandler(this, &MenuPrincipal::bMainClts_Click);
			// 
			// bContactos
			// 
			this->bContactos->Location = System::Drawing::Point(0, 0);
			this->bContactos->Name = L"bContactos";
			this->bContactos->Size = System::Drawing::Size(75, 23);
			this->bContactos->TabIndex = 0;
			// 
			// bAcercaDe
			// 
			this->bAcercaDe->Location = System::Drawing::Point(0, 0);
			this->bAcercaDe->Name = L"bAcercaDe";
			this->bAcercaDe->Size = System::Drawing::Size(75, 23);
			this->bAcercaDe->TabIndex = 0;
			// 
			// bSucursales
			// 
			this->bSucursales->Location = System::Drawing::Point(0, 0);
			this->bSucursales->Name = L"bSucursales";
			this->bSucursales->Size = System::Drawing::Size(75, 23);
			this->bSucursales->TabIndex = 0;
			// 
			// bReportes
			// 
			this->bReportes->Location = System::Drawing::Point(0, 0);
			this->bReportes->Name = L"bReportes";
			this->bReportes->Size = System::Drawing::Size(75, 23);
			this->bReportes->TabIndex = 0;
			// 
			// bFacturacion
			// 
			this->bFacturacion->Location = System::Drawing::Point(0, 0);
			this->bFacturacion->Name = L"bFacturacion";
			this->bFacturacion->Size = System::Drawing::Size(75, 23);
			this->bFacturacion->TabIndex = 0;
			// 
			// bMantenimiento
			// 
			this->bMantenimiento->Location = System::Drawing::Point(0, 0);
			this->bMantenimiento->Name = L"bMantenimiento";
			this->bMantenimiento->Size = System::Drawing::Size(75, 23);
			this->bMantenimiento->TabIndex = 0;
			// 
			// lblClnc
			// 
			this->lblClnc->AutoSize = true;
			this->lblClnc->ForeColor = System::Drawing::Color::White;
			this->lblClnc->Location = System::Drawing::Point(615, 566);
			this->lblClnc->Name = L"lblClnc";
			this->lblClnc->Size = System::Drawing::Size(74, 30);
			this->lblClnc->TabIndex = 15;
			this->lblClnc->Text = L"Clínica";
			// 
			// lblLugs
			// 
			this->lblLugs->AutoSize = true;
			this->lblLugs->ForeColor = System::Drawing::Color::White;
			this->lblLugs->Location = System::Drawing::Point(487, 566);
			this->lblLugs->Name = L"lblLugs";
			this->lblLugs->Size = System::Drawing::Size(85, 30);
			this->lblLugs->TabIndex = 16;
			this->lblLugs->Text = L"Lugares";
			// 
			// lblSucs
			// 
			this->lblSucs->AutoSize = true;
			this->lblSucs->ForeColor = System::Drawing::Color::White;
			this->lblSucs->Location = System::Drawing::Point(845, 566);
			this->lblSucs->Name = L"lblSucs";
			this->lblSucs->Size = System::Drawing::Size(110, 30);
			this->lblSucs->TabIndex = 17;
			this->lblSucs->Text = L"Sucursales";
			// 
			// lblFact
			// 
			this->lblFact->AutoSize = true;
			this->lblFact->ForeColor = System::Drawing::Color::White;
			this->lblFact->Location = System::Drawing::Point(714, 566);
			this->lblFact->Name = L"lblFact";
			this->lblFact->Size = System::Drawing::Size(119, 30);
			this->lblFact->TabIndex = 18;
			this->lblFact->Text = L"Facturación";
			// 
			// lblClts
			// 
			this->lblClts->AutoSize = true;
			this->lblClts->ForeColor = System::Drawing::Color::White;
			this->lblClts->Location = System::Drawing::Point(985, 566);
			this->lblClts->Name = L"lblClts";
			this->lblClts->Size = System::Drawing::Size(86, 30);
			this->lblClts->TabIndex = 19;
			this->lblClts->Text = L"Clientes";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(900, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Clínica especializada";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bPopUp->Location = System::Drawing::Point(971, 107);
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
			this->popUpLbl->Location = System::Drawing::Point(941, 229);
			this->popUpLbl->Name = L"popUpLbl";
			this->popUpLbl->Size = System::Drawing::Size(140, 30);
			this->popUpLbl->TabIndex = 37;
			this->popUpLbl->Text = L"Menú Pop Up";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Controls->Add(this->popUpLbl);
			this->Controls->Add(this->bPopUp);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblClts);
			this->Controls->Add(this->lblFact);
			this->Controls->Add(this->lblSucs);
			this->Controls->Add(this->lblLugs);
			this->Controls->Add(this->lblClnc);
			this->Controls->Add(this->bMainSucs);
			this->Controls->Add(this->subtitleMenu);
			this->Controls->Add(this->bMainClts);
			this->Controls->Add(this->bMainFact);
			this->Controls->Add(this->bMainClnc);
			this->Controls->Add(this->bMainLugs);
			this->Controls->Add(this->titleMenu);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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

	/*	POP UP MENU  */

	private: System::Void bPopUp_Click(System::Object^ sender, System::EventArgs^ e) {
		PopUpMenu^ popUpMenu = gcnew PopUpMenu(this);
		popUpMenu->Show();
		this->Hide();
	}
	
	/*	ICON MENU  */

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

}
};
}
