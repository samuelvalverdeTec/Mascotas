#pragma once
#include "BinarioPaises.h"
#include "BinarioCiudades.h"
#include "BCliente.h"
#include "AVLMascotas.h"
#include "BinarioVisitas.h"
#include "RNTratamiento.h"
#include "AAMedicacion.h"
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

	public: BinarioPaises* arbolPaises;
	public: BinarioCiudades* arbolCiudades;
	public: BCliente* arbolClientes;
	public: AVLMascotas* arbolMascotas;
	public: BinarioVisitas* arbolVisitas;
	public: RNTratamiento* arbolTratamientos;
	private: System::Windows::Forms::Label^ errorModifCiudad1;
	public:

	private: System::Windows::Forms::Label^ errorModifPais;
	private: System::Windows::Forms::Label^ errorModifCiudad2;
	public:
	public: AAMedicacion* arbolMedicaciones;

	public:
		PopUpMenu(System::Windows::Forms::Form^ m, BinarioPaises* arbolPaises, BinarioCiudades* arbolCiudades,
			BCliente* arbolClientes, AVLMascotas* arbolMascotas, BinarioVisitas* arbolVisitas, RNTratamiento* arbolTratamientos,
			AAMedicacion* arbolMedicaciones)
		{
			menu = m; 

			this->arbolPaises = arbolPaises;
			this->arbolCiudades = arbolCiudades;
			this->arbolClientes = arbolClientes;
			this->arbolMascotas = arbolMascotas;
			this->arbolVisitas = arbolVisitas;
			this->arbolTratamientos = arbolTratamientos;
			this->arbolMedicaciones = arbolMedicaciones;

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
	private: System::Windows::Forms::Button^ bExit;

	private: System::Windows::Forms::TabPage^ btabCont;
	private: System::Windows::Forms::TabPage^ btabAD;
	private: System::Windows::Forms::TabPage^ btabSucs;
	private: System::Windows::Forms::TabPage^ btabReps;
	private: System::Windows::Forms::TabPage^ btabFact;
	private: System::Windows::Forms::TabControl^ tabPrincipal;
	private: System::Windows::Forms::TabPage^ btabMant;
	private: System::Windows::Forms::TabControl^ tabMantenimiento;
	private: System::Windows::Forms::TabPage^ btabInser;
	private: System::Windows::Forms::TabPage^ btabModif;
	private: System::Windows::Forms::TabPage^ btabCons;
	private: System::Windows::Forms::TabPage^ btabElim;
	private: System::Windows::Forms::TabControl^ tabReportes;
	private: System::Windows::Forms::TabPage^ tabR1;
	private: System::Windows::Forms::TabPage^ tabR2;
	private: System::Windows::Forms::TabPage^ tabR3;
	private: System::Windows::Forms::TabPage^ tabR4;
	private: System::Windows::Forms::TabPage^ tabR5;
	private: System::Windows::Forms::TabPage^ tabR6;
	private: System::Windows::Forms::TabPage^ tabR7;
	private: System::Windows::Forms::TabPage^ tabR8;
	private: System::Windows::Forms::TabPage^ tabR9;
	private: System::Windows::Forms::TabPage^ tabR10;
	private: System::Windows::Forms::TabPage^ tabR11;
	private: System::Windows::Forms::TabPage^ tabR12;
	private: System::Windows::Forms::TabPage^ tabR13;
	private: System::Windows::Forms::TabControl^ tabFacturacion;
	private: System::Windows::Forms::TabPage^ tabSaldos;
	private: System::Windows::Forms::TabPage^ tabDesc;
	private: System::Windows::Forms::TabPage^ tabFact;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPrim;
	private: System::Windows::Forms::TabPage^ tabKruskal;
	private: System::Windows::Forms::TabPage^ tabGrado;
	private: System::Windows::Forms::TabPage^ tabCamino;
	private: System::Windows::Forms::Label^ AcercaDe;
	private: System::Windows::Forms::TabControl^ tabInsercion;
	private: System::Windows::Forms::TabPage^ btabInserPais;
	private: System::Windows::Forms::TabPage^ btabInserCdd;
	private: System::Windows::Forms::TabPage^ btabInserClt;
	private: System::Windows::Forms::TabPage^ btabInserMasc;
	private: System::Windows::Forms::TabPage^ btabInserVisita;
	private: System::Windows::Forms::TabPage^ btabInserTrat;
	private: System::Windows::Forms::TabPage^ btabInserMed;
	private: System::Windows::Forms::TabControl^ tabModificacion;
	private: System::Windows::Forms::TabPage^ btabModifPais;
	private: System::Windows::Forms::TabPage^ btabModifCdd;
	private: System::Windows::Forms::TabPage^ btabModifClt;
	private: System::Windows::Forms::TabPage^ btabModifMasc;
	private: System::Windows::Forms::TabPage^ btabModifVisita;
	private: System::Windows::Forms::TabPage^ btabModifTrat;
	private: System::Windows::Forms::TabPage^ btabModifMed;
	private: System::Windows::Forms::TabControl^ tabConsulta;
	private: System::Windows::Forms::TabPage^ btabConsPais;
	private: System::Windows::Forms::TabPage^ btabConsCdd;
	private: System::Windows::Forms::TabPage^ btabConsClt;
	private: System::Windows::Forms::TabPage^ btabConsMasc;
	private: System::Windows::Forms::TabPage^ btabConsVisita;
	private: System::Windows::Forms::TabPage^ btabConsTrat;
	private: System::Windows::Forms::TabPage^ btabConsMed;
	private: System::Windows::Forms::TabControl^ tabEliminacion;
	private: System::Windows::Forms::TabPage^ btabElimPais;
	private: System::Windows::Forms::TabPage^ btabElimCdd;
	private: System::Windows::Forms::TabPage^ btabElimClt;
	private: System::Windows::Forms::TabPage^ btabElimMasc;
	private: System::Windows::Forms::TabPage^ btabElimVisita;
	private: System::Windows::Forms::TabPage^ btabElimTrat;
	private: System::Windows::Forms::TabPage^ btabElimMed;
	private: System::Windows::Forms::Button^ bSalir;
	private: System::Windows::Forms::Label^ lblModifPais1;
	private: System::Windows::Forms::TextBox^ txtModifPais1;
	private: System::Windows::Forms::Button^ bModifCiudad;
	private: System::Windows::Forms::TextBox^ txtModifCiudad2;
	private: System::Windows::Forms::Label^ lblModifCiudad2;
	private: System::Windows::Forms::TextBox^ txtModifCiudad1;
	private: System::Windows::Forms::Label^ lblModifCiudad1;
	private: System::Windows::Forms::Button^ bModifPais;
	private: System::Windows::Forms::TextBox^ txtModifPais2;
	private: System::Windows::Forms::Label^ lblModifPais2;
private: System::Windows::Forms::TextBox^ txtModifCiudad3;

	private: System::Windows::Forms::Label^ lblModifCiudad3;
	private: System::Windows::Forms::TextBox^ txtModifCliente3;
	private: System::Windows::Forms::Label^ lblModifCliente3;
	private: System::Windows::Forms::Button^ bModifCliente;
	private: System::Windows::Forms::TextBox^ txtModifCliente2;
	private: System::Windows::Forms::Label^ lblModifCliente2;
	private: System::Windows::Forms::TextBox^ txtModifCliente1;
	private: System::Windows::Forms::Label^ lblModifCliente1;
	private: System::Windows::Forms::TextBox^ txtModifCliente6;
	private: System::Windows::Forms::Label^ lblModifCliente6;
	private: System::Windows::Forms::TextBox^ txtModifCliente5;
	private: System::Windows::Forms::Label^ lblModifCliente5;
	private: System::Windows::Forms::TextBox^ txtModifCliente4;
	private: System::Windows::Forms::Label^ lblModifCliente4;
	private: System::Windows::Forms::TextBox^ txtModifMascota4;
	private: System::Windows::Forms::Label^ lblModifMascota4;
	private: System::Windows::Forms::TextBox^ txtModifMascota3;
	private: System::Windows::Forms::Label^ lblModifMascota3;
	private: System::Windows::Forms::Button^ bModifMascota;
	private: System::Windows::Forms::TextBox^ txtModifMascota2;
	private: System::Windows::Forms::Label^ lblModifMascota2;
	private: System::Windows::Forms::TextBox^ txtModifMascota1;
	private: System::Windows::Forms::Label^ lblModifMascota1;
	private: System::Windows::Forms::TextBox^ txtModifVisita3;
	private: System::Windows::Forms::Label^ lblModifVisita3;
	private: System::Windows::Forms::Button^ bModifVisita;
	private: System::Windows::Forms::TextBox^ txtModifVisita2;
	private: System::Windows::Forms::Label^ lblModifVisita2;
	private: System::Windows::Forms::TextBox^ txtModifVisita1;
	private: System::Windows::Forms::Label^ lblModifVisita1;
	private: System::Windows::Forms::Button^ bModifTratamiento;
	private: System::Windows::Forms::TextBox^ txtModifTratamiento2;
	private: System::Windows::Forms::Label^ lblModifTratamiento2;
	private: System::Windows::Forms::TextBox^ txtModifTratamiento1;
	private: System::Windows::Forms::Label^ lblModifTratamiento1;
	private: System::Windows::Forms::TextBox^ txtModifMedicacion5;
	private: System::Windows::Forms::Label^ lblModifMedicacion5;
	private: System::Windows::Forms::TextBox^ txtModifMedicacion4;
	private: System::Windows::Forms::Label^ lblModifMedicacion4;
	private: System::Windows::Forms::TextBox^ txtModifMedicacion3;
	private: System::Windows::Forms::Label^ lblModifMedicacion3;
	private: System::Windows::Forms::Button^ bModifMedicacion;
	private: System::Windows::Forms::TextBox^ txtModifMedicacion2;
	private: System::Windows::Forms::Label^ lblModifMedicacion2;
	private: System::Windows::Forms::TextBox^ txtModifMedicacion1;
	private: System::Windows::Forms::Label^ lblModifMedicacion1;

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
			this->bExit = (gcnew System::Windows::Forms::Button());
			this->btabCont = (gcnew System::Windows::Forms::TabPage());
			this->btabAD = (gcnew System::Windows::Forms::TabPage());
			this->AcercaDe = (gcnew System::Windows::Forms::Label());
			this->btabSucs = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPrim = (gcnew System::Windows::Forms::TabPage());
			this->tabKruskal = (gcnew System::Windows::Forms::TabPage());
			this->tabGrado = (gcnew System::Windows::Forms::TabPage());
			this->tabCamino = (gcnew System::Windows::Forms::TabPage());
			this->btabReps = (gcnew System::Windows::Forms::TabPage());
			this->tabReportes = (gcnew System::Windows::Forms::TabControl());
			this->tabR1 = (gcnew System::Windows::Forms::TabPage());
			this->tabR2 = (gcnew System::Windows::Forms::TabPage());
			this->tabR3 = (gcnew System::Windows::Forms::TabPage());
			this->tabR4 = (gcnew System::Windows::Forms::TabPage());
			this->tabR5 = (gcnew System::Windows::Forms::TabPage());
			this->tabR6 = (gcnew System::Windows::Forms::TabPage());
			this->tabR7 = (gcnew System::Windows::Forms::TabPage());
			this->tabR8 = (gcnew System::Windows::Forms::TabPage());
			this->tabR9 = (gcnew System::Windows::Forms::TabPage());
			this->tabR10 = (gcnew System::Windows::Forms::TabPage());
			this->tabR11 = (gcnew System::Windows::Forms::TabPage());
			this->tabR12 = (gcnew System::Windows::Forms::TabPage());
			this->tabR13 = (gcnew System::Windows::Forms::TabPage());
			this->btabFact = (gcnew System::Windows::Forms::TabPage());
			this->tabFacturacion = (gcnew System::Windows::Forms::TabControl());
			this->tabSaldos = (gcnew System::Windows::Forms::TabPage());
			this->tabDesc = (gcnew System::Windows::Forms::TabPage());
			this->tabFact = (gcnew System::Windows::Forms::TabPage());
			this->tabPrincipal = (gcnew System::Windows::Forms::TabControl());
			this->btabMant = (gcnew System::Windows::Forms::TabPage());
			this->tabMantenimiento = (gcnew System::Windows::Forms::TabControl());
			this->btabInser = (gcnew System::Windows::Forms::TabPage());
			this->tabInsercion = (gcnew System::Windows::Forms::TabControl());
			this->btabInserPais = (gcnew System::Windows::Forms::TabPage());
			this->btabInserCdd = (gcnew System::Windows::Forms::TabPage());
			this->btabInserClt = (gcnew System::Windows::Forms::TabPage());
			this->btabInserMasc = (gcnew System::Windows::Forms::TabPage());
			this->btabInserVisita = (gcnew System::Windows::Forms::TabPage());
			this->btabInserTrat = (gcnew System::Windows::Forms::TabPage());
			this->btabInserMed = (gcnew System::Windows::Forms::TabPage());
			this->btabModif = (gcnew System::Windows::Forms::TabPage());
			this->tabModificacion = (gcnew System::Windows::Forms::TabControl());
			this->btabModifPais = (gcnew System::Windows::Forms::TabPage());
			this->errorModifPais = (gcnew System::Windows::Forms::Label());
			this->txtModifPais2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifPais2 = (gcnew System::Windows::Forms::Label());
			this->bModifPais = (gcnew System::Windows::Forms::Button());
			this->txtModifPais1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifPais1 = (gcnew System::Windows::Forms::Label());
			this->btabModifCdd = (gcnew System::Windows::Forms::TabPage());
			this->errorModifCiudad2 = (gcnew System::Windows::Forms::Label());
			this->errorModifCiudad1 = (gcnew System::Windows::Forms::Label());
			this->txtModifCiudad3 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCiudad3 = (gcnew System::Windows::Forms::Label());
			this->bModifCiudad = (gcnew System::Windows::Forms::Button());
			this->txtModifCiudad2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCiudad2 = (gcnew System::Windows::Forms::Label());
			this->txtModifCiudad1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCiudad1 = (gcnew System::Windows::Forms::Label());
			this->btabModifClt = (gcnew System::Windows::Forms::TabPage());
			this->txtModifCliente6 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente6 = (gcnew System::Windows::Forms::Label());
			this->txtModifCliente5 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente5 = (gcnew System::Windows::Forms::Label());
			this->txtModifCliente4 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente4 = (gcnew System::Windows::Forms::Label());
			this->txtModifCliente3 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente3 = (gcnew System::Windows::Forms::Label());
			this->bModifCliente = (gcnew System::Windows::Forms::Button());
			this->txtModifCliente2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente2 = (gcnew System::Windows::Forms::Label());
			this->txtModifCliente1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifCliente1 = (gcnew System::Windows::Forms::Label());
			this->btabModifMasc = (gcnew System::Windows::Forms::TabPage());
			this->txtModifMascota4 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMascota4 = (gcnew System::Windows::Forms::Label());
			this->txtModifMascota3 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMascota3 = (gcnew System::Windows::Forms::Label());
			this->bModifMascota = (gcnew System::Windows::Forms::Button());
			this->txtModifMascota2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMascota2 = (gcnew System::Windows::Forms::Label());
			this->txtModifMascota1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMascota1 = (gcnew System::Windows::Forms::Label());
			this->btabModifVisita = (gcnew System::Windows::Forms::TabPage());
			this->txtModifVisita3 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifVisita3 = (gcnew System::Windows::Forms::Label());
			this->bModifVisita = (gcnew System::Windows::Forms::Button());
			this->txtModifVisita2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifVisita2 = (gcnew System::Windows::Forms::Label());
			this->txtModifVisita1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifVisita1 = (gcnew System::Windows::Forms::Label());
			this->btabModifTrat = (gcnew System::Windows::Forms::TabPage());
			this->bModifTratamiento = (gcnew System::Windows::Forms::Button());
			this->txtModifTratamiento2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifTratamiento2 = (gcnew System::Windows::Forms::Label());
			this->txtModifTratamiento1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifTratamiento1 = (gcnew System::Windows::Forms::Label());
			this->btabModifMed = (gcnew System::Windows::Forms::TabPage());
			this->txtModifMedicacion5 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMedicacion5 = (gcnew System::Windows::Forms::Label());
			this->txtModifMedicacion4 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMedicacion4 = (gcnew System::Windows::Forms::Label());
			this->txtModifMedicacion3 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMedicacion3 = (gcnew System::Windows::Forms::Label());
			this->bModifMedicacion = (gcnew System::Windows::Forms::Button());
			this->txtModifMedicacion2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMedicacion2 = (gcnew System::Windows::Forms::Label());
			this->txtModifMedicacion1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifMedicacion1 = (gcnew System::Windows::Forms::Label());
			this->btabCons = (gcnew System::Windows::Forms::TabPage());
			this->tabConsulta = (gcnew System::Windows::Forms::TabControl());
			this->btabConsPais = (gcnew System::Windows::Forms::TabPage());
			this->btabConsCdd = (gcnew System::Windows::Forms::TabPage());
			this->btabConsClt = (gcnew System::Windows::Forms::TabPage());
			this->btabConsMasc = (gcnew System::Windows::Forms::TabPage());
			this->btabConsVisita = (gcnew System::Windows::Forms::TabPage());
			this->btabConsTrat = (gcnew System::Windows::Forms::TabPage());
			this->btabConsMed = (gcnew System::Windows::Forms::TabPage());
			this->btabElim = (gcnew System::Windows::Forms::TabPage());
			this->tabEliminacion = (gcnew System::Windows::Forms::TabControl());
			this->btabElimPais = (gcnew System::Windows::Forms::TabPage());
			this->btabElimCdd = (gcnew System::Windows::Forms::TabPage());
			this->btabElimClt = (gcnew System::Windows::Forms::TabPage());
			this->btabElimMasc = (gcnew System::Windows::Forms::TabPage());
			this->btabElimVisita = (gcnew System::Windows::Forms::TabPage());
			this->btabElimTrat = (gcnew System::Windows::Forms::TabPage());
			this->btabElimMed = (gcnew System::Windows::Forms::TabPage());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->btabAD->SuspendLayout();
			this->btabSucs->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->btabReps->SuspendLayout();
			this->tabReportes->SuspendLayout();
			this->btabFact->SuspendLayout();
			this->tabFacturacion->SuspendLayout();
			this->tabPrincipal->SuspendLayout();
			this->btabMant->SuspendLayout();
			this->tabMantenimiento->SuspendLayout();
			this->btabInser->SuspendLayout();
			this->tabInsercion->SuspendLayout();
			this->btabModif->SuspendLayout();
			this->tabModificacion->SuspendLayout();
			this->btabModifPais->SuspendLayout();
			this->btabModifCdd->SuspendLayout();
			this->btabModifClt->SuspendLayout();
			this->btabModifMasc->SuspendLayout();
			this->btabModifVisita->SuspendLayout();
			this->btabModifTrat->SuspendLayout();
			this->btabModifMed->SuspendLayout();
			this->btabCons->SuspendLayout();
			this->tabConsulta->SuspendLayout();
			this->btabElim->SuspendLayout();
			this->tabEliminacion->SuspendLayout();
			this->SuspendLayout();
			// 
			// bExit
			// 
			this->bExit->BackColor = System::Drawing::Color::CadetBlue;
			this->bExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bExit->ForeColor = System::Drawing::Color::White;
			this->bExit->Location = System::Drawing::Point(1029, 2);
			this->bExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bExit->Name = L"bExit";
			this->bExit->Size = System::Drawing::Size(54, 40);
			this->bExit->TabIndex = 37;
			this->bExit->Text = L"X";
			this->bExit->UseVisualStyleBackColor = false;
			this->bExit->Click += gcnew System::EventHandler(this, &PopUpMenu::bExit_Click);
			// 
			// btabCont
			// 
			this->btabCont->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabCont->ForeColor = System::Drawing::Color::White;
			this->btabCont->Location = System::Drawing::Point(4, 42);
			this->btabCont->Name = L"btabCont";
			this->btabCont->Size = System::Drawing::Size(925, 541);
			this->btabCont->TabIndex = 5;
			this->btabCont->Text = L"Contactos";
			this->btabCont->Click += gcnew System::EventHandler(this, &PopUpMenu::tabCont_Click);
			// 
			// btabAD
			// 
			this->btabAD->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabAD->Controls->Add(this->AcercaDe);
			this->btabAD->ForeColor = System::Drawing::Color::White;
			this->btabAD->Location = System::Drawing::Point(4, 42);
			this->btabAD->Name = L"btabAD";
			this->btabAD->Size = System::Drawing::Size(925, 541);
			this->btabAD->TabIndex = 4;
			this->btabAD->Text = L"Acerca De";
			this->btabAD->Click += gcnew System::EventHandler(this, &PopUpMenu::tabAD_Click);
			// 
			// AcercaDe
			// 
			this->AcercaDe->AutoSize = true;
			this->AcercaDe->Location = System::Drawing::Point(24, 25);
			this->AcercaDe->Name = L"AcercaDe";
			this->AcercaDe->Size = System::Drawing::Size(305, 30);
			this->AcercaDe->TabIndex = 0;
			this->AcercaDe->Text = L"Nosotros somos Fauna Life y ....";
			// 
			// btabSucs
			// 
			this->btabSucs->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabSucs->Controls->Add(this->tabControl1);
			this->btabSucs->ForeColor = System::Drawing::Color::White;
			this->btabSucs->Location = System::Drawing::Point(4, 42);
			this->btabSucs->Name = L"btabSucs";
			this->btabSucs->Size = System::Drawing::Size(925, 541);
			this->btabSucs->TabIndex = 3;
			this->btabSucs->Text = L"Sucursales";
			this->btabSucs->Click += gcnew System::EventHandler(this, &PopUpMenu::tabSucs_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPrim);
			this->tabControl1->Controls->Add(this->tabKruskal);
			this->tabControl1->Controls->Add(this->tabGrado);
			this->tabControl1->Controls->Add(this->tabCamino);
			this->tabControl1->Location = System::Drawing::Point(-2, -3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1012, 547);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPrim
			// 
			this->tabPrim->Location = System::Drawing::Point(4, 42);
			this->tabPrim->Name = L"tabPrim";
			this->tabPrim->Size = System::Drawing::Size(1004, 501);
			this->tabPrim->TabIndex = 10;
			this->tabPrim->Text = L"Prim";
			this->tabPrim->UseVisualStyleBackColor = true;
			// 
			// tabKruskal
			// 
			this->tabKruskal->Location = System::Drawing::Point(4, 42);
			this->tabKruskal->Name = L"tabKruskal";
			this->tabKruskal->Size = System::Drawing::Size(1004, 501);
			this->tabKruskal->TabIndex = 12;
			this->tabKruskal->Text = L"Kruskal";
			this->tabKruskal->UseVisualStyleBackColor = true;
			// 
			// tabGrado
			// 
			this->tabGrado->Location = System::Drawing::Point(4, 42);
			this->tabGrado->Name = L"tabGrado";
			this->tabGrado->Size = System::Drawing::Size(1004, 501);
			this->tabGrado->TabIndex = 11;
			this->tabGrado->Text = L"Grado";
			this->tabGrado->UseVisualStyleBackColor = true;
			// 
			// tabCamino
			// 
			this->tabCamino->Location = System::Drawing::Point(4, 42);
			this->tabCamino->Name = L"tabCamino";
			this->tabCamino->Size = System::Drawing::Size(1004, 501);
			this->tabCamino->TabIndex = 13;
			this->tabCamino->Text = L"Camino";
			this->tabCamino->UseVisualStyleBackColor = true;
			// 
			// btabReps
			// 
			this->btabReps->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabReps->Controls->Add(this->tabReportes);
			this->btabReps->ForeColor = System::Drawing::Color::White;
			this->btabReps->Location = System::Drawing::Point(4, 42);
			this->btabReps->Name = L"btabReps";
			this->btabReps->Size = System::Drawing::Size(925, 541);
			this->btabReps->TabIndex = 2;
			this->btabReps->Text = L"Reportes";
			this->btabReps->Click += gcnew System::EventHandler(this, &PopUpMenu::tabReps_Click);
			// 
			// tabReportes
			// 
			this->tabReportes->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabReportes->Controls->Add(this->tabR1);
			this->tabReportes->Controls->Add(this->tabR2);
			this->tabReportes->Controls->Add(this->tabR3);
			this->tabReportes->Controls->Add(this->tabR4);
			this->tabReportes->Controls->Add(this->tabR5);
			this->tabReportes->Controls->Add(this->tabR6);
			this->tabReportes->Controls->Add(this->tabR7);
			this->tabReportes->Controls->Add(this->tabR8);
			this->tabReportes->Controls->Add(this->tabR9);
			this->tabReportes->Controls->Add(this->tabR10);
			this->tabReportes->Controls->Add(this->tabR11);
			this->tabReportes->Controls->Add(this->tabR12);
			this->tabReportes->Controls->Add(this->tabR13);
			this->tabReportes->Location = System::Drawing::Point(0, -2);
			this->tabReportes->Name = L"tabReportes";
			this->tabReportes->SelectedIndex = 0;
			this->tabReportes->Size = System::Drawing::Size(929, 547);
			this->tabReportes->TabIndex = 1;
			// 
			// tabR1
			// 
			this->tabR1->Location = System::Drawing::Point(4, 42);
			this->tabR1->Name = L"tabR1";
			this->tabR1->Padding = System::Windows::Forms::Padding(3);
			this->tabR1->Size = System::Drawing::Size(921, 501);
			this->tabR1->TabIndex = 0;
			this->tabR1->Text = L"Rep1";
			this->tabR1->UseVisualStyleBackColor = true;
			// 
			// tabR2
			// 
			this->tabR2->Location = System::Drawing::Point(4, 42);
			this->tabR2->Name = L"tabR2";
			this->tabR2->Padding = System::Windows::Forms::Padding(3);
			this->tabR2->Size = System::Drawing::Size(921, 501);
			this->tabR2->TabIndex = 1;
			this->tabR2->Text = L"Rep2";
			this->tabR2->UseVisualStyleBackColor = true;
			// 
			// tabR3
			// 
			this->tabR3->Location = System::Drawing::Point(4, 42);
			this->tabR3->Name = L"tabR3";
			this->tabR3->Size = System::Drawing::Size(921, 501);
			this->tabR3->TabIndex = 2;
			this->tabR3->Text = L"Rep3";
			this->tabR3->UseVisualStyleBackColor = true;
			// 
			// tabR4
			// 
			this->tabR4->Location = System::Drawing::Point(4, 42);
			this->tabR4->Name = L"tabR4";
			this->tabR4->Size = System::Drawing::Size(921, 501);
			this->tabR4->TabIndex = 3;
			this->tabR4->Text = L"Rep4";
			this->tabR4->UseVisualStyleBackColor = true;
			// 
			// tabR5
			// 
			this->tabR5->Location = System::Drawing::Point(4, 42);
			this->tabR5->Name = L"tabR5";
			this->tabR5->Size = System::Drawing::Size(921, 501);
			this->tabR5->TabIndex = 4;
			this->tabR5->Text = L"Rep5";
			this->tabR5->UseVisualStyleBackColor = true;
			// 
			// tabR6
			// 
			this->tabR6->Location = System::Drawing::Point(4, 42);
			this->tabR6->Name = L"tabR6";
			this->tabR6->Size = System::Drawing::Size(921, 501);
			this->tabR6->TabIndex = 5;
			this->tabR6->Text = L"Rep6";
			this->tabR6->UseVisualStyleBackColor = true;
			// 
			// tabR7
			// 
			this->tabR7->Location = System::Drawing::Point(4, 42);
			this->tabR7->Name = L"tabR7";
			this->tabR7->Size = System::Drawing::Size(921, 501);
			this->tabR7->TabIndex = 6;
			this->tabR7->Text = L"Rep7";
			this->tabR7->UseVisualStyleBackColor = true;
			// 
			// tabR8
			// 
			this->tabR8->Location = System::Drawing::Point(4, 42);
			this->tabR8->Name = L"tabR8";
			this->tabR8->Size = System::Drawing::Size(921, 501);
			this->tabR8->TabIndex = 7;
			this->tabR8->Text = L"Rep8";
			this->tabR8->UseVisualStyleBackColor = true;
			// 
			// tabR9
			// 
			this->tabR9->Location = System::Drawing::Point(4, 42);
			this->tabR9->Name = L"tabR9";
			this->tabR9->Size = System::Drawing::Size(921, 501);
			this->tabR9->TabIndex = 8;
			this->tabR9->Text = L"Rep9";
			this->tabR9->UseVisualStyleBackColor = true;
			// 
			// tabR10
			// 
			this->tabR10->Location = System::Drawing::Point(4, 42);
			this->tabR10->Name = L"tabR10";
			this->tabR10->Size = System::Drawing::Size(921, 501);
			this->tabR10->TabIndex = 9;
			this->tabR10->Text = L"Rep10";
			this->tabR10->UseVisualStyleBackColor = true;
			// 
			// tabR11
			// 
			this->tabR11->Location = System::Drawing::Point(4, 42);
			this->tabR11->Name = L"tabR11";
			this->tabR11->Size = System::Drawing::Size(921, 501);
			this->tabR11->TabIndex = 10;
			this->tabR11->Text = L"Rep11";
			this->tabR11->UseVisualStyleBackColor = true;
			// 
			// tabR12
			// 
			this->tabR12->Location = System::Drawing::Point(4, 42);
			this->tabR12->Name = L"tabR12";
			this->tabR12->Size = System::Drawing::Size(921, 501);
			this->tabR12->TabIndex = 11;
			this->tabR12->Text = L"Rep12";
			this->tabR12->UseVisualStyleBackColor = true;
			// 
			// tabR13
			// 
			this->tabR13->Location = System::Drawing::Point(4, 42);
			this->tabR13->Name = L"tabR13";
			this->tabR13->Size = System::Drawing::Size(921, 501);
			this->tabR13->TabIndex = 12;
			this->tabR13->Text = L"Rep13";
			this->tabR13->UseVisualStyleBackColor = true;
			// 
			// btabFact
			// 
			this->btabFact->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabFact->Controls->Add(this->tabFacturacion);
			this->btabFact->ForeColor = System::Drawing::Color::White;
			this->btabFact->Location = System::Drawing::Point(4, 42);
			this->btabFact->Name = L"btabFact";
			this->btabFact->Padding = System::Windows::Forms::Padding(3);
			this->btabFact->Size = System::Drawing::Size(925, 541);
			this->btabFact->TabIndex = 1;
			this->btabFact->Text = L"Facturacion";
			this->btabFact->Click += gcnew System::EventHandler(this, &PopUpMenu::tabFact_Click);
			// 
			// tabFacturacion
			// 
			this->tabFacturacion->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabFacturacion->Controls->Add(this->tabSaldos);
			this->tabFacturacion->Controls->Add(this->tabDesc);
			this->tabFacturacion->Controls->Add(this->tabFact);
			this->tabFacturacion->Location = System::Drawing::Point(0, -2);
			this->tabFacturacion->Name = L"tabFacturacion";
			this->tabFacturacion->SelectedIndex = 0;
			this->tabFacturacion->Size = System::Drawing::Size(929, 547);
			this->tabFacturacion->TabIndex = 1;
			// 
			// tabSaldos
			// 
			this->tabSaldos->Location = System::Drawing::Point(4, 42);
			this->tabSaldos->Name = L"tabSaldos";
			this->tabSaldos->Padding = System::Windows::Forms::Padding(3);
			this->tabSaldos->Size = System::Drawing::Size(921, 501);
			this->tabSaldos->TabIndex = 0;
			this->tabSaldos->Text = L"Saldos";
			this->tabSaldos->UseVisualStyleBackColor = true;
			// 
			// tabDesc
			// 
			this->tabDesc->Location = System::Drawing::Point(4, 42);
			this->tabDesc->Name = L"tabDesc";
			this->tabDesc->Padding = System::Windows::Forms::Padding(3);
			this->tabDesc->Size = System::Drawing::Size(921, 501);
			this->tabDesc->TabIndex = 1;
			this->tabDesc->Text = L"Descuentos";
			this->tabDesc->UseVisualStyleBackColor = true;
			// 
			// tabFact
			// 
			this->tabFact->Location = System::Drawing::Point(4, 42);
			this->tabFact->Name = L"tabFact";
			this->tabFact->Size = System::Drawing::Size(921, 501);
			this->tabFact->TabIndex = 2;
			this->tabFact->Text = L"Facturación";
			this->tabFact->UseVisualStyleBackColor = true;
			// 
			// tabPrincipal
			// 
			this->tabPrincipal->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabPrincipal->Controls->Add(this->btabMant);
			this->tabPrincipal->Controls->Add(this->btabFact);
			this->tabPrincipal->Controls->Add(this->btabReps);
			this->tabPrincipal->Controls->Add(this->btabSucs);
			this->tabPrincipal->Controls->Add(this->btabAD);
			this->tabPrincipal->Controls->Add(this->btabCont);
			this->tabPrincipal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPrincipal->HotTrack = true;
			this->tabPrincipal->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tabPrincipal->Location = System::Drawing::Point(12, 12);
			this->tabPrincipal->Name = L"tabPrincipal";
			this->tabPrincipal->SelectedIndex = 0;
			this->tabPrincipal->Size = System::Drawing::Size(933, 587);
			this->tabPrincipal->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tabPrincipal->TabIndex = 38;
			// 
			// btabMant
			// 
			this->btabMant->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabMant->Controls->Add(this->tabMantenimiento);
			this->btabMant->ForeColor = System::Drawing::Color::White;
			this->btabMant->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btabMant->Location = System::Drawing::Point(4, 42);
			this->btabMant->Name = L"btabMant";
			this->btabMant->Padding = System::Windows::Forms::Padding(3);
			this->btabMant->Size = System::Drawing::Size(925, 541);
			this->btabMant->TabIndex = 0;
			this->btabMant->Text = L"Mantenimiento";
			this->btabMant->Click += gcnew System::EventHandler(this, &PopUpMenu::tabMant_Click);
			// 
			// tabMantenimiento
			// 
			this->tabMantenimiento->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabMantenimiento->Controls->Add(this->btabInser);
			this->tabMantenimiento->Controls->Add(this->btabModif);
			this->tabMantenimiento->Controls->Add(this->btabCons);
			this->tabMantenimiento->Controls->Add(this->btabElim);
			this->tabMantenimiento->Location = System::Drawing::Point(0, 0);
			this->tabMantenimiento->Name = L"tabMantenimiento";
			this->tabMantenimiento->SelectedIndex = 0;
			this->tabMantenimiento->Size = System::Drawing::Size(929, 545);
			this->tabMantenimiento->TabIndex = 0;
			// 
			// btabInser
			// 
			this->btabInser->Controls->Add(this->tabInsercion);
			this->btabInser->Location = System::Drawing::Point(4, 42);
			this->btabInser->Name = L"btabInser";
			this->btabInser->Padding = System::Windows::Forms::Padding(3);
			this->btabInser->Size = System::Drawing::Size(921, 499);
			this->btabInser->TabIndex = 0;
			this->btabInser->Text = L"Inserción";
			this->btabInser->UseVisualStyleBackColor = true;
			// 
			// tabInsercion
			// 
			this->tabInsercion->Controls->Add(this->btabInserPais);
			this->tabInsercion->Controls->Add(this->btabInserCdd);
			this->tabInsercion->Controls->Add(this->btabInserClt);
			this->tabInsercion->Controls->Add(this->btabInserMasc);
			this->tabInsercion->Controls->Add(this->btabInserVisita);
			this->tabInsercion->Controls->Add(this->btabInserTrat);
			this->tabInsercion->Controls->Add(this->btabInserMed);
			this->tabInsercion->Location = System::Drawing::Point(0, 0);
			this->tabInsercion->Name = L"tabInsercion";
			this->tabInsercion->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabInsercion->SelectedIndex = 0;
			this->tabInsercion->Size = System::Drawing::Size(925, 500);
			this->tabInsercion->TabIndex = 0;
			// 
			// btabInserPais
			// 
			this->btabInserPais->Location = System::Drawing::Point(4, 39);
			this->btabInserPais->Name = L"btabInserPais";
			this->btabInserPais->Padding = System::Windows::Forms::Padding(3);
			this->btabInserPais->Size = System::Drawing::Size(917, 457);
			this->btabInserPais->TabIndex = 0;
			this->btabInserPais->Text = L"País";
			this->btabInserPais->UseVisualStyleBackColor = true;
			// 
			// btabInserCdd
			// 
			this->btabInserCdd->Location = System::Drawing::Point(4, 39);
			this->btabInserCdd->Name = L"btabInserCdd";
			this->btabInserCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabInserCdd->Size = System::Drawing::Size(917, 457);
			this->btabInserCdd->TabIndex = 1;
			this->btabInserCdd->Text = L"Ciudad";
			this->btabInserCdd->UseVisualStyleBackColor = true;
			// 
			// btabInserClt
			// 
			this->btabInserClt->Location = System::Drawing::Point(4, 39);
			this->btabInserClt->Name = L"btabInserClt";
			this->btabInserClt->Size = System::Drawing::Size(917, 457);
			this->btabInserClt->TabIndex = 2;
			this->btabInserClt->Text = L"Cliente";
			this->btabInserClt->UseVisualStyleBackColor = true;
			// 
			// btabInserMasc
			// 
			this->btabInserMasc->Location = System::Drawing::Point(4, 39);
			this->btabInserMasc->Name = L"btabInserMasc";
			this->btabInserMasc->Size = System::Drawing::Size(917, 457);
			this->btabInserMasc->TabIndex = 3;
			this->btabInserMasc->Text = L"Mascota";
			this->btabInserMasc->UseVisualStyleBackColor = true;
			// 
			// btabInserVisita
			// 
			this->btabInserVisita->Location = System::Drawing::Point(4, 39);
			this->btabInserVisita->Name = L"btabInserVisita";
			this->btabInserVisita->Size = System::Drawing::Size(917, 457);
			this->btabInserVisita->TabIndex = 4;
			this->btabInserVisita->Text = L"Visita";
			this->btabInserVisita->UseVisualStyleBackColor = true;
			// 
			// btabInserTrat
			// 
			this->btabInserTrat->Location = System::Drawing::Point(4, 39);
			this->btabInserTrat->Name = L"btabInserTrat";
			this->btabInserTrat->Size = System::Drawing::Size(917, 457);
			this->btabInserTrat->TabIndex = 5;
			this->btabInserTrat->Text = L"Tratamiento";
			this->btabInserTrat->UseVisualStyleBackColor = true;
			// 
			// btabInserMed
			// 
			this->btabInserMed->Location = System::Drawing::Point(4, 39);
			this->btabInserMed->Name = L"btabInserMed";
			this->btabInserMed->Size = System::Drawing::Size(917, 457);
			this->btabInserMed->TabIndex = 6;
			this->btabInserMed->Text = L"Medicación";
			this->btabInserMed->UseVisualStyleBackColor = true;
			// 
			// btabModif
			// 
			this->btabModif->Controls->Add(this->tabModificacion);
			this->btabModif->Location = System::Drawing::Point(4, 42);
			this->btabModif->Name = L"btabModif";
			this->btabModif->Padding = System::Windows::Forms::Padding(3);
			this->btabModif->Size = System::Drawing::Size(921, 499);
			this->btabModif->TabIndex = 1;
			this->btabModif->Text = L"Modificación";
			this->btabModif->UseVisualStyleBackColor = true;
			// 
			// tabModificacion
			// 
			this->tabModificacion->Controls->Add(this->btabModifPais);
			this->tabModificacion->Controls->Add(this->btabModifCdd);
			this->tabModificacion->Controls->Add(this->btabModifClt);
			this->tabModificacion->Controls->Add(this->btabModifMasc);
			this->tabModificacion->Controls->Add(this->btabModifVisita);
			this->tabModificacion->Controls->Add(this->btabModifTrat);
			this->tabModificacion->Controls->Add(this->btabModifMed);
			this->tabModificacion->Location = System::Drawing::Point(-2, -1);
			this->tabModificacion->Name = L"tabModificacion";
			this->tabModificacion->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabModificacion->SelectedIndex = 0;
			this->tabModificacion->Size = System::Drawing::Size(925, 500);
			this->tabModificacion->TabIndex = 1;
			// 
			// btabModifPais
			// 
			this->btabModifPais->BackColor = System::Drawing::Color::Teal;
			this->btabModifPais->Controls->Add(this->errorModifPais);
			this->btabModifPais->Controls->Add(this->txtModifPais2);
			this->btabModifPais->Controls->Add(this->lblModifPais2);
			this->btabModifPais->Controls->Add(this->bModifPais);
			this->btabModifPais->Controls->Add(this->txtModifPais1);
			this->btabModifPais->Controls->Add(this->lblModifPais1);
			this->btabModifPais->ForeColor = System::Drawing::Color::White;
			this->btabModifPais->Location = System::Drawing::Point(4, 39);
			this->btabModifPais->Name = L"btabModifPais";
			this->btabModifPais->Padding = System::Windows::Forms::Padding(3);
			this->btabModifPais->Size = System::Drawing::Size(917, 457);
			this->btabModifPais->TabIndex = 0;
			this->btabModifPais->Text = L"País";
			// 
			// errorModifPais
			// 
			this->errorModifPais->AutoSize = true;
			this->errorModifPais->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorModifPais->ForeColor = System::Drawing::Color::Red;
			this->errorModifPais->Location = System::Drawing::Point(71, 130);
			this->errorModifPais->Name = L"errorModifPais";
			this->errorModifPais->Size = System::Drawing::Size(352, 21);
			this->errorModifPais->TabIndex = 44;
			this->errorModifPais->Text = L"El código de país ingresado no está registrado.";
			this->errorModifPais->Visible = false;
			// 
			// txtModifPais2
			// 
			this->txtModifPais2->Location = System::Drawing::Point(75, 191);
			this->txtModifPais2->Name = L"txtModifPais2";
			this->txtModifPais2->Size = System::Drawing::Size(210, 35);
			this->txtModifPais2->TabIndex = 43;
			// 
			// lblModifPais2
			// 
			this->lblModifPais2->AutoSize = true;
			this->lblModifPais2->BackColor = System::Drawing::Color::Teal;
			this->lblModifPais2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifPais2->Location = System::Drawing::Point(70, 158);
			this->lblModifPais2->Name = L"lblModifPais2";
			this->lblModifPais2->Size = System::Drawing::Size(131, 30);
			this->lblModifPais2->TabIndex = 42;
			this->lblModifPais2->Text = L"Nombre País";
			// 
			// bModifPais
			// 
			this->bModifPais->BackColor = System::Drawing::Color::Transparent;
			this->bModifPais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifPais->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifPais->ForeColor = System::Drawing::Color::White;
			this->bModifPais->Location = System::Drawing::Point(75, 366);
			this->bModifPais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifPais->Name = L"bModifPais";
			this->bModifPais->Size = System::Drawing::Size(210, 45);
			this->bModifPais->TabIndex = 41;
			this->bModifPais->Text = L"Modificar";
			this->bModifPais->UseVisualStyleBackColor = false;
			this->bModifPais->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifPais_Click);
			// 
			// txtModifPais1
			// 
			this->txtModifPais1->Location = System::Drawing::Point(75, 92);
			this->txtModifPais1->Name = L"txtModifPais1";
			this->txtModifPais1->Size = System::Drawing::Size(210, 35);
			this->txtModifPais1->TabIndex = 1;
			// 
			// lblModifPais1
			// 
			this->lblModifPais1->AutoSize = true;
			this->lblModifPais1->BackColor = System::Drawing::Color::Teal;
			this->lblModifPais1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifPais1->Location = System::Drawing::Point(70, 59);
			this->lblModifPais1->Name = L"lblModifPais1";
			this->lblModifPais1->Size = System::Drawing::Size(121, 30);
			this->lblModifPais1->TabIndex = 0;
			this->lblModifPais1->Text = L"Código País";
			// 
			// btabModifCdd
			// 
			this->btabModifCdd->BackColor = System::Drawing::Color::Teal;
			this->btabModifCdd->Controls->Add(this->errorModifCiudad2);
			this->btabModifCdd->Controls->Add(this->errorModifCiudad1);
			this->btabModifCdd->Controls->Add(this->txtModifCiudad3);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad3);
			this->btabModifCdd->Controls->Add(this->bModifCiudad);
			this->btabModifCdd->Controls->Add(this->txtModifCiudad2);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad2);
			this->btabModifCdd->Controls->Add(this->txtModifCiudad1);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad1);
			this->btabModifCdd->Location = System::Drawing::Point(4, 39);
			this->btabModifCdd->Name = L"btabModifCdd";
			this->btabModifCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabModifCdd->Size = System::Drawing::Size(917, 457);
			this->btabModifCdd->TabIndex = 1;
			this->btabModifCdd->Text = L"Ciudad";
			// 
			// errorModifCiudad2
			// 
			this->errorModifCiudad2->AutoSize = true;
			this->errorModifCiudad2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorModifCiudad2->ForeColor = System::Drawing::Color::Red;
			this->errorModifCiudad2->Location = System::Drawing::Point(71, 203);
			this->errorModifCiudad2->Name = L"errorModifCiudad2";
			this->errorModifCiudad2->Size = System::Drawing::Size(372, 21);
			this->errorModifCiudad2->TabIndex = 44;
			this->errorModifCiudad2->Text = L"El código de ciudad ingresado no está registrado.";
			this->errorModifCiudad2->Visible = false;
			// 
			// errorModifCiudad1
			// 
			this->errorModifCiudad1->AutoSize = true;
			this->errorModifCiudad1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorModifCiudad1->ForeColor = System::Drawing::Color::Red;
			this->errorModifCiudad1->Location = System::Drawing::Point(71, 110);
			this->errorModifCiudad1->Name = L"errorModifCiudad1";
			this->errorModifCiudad1->Size = System::Drawing::Size(352, 21);
			this->errorModifCiudad1->TabIndex = 43;
			this->errorModifCiudad1->Text = L"El código de país ingresado no está registrado.";
			this->errorModifCiudad1->Visible = false;
			// 
			// txtModifCiudad3
			// 
			this->txtModifCiudad3->Location = System::Drawing::Point(75, 257);
			this->txtModifCiudad3->Name = L"txtModifCiudad3";
			this->txtModifCiudad3->Size = System::Drawing::Size(210, 35);
			this->txtModifCiudad3->TabIndex = 42;
			// 
			// lblModifCiudad3
			// 
			this->lblModifCiudad3->AutoSize = true;
			this->lblModifCiudad3->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad3->Location = System::Drawing::Point(70, 224);
			this->lblModifCiudad3->Name = L"lblModifCiudad3";
			this->lblModifCiudad3->Size = System::Drawing::Size(160, 30);
			this->lblModifCiudad3->TabIndex = 41;
			this->lblModifCiudad3->Text = L"Nombre Ciudad";
			// 
			// bModifCiudad
			// 
			this->bModifCiudad->BackColor = System::Drawing::Color::Transparent;
			this->bModifCiudad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifCiudad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifCiudad->ForeColor = System::Drawing::Color::White;
			this->bModifCiudad->Location = System::Drawing::Point(75, 366);
			this->bModifCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifCiudad->Name = L"bModifCiudad";
			this->bModifCiudad->Size = System::Drawing::Size(210, 45);
			this->bModifCiudad->TabIndex = 40;
			this->bModifCiudad->Text = L"Modificar";
			this->bModifCiudad->UseVisualStyleBackColor = false;
			this->bModifCiudad->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifCiudad_Click);
			// 
			// txtModifCiudad2
			// 
			this->txtModifCiudad2->Location = System::Drawing::Point(75, 164);
			this->txtModifCiudad2->Name = L"txtModifCiudad2";
			this->txtModifCiudad2->Size = System::Drawing::Size(210, 35);
			this->txtModifCiudad2->TabIndex = 5;
			// 
			// lblModifCiudad2
			// 
			this->lblModifCiudad2->AutoSize = true;
			this->lblModifCiudad2->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad2->Location = System::Drawing::Point(70, 131);
			this->lblModifCiudad2->Name = L"lblModifCiudad2";
			this->lblModifCiudad2->Size = System::Drawing::Size(150, 30);
			this->lblModifCiudad2->TabIndex = 4;
			this->lblModifCiudad2->Text = L"Código Ciudad";
			// 
			// txtModifCiudad1
			// 
			this->txtModifCiudad1->Location = System::Drawing::Point(75, 72);
			this->txtModifCiudad1->Name = L"txtModifCiudad1";
			this->txtModifCiudad1->Size = System::Drawing::Size(210, 35);
			this->txtModifCiudad1->TabIndex = 3;
			// 
			// lblModifCiudad1
			// 
			this->lblModifCiudad1->AutoSize = true;
			this->lblModifCiudad1->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad1->Location = System::Drawing::Point(70, 39);
			this->lblModifCiudad1->Name = L"lblModifCiudad1";
			this->lblModifCiudad1->Size = System::Drawing::Size(121, 30);
			this->lblModifCiudad1->TabIndex = 2;
			this->lblModifCiudad1->Text = L"Código País";
			// 
			// btabModifClt
			// 
			this->btabModifClt->BackColor = System::Drawing::Color::Teal;
			this->btabModifClt->Controls->Add(this->txtModifCliente6);
			this->btabModifClt->Controls->Add(this->lblModifCliente6);
			this->btabModifClt->Controls->Add(this->txtModifCliente5);
			this->btabModifClt->Controls->Add(this->lblModifCliente5);
			this->btabModifClt->Controls->Add(this->txtModifCliente4);
			this->btabModifClt->Controls->Add(this->lblModifCliente4);
			this->btabModifClt->Controls->Add(this->txtModifCliente3);
			this->btabModifClt->Controls->Add(this->lblModifCliente3);
			this->btabModifClt->Controls->Add(this->bModifCliente);
			this->btabModifClt->Controls->Add(this->txtModifCliente2);
			this->btabModifClt->Controls->Add(this->lblModifCliente2);
			this->btabModifClt->Controls->Add(this->txtModifCliente1);
			this->btabModifClt->Controls->Add(this->lblModifCliente1);
			this->btabModifClt->Location = System::Drawing::Point(4, 39);
			this->btabModifClt->Name = L"btabModifClt";
			this->btabModifClt->Size = System::Drawing::Size(917, 457);
			this->btabModifClt->TabIndex = 2;
			this->btabModifClt->Text = L"Cliente";
			// 
			// txtModifCliente6
			// 
			this->txtModifCliente6->Location = System::Drawing::Point(371, 263);
			this->txtModifCliente6->Name = L"txtModifCliente6";
			this->txtModifCliente6->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente6->TabIndex = 55;
			// 
			// lblModifCliente6
			// 
			this->lblModifCliente6->AutoSize = true;
			this->lblModifCliente6->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente6->Location = System::Drawing::Point(366, 230);
			this->lblModifCliente6->Name = L"lblModifCliente6";
			this->lblModifCliente6->Size = System::Drawing::Size(92, 30);
			this->lblModifCliente6->TabIndex = 54;
			this->lblModifCliente6->Text = L"Teléfono";
			// 
			// txtModifCliente5
			// 
			this->txtModifCliente5->Location = System::Drawing::Point(371, 170);
			this->txtModifCliente5->Name = L"txtModifCliente5";
			this->txtModifCliente5->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente5->TabIndex = 53;
			// 
			// lblModifCliente5
			// 
			this->lblModifCliente5->AutoSize = true;
			this->lblModifCliente5->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente5->Location = System::Drawing::Point(366, 137);
			this->lblModifCliente5->Name = L"lblModifCliente5";
			this->lblModifCliente5->Size = System::Drawing::Size(150, 30);
			this->lblModifCliente5->TabIndex = 52;
			this->lblModifCliente5->Text = L"Código Ciudad";
			// 
			// txtModifCliente4
			// 
			this->txtModifCliente4->Location = System::Drawing::Point(371, 78);
			this->txtModifCliente4->Name = L"txtModifCliente4";
			this->txtModifCliente4->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente4->TabIndex = 51;
			// 
			// lblModifCliente4
			// 
			this->lblModifCliente4->AutoSize = true;
			this->lblModifCliente4->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente4->Location = System::Drawing::Point(366, 45);
			this->lblModifCliente4->Name = L"lblModifCliente4";
			this->lblModifCliente4->Size = System::Drawing::Size(121, 30);
			this->lblModifCliente4->TabIndex = 50;
			this->lblModifCliente4->Text = L"Código País";
			// 
			// txtModifCliente3
			// 
			this->txtModifCliente3->Location = System::Drawing::Point(75, 263);
			this->txtModifCliente3->Name = L"txtModifCliente3";
			this->txtModifCliente3->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente3->TabIndex = 49;
			// 
			// lblModifCliente3
			// 
			this->lblModifCliente3->AutoSize = true;
			this->lblModifCliente3->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente3->Location = System::Drawing::Point(70, 230);
			this->lblModifCliente3->Name = L"lblModifCliente3";
			this->lblModifCliente3->Size = System::Drawing::Size(100, 30);
			this->lblModifCliente3->TabIndex = 48;
			this->lblModifCliente3->Text = L"Dirección";
			// 
			// bModifCliente
			// 
			this->bModifCliente->BackColor = System::Drawing::Color::Transparent;
			this->bModifCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifCliente->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifCliente->ForeColor = System::Drawing::Color::White;
			this->bModifCliente->Location = System::Drawing::Point(75, 366);
			this->bModifCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifCliente->Name = L"bModifCliente";
			this->bModifCliente->Size = System::Drawing::Size(210, 45);
			this->bModifCliente->TabIndex = 47;
			this->bModifCliente->Text = L"Modificar";
			this->bModifCliente->UseVisualStyleBackColor = false;
			// 
			// txtModifCliente2
			// 
			this->txtModifCliente2->Location = System::Drawing::Point(75, 170);
			this->txtModifCliente2->Name = L"txtModifCliente2";
			this->txtModifCliente2->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente2->TabIndex = 46;
			// 
			// lblModifCliente2
			// 
			this->lblModifCliente2->AutoSize = true;
			this->lblModifCliente2->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente2->Location = System::Drawing::Point(70, 137);
			this->lblModifCliente2->Name = L"lblModifCliente2";
			this->lblModifCliente2->Size = System::Drawing::Size(159, 30);
			this->lblModifCliente2->TabIndex = 45;
			this->lblModifCliente2->Text = L"Nombre Cliente";
			// 
			// txtModifCliente1
			// 
			this->txtModifCliente1->Location = System::Drawing::Point(75, 78);
			this->txtModifCliente1->Name = L"txtModifCliente1";
			this->txtModifCliente1->Size = System::Drawing::Size(210, 35);
			this->txtModifCliente1->TabIndex = 44;
			// 
			// lblModifCliente1
			// 
			this->lblModifCliente1->AutoSize = true;
			this->lblModifCliente1->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente1->Location = System::Drawing::Point(70, 45);
			this->lblModifCliente1->Name = L"lblModifCliente1";
			this->lblModifCliente1->Size = System::Drawing::Size(159, 30);
			this->lblModifCliente1->TabIndex = 43;
			this->lblModifCliente1->Text = L"Número Cliente";
			// 
			// btabModifMasc
			// 
			this->btabModifMasc->BackColor = System::Drawing::Color::Teal;
			this->btabModifMasc->Controls->Add(this->txtModifMascota4);
			this->btabModifMasc->Controls->Add(this->lblModifMascota4);
			this->btabModifMasc->Controls->Add(this->txtModifMascota3);
			this->btabModifMasc->Controls->Add(this->lblModifMascota3);
			this->btabModifMasc->Controls->Add(this->bModifMascota);
			this->btabModifMasc->Controls->Add(this->txtModifMascota2);
			this->btabModifMasc->Controls->Add(this->lblModifMascota2);
			this->btabModifMasc->Controls->Add(this->txtModifMascota1);
			this->btabModifMasc->Controls->Add(this->lblModifMascota1);
			this->btabModifMasc->Location = System::Drawing::Point(4, 39);
			this->btabModifMasc->Name = L"btabModifMasc";
			this->btabModifMasc->Size = System::Drawing::Size(917, 457);
			this->btabModifMasc->TabIndex = 3;
			this->btabModifMasc->Text = L"Mascota";
			// 
			// txtModifMascota4
			// 
			this->txtModifMascota4->Location = System::Drawing::Point(379, 176);
			this->txtModifMascota4->Name = L"txtModifMascota4";
			this->txtModifMascota4->Size = System::Drawing::Size(210, 35);
			this->txtModifMascota4->TabIndex = 64;
			// 
			// lblModifMascota4
			// 
			this->lblModifMascota4->AutoSize = true;
			this->lblModifMascota4->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota4->Location = System::Drawing::Point(374, 143);
			this->lblModifMascota4->Name = L"lblModifMascota4";
			this->lblModifMascota4->Size = System::Drawing::Size(95, 30);
			this->lblModifMascota4->TabIndex = 63;
			this->lblModifMascota4->Text = L"Castrado";
			// 
			// txtModifMascota3
			// 
			this->txtModifMascota3->Location = System::Drawing::Point(379, 84);
			this->txtModifMascota3->Name = L"txtModifMascota3";
			this->txtModifMascota3->Size = System::Drawing::Size(210, 35);
			this->txtModifMascota3->TabIndex = 62;
			// 
			// lblModifMascota3
			// 
			this->lblModifMascota3->AutoSize = true;
			this->lblModifMascota3->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota3->Location = System::Drawing::Point(374, 51);
			this->lblModifMascota3->Name = L"lblModifMascota3";
			this->lblModifMascota3->Size = System::Drawing::Size(174, 30);
			this->lblModifMascota3->TabIndex = 61;
			this->lblModifMascota3->Text = L"Nombre Mascota";
			// 
			// bModifMascota
			// 
			this->bModifMascota->BackColor = System::Drawing::Color::Transparent;
			this->bModifMascota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifMascota->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifMascota->ForeColor = System::Drawing::Color::White;
			this->bModifMascota->Location = System::Drawing::Point(75, 366);
			this->bModifMascota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifMascota->Name = L"bModifMascota";
			this->bModifMascota->Size = System::Drawing::Size(210, 45);
			this->bModifMascota->TabIndex = 60;
			this->bModifMascota->Text = L"Modificar";
			this->bModifMascota->UseVisualStyleBackColor = false;
			// 
			// txtModifMascota2
			// 
			this->txtModifMascota2->Location = System::Drawing::Point(75, 176);
			this->txtModifMascota2->Name = L"txtModifMascota2";
			this->txtModifMascota2->Size = System::Drawing::Size(210, 35);
			this->txtModifMascota2->TabIndex = 59;
			// 
			// lblModifMascota2
			// 
			this->lblModifMascota2->AutoSize = true;
			this->lblModifMascota2->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota2->Location = System::Drawing::Point(70, 143);
			this->lblModifMascota2->Name = L"lblModifMascota2";
			this->lblModifMascota2->Size = System::Drawing::Size(105, 30);
			this->lblModifMascota2->TabIndex = 58;
			this->lblModifMascota2->Text = L"ID Animal";
			// 
			// txtModifMascota1
			// 
			this->txtModifMascota1->Location = System::Drawing::Point(75, 84);
			this->txtModifMascota1->Name = L"txtModifMascota1";
			this->txtModifMascota1->Size = System::Drawing::Size(210, 35);
			this->txtModifMascota1->TabIndex = 57;
			// 
			// lblModifMascota1
			// 
			this->lblModifMascota1->AutoSize = true;
			this->lblModifMascota1->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota1->Location = System::Drawing::Point(70, 51);
			this->lblModifMascota1->Name = L"lblModifMascota1";
			this->lblModifMascota1->Size = System::Drawing::Size(159, 30);
			this->lblModifMascota1->TabIndex = 56;
			this->lblModifMascota1->Text = L"Número Cliente";
			// 
			// btabModifVisita
			// 
			this->btabModifVisita->BackColor = System::Drawing::Color::Teal;
			this->btabModifVisita->Controls->Add(this->txtModifVisita3);
			this->btabModifVisita->Controls->Add(this->lblModifVisita3);
			this->btabModifVisita->Controls->Add(this->bModifVisita);
			this->btabModifVisita->Controls->Add(this->txtModifVisita2);
			this->btabModifVisita->Controls->Add(this->lblModifVisita2);
			this->btabModifVisita->Controls->Add(this->txtModifVisita1);
			this->btabModifVisita->Controls->Add(this->lblModifVisita1);
			this->btabModifVisita->Location = System::Drawing::Point(4, 39);
			this->btabModifVisita->Name = L"btabModifVisita";
			this->btabModifVisita->Size = System::Drawing::Size(917, 457);
			this->btabModifVisita->TabIndex = 4;
			this->btabModifVisita->Text = L"Visita";
			// 
			// txtModifVisita3
			// 
			this->txtModifVisita3->Location = System::Drawing::Point(75, 275);
			this->txtModifVisita3->Name = L"txtModifVisita3";
			this->txtModifVisita3->Size = System::Drawing::Size(210, 35);
			this->txtModifVisita3->TabIndex = 67;
			// 
			// lblModifVisita3
			// 
			this->lblModifVisita3->AutoSize = true;
			this->lblModifVisita3->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita3->Location = System::Drawing::Point(70, 242);
			this->lblModifVisita3->Name = L"lblModifVisita3";
			this->lblModifVisita3->Size = System::Drawing::Size(152, 30);
			this->lblModifVisita3->TabIndex = 66;
			this->lblModifVisita3->Text = L"Forma de Pago";
			// 
			// bModifVisita
			// 
			this->bModifVisita->BackColor = System::Drawing::Color::Transparent;
			this->bModifVisita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifVisita->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifVisita->ForeColor = System::Drawing::Color::White;
			this->bModifVisita->Location = System::Drawing::Point(75, 366);
			this->bModifVisita->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifVisita->Name = L"bModifVisita";
			this->bModifVisita->Size = System::Drawing::Size(210, 45);
			this->bModifVisita->TabIndex = 65;
			this->bModifVisita->Text = L"Modificar";
			this->bModifVisita->UseVisualStyleBackColor = false;
			// 
			// txtModifVisita2
			// 
			this->txtModifVisita2->Location = System::Drawing::Point(75, 179);
			this->txtModifVisita2->Name = L"txtModifVisita2";
			this->txtModifVisita2->Size = System::Drawing::Size(210, 35);
			this->txtModifVisita2->TabIndex = 64;
			// 
			// lblModifVisita2
			// 
			this->lblModifVisita2->AutoSize = true;
			this->lblModifVisita2->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita2->Location = System::Drawing::Point(70, 146);
			this->lblModifVisita2->Name = L"lblModifVisita2";
			this->lblModifVisita2->Size = System::Drawing::Size(105, 30);
			this->lblModifVisita2->TabIndex = 63;
			this->lblModifVisita2->Text = L"ID Animal";
			// 
			// txtModifVisita1
			// 
			this->txtModifVisita1->Location = System::Drawing::Point(75, 87);
			this->txtModifVisita1->Name = L"txtModifVisita1";
			this->txtModifVisita1->Size = System::Drawing::Size(210, 35);
			this->txtModifVisita1->TabIndex = 62;
			// 
			// lblModifVisita1
			// 
			this->lblModifVisita1->AutoSize = true;
			this->lblModifVisita1->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita1->Location = System::Drawing::Point(70, 54);
			this->lblModifVisita1->Name = L"lblModifVisita1";
			this->lblModifVisita1->Size = System::Drawing::Size(135, 30);
			this->lblModifVisita1->TabIndex = 61;
			this->lblModifVisita1->Text = L"Código Visita";
			// 
			// btabModifTrat
			// 
			this->btabModifTrat->BackColor = System::Drawing::Color::Teal;
			this->btabModifTrat->Controls->Add(this->bModifTratamiento);
			this->btabModifTrat->Controls->Add(this->txtModifTratamiento2);
			this->btabModifTrat->Controls->Add(this->lblModifTratamiento2);
			this->btabModifTrat->Controls->Add(this->txtModifTratamiento1);
			this->btabModifTrat->Controls->Add(this->lblModifTratamiento1);
			this->btabModifTrat->Location = System::Drawing::Point(4, 39);
			this->btabModifTrat->Name = L"btabModifTrat";
			this->btabModifTrat->Size = System::Drawing::Size(917, 457);
			this->btabModifTrat->TabIndex = 5;
			this->btabModifTrat->Text = L"Tratamiento";
			// 
			// bModifTratamiento
			// 
			this->bModifTratamiento->BackColor = System::Drawing::Color::Transparent;
			this->bModifTratamiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifTratamiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifTratamiento->ForeColor = System::Drawing::Color::White;
			this->bModifTratamiento->Location = System::Drawing::Point(75, 366);
			this->bModifTratamiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifTratamiento->Name = L"bModifTratamiento";
			this->bModifTratamiento->Size = System::Drawing::Size(210, 45);
			this->bModifTratamiento->TabIndex = 72;
			this->bModifTratamiento->Text = L"Modificar";
			this->bModifTratamiento->UseVisualStyleBackColor = false;
			// 
			// txtModifTratamiento2
			// 
			this->txtModifTratamiento2->Location = System::Drawing::Point(75, 191);
			this->txtModifTratamiento2->Name = L"txtModifTratamiento2";
			this->txtModifTratamiento2->Size = System::Drawing::Size(210, 35);
			this->txtModifTratamiento2->TabIndex = 71;
			// 
			// lblModifTratamiento2
			// 
			this->lblModifTratamiento2->AutoSize = true;
			this->lblModifTratamiento2->BackColor = System::Drawing::Color::Teal;
			this->lblModifTratamiento2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifTratamiento2->Location = System::Drawing::Point(70, 158);
			this->lblModifTratamiento2->Name = L"lblModifTratamiento2";
			this->lblModifTratamiento2->Size = System::Drawing::Size(70, 30);
			this->lblModifTratamiento2->TabIndex = 70;
			this->lblModifTratamiento2->Text = L"Precio";
			// 
			// txtModifTratamiento1
			// 
			this->txtModifTratamiento1->Location = System::Drawing::Point(75, 99);
			this->txtModifTratamiento1->Name = L"txtModifTratamiento1";
			this->txtModifTratamiento1->Size = System::Drawing::Size(210, 35);
			this->txtModifTratamiento1->TabIndex = 69;
			// 
			// lblModifTratamiento1
			// 
			this->lblModifTratamiento1->AutoSize = true;
			this->lblModifTratamiento1->BackColor = System::Drawing::Color::Teal;
			this->lblModifTratamiento1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifTratamiento1->Location = System::Drawing::Point(70, 66);
			this->lblModifTratamiento1->Name = L"lblModifTratamiento1";
			this->lblModifTratamiento1->Size = System::Drawing::Size(195, 30);
			this->lblModifTratamiento1->TabIndex = 68;
			this->lblModifTratamiento1->Text = L"Código Tratamiento";
			// 
			// btabModifMed
			// 
			this->btabModifMed->BackColor = System::Drawing::Color::Teal;
			this->btabModifMed->Controls->Add(this->txtModifMedicacion5);
			this->btabModifMed->Controls->Add(this->lblModifMedicacion5);
			this->btabModifMed->Controls->Add(this->txtModifMedicacion4);
			this->btabModifMed->Controls->Add(this->lblModifMedicacion4);
			this->btabModifMed->Controls->Add(this->txtModifMedicacion3);
			this->btabModifMed->Controls->Add(this->lblModifMedicacion3);
			this->btabModifMed->Controls->Add(this->bModifMedicacion);
			this->btabModifMed->Controls->Add(this->txtModifMedicacion2);
			this->btabModifMed->Controls->Add(this->lblModifMedicacion2);
			this->btabModifMed->Controls->Add(this->txtModifMedicacion1);
			this->btabModifMed->Controls->Add(this->lblModifMedicacion1);
			this->btabModifMed->Location = System::Drawing::Point(4, 39);
			this->btabModifMed->Name = L"btabModifMed";
			this->btabModifMed->Size = System::Drawing::Size(917, 457);
			this->btabModifMed->TabIndex = 6;
			this->btabModifMed->Text = L"Medicación";
			// 
			// txtModifMedicacion5
			// 
			this->txtModifMedicacion5->Location = System::Drawing::Point(392, 268);
			this->txtModifMedicacion5->Name = L"txtModifMedicacion5";
			this->txtModifMedicacion5->Size = System::Drawing::Size(210, 35);
			this->txtModifMedicacion5->TabIndex = 66;
			// 
			// lblModifMedicacion5
			// 
			this->lblModifMedicacion5->AutoSize = true;
			this->lblModifMedicacion5->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion5->Location = System::Drawing::Point(387, 235);
			this->lblModifMedicacion5->Name = L"lblModifMedicacion5";
			this->lblModifMedicacion5->Size = System::Drawing::Size(116, 30);
			this->lblModifMedicacion5->TabIndex = 65;
			this->lblModifMedicacion5->Text = L"Costo Total";
			// 
			// txtModifMedicacion4
			// 
			this->txtModifMedicacion4->Location = System::Drawing::Point(392, 176);
			this->txtModifMedicacion4->Name = L"txtModifMedicacion4";
			this->txtModifMedicacion4->Size = System::Drawing::Size(210, 35);
			this->txtModifMedicacion4->TabIndex = 64;
			// 
			// lblModifMedicacion4
			// 
			this->lblModifMedicacion4->AutoSize = true;
			this->lblModifMedicacion4->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion4->Location = System::Drawing::Point(387, 143);
			this->lblModifMedicacion4->Name = L"lblModifMedicacion4";
			this->lblModifMedicacion4->Size = System::Drawing::Size(70, 30);
			this->lblModifMedicacion4->TabIndex = 63;
			this->lblModifMedicacion4->Text = L"Precio";
			// 
			// txtModifMedicacion3
			// 
			this->txtModifMedicacion3->Location = System::Drawing::Point(392, 84);
			this->txtModifMedicacion3->Name = L"txtModifMedicacion3";
			this->txtModifMedicacion3->Size = System::Drawing::Size(210, 35);
			this->txtModifMedicacion3->TabIndex = 62;
			// 
			// lblModifMedicacion3
			// 
			this->lblModifMedicacion3->AutoSize = true;
			this->lblModifMedicacion3->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion3->Location = System::Drawing::Point(387, 51);
			this->lblModifMedicacion3->Name = L"lblModifMedicacion3";
			this->lblModifMedicacion3->Size = System::Drawing::Size(96, 30);
			this->lblModifMedicacion3->TabIndex = 61;
			this->lblModifMedicacion3->Text = L"Cantidad";
			// 
			// bModifMedicacion
			// 
			this->bModifMedicacion->BackColor = System::Drawing::Color::Transparent;
			this->bModifMedicacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bModifMedicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifMedicacion->ForeColor = System::Drawing::Color::White;
			this->bModifMedicacion->Location = System::Drawing::Point(75, 366);
			this->bModifMedicacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bModifMedicacion->Name = L"bModifMedicacion";
			this->bModifMedicacion->Size = System::Drawing::Size(210, 45);
			this->bModifMedicacion->TabIndex = 60;
			this->bModifMedicacion->Text = L"Modificar";
			this->bModifMedicacion->UseVisualStyleBackColor = false;
			// 
			// txtModifMedicacion2
			// 
			this->txtModifMedicacion2->Location = System::Drawing::Point(75, 176);
			this->txtModifMedicacion2->Name = L"txtModifMedicacion2";
			this->txtModifMedicacion2->Size = System::Drawing::Size(210, 35);
			this->txtModifMedicacion2->TabIndex = 59;
			// 
			// lblModifMedicacion2
			// 
			this->lblModifMedicacion2->AutoSize = true;
			this->lblModifMedicacion2->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion2->Location = System::Drawing::Point(70, 143);
			this->lblModifMedicacion2->Name = L"lblModifMedicacion2";
			this->lblModifMedicacion2->Size = System::Drawing::Size(105, 30);
			this->lblModifMedicacion2->TabIndex = 58;
			this->lblModifMedicacion2->Text = L"ID Animal";
			// 
			// txtModifMedicacion1
			// 
			this->txtModifMedicacion1->Location = System::Drawing::Point(75, 84);
			this->txtModifMedicacion1->Name = L"txtModifMedicacion1";
			this->txtModifMedicacion1->Size = System::Drawing::Size(210, 35);
			this->txtModifMedicacion1->TabIndex = 57;
			// 
			// lblModifMedicacion1
			// 
			this->lblModifMedicacion1->AutoSize = true;
			this->lblModifMedicacion1->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion1->Location = System::Drawing::Point(70, 51);
			this->lblModifMedicacion1->Name = L"lblModifMedicacion1";
			this->lblModifMedicacion1->Size = System::Drawing::Size(192, 30);
			this->lblModifMedicacion1->TabIndex = 56;
			this->lblModifMedicacion1->Text = L"Código Medicación";
			// 
			// btabCons
			// 
			this->btabCons->Controls->Add(this->tabConsulta);
			this->btabCons->Location = System::Drawing::Point(4, 42);
			this->btabCons->Name = L"btabCons";
			this->btabCons->Size = System::Drawing::Size(921, 499);
			this->btabCons->TabIndex = 2;
			this->btabCons->Text = L"Consulta";
			this->btabCons->UseVisualStyleBackColor = true;
			// 
			// tabConsulta
			// 
			this->tabConsulta->Controls->Add(this->btabConsPais);
			this->tabConsulta->Controls->Add(this->btabConsCdd);
			this->tabConsulta->Controls->Add(this->btabConsClt);
			this->tabConsulta->Controls->Add(this->btabConsMasc);
			this->tabConsulta->Controls->Add(this->btabConsVisita);
			this->tabConsulta->Controls->Add(this->btabConsTrat);
			this->tabConsulta->Controls->Add(this->btabConsMed);
			this->tabConsulta->Location = System::Drawing::Point(-2, -1);
			this->tabConsulta->Name = L"tabConsulta";
			this->tabConsulta->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabConsulta->SelectedIndex = 0;
			this->tabConsulta->Size = System::Drawing::Size(925, 500);
			this->tabConsulta->TabIndex = 1;
			// 
			// btabConsPais
			// 
			this->btabConsPais->Location = System::Drawing::Point(4, 39);
			this->btabConsPais->Name = L"btabConsPais";
			this->btabConsPais->Padding = System::Windows::Forms::Padding(3);
			this->btabConsPais->Size = System::Drawing::Size(917, 457);
			this->btabConsPais->TabIndex = 0;
			this->btabConsPais->Text = L"País";
			this->btabConsPais->UseVisualStyleBackColor = true;
			// 
			// btabConsCdd
			// 
			this->btabConsCdd->Location = System::Drawing::Point(4, 39);
			this->btabConsCdd->Name = L"btabConsCdd";
			this->btabConsCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabConsCdd->Size = System::Drawing::Size(917, 457);
			this->btabConsCdd->TabIndex = 1;
			this->btabConsCdd->Text = L"Ciudad";
			this->btabConsCdd->UseVisualStyleBackColor = true;
			// 
			// btabConsClt
			// 
			this->btabConsClt->Location = System::Drawing::Point(4, 39);
			this->btabConsClt->Name = L"btabConsClt";
			this->btabConsClt->Size = System::Drawing::Size(917, 457);
			this->btabConsClt->TabIndex = 2;
			this->btabConsClt->Text = L"Cliente";
			this->btabConsClt->UseVisualStyleBackColor = true;
			// 
			// btabConsMasc
			// 
			this->btabConsMasc->Location = System::Drawing::Point(4, 39);
			this->btabConsMasc->Name = L"btabConsMasc";
			this->btabConsMasc->Size = System::Drawing::Size(917, 457);
			this->btabConsMasc->TabIndex = 3;
			this->btabConsMasc->Text = L"Mascota";
			this->btabConsMasc->UseVisualStyleBackColor = true;
			// 
			// btabConsVisita
			// 
			this->btabConsVisita->Location = System::Drawing::Point(4, 39);
			this->btabConsVisita->Name = L"btabConsVisita";
			this->btabConsVisita->Size = System::Drawing::Size(917, 457);
			this->btabConsVisita->TabIndex = 4;
			this->btabConsVisita->Text = L"Visita";
			this->btabConsVisita->UseVisualStyleBackColor = true;
			// 
			// btabConsTrat
			// 
			this->btabConsTrat->Location = System::Drawing::Point(4, 39);
			this->btabConsTrat->Name = L"btabConsTrat";
			this->btabConsTrat->Size = System::Drawing::Size(917, 457);
			this->btabConsTrat->TabIndex = 5;
			this->btabConsTrat->Text = L"Tratamiento";
			this->btabConsTrat->UseVisualStyleBackColor = true;
			// 
			// btabConsMed
			// 
			this->btabConsMed->Location = System::Drawing::Point(4, 39);
			this->btabConsMed->Name = L"btabConsMed";
			this->btabConsMed->Size = System::Drawing::Size(917, 457);
			this->btabConsMed->TabIndex = 6;
			this->btabConsMed->Text = L"Medicación";
			this->btabConsMed->UseVisualStyleBackColor = true;
			// 
			// btabElim
			// 
			this->btabElim->Controls->Add(this->tabEliminacion);
			this->btabElim->Location = System::Drawing::Point(4, 42);
			this->btabElim->Name = L"btabElim";
			this->btabElim->Size = System::Drawing::Size(921, 499);
			this->btabElim->TabIndex = 3;
			this->btabElim->Text = L"Eliminación";
			this->btabElim->UseVisualStyleBackColor = true;
			// 
			// tabEliminacion
			// 
			this->tabEliminacion->Controls->Add(this->btabElimPais);
			this->tabEliminacion->Controls->Add(this->btabElimCdd);
			this->tabEliminacion->Controls->Add(this->btabElimClt);
			this->tabEliminacion->Controls->Add(this->btabElimMasc);
			this->tabEliminacion->Controls->Add(this->btabElimVisita);
			this->tabEliminacion->Controls->Add(this->btabElimTrat);
			this->tabEliminacion->Controls->Add(this->btabElimMed);
			this->tabEliminacion->Location = System::Drawing::Point(-2, -1);
			this->tabEliminacion->Name = L"tabEliminacion";
			this->tabEliminacion->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabEliminacion->SelectedIndex = 0;
			this->tabEliminacion->Size = System::Drawing::Size(925, 500);
			this->tabEliminacion->TabIndex = 1;
			// 
			// btabElimPais
			// 
			this->btabElimPais->Location = System::Drawing::Point(4, 39);
			this->btabElimPais->Name = L"btabElimPais";
			this->btabElimPais->Padding = System::Windows::Forms::Padding(3);
			this->btabElimPais->Size = System::Drawing::Size(917, 457);
			this->btabElimPais->TabIndex = 0;
			this->btabElimPais->Text = L"País";
			this->btabElimPais->UseVisualStyleBackColor = true;
			// 
			// btabElimCdd
			// 
			this->btabElimCdd->Location = System::Drawing::Point(4, 39);
			this->btabElimCdd->Name = L"btabElimCdd";
			this->btabElimCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabElimCdd->Size = System::Drawing::Size(917, 457);
			this->btabElimCdd->TabIndex = 1;
			this->btabElimCdd->Text = L"Ciudad";
			this->btabElimCdd->UseVisualStyleBackColor = true;
			// 
			// btabElimClt
			// 
			this->btabElimClt->Location = System::Drawing::Point(4, 39);
			this->btabElimClt->Name = L"btabElimClt";
			this->btabElimClt->Size = System::Drawing::Size(917, 457);
			this->btabElimClt->TabIndex = 2;
			this->btabElimClt->Text = L"Cliente";
			this->btabElimClt->UseVisualStyleBackColor = true;
			// 
			// btabElimMasc
			// 
			this->btabElimMasc->Location = System::Drawing::Point(4, 39);
			this->btabElimMasc->Name = L"btabElimMasc";
			this->btabElimMasc->Size = System::Drawing::Size(917, 457);
			this->btabElimMasc->TabIndex = 3;
			this->btabElimMasc->Text = L"Mascota";
			this->btabElimMasc->UseVisualStyleBackColor = true;
			// 
			// btabElimVisita
			// 
			this->btabElimVisita->Location = System::Drawing::Point(4, 39);
			this->btabElimVisita->Name = L"btabElimVisita";
			this->btabElimVisita->Size = System::Drawing::Size(917, 457);
			this->btabElimVisita->TabIndex = 4;
			this->btabElimVisita->Text = L"Visita";
			this->btabElimVisita->UseVisualStyleBackColor = true;
			// 
			// btabElimTrat
			// 
			this->btabElimTrat->Location = System::Drawing::Point(4, 39);
			this->btabElimTrat->Name = L"btabElimTrat";
			this->btabElimTrat->Size = System::Drawing::Size(917, 457);
			this->btabElimTrat->TabIndex = 5;
			this->btabElimTrat->Text = L"Tratamiento";
			this->btabElimTrat->UseVisualStyleBackColor = true;
			// 
			// btabElimMed
			// 
			this->btabElimMed->Location = System::Drawing::Point(4, 39);
			this->btabElimMed->Name = L"btabElimMed";
			this->btabElimMed->Size = System::Drawing::Size(917, 457);
			this->btabElimMed->TabIndex = 6;
			this->btabElimMed->Text = L"Medicación";
			this->btabElimMed->UseVisualStyleBackColor = true;
			// 
			// bSalir
			// 
			this->bSalir->BackColor = System::Drawing::Color::Transparent;
			this->bSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalir->ForeColor = System::Drawing::Color::White;
			this->bSalir->Location = System::Drawing::Point(970, 547);
			this->bSalir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bSalir->Name = L"bSalir";
			this->bSalir->Size = System::Drawing::Size(84, 45);
			this->bSalir->TabIndex = 39;
			this->bSalir->Text = L"Salir";
			this->bSalir->UseVisualStyleBackColor = false;
			this->bSalir->Click += gcnew System::EventHandler(this, &PopUpMenu::bSalir_Click);
			// 
			// PopUpMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1084, 611);
			this->Controls->Add(this->bSalir);
			this->Controls->Add(this->tabPrincipal);
			this->Controls->Add(this->bExit);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"PopUpMenu";
			this->Text = L"PopUpMenu";
			this->Load += gcnew System::EventHandler(this, &PopUpMenu::PopUpMenu_Load);
			this->btabAD->ResumeLayout(false);
			this->btabAD->PerformLayout();
			this->btabSucs->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->btabReps->ResumeLayout(false);
			this->tabReportes->ResumeLayout(false);
			this->btabFact->ResumeLayout(false);
			this->tabFacturacion->ResumeLayout(false);
			this->tabPrincipal->ResumeLayout(false);
			this->btabMant->ResumeLayout(false);
			this->tabMantenimiento->ResumeLayout(false);
			this->btabInser->ResumeLayout(false);
			this->tabInsercion->ResumeLayout(false);
			this->btabModif->ResumeLayout(false);
			this->tabModificacion->ResumeLayout(false);
			this->btabModifPais->ResumeLayout(false);
			this->btabModifPais->PerformLayout();
			this->btabModifCdd->ResumeLayout(false);
			this->btabModifCdd->PerformLayout();
			this->btabModifClt->ResumeLayout(false);
			this->btabModifClt->PerformLayout();
			this->btabModifMasc->ResumeLayout(false);
			this->btabModifMasc->PerformLayout();
			this->btabModifVisita->ResumeLayout(false);
			this->btabModifVisita->PerformLayout();
			this->btabModifTrat->ResumeLayout(false);
			this->btabModifTrat->PerformLayout();
			this->btabModifMed->ResumeLayout(false);
			this->btabModifMed->PerformLayout();
			this->btabCons->ResumeLayout(false);
			this->tabConsulta->ResumeLayout(false);
			this->btabElim->ResumeLayout(false);
			this->tabEliminacion->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bContactos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PopUpMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Close();
	}
	private: System::Void bSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		menu->Show();
	}

	/*	******************	*/

	private: System::Void tabMant_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabFact_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabReps_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabSucs_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabAD_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabCont_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	/*	******************	*/

	private: System::Void bModifPais_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ codPais = this->txtModifPais1->Text;
		String^ nombre = this->txtModifPais2->Text;
		
		//int codigo = stoi(marshal_as<string, String^>(codPais));

		//pNodoBinarioPaises paisBuscado = buscaPais(this->arbolPaises->raiz, codigo);
		
		/*
		if (paisBuscado == NULL) {
			this->errorModifPais->Hide();
			this->arbolPaises->InsertaNodoPaises(codigo, marshal_as<string, String^>(nombre));
		}
		else {
			this->errorModifPais->Show();
		}

	}
	private: System::Void bModifCiudad_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ codPais = this->txtModifCiudad1->Text;
		String^ codCiudad = this->txtModifCiudad2->Text;
		String^ nombre = this->txtModifCiudad3->Text;

		int codigo = stoi(marshal_as<string, String^>(codPais));

		pNodoBinarioPaises paisBuscado = buscaPais(this->arbolPaises->raiz, codigo);

		if (paisBuscado == NULL) {
			this->errorModifPais->Hide();
			this->arbolPaises->InsertaNodoPaises(codigo, marshal_as<string, String^>(nombre));
		}
		else {
			this->errorModifPais->Show();
		}
		*/
		

	}
};
}
