#pragma once

#include "msclr\marshal_cppstd.h"

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
	using namespace msclr::interop;

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
	private: System::Windows::Forms::Button^ bEliminarPais;
	public:
	private: System::Windows::Forms::TextBox^ txtElimPais1;
	private: System::Windows::Forms::Label^ lblElimPais1;
	private: System::Windows::Forms::Button^ bEliminarCiudad;
	private: System::Windows::Forms::TextBox^ txtElimCiudad2;
	private: System::Windows::Forms::Label^ lblElimCiudad2;
	private: System::Windows::Forms::TextBox^ txtElimCiudad1;
	private: System::Windows::Forms::Label^ lblElimCiudad1;
	private: System::Windows::Forms::TextBox^ txtElimCliente2;
	private: System::Windows::Forms::Label^ lblElimCliente2;
	private: System::Windows::Forms::TextBox^ txtElimCliente1;
	private: System::Windows::Forms::Label^ lblElimCliente1;
	private: System::Windows::Forms::Button^ bEliminarCliente;
	private: System::Windows::Forms::TextBox^ txtElimCliente3;
	private: System::Windows::Forms::Label^ lblElimCliente3;
	private: System::Windows::Forms::Button^ bEliminarMascota;
	private: System::Windows::Forms::TextBox^ txtElimMascota1;
	private: System::Windows::Forms::Label^ lblElimMascota1;
	private: System::Windows::Forms::Button^ bEliminarVisita;
	private: System::Windows::Forms::TextBox^ txtElimVisita1;
	private: System::Windows::Forms::Label^ lblElimVisita1;
	private: System::Windows::Forms::Button^ bEliminarTratamiento;
	private: System::Windows::Forms::TextBox^ txtElimTrat1;
	private: System::Windows::Forms::Label^ lblElimTrat1;
	private: System::Windows::Forms::Button^ bEliminarMedicacion;
	private: System::Windows::Forms::TextBox^ txtElimMedicacion1;
	private: System::Windows::Forms::Label^ lblElimMedicacion1;
	private: System::Windows::Forms::Button^ bReporte1;
	private: System::Windows::Forms::TextBox^ txtInserCliente9;
	private: System::Windows::Forms::Label^ lblInserCliente10;
	private: System::Windows::Forms::TextBox^ txtInserCliente8;
	private: System::Windows::Forms::Label^ lblInserCliente9;
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
	private: System::Windows::Forms::TextBox^ txtInserPais2;
	private: System::Windows::Forms::Label^ lblInserPais2;
	private: System::Windows::Forms::Button^ bInserPais;
	private: System::Windows::Forms::TextBox^ txtInserPais1;
	private: System::Windows::Forms::Label^ lblInserPais1;
	private: System::Windows::Forms::TextBox^ txtInserCiudad3;
	private: System::Windows::Forms::Label^ lblInserCiudad3;
	private: System::Windows::Forms::Button^ bInserCiudad;
	private: System::Windows::Forms::TextBox^ txtInserCiudad2;
	private: System::Windows::Forms::Label^ lblInserCiudad2;
	private: System::Windows::Forms::TextBox^ txtInserCiudad1;
	private: System::Windows::Forms::Label^ lblInserCiudad1;
	private: System::Windows::Forms::TextBox^ txtInserCliente7;
	private: System::Windows::Forms::Label^ lblInserCliente7;
	private: System::Windows::Forms::TextBox^ txtInserCliente6;
	private: System::Windows::Forms::Label^ lblInserCliente6;
	private: System::Windows::Forms::TextBox^ txtInserCliente5;
	private: System::Windows::Forms::Label^ lblInserCliente5;
	private: System::Windows::Forms::TextBox^ txtInserCliente4;
	private: System::Windows::Forms::Label^ lblInserCliente4;
	private: System::Windows::Forms::TextBox^ txtInserCliente3;
	private: System::Windows::Forms::Label^ lblInserCliente3;
	private: System::Windows::Forms::Button^ bInserCliente;
	private: System::Windows::Forms::TextBox^ txtInserCliente2;
	private: System::Windows::Forms::Label^ lblInserCliente2;
	private: System::Windows::Forms::TextBox^ txtInserCliente1;
	private: System::Windows::Forms::Label^ lblInserCliente1;
	private: System::Windows::Forms::Label^ lblInserCliente8;
	private: System::Windows::Forms::Label^ lblInserMascota11;
	private: System::Windows::Forms::TextBox^ txtInserMascota10;
	private: System::Windows::Forms::Label^ lblInserMascota10;
	private: System::Windows::Forms::TextBox^ txtInserMascota9;
	private: System::Windows::Forms::Label^ lblInserMascota9;
	private: System::Windows::Forms::TextBox^ txtInserMascota8;
	private: System::Windows::Forms::Label^ lblInserMascota8;
	private: System::Windows::Forms::TextBox^ txtInserMascota7;
	private: System::Windows::Forms::Label^ lblInserMascota7;
	private: System::Windows::Forms::TextBox^ txtInserMascota6;
	private: System::Windows::Forms::Label^ lblInserMascota6;
	private: System::Windows::Forms::TextBox^ txtInserMascota5;
	private: System::Windows::Forms::Label^ lblInserMascota5;
	private: System::Windows::Forms::TextBox^ txtInserMascota4;
	private: System::Windows::Forms::Label^ lblInserMascota4;
	private: System::Windows::Forms::TextBox^ txtInserMascota3;
	private: System::Windows::Forms::Label^ label5lblInserMascota3;
	private: System::Windows::Forms::Button^ bInserMascota;
	private: System::Windows::Forms::TextBox^ txtInserMascota2;
	private: System::Windows::Forms::Label^ lblInserMascota2;
	private: System::Windows::Forms::TextBox^ txtInserMascota1;
	private: System::Windows::Forms::Label^ lblInserMascota1;
	private: System::Windows::Forms::Label^ lblInserVisita6;
	private: System::Windows::Forms::TextBox^ txtInserVisita5;
	private: System::Windows::Forms::Label^ lblInserVisita5;
	private: System::Windows::Forms::TextBox^ txtInserVisita4;
	private: System::Windows::Forms::Label^ lblInserVisita4;
	private: System::Windows::Forms::TextBox^ txtInserVisita3;
	private: System::Windows::Forms::Label^ lblInserVisita3;
	private: System::Windows::Forms::Button^ bInserVisita;
	private: System::Windows::Forms::TextBox^ txtInserVisita2;
	private: System::Windows::Forms::Label^ lblInserVisita2;
	private: System::Windows::Forms::TextBox^ txtInserVisita1;
	private: System::Windows::Forms::Label^ lblInserVisita1;
	private: System::Windows::Forms::TextBox^ txtInserTrat4;
	private: System::Windows::Forms::Label^ lblInserTrat4;
	private: System::Windows::Forms::TextBox^ txtInserTrat3;
	private: System::Windows::Forms::Label^ lblInserTrat3;
	private: System::Windows::Forms::Button^ binserTratamiento;
	private: System::Windows::Forms::TextBox^ txtInserTrat2;
	private: System::Windows::Forms::Label^ lblInserTrat2;
	private: System::Windows::Forms::TextBox^ txtInserTrat1;
	private: System::Windows::Forms::Label^ lblInserTrat1;
private: System::Windows::Forms::TextBox^ txtInserMedicacion6;

private: System::Windows::Forms::Label^ lblInserMedicacion6;
private: System::Windows::Forms::TextBox^ txtInserMedicacion5;


private: System::Windows::Forms::Label^ lblInserMedicacion5;
private: System::Windows::Forms::TextBox^ txtInserMedicacion4;


private: System::Windows::Forms::Label^ lblInserMedicacion4;

	private: System::Windows::Forms::Button^ bInserMedicacion;
private: System::Windows::Forms::TextBox^ txtInserMedicacion2;

private: System::Windows::Forms::Label^ lblInserMedicacion2;
private: System::Windows::Forms::TextBox^ txtInserMedicacion1;


private: System::Windows::Forms::Label^ lblInserMedicacion1;
private: System::Windows::Forms::Label^ lblInserMedicacion7;
private: System::Windows::Forms::TextBox^ txtInserMedicacion3;



private: System::Windows::Forms::Label^ lblInserMedicacion3;

	private: System::Windows::Forms::TextBox^ txtBusqPais2;
	private: System::Windows::Forms::Label^ lblBusqPais2;
	private: System::Windows::Forms::Button^ bBuscarPais;
	private: System::Windows::Forms::TextBox^ txtBusqPais1;
	private: System::Windows::Forms::Label^ lblBusqPais1;
	private: System::Windows::Forms::TextBox^ txtBusqCiudad3;
	private: System::Windows::Forms::Label^ lblBusqCiudad3;
	private: System::Windows::Forms::Button^ bBuscarCiudad;
	private: System::Windows::Forms::TextBox^ txtBusqCiudad2;
	private: System::Windows::Forms::Label^ lblBusqCiudad2;
	private: System::Windows::Forms::TextBox^ txtBusqCiudad1;
	private: System::Windows::Forms::Label^ lblBusqCiudad1;
	private: System::Windows::Forms::TextBox^ txtBusqCliente6;
	private: System::Windows::Forms::Label^ lblBusqCliente6;
	private: System::Windows::Forms::TextBox^ txtBusqCliente2;
	private: System::Windows::Forms::Label^ lblBusqCliente2;
	private: System::Windows::Forms::TextBox^ txtBusqCliente1;
	private: System::Windows::Forms::Label^ lblBusqCliente1;
	private: System::Windows::Forms::TextBox^ txtBusqCliente5;
	private: System::Windows::Forms::Label^ lblBusqCliente5;
	private: System::Windows::Forms::Button^ bBuscarCliente;
	private: System::Windows::Forms::TextBox^ txtBusqCliente4;
	private: System::Windows::Forms::Label^ lblBusqCliente4;
	private: System::Windows::Forms::TextBox^ txtBusqCliente3;
	private: System::Windows::Forms::Label^ lblBusqCliente3;
	private: System::Windows::Forms::Panel^ pBuscarMascota;
	private: System::Windows::Forms::Label^ lblBusqMascota11;
	private: System::Windows::Forms::TextBox^ txtBusqMascota10;
	private: System::Windows::Forms::Label^ lblBusqMascota10;
	private: System::Windows::Forms::TextBox^ txtBusqMascota9;
	private: System::Windows::Forms::Label^ lblBusqMascota9;
	private: System::Windows::Forms::TextBox^ txtBusqMascota8;
	private: System::Windows::Forms::Label^ lblBusqMascota8;
	private: System::Windows::Forms::TextBox^ txtBusqMascota7;
	private: System::Windows::Forms::Label^ lblBusqMascota7;
	private: System::Windows::Forms::TextBox^ txtBusqMascota6;
	private: System::Windows::Forms::Label^ lblBusqMascota6;
	private: System::Windows::Forms::TextBox^ txtBusqMascota5;
	private: System::Windows::Forms::Label^ lblBusqMascota5;
	private: System::Windows::Forms::Label^ lblBusqMascota4;
	private: System::Windows::Forms::TextBox^ txtBusqMascota3;
	private: System::Windows::Forms::Label^ lblBusqMascota3;
	private: System::Windows::Forms::Button^ bBuscarMascota;
	private: System::Windows::Forms::TextBox^ txtBusqMascota2;
	private: System::Windows::Forms::Label^ lblBusqMascota2;
	private: System::Windows::Forms::TextBox^ txtBusqMascota1;
	private: System::Windows::Forms::Label^ lblBusqMascota1;
	private: System::Windows::Forms::TextBox^ txtBusqMascota4;
	private: System::Windows::Forms::Panel^ pBuscarVisita;
	private: System::Windows::Forms::Label^ lblBusqVisita6;
	private: System::Windows::Forms::TextBox^ txtBusqVisita5;
	private: System::Windows::Forms::Label^ lblBusqVisita5;
	private: System::Windows::Forms::TextBox^ txtBusqVisita4;
	private: System::Windows::Forms::Label^ lblBusqVisita4;
	private: System::Windows::Forms::TextBox^ txtBusqVisita3;
	private: System::Windows::Forms::Label^ lblBusqVisita3;
	private: System::Windows::Forms::Button^ bBuscarVisita;
	private: System::Windows::Forms::TextBox^ txtBusqVisita2;
	private: System::Windows::Forms::Label^ lblBusqVisita2;
	private: System::Windows::Forms::TextBox^ txtBusqVisita1;
	private: System::Windows::Forms::Label^ lblBusqVisita1;
	private: System::Windows::Forms::Panel^ pBuscarCliente;
	private: System::Windows::Forms::Panel^ pBuscarTratamiento;
	private: System::Windows::Forms::Label^ lblBuscarTrat2;
	private: System::Windows::Forms::Label^ lblBuscarTrat5;
	private: System::Windows::Forms::TextBox^ txtBuscarTrat2;
	private: System::Windows::Forms::TextBox^ txtBuscarTrat4;
	private: System::Windows::Forms::Label^ lblBuscarTrat3;
	private: System::Windows::Forms::Label^ lblBuscarTrat4;
	private: System::Windows::Forms::TextBox^ txtBuscarTrat3;
	private: System::Windows::Forms::Button^ bBuscarTratamiento;
	private: System::Windows::Forms::TextBox^ txtBuscarTrat1;
	private: System::Windows::Forms::Label^ lblBuscarTrat1;
	private: System::Windows::Forms::Panel^ pBuscarMedicacion;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion4;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion3;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion4;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion3;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion7;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion5;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion7;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion5;
	private: System::Windows::Forms::Button^ bBuscarMedicacion;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion2;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion2;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion1;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion1;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion8;
	private: System::Windows::Forms::TextBox^ txtBuscarMedicacion6;
	private: System::Windows::Forms::Label^ lblBuscarMedicacion6;

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
			this->bReporte1 = (gcnew System::Windows::Forms::Button());
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
			this->txtInserPais2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserPais2 = (gcnew System::Windows::Forms::Label());
			this->bInserPais = (gcnew System::Windows::Forms::Button());
			this->txtInserPais1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserPais1 = (gcnew System::Windows::Forms::Label());
			this->btabInserCdd = (gcnew System::Windows::Forms::TabPage());
			this->txtInserCiudad3 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCiudad3 = (gcnew System::Windows::Forms::Label());
			this->bInserCiudad = (gcnew System::Windows::Forms::Button());
			this->txtInserCiudad2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCiudad2 = (gcnew System::Windows::Forms::Label());
			this->txtInserCiudad1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCiudad1 = (gcnew System::Windows::Forms::Label());
			this->btabInserClt = (gcnew System::Windows::Forms::TabPage());
			this->lblInserCliente8 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente7 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente7 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente6 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente6 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente5 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente5 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente4 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente4 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente3 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente3 = (gcnew System::Windows::Forms::Label());
			this->bInserCliente = (gcnew System::Windows::Forms::Button());
			this->txtInserCliente2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente2 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente1 = (gcnew System::Windows::Forms::Label());
			this->btabInserMasc = (gcnew System::Windows::Forms::TabPage());
			this->lblInserMascota11 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota10 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota10 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota9 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota9 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota8 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota8 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota7 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota7 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota6 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota6 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota5 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota5 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota4 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota4 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota3 = (gcnew System::Windows::Forms::TextBox());
			this->label5lblInserMascota3 = (gcnew System::Windows::Forms::Label());
			this->bInserMascota = (gcnew System::Windows::Forms::Button());
			this->txtInserMascota2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota2 = (gcnew System::Windows::Forms::Label());
			this->txtInserMascota1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMascota1 = (gcnew System::Windows::Forms::Label());
			this->btabInserVisita = (gcnew System::Windows::Forms::TabPage());
			this->lblInserVisita6 = (gcnew System::Windows::Forms::Label());
			this->txtInserVisita5 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserVisita5 = (gcnew System::Windows::Forms::Label());
			this->txtInserVisita4 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserVisita4 = (gcnew System::Windows::Forms::Label());
			this->txtInserVisita3 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserVisita3 = (gcnew System::Windows::Forms::Label());
			this->bInserVisita = (gcnew System::Windows::Forms::Button());
			this->txtInserVisita2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserVisita2 = (gcnew System::Windows::Forms::Label());
			this->txtInserVisita1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserVisita1 = (gcnew System::Windows::Forms::Label());
			this->btabInserTrat = (gcnew System::Windows::Forms::TabPage());
			this->txtInserTrat4 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserTrat4 = (gcnew System::Windows::Forms::Label());
			this->txtInserTrat3 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserTrat3 = (gcnew System::Windows::Forms::Label());
			this->binserTratamiento = (gcnew System::Windows::Forms::Button());
			this->txtInserTrat2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserTrat2 = (gcnew System::Windows::Forms::Label());
			this->txtInserTrat1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserTrat1 = (gcnew System::Windows::Forms::Label());
			this->btabInserMed = (gcnew System::Windows::Forms::TabPage());
			this->lblInserMedicacion7 = (gcnew System::Windows::Forms::Label());
			this->txtInserMedicacion3 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion3 = (gcnew System::Windows::Forms::Label());
			this->txtInserMedicacion6 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion6 = (gcnew System::Windows::Forms::Label());
			this->txtInserMedicacion5 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion5 = (gcnew System::Windows::Forms::Label());
			this->txtInserMedicacion4 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion4 = (gcnew System::Windows::Forms::Label());
			this->bInserMedicacion = (gcnew System::Windows::Forms::Button());
			this->txtInserMedicacion2 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion2 = (gcnew System::Windows::Forms::Label());
			this->txtInserMedicacion1 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserMedicacion1 = (gcnew System::Windows::Forms::Label());
			this->btabModif = (gcnew System::Windows::Forms::TabPage());
			this->tabModificacion = (gcnew System::Windows::Forms::TabControl());
			this->btabModifPais = (gcnew System::Windows::Forms::TabPage());
			this->txtModifPais2 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifPais2 = (gcnew System::Windows::Forms::Label());
			this->bModifPais = (gcnew System::Windows::Forms::Button());
			this->txtModifPais1 = (gcnew System::Windows::Forms::TextBox());
			this->lblModifPais1 = (gcnew System::Windows::Forms::Label());
			this->btabModifCdd = (gcnew System::Windows::Forms::TabPage());
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
			this->txtBusqPais2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqPais2 = (gcnew System::Windows::Forms::Label());
			this->bBuscarPais = (gcnew System::Windows::Forms::Button());
			this->txtBusqPais1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqPais1 = (gcnew System::Windows::Forms::Label());
			this->btabConsCdd = (gcnew System::Windows::Forms::TabPage());
			this->txtBusqCiudad3 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCiudad3 = (gcnew System::Windows::Forms::Label());
			this->bBuscarCiudad = (gcnew System::Windows::Forms::Button());
			this->txtBusqCiudad2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCiudad2 = (gcnew System::Windows::Forms::Label());
			this->txtBusqCiudad1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCiudad1 = (gcnew System::Windows::Forms::Label());
			this->btabConsClt = (gcnew System::Windows::Forms::TabPage());
			this->pBuscarCliente = (gcnew System::Windows::Forms::Panel());
			this->lblBusqCliente4 = (gcnew System::Windows::Forms::Label());
			this->txtBusqCliente6 = (gcnew System::Windows::Forms::TextBox());
			this->txtBusqCliente4 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCliente6 = (gcnew System::Windows::Forms::Label());
			this->lblBusqCliente5 = (gcnew System::Windows::Forms::Label());
			this->txtBusqCliente5 = (gcnew System::Windows::Forms::TextBox());
			this->txtBusqCliente2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCliente2 = (gcnew System::Windows::Forms::Label());
			this->txtBusqCliente1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCliente1 = (gcnew System::Windows::Forms::Label());
			this->bBuscarCliente = (gcnew System::Windows::Forms::Button());
			this->txtBusqCliente3 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqCliente3 = (gcnew System::Windows::Forms::Label());
			this->btabConsMasc = (gcnew System::Windows::Forms::TabPage());
			this->pBuscarMascota = (gcnew System::Windows::Forms::Panel());
			this->lblBusqMascota11 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota10 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota10 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota9 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota9 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota8 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota8 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota7 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota7 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota6 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota6 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota5 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota5 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota4 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota4 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota3 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota3 = (gcnew System::Windows::Forms::Label());
			this->bBuscarMascota = (gcnew System::Windows::Forms::Button());
			this->txtBusqMascota2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota2 = (gcnew System::Windows::Forms::Label());
			this->txtBusqMascota1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqMascota1 = (gcnew System::Windows::Forms::Label());
			this->btabConsVisita = (gcnew System::Windows::Forms::TabPage());
			this->pBuscarVisita = (gcnew System::Windows::Forms::Panel());
			this->lblBusqVisita3 = (gcnew System::Windows::Forms::Label());
			this->lblBusqVisita6 = (gcnew System::Windows::Forms::Label());
			this->txtBusqVisita3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBusqVisita5 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqVisita4 = (gcnew System::Windows::Forms::Label());
			this->lblBusqVisita5 = (gcnew System::Windows::Forms::Label());
			this->txtBusqVisita4 = (gcnew System::Windows::Forms::TextBox());
			this->bBuscarVisita = (gcnew System::Windows::Forms::Button());
			this->txtBusqVisita2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqVisita2 = (gcnew System::Windows::Forms::Label());
			this->txtBusqVisita1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBusqVisita1 = (gcnew System::Windows::Forms::Label());
			this->btabConsTrat = (gcnew System::Windows::Forms::TabPage());
			this->pBuscarTratamiento = (gcnew System::Windows::Forms::Panel());
			this->lblBuscarTrat2 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarTrat5 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarTrat2 = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscarTrat4 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarTrat3 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarTrat4 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarTrat3 = (gcnew System::Windows::Forms::TextBox());
			this->bBuscarTratamiento = (gcnew System::Windows::Forms::Button());
			this->txtBuscarTrat1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarTrat1 = (gcnew System::Windows::Forms::Label());
			this->btabConsMed = (gcnew System::Windows::Forms::TabPage());
			this->pBuscarMedicacion = (gcnew System::Windows::Forms::Panel());
			this->lblBuscarMedicacion8 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarMedicacion6 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarMedicacion6 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarMedicacion4 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarMedicacion3 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarMedicacion4 = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscarMedicacion3 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarMedicacion7 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarMedicacion5 = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscarMedicacion7 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarMedicacion5 = (gcnew System::Windows::Forms::Label());
			this->bBuscarMedicacion = (gcnew System::Windows::Forms::Button());
			this->txtBuscarMedicacion2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarMedicacion2 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarMedicacion1 = (gcnew System::Windows::Forms::TextBox());
			this->lblBuscarMedicacion1 = (gcnew System::Windows::Forms::Label());
			this->btabElim = (gcnew System::Windows::Forms::TabPage());
			this->tabEliminacion = (gcnew System::Windows::Forms::TabControl());
			this->btabElimPais = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarPais = (gcnew System::Windows::Forms::Button());
			this->txtElimPais1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimPais1 = (gcnew System::Windows::Forms::Label());
			this->btabElimCdd = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarCiudad = (gcnew System::Windows::Forms::Button());
			this->txtElimCiudad2 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimCiudad2 = (gcnew System::Windows::Forms::Label());
			this->txtElimCiudad1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimCiudad1 = (gcnew System::Windows::Forms::Label());
			this->btabElimClt = (gcnew System::Windows::Forms::TabPage());
			this->txtElimCliente2 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimCliente2 = (gcnew System::Windows::Forms::Label());
			this->txtElimCliente1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimCliente1 = (gcnew System::Windows::Forms::Label());
			this->bEliminarCliente = (gcnew System::Windows::Forms::Button());
			this->txtElimCliente3 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimCliente3 = (gcnew System::Windows::Forms::Label());
			this->btabElimMasc = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarMascota = (gcnew System::Windows::Forms::Button());
			this->txtElimMascota1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimMascota1 = (gcnew System::Windows::Forms::Label());
			this->btabElimVisita = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarVisita = (gcnew System::Windows::Forms::Button());
			this->txtElimVisita1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimVisita1 = (gcnew System::Windows::Forms::Label());
			this->btabElimTrat = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarTratamiento = (gcnew System::Windows::Forms::Button());
			this->txtElimTrat1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimTrat1 = (gcnew System::Windows::Forms::Label());
			this->btabElimMed = (gcnew System::Windows::Forms::TabPage());
			this->bEliminarMedicacion = (gcnew System::Windows::Forms::Button());
			this->txtElimMedicacion1 = (gcnew System::Windows::Forms::TextBox());
			this->lblElimMedicacion1 = (gcnew System::Windows::Forms::Label());
			this->bSalir = (gcnew System::Windows::Forms::Button());
			this->txtInserCliente8 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente9 = (gcnew System::Windows::Forms::Label());
			this->txtInserCliente9 = (gcnew System::Windows::Forms::TextBox());
			this->lblInserCliente10 = (gcnew System::Windows::Forms::Label());
			this->btabAD->SuspendLayout();
			this->btabSucs->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->btabReps->SuspendLayout();
			this->tabReportes->SuspendLayout();
			this->tabR1->SuspendLayout();
			this->btabFact->SuspendLayout();
			this->tabFacturacion->SuspendLayout();
			this->tabPrincipal->SuspendLayout();
			this->btabMant->SuspendLayout();
			this->tabMantenimiento->SuspendLayout();
			this->btabInser->SuspendLayout();
			this->tabInsercion->SuspendLayout();
			this->btabInserPais->SuspendLayout();
			this->btabInserCdd->SuspendLayout();
			this->btabInserClt->SuspendLayout();
			this->btabInserMasc->SuspendLayout();
			this->btabInserVisita->SuspendLayout();
			this->btabInserTrat->SuspendLayout();
			this->btabInserMed->SuspendLayout();
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
			this->btabConsPais->SuspendLayout();
			this->btabConsCdd->SuspendLayout();
			this->btabConsClt->SuspendLayout();
			this->pBuscarCliente->SuspendLayout();
			this->btabConsMasc->SuspendLayout();
			this->pBuscarMascota->SuspendLayout();
			this->btabConsVisita->SuspendLayout();
			this->pBuscarVisita->SuspendLayout();
			this->btabConsTrat->SuspendLayout();
			this->pBuscarTratamiento->SuspendLayout();
			this->btabConsMed->SuspendLayout();
			this->pBuscarMedicacion->SuspendLayout();
			this->btabElim->SuspendLayout();
			this->tabEliminacion->SuspendLayout();
			this->btabElimPais->SuspendLayout();
			this->btabElimCdd->SuspendLayout();
			this->btabElimClt->SuspendLayout();
			this->btabElimMasc->SuspendLayout();
			this->btabElimVisita->SuspendLayout();
			this->btabElimTrat->SuspendLayout();
			this->btabElimMed->SuspendLayout();
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
			this->btabCont->Location = System::Drawing::Point(4, 48);
			this->btabCont->Name = L"btabCont";
			this->btabCont->Size = System::Drawing::Size(925, 535);
			this->btabCont->TabIndex = 5;
			this->btabCont->Text = L"Contactos";
			this->btabCont->Click += gcnew System::EventHandler(this, &PopUpMenu::tabCont_Click);
			// 
			// btabAD
			// 
			this->btabAD->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabAD->Controls->Add(this->AcercaDe);
			this->btabAD->ForeColor = System::Drawing::Color::White;
			this->btabAD->Location = System::Drawing::Point(4, 48);
			this->btabAD->Name = L"btabAD";
			this->btabAD->Size = System::Drawing::Size(925, 535);
			this->btabAD->TabIndex = 4;
			this->btabAD->Text = L"Acerca De";
			this->btabAD->Click += gcnew System::EventHandler(this, &PopUpMenu::tabAD_Click);
			// 
			// AcercaDe
			// 
			this->AcercaDe->AutoSize = true;
			this->AcercaDe->Location = System::Drawing::Point(24, 25);
			this->AcercaDe->Name = L"AcercaDe";
			this->AcercaDe->Size = System::Drawing::Size(386, 37);
			this->AcercaDe->TabIndex = 0;
			this->AcercaDe->Text = L"Nosotros somos Fauna Life y ....";
			// 
			// btabSucs
			// 
			this->btabSucs->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabSucs->Controls->Add(this->tabControl1);
			this->btabSucs->ForeColor = System::Drawing::Color::White;
			this->btabSucs->Location = System::Drawing::Point(4, 48);
			this->btabSucs->Name = L"btabSucs";
			this->btabSucs->Size = System::Drawing::Size(925, 535);
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
			this->tabPrim->Location = System::Drawing::Point(4, 48);
			this->tabPrim->Name = L"tabPrim";
			this->tabPrim->Size = System::Drawing::Size(1004, 495);
			this->tabPrim->TabIndex = 10;
			this->tabPrim->Text = L"Prim";
			this->tabPrim->UseVisualStyleBackColor = true;
			// 
			// tabKruskal
			// 
			this->tabKruskal->Location = System::Drawing::Point(4, 48);
			this->tabKruskal->Name = L"tabKruskal";
			this->tabKruskal->Size = System::Drawing::Size(1004, 495);
			this->tabKruskal->TabIndex = 12;
			this->tabKruskal->Text = L"Kruskal";
			this->tabKruskal->UseVisualStyleBackColor = true;
			// 
			// tabGrado
			// 
			this->tabGrado->Location = System::Drawing::Point(4, 48);
			this->tabGrado->Name = L"tabGrado";
			this->tabGrado->Size = System::Drawing::Size(1004, 495);
			this->tabGrado->TabIndex = 11;
			this->tabGrado->Text = L"Grado";
			this->tabGrado->UseVisualStyleBackColor = true;
			// 
			// tabCamino
			// 
			this->tabCamino->Location = System::Drawing::Point(4, 48);
			this->tabCamino->Name = L"tabCamino";
			this->tabCamino->Size = System::Drawing::Size(1004, 495);
			this->tabCamino->TabIndex = 13;
			this->tabCamino->Text = L"Camino";
			this->tabCamino->UseVisualStyleBackColor = true;
			// 
			// btabReps
			// 
			this->btabReps->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabReps->Controls->Add(this->tabReportes);
			this->btabReps->ForeColor = System::Drawing::Color::White;
			this->btabReps->Location = System::Drawing::Point(4, 48);
			this->btabReps->Name = L"btabReps";
			this->btabReps->Size = System::Drawing::Size(925, 535);
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
			this->tabR1->BackColor = System::Drawing::Color::Teal;
			this->tabR1->Controls->Add(this->bReporte1);
			this->tabR1->Location = System::Drawing::Point(4, 48);
			this->tabR1->Name = L"tabR1";
			this->tabR1->Padding = System::Windows::Forms::Padding(3);
			this->tabR1->Size = System::Drawing::Size(921, 495);
			this->tabR1->TabIndex = 0;
			this->tabR1->Text = L"Rep1";
			// 
			// bReporte1
			// 
			this->bReporte1->BackColor = System::Drawing::Color::Transparent;
			this->bReporte1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bReporte1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bReporte1->ForeColor = System::Drawing::Color::White;
			this->bReporte1->Location = System::Drawing::Point(43, 74);
			this->bReporte1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bReporte1->Name = L"bReporte1";
			this->bReporte1->Size = System::Drawing::Size(210, 45);
			this->bReporte1->TabIndex = 72;
			this->bReporte1->Text = L"Generar Reporte";
			this->bReporte1->UseVisualStyleBackColor = false;
			this->bReporte1->Click += gcnew System::EventHandler(this, &PopUpMenu::bReporte1_Click);
			// 
			// tabR2
			// 
			this->tabR2->BackColor = System::Drawing::Color::Teal;
			this->tabR2->Location = System::Drawing::Point(4, 48);
			this->tabR2->Name = L"tabR2";
			this->tabR2->Padding = System::Windows::Forms::Padding(3);
			this->tabR2->Size = System::Drawing::Size(921, 495);
			this->tabR2->TabIndex = 1;
			this->tabR2->Text = L"Rep2";
			// 
			// tabR3
			// 
			this->tabR3->BackColor = System::Drawing::Color::Teal;
			this->tabR3->Location = System::Drawing::Point(4, 48);
			this->tabR3->Name = L"tabR3";
			this->tabR3->Size = System::Drawing::Size(921, 495);
			this->tabR3->TabIndex = 2;
			this->tabR3->Text = L"Rep3";
			// 
			// tabR4
			// 
			this->tabR4->BackColor = System::Drawing::Color::Teal;
			this->tabR4->Location = System::Drawing::Point(4, 48);
			this->tabR4->Name = L"tabR4";
			this->tabR4->Size = System::Drawing::Size(921, 495);
			this->tabR4->TabIndex = 3;
			this->tabR4->Text = L"Rep4";
			// 
			// tabR5
			// 
			this->tabR5->BackColor = System::Drawing::Color::Teal;
			this->tabR5->Location = System::Drawing::Point(4, 48);
			this->tabR5->Name = L"tabR5";
			this->tabR5->Size = System::Drawing::Size(921, 495);
			this->tabR5->TabIndex = 4;
			this->tabR5->Text = L"Rep5";
			// 
			// tabR6
			// 
			this->tabR6->BackColor = System::Drawing::Color::Teal;
			this->tabR6->Location = System::Drawing::Point(4, 48);
			this->tabR6->Name = L"tabR6";
			this->tabR6->Size = System::Drawing::Size(921, 495);
			this->tabR6->TabIndex = 5;
			this->tabR6->Text = L"Rep6";
			// 
			// tabR7
			// 
			this->tabR7->BackColor = System::Drawing::Color::Teal;
			this->tabR7->Location = System::Drawing::Point(4, 48);
			this->tabR7->Name = L"tabR7";
			this->tabR7->Size = System::Drawing::Size(921, 495);
			this->tabR7->TabIndex = 6;
			this->tabR7->Text = L"Rep7";
			// 
			// tabR8
			// 
			this->tabR8->BackColor = System::Drawing::Color::Teal;
			this->tabR8->Location = System::Drawing::Point(4, 48);
			this->tabR8->Name = L"tabR8";
			this->tabR8->Size = System::Drawing::Size(921, 495);
			this->tabR8->TabIndex = 7;
			this->tabR8->Text = L"Rep8";
			// 
			// tabR9
			// 
			this->tabR9->BackColor = System::Drawing::Color::Teal;
			this->tabR9->Location = System::Drawing::Point(4, 48);
			this->tabR9->Name = L"tabR9";
			this->tabR9->Size = System::Drawing::Size(921, 495);
			this->tabR9->TabIndex = 8;
			this->tabR9->Text = L"Rep9";
			// 
			// tabR10
			// 
			this->tabR10->BackColor = System::Drawing::Color::Teal;
			this->tabR10->Location = System::Drawing::Point(4, 48);
			this->tabR10->Name = L"tabR10";
			this->tabR10->Size = System::Drawing::Size(921, 495);
			this->tabR10->TabIndex = 9;
			this->tabR10->Text = L"Rep10";
			// 
			// tabR11
			// 
			this->tabR11->BackColor = System::Drawing::Color::Teal;
			this->tabR11->Location = System::Drawing::Point(4, 48);
			this->tabR11->Name = L"tabR11";
			this->tabR11->Size = System::Drawing::Size(921, 495);
			this->tabR11->TabIndex = 10;
			this->tabR11->Text = L"Rep11";
			// 
			// tabR12
			// 
			this->tabR12->BackColor = System::Drawing::Color::Teal;
			this->tabR12->Location = System::Drawing::Point(4, 48);
			this->tabR12->Name = L"tabR12";
			this->tabR12->Size = System::Drawing::Size(921, 495);
			this->tabR12->TabIndex = 11;
			this->tabR12->Text = L"Rep12";
			// 
			// tabR13
			// 
			this->tabR13->BackColor = System::Drawing::Color::Teal;
			this->tabR13->Location = System::Drawing::Point(4, 48);
			this->tabR13->Name = L"tabR13";
			this->tabR13->Size = System::Drawing::Size(921, 495);
			this->tabR13->TabIndex = 12;
			this->tabR13->Text = L"Rep13";
			// 
			// btabFact
			// 
			this->btabFact->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btabFact->Controls->Add(this->tabFacturacion);
			this->btabFact->ForeColor = System::Drawing::Color::White;
			this->btabFact->Location = System::Drawing::Point(4, 48);
			this->btabFact->Name = L"btabFact";
			this->btabFact->Padding = System::Windows::Forms::Padding(3);
			this->btabFact->Size = System::Drawing::Size(925, 535);
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
			this->tabSaldos->BackColor = System::Drawing::Color::Teal;
			this->tabSaldos->ForeColor = System::Drawing::Color::Teal;
			this->tabSaldos->Location = System::Drawing::Point(4, 48);
			this->tabSaldos->Name = L"tabSaldos";
			this->tabSaldos->Padding = System::Windows::Forms::Padding(3);
			this->tabSaldos->Size = System::Drawing::Size(921, 495);
			this->tabSaldos->TabIndex = 0;
			this->tabSaldos->Text = L"Saldos";
			// 
			// tabDesc
			// 
			this->tabDesc->BackColor = System::Drawing::Color::Teal;
			this->tabDesc->Location = System::Drawing::Point(4, 48);
			this->tabDesc->Name = L"tabDesc";
			this->tabDesc->Padding = System::Windows::Forms::Padding(3);
			this->tabDesc->Size = System::Drawing::Size(921, 495);
			this->tabDesc->TabIndex = 1;
			this->tabDesc->Text = L"Descuentos";
			// 
			// tabFact
			// 
			this->tabFact->BackColor = System::Drawing::Color::Teal;
			this->tabFact->Location = System::Drawing::Point(4, 48);
			this->tabFact->Name = L"tabFact";
			this->tabFact->Size = System::Drawing::Size(921, 495);
			this->tabFact->TabIndex = 2;
			this->tabFact->Text = L"Facturación";
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
			this->btabMant->Location = System::Drawing::Point(4, 48);
			this->btabMant->Name = L"btabMant";
			this->btabMant->Padding = System::Windows::Forms::Padding(3);
			this->btabMant->Size = System::Drawing::Size(925, 535);
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
			this->btabInser->Location = System::Drawing::Point(4, 48);
			this->btabInser->Name = L"btabInser";
			this->btabInser->Padding = System::Windows::Forms::Padding(3);
			this->btabInser->Size = System::Drawing::Size(921, 493);
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
			this->btabInserPais->BackColor = System::Drawing::Color::Teal;
			this->btabInserPais->Controls->Add(this->txtInserPais2);
			this->btabInserPais->Controls->Add(this->lblInserPais2);
			this->btabInserPais->Controls->Add(this->bInserPais);
			this->btabInserPais->Controls->Add(this->txtInserPais1);
			this->btabInserPais->Controls->Add(this->lblInserPais1);
			this->btabInserPais->Location = System::Drawing::Point(4, 45);
			this->btabInserPais->Name = L"btabInserPais";
			this->btabInserPais->Padding = System::Windows::Forms::Padding(3);
			this->btabInserPais->Size = System::Drawing::Size(917, 451);
			this->btabInserPais->TabIndex = 0;
			this->btabInserPais->Text = L"País";
			// 
			// txtInserPais2
			// 
			this->txtInserPais2->Location = System::Drawing::Point(81, 189);
			this->txtInserPais2->Name = L"txtInserPais2";
			this->txtInserPais2->Size = System::Drawing::Size(210, 42);
			this->txtInserPais2->TabIndex = 48;
			// 
			// lblInserPais2
			// 
			this->lblInserPais2->AutoSize = true;
			this->lblInserPais2->BackColor = System::Drawing::Color::Teal;
			this->lblInserPais2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserPais2->Location = System::Drawing::Point(76, 156);
			this->lblInserPais2->Name = L"lblInserPais2";
			this->lblInserPais2->Size = System::Drawing::Size(168, 37);
			this->lblInserPais2->TabIndex = 47;
			this->lblInserPais2->Text = L"Nombre País";
			// 
			// bInserPais
			// 
			this->bInserPais->BackColor = System::Drawing::Color::Transparent;
			this->bInserPais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserPais->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserPais->ForeColor = System::Drawing::Color::White;
			this->bInserPais->Location = System::Drawing::Point(81, 364);
			this->bInserPais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserPais->Name = L"bInserPais";
			this->bInserPais->Size = System::Drawing::Size(210, 45);
			this->bInserPais->TabIndex = 46;
			this->bInserPais->Text = L"Insertar";
			this->bInserPais->UseVisualStyleBackColor = false;
			this->bInserPais->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserPais_Click);
			// 
			// txtInserPais1
			// 
			this->txtInserPais1->Location = System::Drawing::Point(81, 90);
			this->txtInserPais1->Name = L"txtInserPais1";
			this->txtInserPais1->Size = System::Drawing::Size(210, 42);
			this->txtInserPais1->TabIndex = 45;
			// 
			// lblInserPais1
			// 
			this->lblInserPais1->AutoSize = true;
			this->lblInserPais1->BackColor = System::Drawing::Color::Teal;
			this->lblInserPais1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserPais1->Location = System::Drawing::Point(76, 57);
			this->lblInserPais1->Name = L"lblInserPais1";
			this->lblInserPais1->Size = System::Drawing::Size(158, 37);
			this->lblInserPais1->TabIndex = 44;
			this->lblInserPais1->Text = L"Código País";
			// 
			// btabInserCdd
			// 
			this->btabInserCdd->BackColor = System::Drawing::Color::Teal;
			this->btabInserCdd->Controls->Add(this->txtInserCiudad3);
			this->btabInserCdd->Controls->Add(this->lblInserCiudad3);
			this->btabInserCdd->Controls->Add(this->bInserCiudad);
			this->btabInserCdd->Controls->Add(this->txtInserCiudad2);
			this->btabInserCdd->Controls->Add(this->lblInserCiudad2);
			this->btabInserCdd->Controls->Add(this->txtInserCiudad1);
			this->btabInserCdd->Controls->Add(this->lblInserCiudad1);
			this->btabInserCdd->Location = System::Drawing::Point(4, 45);
			this->btabInserCdd->Name = L"btabInserCdd";
			this->btabInserCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabInserCdd->Size = System::Drawing::Size(917, 451);
			this->btabInserCdd->TabIndex = 1;
			this->btabInserCdd->Text = L"Ciudad";
			// 
			// txtInserCiudad3
			// 
			this->txtInserCiudad3->Location = System::Drawing::Point(411, 109);
			this->txtInserCiudad3->Name = L"txtInserCiudad3";
			this->txtInserCiudad3->Size = System::Drawing::Size(210, 42);
			this->txtInserCiudad3->TabIndex = 49;
			// 
			// lblInserCiudad3
			// 
			this->lblInserCiudad3->AutoSize = true;
			this->lblInserCiudad3->BackColor = System::Drawing::Color::Teal;
			this->lblInserCiudad3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCiudad3->Location = System::Drawing::Point(406, 76);
			this->lblInserCiudad3->Name = L"lblInserCiudad3";
			this->lblInserCiudad3->Size = System::Drawing::Size(207, 37);
			this->lblInserCiudad3->TabIndex = 48;
			this->lblInserCiudad3->Text = L"Nombre Ciudad";
			// 
			// bInserCiudad
			// 
			this->bInserCiudad->BackColor = System::Drawing::Color::Transparent;
			this->bInserCiudad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserCiudad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserCiudad->ForeColor = System::Drawing::Color::White;
			this->bInserCiudad->Location = System::Drawing::Point(102, 336);
			this->bInserCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserCiudad->Name = L"bInserCiudad";
			this->bInserCiudad->Size = System::Drawing::Size(210, 45);
			this->bInserCiudad->TabIndex = 47;
			this->bInserCiudad->Text = L"Insertar";
			this->bInserCiudad->UseVisualStyleBackColor = false;
			this->bInserCiudad->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserCiudad_Click);
			// 
			// txtInserCiudad2
			// 
			this->txtInserCiudad2->Location = System::Drawing::Point(102, 201);
			this->txtInserCiudad2->Name = L"txtInserCiudad2";
			this->txtInserCiudad2->Size = System::Drawing::Size(210, 42);
			this->txtInserCiudad2->TabIndex = 46;
			// 
			// lblInserCiudad2
			// 
			this->lblInserCiudad2->AutoSize = true;
			this->lblInserCiudad2->BackColor = System::Drawing::Color::Teal;
			this->lblInserCiudad2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCiudad2->Location = System::Drawing::Point(97, 168);
			this->lblInserCiudad2->Name = L"lblInserCiudad2";
			this->lblInserCiudad2->Size = System::Drawing::Size(197, 37);
			this->lblInserCiudad2->TabIndex = 45;
			this->lblInserCiudad2->Text = L"Código Ciudad";
			// 
			// txtInserCiudad1
			// 
			this->txtInserCiudad1->Location = System::Drawing::Point(102, 109);
			this->txtInserCiudad1->Name = L"txtInserCiudad1";
			this->txtInserCiudad1->Size = System::Drawing::Size(210, 42);
			this->txtInserCiudad1->TabIndex = 44;
			// 
			// lblInserCiudad1
			// 
			this->lblInserCiudad1->AutoSize = true;
			this->lblInserCiudad1->BackColor = System::Drawing::Color::Teal;
			this->lblInserCiudad1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCiudad1->Location = System::Drawing::Point(97, 76);
			this->lblInserCiudad1->Name = L"lblInserCiudad1";
			this->lblInserCiudad1->Size = System::Drawing::Size(158, 37);
			this->lblInserCiudad1->TabIndex = 43;
			this->lblInserCiudad1->Text = L"Código País";
			// 
			// btabInserClt
			// 
			this->btabInserClt->BackColor = System::Drawing::Color::Teal;
			this->btabInserClt->Controls->Add(this->txtInserCliente9);
			this->btabInserClt->Controls->Add(this->lblInserCliente10);
			this->btabInserClt->Controls->Add(this->txtInserCliente8);
			this->btabInserClt->Controls->Add(this->lblInserCliente9);
			this->btabInserClt->Controls->Add(this->lblInserCliente8);
			this->btabInserClt->Controls->Add(this->txtInserCliente7);
			this->btabInserClt->Controls->Add(this->lblInserCliente7);
			this->btabInserClt->Controls->Add(this->txtInserCliente6);
			this->btabInserClt->Controls->Add(this->lblInserCliente6);
			this->btabInserClt->Controls->Add(this->txtInserCliente5);
			this->btabInserClt->Controls->Add(this->lblInserCliente5);
			this->btabInserClt->Controls->Add(this->txtInserCliente4);
			this->btabInserClt->Controls->Add(this->lblInserCliente4);
			this->btabInserClt->Controls->Add(this->txtInserCliente3);
			this->btabInserClt->Controls->Add(this->lblInserCliente3);
			this->btabInserClt->Controls->Add(this->bInserCliente);
			this->btabInserClt->Controls->Add(this->txtInserCliente2);
			this->btabInserClt->Controls->Add(this->lblInserCliente2);
			this->btabInserClt->Controls->Add(this->txtInserCliente1);
			this->btabInserClt->Controls->Add(this->lblInserCliente1);
			this->btabInserClt->Location = System::Drawing::Point(4, 45);
			this->btabInserClt->Name = L"btabInserClt";
			this->btabInserClt->Size = System::Drawing::Size(917, 451);
			this->btabInserClt->TabIndex = 2;
			this->btabInserClt->Text = L"Cliente";
			// 
			// lblInserCliente8
			// 
			this->lblInserCliente8->AutoSize = true;
			this->lblInserCliente8->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserCliente8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente8->Location = System::Drawing::Point(673, 119);
			this->lblInserCliente8->Name = L"lblInserCliente8";
			this->lblInserCliente8->Size = System::Drawing::Size(140, 32);
			this->lblInserCliente8->TabIndex = 71;
			this->lblInserCliente8->Text = L"DD/MM/AA";
			// 
			// txtInserCliente7
			// 
			this->txtInserCliente7->Location = System::Drawing::Point(678, 81);
			this->txtInserCliente7->Name = L"txtInserCliente7";
			this->txtInserCliente7->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente7->TabIndex = 70;
			// 
			// lblInserCliente7
			// 
			this->lblInserCliente7->AutoSize = true;
			this->lblInserCliente7->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserCliente7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente7->Location = System::Drawing::Point(673, 48);
			this->lblInserCliente7->Name = L"lblInserCliente7";
			this->lblInserCliente7->Size = System::Drawing::Size(243, 37);
			this->lblInserCliente7->TabIndex = 69;
			this->lblInserCliente7->Text = L"Fecha Última Visita";
			// 
			// txtInserCliente6
			// 
			this->txtInserCliente6->Location = System::Drawing::Point(387, 266);
			this->txtInserCliente6->Name = L"txtInserCliente6";
			this->txtInserCliente6->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente6->TabIndex = 68;
			// 
			// lblInserCliente6
			// 
			this->lblInserCliente6->AutoSize = true;
			this->lblInserCliente6->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente6->Location = System::Drawing::Point(382, 233);
			this->lblInserCliente6->Name = L"lblInserCliente6";
			this->lblInserCliente6->Size = System::Drawing::Size(118, 37);
			this->lblInserCliente6->TabIndex = 67;
			this->lblInserCliente6->Text = L"Teléfono";
			// 
			// txtInserCliente5
			// 
			this->txtInserCliente5->Location = System::Drawing::Point(387, 173);
			this->txtInserCliente5->Name = L"txtInserCliente5";
			this->txtInserCliente5->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente5->TabIndex = 66;
			// 
			// lblInserCliente5
			// 
			this->lblInserCliente5->AutoSize = true;
			this->lblInserCliente5->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente5->Location = System::Drawing::Point(382, 140);
			this->lblInserCliente5->Name = L"lblInserCliente5";
			this->lblInserCliente5->Size = System::Drawing::Size(197, 37);
			this->lblInserCliente5->TabIndex = 65;
			this->lblInserCliente5->Text = L"Código Ciudad";
			// 
			// txtInserCliente4
			// 
			this->txtInserCliente4->Location = System::Drawing::Point(387, 81);
			this->txtInserCliente4->Name = L"txtInserCliente4";
			this->txtInserCliente4->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente4->TabIndex = 64;
			// 
			// lblInserCliente4
			// 
			this->lblInserCliente4->AutoSize = true;
			this->lblInserCliente4->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente4->Location = System::Drawing::Point(382, 48);
			this->lblInserCliente4->Name = L"lblInserCliente4";
			this->lblInserCliente4->Size = System::Drawing::Size(158, 37);
			this->lblInserCliente4->TabIndex = 63;
			this->lblInserCliente4->Text = L"Código País";
			// 
			// txtInserCliente3
			// 
			this->txtInserCliente3->Location = System::Drawing::Point(91, 266);
			this->txtInserCliente3->Name = L"txtInserCliente3";
			this->txtInserCliente3->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente3->TabIndex = 62;
			// 
			// lblInserCliente3
			// 
			this->lblInserCliente3->AutoSize = true;
			this->lblInserCliente3->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente3->Location = System::Drawing::Point(86, 233);
			this->lblInserCliente3->Name = L"lblInserCliente3";
			this->lblInserCliente3->Size = System::Drawing::Size(128, 37);
			this->lblInserCliente3->TabIndex = 61;
			this->lblInserCliente3->Text = L"Dirección";
			// 
			// bInserCliente
			// 
			this->bInserCliente->BackColor = System::Drawing::Color::Transparent;
			this->bInserCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserCliente->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserCliente->ForeColor = System::Drawing::Color::White;
			this->bInserCliente->Location = System::Drawing::Point(91, 369);
			this->bInserCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserCliente->Name = L"bInserCliente";
			this->bInserCliente->Size = System::Drawing::Size(210, 45);
			this->bInserCliente->TabIndex = 60;
			this->bInserCliente->Text = L"Insertar";
			this->bInserCliente->UseVisualStyleBackColor = false;
			this->bInserCliente->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserCliente_Click);
			// 
			// txtInserCliente2
			// 
			this->txtInserCliente2->Location = System::Drawing::Point(91, 173);
			this->txtInserCliente2->Name = L"txtInserCliente2";
			this->txtInserCliente2->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente2->TabIndex = 59;
			// 
			// lblInserCliente2
			// 
			this->lblInserCliente2->AutoSize = true;
			this->lblInserCliente2->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente2->Location = System::Drawing::Point(86, 140);
			this->lblInserCliente2->Name = L"lblInserCliente2";
			this->lblInserCliente2->Size = System::Drawing::Size(205, 37);
			this->lblInserCliente2->TabIndex = 58;
			this->lblInserCliente2->Text = L"Nombre Cliente";
			// 
			// txtInserCliente1
			// 
			this->txtInserCliente1->Location = System::Drawing::Point(91, 81);
			this->txtInserCliente1->Name = L"txtInserCliente1";
			this->txtInserCliente1->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente1->TabIndex = 57;
			// 
			// lblInserCliente1
			// 
			this->lblInserCliente1->AutoSize = true;
			this->lblInserCliente1->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente1->Location = System::Drawing::Point(86, 48);
			this->lblInserCliente1->Name = L"lblInserCliente1";
			this->lblInserCliente1->Size = System::Drawing::Size(204, 37);
			this->lblInserCliente1->TabIndex = 56;
			this->lblInserCliente1->Text = L"Número Cliente";
			// 
			// btabInserMasc
			// 
			this->btabInserMasc->BackColor = System::Drawing::Color::Teal;
			this->btabInserMasc->Controls->Add(this->lblInserMascota11);
			this->btabInserMasc->Controls->Add(this->txtInserMascota10);
			this->btabInserMasc->Controls->Add(this->lblInserMascota10);
			this->btabInserMasc->Controls->Add(this->txtInserMascota9);
			this->btabInserMasc->Controls->Add(this->lblInserMascota9);
			this->btabInserMasc->Controls->Add(this->txtInserMascota8);
			this->btabInserMasc->Controls->Add(this->lblInserMascota8);
			this->btabInserMasc->Controls->Add(this->txtInserMascota7);
			this->btabInserMasc->Controls->Add(this->lblInserMascota7);
			this->btabInserMasc->Controls->Add(this->txtInserMascota6);
			this->btabInserMasc->Controls->Add(this->lblInserMascota6);
			this->btabInserMasc->Controls->Add(this->txtInserMascota5);
			this->btabInserMasc->Controls->Add(this->lblInserMascota5);
			this->btabInserMasc->Controls->Add(this->txtInserMascota4);
			this->btabInserMasc->Controls->Add(this->lblInserMascota4);
			this->btabInserMasc->Controls->Add(this->txtInserMascota3);
			this->btabInserMasc->Controls->Add(this->label5lblInserMascota3);
			this->btabInserMasc->Controls->Add(this->bInserMascota);
			this->btabInserMasc->Controls->Add(this->txtInserMascota2);
			this->btabInserMasc->Controls->Add(this->lblInserMascota2);
			this->btabInserMasc->Controls->Add(this->txtInserMascota1);
			this->btabInserMasc->Controls->Add(this->lblInserMascota1);
			this->btabInserMasc->Location = System::Drawing::Point(4, 45);
			this->btabInserMasc->Name = L"btabInserMasc";
			this->btabInserMasc->Size = System::Drawing::Size(917, 451);
			this->btabInserMasc->TabIndex = 3;
			this->btabInserMasc->Text = L"Mascota";
			// 
			// lblInserMascota11
			// 
			this->lblInserMascota11->AutoSize = true;
			this->lblInserMascota11->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserMascota11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota11->Location = System::Drawing::Point(352, 405);
			this->lblInserMascota11->Name = L"lblInserMascota11";
			this->lblInserMascota11->Size = System::Drawing::Size(140, 32);
			this->lblInserMascota11->TabIndex = 90;
			this->lblInserMascota11->Text = L"DD/MM/AA";
			// 
			// txtInserMascota10
			// 
			this->txtInserMascota10->Location = System::Drawing::Point(357, 367);
			this->txtInserMascota10->Name = L"txtInserMascota10";
			this->txtInserMascota10->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota10->TabIndex = 89;
			// 
			// lblInserMascota10
			// 
			this->lblInserMascota10->AutoSize = true;
			this->lblInserMascota10->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserMascota10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota10->Location = System::Drawing::Point(352, 334);
			this->lblInserMascota10->Name = L"lblInserMascota10";
			this->lblInserMascota10->Size = System::Drawing::Size(243, 37);
			this->lblInserMascota10->TabIndex = 88;
			this->lblInserMascota10->Text = L"Fecha Última Visita";
			// 
			// txtInserMascota9
			// 
			this->txtInserMascota9->Location = System::Drawing::Point(644, 268);
			this->txtInserMascota9->Name = L"txtInserMascota9";
			this->txtInserMascota9->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota9->TabIndex = 87;
			// 
			// lblInserMascota9
			// 
			this->lblInserMascota9->AutoSize = true;
			this->lblInserMascota9->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota9->Location = System::Drawing::Point(639, 235);
			this->lblInserMascota9->Name = L"lblInserMascota9";
			this->lblInserMascota9->Size = System::Drawing::Size(123, 37);
			this->lblInserMascota9->TabIndex = 86;
			this->lblInserMascota9->Text = L"Castrado";
			// 
			// txtInserMascota8
			// 
			this->txtInserMascota8->Location = System::Drawing::Point(644, 171);
			this->txtInserMascota8->Name = L"txtInserMascota8";
			this->txtInserMascota8->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota8->TabIndex = 85;
			// 
			// lblInserMascota8
			// 
			this->lblInserMascota8->AutoSize = true;
			this->lblInserMascota8->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota8->Location = System::Drawing::Point(639, 138);
			this->lblInserMascota8->Name = L"lblInserMascota8";
			this->lblInserMascota8->Size = System::Drawing::Size(82, 37);
			this->lblInserMascota8->TabIndex = 84;
			this->lblInserMascota8->Text = L"Color";
			// 
			// txtInserMascota7
			// 
			this->txtInserMascota7->Location = System::Drawing::Point(644, 79);
			this->txtInserMascota7->Name = L"txtInserMascota7";
			this->txtInserMascota7->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota7->TabIndex = 83;
			// 
			// lblInserMascota7
			// 
			this->lblInserMascota7->AutoSize = true;
			this->lblInserMascota7->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota7->Location = System::Drawing::Point(639, 46);
			this->lblInserMascota7->Name = L"lblInserMascota7";
			this->lblInserMascota7->Size = System::Drawing::Size(73, 37);
			this->lblInserMascota7->TabIndex = 82;
			this->lblInserMascota7->Text = L"Sexo";
			// 
			// txtInserMascota6
			// 
			this->txtInserMascota6->Location = System::Drawing::Point(357, 268);
			this->txtInserMascota6->Name = L"txtInserMascota6";
			this->txtInserMascota6->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota6->TabIndex = 81;
			// 
			// lblInserMascota6
			// 
			this->lblInserMascota6->AutoSize = true;
			this->lblInserMascota6->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota6->Location = System::Drawing::Point(352, 235);
			this->lblInserMascota6->Name = L"lblInserMascota6";
			this->lblInserMascota6->Size = System::Drawing::Size(266, 37);
			this->lblInserMascota6->TabIndex = 80;
			this->lblInserMascota6->Text = L"Fecha de Nacimiento";
			// 
			// txtInserMascota5
			// 
			this->txtInserMascota5->Location = System::Drawing::Point(357, 171);
			this->txtInserMascota5->Name = L"txtInserMascota5";
			this->txtInserMascota5->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota5->TabIndex = 79;
			// 
			// lblInserMascota5
			// 
			this->lblInserMascota5->AutoSize = true;
			this->lblInserMascota5->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota5->Location = System::Drawing::Point(352, 138);
			this->lblInserMascota5->Name = L"lblInserMascota5";
			this->lblInserMascota5->Size = System::Drawing::Size(73, 37);
			this->lblInserMascota5->TabIndex = 78;
			this->lblInserMascota5->Text = L"Raza";
			// 
			// txtInserMascota4
			// 
			this->txtInserMascota4->Location = System::Drawing::Point(357, 79);
			this->txtInserMascota4->Name = L"txtInserMascota4";
			this->txtInserMascota4->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota4->TabIndex = 77;
			// 
			// lblInserMascota4
			// 
			this->lblInserMascota4->AutoSize = true;
			this->lblInserMascota4->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota4->Location = System::Drawing::Point(352, 46);
			this->lblInserMascota4->Name = L"lblInserMascota4";
			this->lblInserMascota4->Size = System::Drawing::Size(70, 37);
			this->lblInserMascota4->TabIndex = 76;
			this->lblInserMascota4->Text = L"Tipo";
			// 
			// txtInserMascota3
			// 
			this->txtInserMascota3->Location = System::Drawing::Point(66, 268);
			this->txtInserMascota3->Name = L"txtInserMascota3";
			this->txtInserMascota3->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota3->TabIndex = 75;
			// 
			// label5lblInserMascota3
			// 
			this->label5lblInserMascota3->AutoSize = true;
			this->label5lblInserMascota3->BackColor = System::Drawing::Color::Teal;
			this->label5lblInserMascota3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5lblInserMascota3->Location = System::Drawing::Point(61, 235);
			this->label5lblInserMascota3->Name = L"label5lblInserMascota3";
			this->label5lblInserMascota3->Size = System::Drawing::Size(115, 37);
			this->label5lblInserMascota3->TabIndex = 74;
			this->label5lblInserMascota3->Text = L"Nombre";
			// 
			// bInserMascota
			// 
			this->bInserMascota->BackColor = System::Drawing::Color::Transparent;
			this->bInserMascota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserMascota->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserMascota->ForeColor = System::Drawing::Color::White;
			this->bInserMascota->Location = System::Drawing::Point(66, 361);
			this->bInserMascota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserMascota->Name = L"bInserMascota";
			this->bInserMascota->Size = System::Drawing::Size(210, 45);
			this->bInserMascota->TabIndex = 69;
			this->bInserMascota->Text = L"Insertar";
			this->bInserMascota->UseVisualStyleBackColor = false;
			this->bInserMascota->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserMascota_Click);
			// 
			// txtInserMascota2
			// 
			this->txtInserMascota2->Location = System::Drawing::Point(66, 171);
			this->txtInserMascota2->Name = L"txtInserMascota2";
			this->txtInserMascota2->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota2->TabIndex = 68;
			// 
			// lblInserMascota2
			// 
			this->lblInserMascota2->AutoSize = true;
			this->lblInserMascota2->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota2->Location = System::Drawing::Point(61, 138);
			this->lblInserMascota2->Name = L"lblInserMascota2";
			this->lblInserMascota2->Size = System::Drawing::Size(133, 37);
			this->lblInserMascota2->TabIndex = 67;
			this->lblInserMascota2->Text = L"ID Animal";
			// 
			// txtInserMascota1
			// 
			this->txtInserMascota1->Location = System::Drawing::Point(66, 79);
			this->txtInserMascota1->Name = L"txtInserMascota1";
			this->txtInserMascota1->Size = System::Drawing::Size(210, 42);
			this->txtInserMascota1->TabIndex = 66;
			// 
			// lblInserMascota1
			// 
			this->lblInserMascota1->AutoSize = true;
			this->lblInserMascota1->BackColor = System::Drawing::Color::Teal;
			this->lblInserMascota1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMascota1->Location = System::Drawing::Point(61, 46);
			this->lblInserMascota1->Name = L"lblInserMascota1";
			this->lblInserMascota1->Size = System::Drawing::Size(204, 37);
			this->lblInserMascota1->TabIndex = 65;
			this->lblInserMascota1->Text = L"Número Cliente";
			// 
			// btabInserVisita
			// 
			this->btabInserVisita->BackColor = System::Drawing::Color::Teal;
			this->btabInserVisita->Controls->Add(this->lblInserVisita6);
			this->btabInserVisita->Controls->Add(this->txtInserVisita5);
			this->btabInserVisita->Controls->Add(this->lblInserVisita5);
			this->btabInserVisita->Controls->Add(this->txtInserVisita4);
			this->btabInserVisita->Controls->Add(this->lblInserVisita4);
			this->btabInserVisita->Controls->Add(this->txtInserVisita3);
			this->btabInserVisita->Controls->Add(this->lblInserVisita3);
			this->btabInserVisita->Controls->Add(this->bInserVisita);
			this->btabInserVisita->Controls->Add(this->txtInserVisita2);
			this->btabInserVisita->Controls->Add(this->lblInserVisita2);
			this->btabInserVisita->Controls->Add(this->txtInserVisita1);
			this->btabInserVisita->Controls->Add(this->lblInserVisita1);
			this->btabInserVisita->Location = System::Drawing::Point(4, 45);
			this->btabInserVisita->Name = L"btabInserVisita";
			this->btabInserVisita->Size = System::Drawing::Size(917, 451);
			this->btabInserVisita->TabIndex = 4;
			this->btabInserVisita->Text = L"Visita";
			// 
			// lblInserVisita6
			// 
			this->lblInserVisita6->AutoSize = true;
			this->lblInserVisita6->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserVisita6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita6->Location = System::Drawing::Point(91, 304);
			this->lblInserVisita6->Name = L"lblInserVisita6";
			this->lblInserVisita6->Size = System::Drawing::Size(140, 32);
			this->lblInserVisita6->TabIndex = 91;
			this->lblInserVisita6->Text = L"DD/MM/AA";
			// 
			// txtInserVisita5
			// 
			this->txtInserVisita5->Location = System::Drawing::Point(392, 173);
			this->txtInserVisita5->Name = L"txtInserVisita5";
			this->txtInserVisita5->Size = System::Drawing::Size(210, 42);
			this->txtInserVisita5->TabIndex = 79;
			// 
			// lblInserVisita5
			// 
			this->lblInserVisita5->AutoSize = true;
			this->lblInserVisita5->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita5->Location = System::Drawing::Point(387, 140);
			this->lblInserVisita5->Name = L"lblInserVisita5";
			this->lblInserVisita5->Size = System::Drawing::Size(196, 37);
			this->lblInserVisita5->TabIndex = 78;
			this->lblInserVisita5->Text = L"Forma de Pago";
			// 
			// txtInserVisita4
			// 
			this->txtInserVisita4->Location = System::Drawing::Point(392, 81);
			this->txtInserVisita4->Name = L"txtInserVisita4";
			this->txtInserVisita4->Size = System::Drawing::Size(210, 42);
			this->txtInserVisita4->TabIndex = 77;
			// 
			// lblInserVisita4
			// 
			this->lblInserVisita4->AutoSize = true;
			this->lblInserVisita4->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita4->Location = System::Drawing::Point(387, 48);
			this->lblInserVisita4->Name = L"lblInserVisita4";
			this->lblInserVisita4->Size = System::Drawing::Size(166, 37);
			this->lblInserVisita4->TabIndex = 76;
			this->lblInserVisita4->Text = L"Total Factura";
			// 
			// txtInserVisita3
			// 
			this->txtInserVisita3->Location = System::Drawing::Point(96, 266);
			this->txtInserVisita3->Name = L"txtInserVisita3";
			this->txtInserVisita3->Size = System::Drawing::Size(210, 42);
			this->txtInserVisita3->TabIndex = 75;
			// 
			// lblInserVisita3
			// 
			this->lblInserVisita3->AutoSize = true;
			this->lblInserVisita3->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita3->Location = System::Drawing::Point(91, 233);
			this->lblInserVisita3->Name = L"lblInserVisita3";
			this->lblInserVisita3->Size = System::Drawing::Size(243, 37);
			this->lblInserVisita3->TabIndex = 74;
			this->lblInserVisita3->Text = L"Fecha Última Visita";
			// 
			// bInserVisita
			// 
			this->bInserVisita->BackColor = System::Drawing::Color::Transparent;
			this->bInserVisita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserVisita->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserVisita->ForeColor = System::Drawing::Color::White;
			this->bInserVisita->Location = System::Drawing::Point(96, 369);
			this->bInserVisita->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserVisita->Name = L"bInserVisita";
			this->bInserVisita->Size = System::Drawing::Size(210, 45);
			this->bInserVisita->TabIndex = 73;
			this->bInserVisita->Text = L"Insertar";
			this->bInserVisita->UseVisualStyleBackColor = false;
			this->bInserVisita->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserVisita_Click);
			// 
			// txtInserVisita2
			// 
			this->txtInserVisita2->Location = System::Drawing::Point(96, 173);
			this->txtInserVisita2->Name = L"txtInserVisita2";
			this->txtInserVisita2->Size = System::Drawing::Size(210, 42);
			this->txtInserVisita2->TabIndex = 72;
			// 
			// lblInserVisita2
			// 
			this->lblInserVisita2->AutoSize = true;
			this->lblInserVisita2->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita2->Location = System::Drawing::Point(91, 140);
			this->lblInserVisita2->Name = L"lblInserVisita2";
			this->lblInserVisita2->Size = System::Drawing::Size(133, 37);
			this->lblInserVisita2->TabIndex = 71;
			this->lblInserVisita2->Text = L"ID Animal";
			// 
			// txtInserVisita1
			// 
			this->txtInserVisita1->Location = System::Drawing::Point(96, 81);
			this->txtInserVisita1->Name = L"txtInserVisita1";
			this->txtInserVisita1->Size = System::Drawing::Size(210, 42);
			this->txtInserVisita1->TabIndex = 70;
			// 
			// lblInserVisita1
			// 
			this->lblInserVisita1->AutoSize = true;
			this->lblInserVisita1->BackColor = System::Drawing::Color::Teal;
			this->lblInserVisita1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserVisita1->Location = System::Drawing::Point(91, 48);
			this->lblInserVisita1->Name = L"lblInserVisita1";
			this->lblInserVisita1->Size = System::Drawing::Size(177, 37);
			this->lblInserVisita1->TabIndex = 69;
			this->lblInserVisita1->Text = L"Código Visita";
			// 
			// btabInserTrat
			// 
			this->btabInserTrat->BackColor = System::Drawing::Color::Teal;
			this->btabInserTrat->Controls->Add(this->txtInserTrat4);
			this->btabInserTrat->Controls->Add(this->lblInserTrat4);
			this->btabInserTrat->Controls->Add(this->txtInserTrat3);
			this->btabInserTrat->Controls->Add(this->lblInserTrat3);
			this->btabInserTrat->Controls->Add(this->binserTratamiento);
			this->btabInserTrat->Controls->Add(this->txtInserTrat2);
			this->btabInserTrat->Controls->Add(this->lblInserTrat2);
			this->btabInserTrat->Controls->Add(this->txtInserTrat1);
			this->btabInserTrat->Controls->Add(this->lblInserTrat1);
			this->btabInserTrat->Location = System::Drawing::Point(4, 45);
			this->btabInserTrat->Name = L"btabInserTrat";
			this->btabInserTrat->Size = System::Drawing::Size(917, 451);
			this->btabInserTrat->TabIndex = 5;
			this->btabInserTrat->Text = L"Tratamiento";
			// 
			// txtInserTrat4
			// 
			this->txtInserTrat4->Location = System::Drawing::Point(394, 207);
			this->txtInserTrat4->Name = L"txtInserTrat4";
			this->txtInserTrat4->Size = System::Drawing::Size(210, 42);
			this->txtInserTrat4->TabIndex = 79;
			// 
			// lblInserTrat4
			// 
			this->lblInserTrat4->AutoSize = true;
			this->lblInserTrat4->BackColor = System::Drawing::Color::Teal;
			this->lblInserTrat4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserTrat4->Location = System::Drawing::Point(389, 174);
			this->lblInserTrat4->Name = L"lblInserTrat4";
			this->lblInserTrat4->Size = System::Drawing::Size(125, 37);
			this->lblInserTrat4->TabIndex = 78;
			this->lblInserTrat4->Text = L"Cantidad";
			// 
			// txtInserTrat3
			// 
			this->txtInserTrat3->Location = System::Drawing::Point(394, 115);
			this->txtInserTrat3->Name = L"txtInserTrat3";
			this->txtInserTrat3->Size = System::Drawing::Size(210, 42);
			this->txtInserTrat3->TabIndex = 77;
			// 
			// lblInserTrat3
			// 
			this->lblInserTrat3->AutoSize = true;
			this->lblInserTrat3->BackColor = System::Drawing::Color::Teal;
			this->lblInserTrat3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserTrat3->Location = System::Drawing::Point(389, 82);
			this->lblInserTrat3->Name = L"lblInserTrat3";
			this->lblInserTrat3->Size = System::Drawing::Size(193, 37);
			this->lblInserTrat3->TabIndex = 76;
			this->lblInserTrat3->Text = L"Precio Unitario";
			// 
			// binserTratamiento
			// 
			this->binserTratamiento->BackColor = System::Drawing::Color::Transparent;
			this->binserTratamiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binserTratamiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binserTratamiento->ForeColor = System::Drawing::Color::White;
			this->binserTratamiento->Location = System::Drawing::Point(98, 335);
			this->binserTratamiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->binserTratamiento->Name = L"binserTratamiento";
			this->binserTratamiento->Size = System::Drawing::Size(210, 45);
			this->binserTratamiento->TabIndex = 73;
			this->binserTratamiento->Text = L"Insertar";
			this->binserTratamiento->UseVisualStyleBackColor = false;
			this->binserTratamiento->Click += gcnew System::EventHandler(this, &PopUpMenu::binserTratamiento_Click);
			// 
			// txtInserTrat2
			// 
			this->txtInserTrat2->Location = System::Drawing::Point(98, 207);
			this->txtInserTrat2->Name = L"txtInserTrat2";
			this->txtInserTrat2->Size = System::Drawing::Size(210, 42);
			this->txtInserTrat2->TabIndex = 72;
			// 
			// lblInserTrat2
			// 
			this->lblInserTrat2->AutoSize = true;
			this->lblInserTrat2->BackColor = System::Drawing::Color::Teal;
			this->lblInserTrat2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserTrat2->Location = System::Drawing::Point(93, 174);
			this->lblInserTrat2->Name = L"lblInserTrat2";
			this->lblInserTrat2->Size = System::Drawing::Size(115, 37);
			this->lblInserTrat2->TabIndex = 71;
			this->lblInserTrat2->Text = L"Nombre";
			// 
			// txtInserTrat1
			// 
			this->txtInserTrat1->Location = System::Drawing::Point(98, 115);
			this->txtInserTrat1->Name = L"txtInserTrat1";
			this->txtInserTrat1->Size = System::Drawing::Size(210, 42);
			this->txtInserTrat1->TabIndex = 70;
			// 
			// lblInserTrat1
			// 
			this->lblInserTrat1->AutoSize = true;
			this->lblInserTrat1->BackColor = System::Drawing::Color::Teal;
			this->lblInserTrat1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserTrat1->Location = System::Drawing::Point(93, 82);
			this->lblInserTrat1->Name = L"lblInserTrat1";
			this->lblInserTrat1->Size = System::Drawing::Size(254, 37);
			this->lblInserTrat1->TabIndex = 69;
			this->lblInserTrat1->Text = L"Código Tratamiento";
			// 
			// btabInserMed
			// 
			this->btabInserMed->BackColor = System::Drawing::Color::Teal;
			this->btabInserMed->Controls->Add(this->lblInserMedicacion7);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion3);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion3);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion6);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion6);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion5);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion5);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion4);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion4);
			this->btabInserMed->Controls->Add(this->bInserMedicacion);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion2);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion2);
			this->btabInserMed->Controls->Add(this->txtInserMedicacion1);
			this->btabInserMed->Controls->Add(this->lblInserMedicacion1);
			this->btabInserMed->Location = System::Drawing::Point(4, 45);
			this->btabInserMed->Name = L"btabInserMed";
			this->btabInserMed->Size = System::Drawing::Size(917, 451);
			this->btabInserMed->TabIndex = 6;
			this->btabInserMed->Text = L"Medicación";
			// 
			// lblInserMedicacion7
			// 
			this->lblInserMedicacion7->AutoSize = true;
			this->lblInserMedicacion7->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInserMedicacion7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion7->Location = System::Drawing::Point(84, 310);
			this->lblInserMedicacion7->Name = L"lblInserMedicacion7";
			this->lblInserMedicacion7->Size = System::Drawing::Size(140, 32);
			this->lblInserMedicacion7->TabIndex = 94;
			this->lblInserMedicacion7->Text = L"DD/MM/AA";
			// 
			// txtInserMedicacion3
			// 
			this->txtInserMedicacion3->Location = System::Drawing::Point(89, 272);
			this->txtInserMedicacion3->Name = L"txtInserMedicacion3";
			this->txtInserMedicacion3->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion3->TabIndex = 93;
			// 
			// lblInserMedicacion3
			// 
			this->lblInserMedicacion3->AutoSize = true;
			this->lblInserMedicacion3->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion3->Location = System::Drawing::Point(84, 239);
			this->lblInserMedicacion3->Name = L"lblInserMedicacion3";
			this->lblInserMedicacion3->Size = System::Drawing::Size(243, 37);
			this->lblInserMedicacion3->TabIndex = 92;
			this->lblInserMedicacion3->Text = L"Fecha Última Visita";
			// 
			// txtInserMedicacion6
			// 
			this->txtInserMedicacion6->Location = System::Drawing::Point(403, 272);
			this->txtInserMedicacion6->Name = L"txtInserMedicacion6";
			this->txtInserMedicacion6->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion6->TabIndex = 77;
			// 
			// lblInserMedicacion6
			// 
			this->lblInserMedicacion6->AutoSize = true;
			this->lblInserMedicacion6->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion6->Location = System::Drawing::Point(398, 239);
			this->lblInserMedicacion6->Name = L"lblInserMedicacion6";
			this->lblInserMedicacion6->Size = System::Drawing::Size(150, 37);
			this->lblInserMedicacion6->TabIndex = 76;
			this->lblInserMedicacion6->Text = L"Costo Total";
			// 
			// txtInserMedicacion5
			// 
			this->txtInserMedicacion5->Location = System::Drawing::Point(403, 192);
			this->txtInserMedicacion5->Name = L"txtInserMedicacion5";
			this->txtInserMedicacion5->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion5->TabIndex = 75;
			// 
			// lblInserMedicacion5
			// 
			this->lblInserMedicacion5->AutoSize = true;
			this->lblInserMedicacion5->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion5->Location = System::Drawing::Point(398, 147);
			this->lblInserMedicacion5->Name = L"lblInserMedicacion5";
			this->lblInserMedicacion5->Size = System::Drawing::Size(90, 37);
			this->lblInserMedicacion5->TabIndex = 74;
			this->lblInserMedicacion5->Text = L"Precio";
			// 
			// txtInserMedicacion4
			// 
			this->txtInserMedicacion4->Location = System::Drawing::Point(403, 99);
			this->txtInserMedicacion4->Name = L"txtInserMedicacion4";
			this->txtInserMedicacion4->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion4->TabIndex = 73;
			// 
			// lblInserMedicacion4
			// 
			this->lblInserMedicacion4->AutoSize = true;
			this->lblInserMedicacion4->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion4->Location = System::Drawing::Point(398, 55);
			this->lblInserMedicacion4->Name = L"lblInserMedicacion4";
			this->lblInserMedicacion4->Size = System::Drawing::Size(125, 37);
			this->lblInserMedicacion4->TabIndex = 72;
			this->lblInserMedicacion4->Text = L"Cantidad";
			// 
			// bInserMedicacion
			// 
			this->bInserMedicacion->BackColor = System::Drawing::Color::Transparent;
			this->bInserMedicacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bInserMedicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bInserMedicacion->ForeColor = System::Drawing::Color::White;
			this->bInserMedicacion->Location = System::Drawing::Point(86, 372);
			this->bInserMedicacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bInserMedicacion->Name = L"bInserMedicacion";
			this->bInserMedicacion->Size = System::Drawing::Size(210, 45);
			this->bInserMedicacion->TabIndex = 71;
			this->bInserMedicacion->Text = L"Insertar";
			this->bInserMedicacion->UseVisualStyleBackColor = false;
			this->bInserMedicacion->Click += gcnew System::EventHandler(this, &PopUpMenu::bInserMedicacion_Click);
			// 
			// txtInserMedicacion2
			// 
			this->txtInserMedicacion2->Location = System::Drawing::Point(86, 192);
			this->txtInserMedicacion2->Name = L"txtInserMedicacion2";
			this->txtInserMedicacion2->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion2->TabIndex = 70;
			// 
			// lblInserMedicacion2
			// 
			this->lblInserMedicacion2->AutoSize = true;
			this->lblInserMedicacion2->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion2->Location = System::Drawing::Point(81, 147);
			this->lblInserMedicacion2->Name = L"lblInserMedicacion2";
			this->lblInserMedicacion2->Size = System::Drawing::Size(133, 37);
			this->lblInserMedicacion2->TabIndex = 69;
			this->lblInserMedicacion2->Text = L"ID Animal";
			// 
			// txtInserMedicacion1
			// 
			this->txtInserMedicacion1->Location = System::Drawing::Point(86, 99);
			this->txtInserMedicacion1->Name = L"txtInserMedicacion1";
			this->txtInserMedicacion1->Size = System::Drawing::Size(210, 42);
			this->txtInserMedicacion1->TabIndex = 68;
			// 
			// lblInserMedicacion1
			// 
			this->lblInserMedicacion1->AutoSize = true;
			this->lblInserMedicacion1->BackColor = System::Drawing::Color::Teal;
			this->lblInserMedicacion1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserMedicacion1->Location = System::Drawing::Point(81, 55);
			this->lblInserMedicacion1->Name = L"lblInserMedicacion1";
			this->lblInserMedicacion1->Size = System::Drawing::Size(249, 37);
			this->lblInserMedicacion1->TabIndex = 67;
			this->lblInserMedicacion1->Text = L"Código Medicación";
			// 
			// btabModif
			// 
			this->btabModif->Controls->Add(this->tabModificacion);
			this->btabModif->Location = System::Drawing::Point(4, 48);
			this->btabModif->Name = L"btabModif";
			this->btabModif->Padding = System::Windows::Forms::Padding(3);
			this->btabModif->Size = System::Drawing::Size(921, 493);
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
			this->btabModifPais->Controls->Add(this->txtModifPais2);
			this->btabModifPais->Controls->Add(this->lblModifPais2);
			this->btabModifPais->Controls->Add(this->bModifPais);
			this->btabModifPais->Controls->Add(this->txtModifPais1);
			this->btabModifPais->Controls->Add(this->lblModifPais1);
			this->btabModifPais->ForeColor = System::Drawing::Color::White;
			this->btabModifPais->Location = System::Drawing::Point(4, 45);
			this->btabModifPais->Name = L"btabModifPais";
			this->btabModifPais->Padding = System::Windows::Forms::Padding(3);
			this->btabModifPais->Size = System::Drawing::Size(917, 451);
			this->btabModifPais->TabIndex = 0;
			this->btabModifPais->Text = L"País";
			// 
			// txtModifPais2
			// 
			this->txtModifPais2->Location = System::Drawing::Point(75, 219);
			this->txtModifPais2->Name = L"txtModifPais2";
			this->txtModifPais2->Size = System::Drawing::Size(210, 42);
			this->txtModifPais2->TabIndex = 43;
			// 
			// lblModifPais2
			// 
			this->lblModifPais2->AutoSize = true;
			this->lblModifPais2->BackColor = System::Drawing::Color::Teal;
			this->lblModifPais2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifPais2->Location = System::Drawing::Point(70, 176);
			this->lblModifPais2->Name = L"lblModifPais2";
			this->lblModifPais2->Size = System::Drawing::Size(168, 37);
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
			this->txtModifPais1->Location = System::Drawing::Point(75, 105);
			this->txtModifPais1->Name = L"txtModifPais1";
			this->txtModifPais1->Size = System::Drawing::Size(210, 42);
			this->txtModifPais1->TabIndex = 1;
			// 
			// lblModifPais1
			// 
			this->lblModifPais1->AutoSize = true;
			this->lblModifPais1->BackColor = System::Drawing::Color::Teal;
			this->lblModifPais1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifPais1->Location = System::Drawing::Point(70, 59);
			this->lblModifPais1->Name = L"lblModifPais1";
			this->lblModifPais1->Size = System::Drawing::Size(158, 37);
			this->lblModifPais1->TabIndex = 0;
			this->lblModifPais1->Text = L"Código País";
			// 
			// btabModifCdd
			// 
			this->btabModifCdd->BackColor = System::Drawing::Color::Teal;
			this->btabModifCdd->Controls->Add(this->txtModifCiudad3);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad3);
			this->btabModifCdd->Controls->Add(this->bModifCiudad);
			this->btabModifCdd->Controls->Add(this->txtModifCiudad2);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad2);
			this->btabModifCdd->Controls->Add(this->txtModifCiudad1);
			this->btabModifCdd->Controls->Add(this->lblModifCiudad1);
			this->btabModifCdd->Location = System::Drawing::Point(4, 45);
			this->btabModifCdd->Name = L"btabModifCdd";
			this->btabModifCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabModifCdd->Size = System::Drawing::Size(917, 451);
			this->btabModifCdd->TabIndex = 1;
			this->btabModifCdd->Text = L"Ciudad";
			// 
			// txtModifCiudad3
			// 
			this->txtModifCiudad3->Location = System::Drawing::Point(75, 257);
			this->txtModifCiudad3->Name = L"txtModifCiudad3";
			this->txtModifCiudad3->Size = System::Drawing::Size(210, 42);
			this->txtModifCiudad3->TabIndex = 42;
			// 
			// lblModifCiudad3
			// 
			this->lblModifCiudad3->AutoSize = true;
			this->lblModifCiudad3->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad3->Location = System::Drawing::Point(70, 224);
			this->lblModifCiudad3->Name = L"lblModifCiudad3";
			this->lblModifCiudad3->Size = System::Drawing::Size(207, 37);
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
			this->txtModifCiudad2->Size = System::Drawing::Size(210, 42);
			this->txtModifCiudad2->TabIndex = 5;
			// 
			// lblModifCiudad2
			// 
			this->lblModifCiudad2->AutoSize = true;
			this->lblModifCiudad2->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad2->Location = System::Drawing::Point(70, 131);
			this->lblModifCiudad2->Name = L"lblModifCiudad2";
			this->lblModifCiudad2->Size = System::Drawing::Size(197, 37);
			this->lblModifCiudad2->TabIndex = 4;
			this->lblModifCiudad2->Text = L"Código Ciudad";
			// 
			// txtModifCiudad1
			// 
			this->txtModifCiudad1->Location = System::Drawing::Point(75, 72);
			this->txtModifCiudad1->Name = L"txtModifCiudad1";
			this->txtModifCiudad1->Size = System::Drawing::Size(210, 42);
			this->txtModifCiudad1->TabIndex = 3;
			// 
			// lblModifCiudad1
			// 
			this->lblModifCiudad1->AutoSize = true;
			this->lblModifCiudad1->BackColor = System::Drawing::Color::Teal;
			this->lblModifCiudad1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCiudad1->Location = System::Drawing::Point(70, 39);
			this->lblModifCiudad1->Name = L"lblModifCiudad1";
			this->lblModifCiudad1->Size = System::Drawing::Size(158, 37);
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
			this->btabModifClt->Location = System::Drawing::Point(4, 45);
			this->btabModifClt->Name = L"btabModifClt";
			this->btabModifClt->Size = System::Drawing::Size(917, 451);
			this->btabModifClt->TabIndex = 2;
			this->btabModifClt->Text = L"Cliente";
			// 
			// txtModifCliente6
			// 
			this->txtModifCliente6->Location = System::Drawing::Point(371, 263);
			this->txtModifCliente6->Name = L"txtModifCliente6";
			this->txtModifCliente6->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente6->TabIndex = 55;
			// 
			// lblModifCliente6
			// 
			this->lblModifCliente6->AutoSize = true;
			this->lblModifCliente6->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente6->Location = System::Drawing::Point(366, 230);
			this->lblModifCliente6->Name = L"lblModifCliente6";
			this->lblModifCliente6->Size = System::Drawing::Size(118, 37);
			this->lblModifCliente6->TabIndex = 54;
			this->lblModifCliente6->Text = L"Teléfono";
			// 
			// txtModifCliente5
			// 
			this->txtModifCliente5->Location = System::Drawing::Point(371, 170);
			this->txtModifCliente5->Name = L"txtModifCliente5";
			this->txtModifCliente5->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente5->TabIndex = 53;
			// 
			// lblModifCliente5
			// 
			this->lblModifCliente5->AutoSize = true;
			this->lblModifCliente5->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente5->Location = System::Drawing::Point(366, 137);
			this->lblModifCliente5->Name = L"lblModifCliente5";
			this->lblModifCliente5->Size = System::Drawing::Size(197, 37);
			this->lblModifCliente5->TabIndex = 52;
			this->lblModifCliente5->Text = L"Código Ciudad";
			// 
			// txtModifCliente4
			// 
			this->txtModifCliente4->Location = System::Drawing::Point(371, 78);
			this->txtModifCliente4->Name = L"txtModifCliente4";
			this->txtModifCliente4->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente4->TabIndex = 51;
			// 
			// lblModifCliente4
			// 
			this->lblModifCliente4->AutoSize = true;
			this->lblModifCliente4->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente4->Location = System::Drawing::Point(366, 45);
			this->lblModifCliente4->Name = L"lblModifCliente4";
			this->lblModifCliente4->Size = System::Drawing::Size(158, 37);
			this->lblModifCliente4->TabIndex = 50;
			this->lblModifCliente4->Text = L"Código País";
			// 
			// txtModifCliente3
			// 
			this->txtModifCliente3->Location = System::Drawing::Point(75, 263);
			this->txtModifCliente3->Name = L"txtModifCliente3";
			this->txtModifCliente3->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente3->TabIndex = 49;
			// 
			// lblModifCliente3
			// 
			this->lblModifCliente3->AutoSize = true;
			this->lblModifCliente3->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente3->Location = System::Drawing::Point(70, 230);
			this->lblModifCliente3->Name = L"lblModifCliente3";
			this->lblModifCliente3->Size = System::Drawing::Size(128, 37);
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
			this->bModifCliente->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifCliente_Click);
			// 
			// txtModifCliente2
			// 
			this->txtModifCliente2->Location = System::Drawing::Point(75, 170);
			this->txtModifCliente2->Name = L"txtModifCliente2";
			this->txtModifCliente2->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente2->TabIndex = 46;
			// 
			// lblModifCliente2
			// 
			this->lblModifCliente2->AutoSize = true;
			this->lblModifCliente2->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente2->Location = System::Drawing::Point(70, 137);
			this->lblModifCliente2->Name = L"lblModifCliente2";
			this->lblModifCliente2->Size = System::Drawing::Size(205, 37);
			this->lblModifCliente2->TabIndex = 45;
			this->lblModifCliente2->Text = L"Nombre Cliente";
			// 
			// txtModifCliente1
			// 
			this->txtModifCliente1->Location = System::Drawing::Point(75, 78);
			this->txtModifCliente1->Name = L"txtModifCliente1";
			this->txtModifCliente1->Size = System::Drawing::Size(210, 42);
			this->txtModifCliente1->TabIndex = 44;
			// 
			// lblModifCliente1
			// 
			this->lblModifCliente1->AutoSize = true;
			this->lblModifCliente1->BackColor = System::Drawing::Color::Teal;
			this->lblModifCliente1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifCliente1->Location = System::Drawing::Point(70, 45);
			this->lblModifCliente1->Name = L"lblModifCliente1";
			this->lblModifCliente1->Size = System::Drawing::Size(204, 37);
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
			this->btabModifMasc->Location = System::Drawing::Point(4, 45);
			this->btabModifMasc->Name = L"btabModifMasc";
			this->btabModifMasc->Size = System::Drawing::Size(917, 451);
			this->btabModifMasc->TabIndex = 3;
			this->btabModifMasc->Text = L"Mascota";
			// 
			// txtModifMascota4
			// 
			this->txtModifMascota4->Location = System::Drawing::Point(379, 176);
			this->txtModifMascota4->Name = L"txtModifMascota4";
			this->txtModifMascota4->Size = System::Drawing::Size(210, 42);
			this->txtModifMascota4->TabIndex = 64;
			// 
			// lblModifMascota4
			// 
			this->lblModifMascota4->AutoSize = true;
			this->lblModifMascota4->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota4->Location = System::Drawing::Point(374, 143);
			this->lblModifMascota4->Name = L"lblModifMascota4";
			this->lblModifMascota4->Size = System::Drawing::Size(123, 37);
			this->lblModifMascota4->TabIndex = 63;
			this->lblModifMascota4->Text = L"Castrado";
			// 
			// txtModifMascota3
			// 
			this->txtModifMascota3->Location = System::Drawing::Point(379, 84);
			this->txtModifMascota3->Name = L"txtModifMascota3";
			this->txtModifMascota3->Size = System::Drawing::Size(210, 42);
			this->txtModifMascota3->TabIndex = 62;
			// 
			// lblModifMascota3
			// 
			this->lblModifMascota3->AutoSize = true;
			this->lblModifMascota3->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota3->Location = System::Drawing::Point(374, 51);
			this->lblModifMascota3->Name = L"lblModifMascota3";
			this->lblModifMascota3->Size = System::Drawing::Size(222, 37);
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
			this->bModifMascota->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifMascota_Click);
			// 
			// txtModifMascota2
			// 
			this->txtModifMascota2->Location = System::Drawing::Point(75, 176);
			this->txtModifMascota2->Name = L"txtModifMascota2";
			this->txtModifMascota2->Size = System::Drawing::Size(210, 42);
			this->txtModifMascota2->TabIndex = 59;
			// 
			// lblModifMascota2
			// 
			this->lblModifMascota2->AutoSize = true;
			this->lblModifMascota2->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota2->Location = System::Drawing::Point(70, 143);
			this->lblModifMascota2->Name = L"lblModifMascota2";
			this->lblModifMascota2->Size = System::Drawing::Size(133, 37);
			this->lblModifMascota2->TabIndex = 58;
			this->lblModifMascota2->Text = L"ID Animal";
			// 
			// txtModifMascota1
			// 
			this->txtModifMascota1->Location = System::Drawing::Point(75, 84);
			this->txtModifMascota1->Name = L"txtModifMascota1";
			this->txtModifMascota1->Size = System::Drawing::Size(210, 42);
			this->txtModifMascota1->TabIndex = 57;
			// 
			// lblModifMascota1
			// 
			this->lblModifMascota1->AutoSize = true;
			this->lblModifMascota1->BackColor = System::Drawing::Color::Teal;
			this->lblModifMascota1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMascota1->Location = System::Drawing::Point(70, 51);
			this->lblModifMascota1->Name = L"lblModifMascota1";
			this->lblModifMascota1->Size = System::Drawing::Size(204, 37);
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
			this->btabModifVisita->Location = System::Drawing::Point(4, 45);
			this->btabModifVisita->Name = L"btabModifVisita";
			this->btabModifVisita->Size = System::Drawing::Size(917, 451);
			this->btabModifVisita->TabIndex = 4;
			this->btabModifVisita->Text = L"Visita";
			// 
			// txtModifVisita3
			// 
			this->txtModifVisita3->Location = System::Drawing::Point(75, 275);
			this->txtModifVisita3->Name = L"txtModifVisita3";
			this->txtModifVisita3->Size = System::Drawing::Size(210, 42);
			this->txtModifVisita3->TabIndex = 67;
			// 
			// lblModifVisita3
			// 
			this->lblModifVisita3->AutoSize = true;
			this->lblModifVisita3->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita3->Location = System::Drawing::Point(70, 242);
			this->lblModifVisita3->Name = L"lblModifVisita3";
			this->lblModifVisita3->Size = System::Drawing::Size(196, 37);
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
			this->bModifVisita->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifVisita_Click);
			// 
			// txtModifVisita2
			// 
			this->txtModifVisita2->Location = System::Drawing::Point(75, 179);
			this->txtModifVisita2->Name = L"txtModifVisita2";
			this->txtModifVisita2->Size = System::Drawing::Size(210, 42);
			this->txtModifVisita2->TabIndex = 64;
			// 
			// lblModifVisita2
			// 
			this->lblModifVisita2->AutoSize = true;
			this->lblModifVisita2->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita2->Location = System::Drawing::Point(70, 146);
			this->lblModifVisita2->Name = L"lblModifVisita2";
			this->lblModifVisita2->Size = System::Drawing::Size(133, 37);
			this->lblModifVisita2->TabIndex = 63;
			this->lblModifVisita2->Text = L"ID Animal";
			// 
			// txtModifVisita1
			// 
			this->txtModifVisita1->Location = System::Drawing::Point(75, 87);
			this->txtModifVisita1->Name = L"txtModifVisita1";
			this->txtModifVisita1->Size = System::Drawing::Size(210, 42);
			this->txtModifVisita1->TabIndex = 62;
			// 
			// lblModifVisita1
			// 
			this->lblModifVisita1->AutoSize = true;
			this->lblModifVisita1->BackColor = System::Drawing::Color::Teal;
			this->lblModifVisita1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifVisita1->Location = System::Drawing::Point(70, 54);
			this->lblModifVisita1->Name = L"lblModifVisita1";
			this->lblModifVisita1->Size = System::Drawing::Size(177, 37);
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
			this->btabModifTrat->Location = System::Drawing::Point(4, 45);
			this->btabModifTrat->Name = L"btabModifTrat";
			this->btabModifTrat->Size = System::Drawing::Size(917, 451);
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
			this->bModifTratamiento->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifTratamiento_Click);
			// 
			// txtModifTratamiento2
			// 
			this->txtModifTratamiento2->Location = System::Drawing::Point(75, 191);
			this->txtModifTratamiento2->Name = L"txtModifTratamiento2";
			this->txtModifTratamiento2->Size = System::Drawing::Size(210, 42);
			this->txtModifTratamiento2->TabIndex = 71;
			// 
			// lblModifTratamiento2
			// 
			this->lblModifTratamiento2->AutoSize = true;
			this->lblModifTratamiento2->BackColor = System::Drawing::Color::Teal;
			this->lblModifTratamiento2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifTratamiento2->Location = System::Drawing::Point(70, 158);
			this->lblModifTratamiento2->Name = L"lblModifTratamiento2";
			this->lblModifTratamiento2->Size = System::Drawing::Size(90, 37);
			this->lblModifTratamiento2->TabIndex = 70;
			this->lblModifTratamiento2->Text = L"Precio";
			// 
			// txtModifTratamiento1
			// 
			this->txtModifTratamiento1->Location = System::Drawing::Point(75, 99);
			this->txtModifTratamiento1->Name = L"txtModifTratamiento1";
			this->txtModifTratamiento1->Size = System::Drawing::Size(210, 42);
			this->txtModifTratamiento1->TabIndex = 69;
			// 
			// lblModifTratamiento1
			// 
			this->lblModifTratamiento1->AutoSize = true;
			this->lblModifTratamiento1->BackColor = System::Drawing::Color::Teal;
			this->lblModifTratamiento1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifTratamiento1->Location = System::Drawing::Point(70, 66);
			this->lblModifTratamiento1->Name = L"lblModifTratamiento1";
			this->lblModifTratamiento1->Size = System::Drawing::Size(254, 37);
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
			this->btabModifMed->Location = System::Drawing::Point(4, 45);
			this->btabModifMed->Name = L"btabModifMed";
			this->btabModifMed->Size = System::Drawing::Size(917, 451);
			this->btabModifMed->TabIndex = 6;
			this->btabModifMed->Text = L"Medicación";
			// 
			// txtModifMedicacion5
			// 
			this->txtModifMedicacion5->Location = System::Drawing::Point(392, 268);
			this->txtModifMedicacion5->Name = L"txtModifMedicacion5";
			this->txtModifMedicacion5->Size = System::Drawing::Size(210, 42);
			this->txtModifMedicacion5->TabIndex = 66;
			// 
			// lblModifMedicacion5
			// 
			this->lblModifMedicacion5->AutoSize = true;
			this->lblModifMedicacion5->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion5->Location = System::Drawing::Point(387, 235);
			this->lblModifMedicacion5->Name = L"lblModifMedicacion5";
			this->lblModifMedicacion5->Size = System::Drawing::Size(150, 37);
			this->lblModifMedicacion5->TabIndex = 65;
			this->lblModifMedicacion5->Text = L"Costo Total";
			// 
			// txtModifMedicacion4
			// 
			this->txtModifMedicacion4->Location = System::Drawing::Point(392, 188);
			this->txtModifMedicacion4->Name = L"txtModifMedicacion4";
			this->txtModifMedicacion4->Size = System::Drawing::Size(210, 42);
			this->txtModifMedicacion4->TabIndex = 64;
			// 
			// lblModifMedicacion4
			// 
			this->lblModifMedicacion4->AutoSize = true;
			this->lblModifMedicacion4->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion4->Location = System::Drawing::Point(387, 143);
			this->lblModifMedicacion4->Name = L"lblModifMedicacion4";
			this->lblModifMedicacion4->Size = System::Drawing::Size(90, 37);
			this->lblModifMedicacion4->TabIndex = 63;
			this->lblModifMedicacion4->Text = L"Precio";
			// 
			// txtModifMedicacion3
			// 
			this->txtModifMedicacion3->Location = System::Drawing::Point(392, 95);
			this->txtModifMedicacion3->Name = L"txtModifMedicacion3";
			this->txtModifMedicacion3->Size = System::Drawing::Size(210, 42);
			this->txtModifMedicacion3->TabIndex = 62;
			// 
			// lblModifMedicacion3
			// 
			this->lblModifMedicacion3->AutoSize = true;
			this->lblModifMedicacion3->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion3->Location = System::Drawing::Point(387, 51);
			this->lblModifMedicacion3->Name = L"lblModifMedicacion3";
			this->lblModifMedicacion3->Size = System::Drawing::Size(125, 37);
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
			this->bModifMedicacion->Click += gcnew System::EventHandler(this, &PopUpMenu::bModifMedicacion_Click);
			// 
			// txtModifMedicacion2
			// 
			this->txtModifMedicacion2->Location = System::Drawing::Point(75, 188);
			this->txtModifMedicacion2->Name = L"txtModifMedicacion2";
			this->txtModifMedicacion2->Size = System::Drawing::Size(210, 42);
			this->txtModifMedicacion2->TabIndex = 59;
			// 
			// lblModifMedicacion2
			// 
			this->lblModifMedicacion2->AutoSize = true;
			this->lblModifMedicacion2->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion2->Location = System::Drawing::Point(70, 143);
			this->lblModifMedicacion2->Name = L"lblModifMedicacion2";
			this->lblModifMedicacion2->Size = System::Drawing::Size(133, 37);
			this->lblModifMedicacion2->TabIndex = 58;
			this->lblModifMedicacion2->Text = L"ID Animal";
			// 
			// txtModifMedicacion1
			// 
			this->txtModifMedicacion1->Location = System::Drawing::Point(75, 95);
			this->txtModifMedicacion1->Name = L"txtModifMedicacion1";
			this->txtModifMedicacion1->Size = System::Drawing::Size(210, 42);
			this->txtModifMedicacion1->TabIndex = 57;
			// 
			// lblModifMedicacion1
			// 
			this->lblModifMedicacion1->AutoSize = true;
			this->lblModifMedicacion1->BackColor = System::Drawing::Color::Teal;
			this->lblModifMedicacion1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblModifMedicacion1->Location = System::Drawing::Point(70, 51);
			this->lblModifMedicacion1->Name = L"lblModifMedicacion1";
			this->lblModifMedicacion1->Size = System::Drawing::Size(249, 37);
			this->lblModifMedicacion1->TabIndex = 56;
			this->lblModifMedicacion1->Text = L"Código Medicación";
			// 
			// btabCons
			// 
			this->btabCons->Controls->Add(this->tabConsulta);
			this->btabCons->Location = System::Drawing::Point(4, 48);
			this->btabCons->Name = L"btabCons";
			this->btabCons->Size = System::Drawing::Size(921, 493);
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
			this->btabConsPais->BackColor = System::Drawing::Color::Teal;
			this->btabConsPais->Controls->Add(this->txtBusqPais2);
			this->btabConsPais->Controls->Add(this->lblBusqPais2);
			this->btabConsPais->Controls->Add(this->bBuscarPais);
			this->btabConsPais->Controls->Add(this->txtBusqPais1);
			this->btabConsPais->Controls->Add(this->lblBusqPais1);
			this->btabConsPais->Location = System::Drawing::Point(4, 45);
			this->btabConsPais->Name = L"btabConsPais";
			this->btabConsPais->Padding = System::Windows::Forms::Padding(3);
			this->btabConsPais->Size = System::Drawing::Size(917, 451);
			this->btabConsPais->TabIndex = 0;
			this->btabConsPais->Text = L"País";
			// 
			// txtBusqPais2
			// 
			this->txtBusqPais2->Location = System::Drawing::Point(97, 219);
			this->txtBusqPais2->Name = L"txtBusqPais2";
			this->txtBusqPais2->Size = System::Drawing::Size(210, 42);
			this->txtBusqPais2->TabIndex = 48;
			this->txtBusqPais2->Visible = false;
			// 
			// lblBusqPais2
			// 
			this->lblBusqPais2->AutoSize = true;
			this->lblBusqPais2->BackColor = System::Drawing::Color::Teal;
			this->lblBusqPais2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqPais2->Location = System::Drawing::Point(92, 176);
			this->lblBusqPais2->Name = L"lblBusqPais2";
			this->lblBusqPais2->Size = System::Drawing::Size(168, 37);
			this->lblBusqPais2->TabIndex = 47;
			this->lblBusqPais2->Text = L"Nombre País";
			this->lblBusqPais2->Visible = false;
			// 
			// bBuscarPais
			// 
			this->bBuscarPais->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarPais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarPais->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarPais->ForeColor = System::Drawing::Color::White;
			this->bBuscarPais->Location = System::Drawing::Point(97, 328);
			this->bBuscarPais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarPais->Name = L"bBuscarPais";
			this->bBuscarPais->Size = System::Drawing::Size(210, 45);
			this->bBuscarPais->TabIndex = 46;
			this->bBuscarPais->Text = L"Buscar";
			this->bBuscarPais->UseVisualStyleBackColor = false;
			this->bBuscarPais->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarPais_Click);
			// 
			// txtBusqPais1
			// 
			this->txtBusqPais1->Location = System::Drawing::Point(97, 105);
			this->txtBusqPais1->Name = L"txtBusqPais1";
			this->txtBusqPais1->Size = System::Drawing::Size(210, 42);
			this->txtBusqPais1->TabIndex = 45;
			// 
			// lblBusqPais1
			// 
			this->lblBusqPais1->AutoSize = true;
			this->lblBusqPais1->BackColor = System::Drawing::Color::Teal;
			this->lblBusqPais1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqPais1->Location = System::Drawing::Point(92, 59);
			this->lblBusqPais1->Name = L"lblBusqPais1";
			this->lblBusqPais1->Size = System::Drawing::Size(158, 37);
			this->lblBusqPais1->TabIndex = 44;
			this->lblBusqPais1->Text = L"Código País";
			// 
			// btabConsCdd
			// 
			this->btabConsCdd->BackColor = System::Drawing::Color::Teal;
			this->btabConsCdd->Controls->Add(this->txtBusqCiudad3);
			this->btabConsCdd->Controls->Add(this->lblBusqCiudad3);
			this->btabConsCdd->Controls->Add(this->bBuscarCiudad);
			this->btabConsCdd->Controls->Add(this->txtBusqCiudad2);
			this->btabConsCdd->Controls->Add(this->lblBusqCiudad2);
			this->btabConsCdd->Controls->Add(this->txtBusqCiudad1);
			this->btabConsCdd->Controls->Add(this->lblBusqCiudad1);
			this->btabConsCdd->Location = System::Drawing::Point(4, 45);
			this->btabConsCdd->Name = L"btabConsCdd";
			this->btabConsCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabConsCdd->Size = System::Drawing::Size(917, 451);
			this->btabConsCdd->TabIndex = 1;
			this->btabConsCdd->Text = L"Ciudad";
			// 
			// txtBusqCiudad3
			// 
			this->txtBusqCiudad3->Location = System::Drawing::Point(391, 105);
			this->txtBusqCiudad3->Name = L"txtBusqCiudad3";
			this->txtBusqCiudad3->Size = System::Drawing::Size(210, 42);
			this->txtBusqCiudad3->TabIndex = 49;
			this->txtBusqCiudad3->Visible = false;
			// 
			// lblBusqCiudad3
			// 
			this->lblBusqCiudad3->AutoSize = true;
			this->lblBusqCiudad3->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCiudad3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCiudad3->Location = System::Drawing::Point(386, 72);
			this->lblBusqCiudad3->Name = L"lblBusqCiudad3";
			this->lblBusqCiudad3->Size = System::Drawing::Size(207, 37);
			this->lblBusqCiudad3->TabIndex = 48;
			this->lblBusqCiudad3->Text = L"Nombre Ciudad";
			this->lblBusqCiudad3->Visible = false;
			// 
			// bBuscarCiudad
			// 
			this->bBuscarCiudad->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarCiudad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarCiudad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarCiudad->ForeColor = System::Drawing::Color::White;
			this->bBuscarCiudad->Location = System::Drawing::Point(95, 309);
			this->bBuscarCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarCiudad->Name = L"bBuscarCiudad";
			this->bBuscarCiudad->Size = System::Drawing::Size(210, 45);
			this->bBuscarCiudad->TabIndex = 47;
			this->bBuscarCiudad->Text = L"Buscar";
			this->bBuscarCiudad->UseVisualStyleBackColor = false;
			this->bBuscarCiudad->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarCiudad_Click);
			// 
			// txtBusqCiudad2
			// 
			this->txtBusqCiudad2->Location = System::Drawing::Point(95, 197);
			this->txtBusqCiudad2->Name = L"txtBusqCiudad2";
			this->txtBusqCiudad2->Size = System::Drawing::Size(210, 42);
			this->txtBusqCiudad2->TabIndex = 46;
			// 
			// lblBusqCiudad2
			// 
			this->lblBusqCiudad2->AutoSize = true;
			this->lblBusqCiudad2->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCiudad2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCiudad2->Location = System::Drawing::Point(90, 164);
			this->lblBusqCiudad2->Name = L"lblBusqCiudad2";
			this->lblBusqCiudad2->Size = System::Drawing::Size(197, 37);
			this->lblBusqCiudad2->TabIndex = 45;
			this->lblBusqCiudad2->Text = L"Código Ciudad";
			// 
			// txtBusqCiudad1
			// 
			this->txtBusqCiudad1->Location = System::Drawing::Point(95, 105);
			this->txtBusqCiudad1->Name = L"txtBusqCiudad1";
			this->txtBusqCiudad1->Size = System::Drawing::Size(210, 42);
			this->txtBusqCiudad1->TabIndex = 44;
			// 
			// lblBusqCiudad1
			// 
			this->lblBusqCiudad1->AutoSize = true;
			this->lblBusqCiudad1->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCiudad1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCiudad1->Location = System::Drawing::Point(90, 72);
			this->lblBusqCiudad1->Name = L"lblBusqCiudad1";
			this->lblBusqCiudad1->Size = System::Drawing::Size(158, 37);
			this->lblBusqCiudad1->TabIndex = 43;
			this->lblBusqCiudad1->Text = L"Código País";
			// 
			// btabConsClt
			// 
			this->btabConsClt->BackColor = System::Drawing::Color::Teal;
			this->btabConsClt->Controls->Add(this->pBuscarCliente);
			this->btabConsClt->Controls->Add(this->txtBusqCliente2);
			this->btabConsClt->Controls->Add(this->lblBusqCliente2);
			this->btabConsClt->Controls->Add(this->txtBusqCliente1);
			this->btabConsClt->Controls->Add(this->lblBusqCliente1);
			this->btabConsClt->Controls->Add(this->bBuscarCliente);
			this->btabConsClt->Controls->Add(this->txtBusqCliente3);
			this->btabConsClt->Controls->Add(this->lblBusqCliente3);
			this->btabConsClt->Location = System::Drawing::Point(4, 45);
			this->btabConsClt->Name = L"btabConsClt";
			this->btabConsClt->Size = System::Drawing::Size(917, 451);
			this->btabConsClt->TabIndex = 2;
			this->btabConsClt->Text = L"Cliente";
			// 
			// pBuscarCliente
			// 
			this->pBuscarCliente->BackColor = System::Drawing::Color::Teal;
			this->pBuscarCliente->Controls->Add(this->lblBusqCliente4);
			this->pBuscarCliente->Controls->Add(this->txtBusqCliente6);
			this->pBuscarCliente->Controls->Add(this->txtBusqCliente4);
			this->pBuscarCliente->Controls->Add(this->lblBusqCliente6);
			this->pBuscarCliente->Controls->Add(this->lblBusqCliente5);
			this->pBuscarCliente->Controls->Add(this->txtBusqCliente5);
			this->pBuscarCliente->ForeColor = System::Drawing::Color::Teal;
			this->pBuscarCliente->Location = System::Drawing::Point(379, 35);
			this->pBuscarCliente->Name = L"pBuscarCliente";
			this->pBuscarCliente->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pBuscarCliente->Size = System::Drawing::Size(239, 303);
			this->pBuscarCliente->TabIndex = 115;
			this->pBuscarCliente->Visible = false;
			// 
			// lblBusqCliente4
			// 
			this->lblBusqCliente4->AutoSize = true;
			this->lblBusqCliente4->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente4->Location = System::Drawing::Point(15, 17);
			this->lblBusqCliente4->Name = L"lblBusqCliente4";
			this->lblBusqCliente4->Size = System::Drawing::Size(205, 37);
			this->lblBusqCliente4->TabIndex = 58;
			this->lblBusqCliente4->Text = L"Nombre Cliente";
			// 
			// txtBusqCliente6
			// 
			this->txtBusqCliente6->Location = System::Drawing::Point(20, 235);
			this->txtBusqCliente6->Name = L"txtBusqCliente6";
			this->txtBusqCliente6->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente6->TabIndex = 68;
			// 
			// txtBusqCliente4
			// 
			this->txtBusqCliente4->Location = System::Drawing::Point(20, 50);
			this->txtBusqCliente4->Name = L"txtBusqCliente4";
			this->txtBusqCliente4->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente4->TabIndex = 59;
			// 
			// lblBusqCliente6
			// 
			this->lblBusqCliente6->AutoSize = true;
			this->lblBusqCliente6->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente6->Location = System::Drawing::Point(15, 202);
			this->lblBusqCliente6->Name = L"lblBusqCliente6";
			this->lblBusqCliente6->Size = System::Drawing::Size(118, 37);
			this->lblBusqCliente6->TabIndex = 67;
			this->lblBusqCliente6->Text = L"Teléfono";
			// 
			// lblBusqCliente5
			// 
			this->lblBusqCliente5->AutoSize = true;
			this->lblBusqCliente5->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente5->Location = System::Drawing::Point(15, 109);
			this->lblBusqCliente5->Name = L"lblBusqCliente5";
			this->lblBusqCliente5->Size = System::Drawing::Size(128, 37);
			this->lblBusqCliente5->TabIndex = 61;
			this->lblBusqCliente5->Text = L"Dirección";
			// 
			// txtBusqCliente5
			// 
			this->txtBusqCliente5->Location = System::Drawing::Point(20, 142);
			this->txtBusqCliente5->Name = L"txtBusqCliente5";
			this->txtBusqCliente5->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente5->TabIndex = 62;
			// 
			// txtBusqCliente2
			// 
			this->txtBusqCliente2->Location = System::Drawing::Point(83, 176);
			this->txtBusqCliente2->Name = L"txtBusqCliente2";
			this->txtBusqCliente2->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente2->TabIndex = 66;
			// 
			// lblBusqCliente2
			// 
			this->lblBusqCliente2->AutoSize = true;
			this->lblBusqCliente2->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente2->Location = System::Drawing::Point(78, 143);
			this->lblBusqCliente2->Name = L"lblBusqCliente2";
			this->lblBusqCliente2->Size = System::Drawing::Size(197, 37);
			this->lblBusqCliente2->TabIndex = 65;
			this->lblBusqCliente2->Text = L"Código Ciudad";
			// 
			// txtBusqCliente1
			// 
			this->txtBusqCliente1->Location = System::Drawing::Point(83, 84);
			this->txtBusqCliente1->Name = L"txtBusqCliente1";
			this->txtBusqCliente1->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente1->TabIndex = 64;
			// 
			// lblBusqCliente1
			// 
			this->lblBusqCliente1->AutoSize = true;
			this->lblBusqCliente1->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente1->Location = System::Drawing::Point(78, 51);
			this->lblBusqCliente1->Name = L"lblBusqCliente1";
			this->lblBusqCliente1->Size = System::Drawing::Size(158, 37);
			this->lblBusqCliente1->TabIndex = 63;
			this->lblBusqCliente1->Text = L"Código País";
			// 
			// bBuscarCliente
			// 
			this->bBuscarCliente->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarCliente->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarCliente->ForeColor = System::Drawing::Color::White;
			this->bBuscarCliente->Location = System::Drawing::Point(83, 361);
			this->bBuscarCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarCliente->Name = L"bBuscarCliente";
			this->bBuscarCliente->Size = System::Drawing::Size(210, 45);
			this->bBuscarCliente->TabIndex = 60;
			this->bBuscarCliente->Text = L"Buscar";
			this->bBuscarCliente->UseVisualStyleBackColor = false;
			this->bBuscarCliente->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarCliente_Click);
			// 
			// txtBusqCliente3
			// 
			this->txtBusqCliente3->Location = System::Drawing::Point(83, 269);
			this->txtBusqCliente3->Name = L"txtBusqCliente3";
			this->txtBusqCliente3->Size = System::Drawing::Size(210, 42);
			this->txtBusqCliente3->TabIndex = 57;
			// 
			// lblBusqCliente3
			// 
			this->lblBusqCliente3->AutoSize = true;
			this->lblBusqCliente3->BackColor = System::Drawing::Color::Teal;
			this->lblBusqCliente3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqCliente3->Location = System::Drawing::Point(78, 236);
			this->lblBusqCliente3->Name = L"lblBusqCliente3";
			this->lblBusqCliente3->Size = System::Drawing::Size(204, 37);
			this->lblBusqCliente3->TabIndex = 56;
			this->lblBusqCliente3->Text = L"Número Cliente";
			// 
			// btabConsMasc
			// 
			this->btabConsMasc->BackColor = System::Drawing::Color::Teal;
			this->btabConsMasc->Controls->Add(this->pBuscarMascota);
			this->btabConsMasc->Controls->Add(this->bBuscarMascota);
			this->btabConsMasc->Controls->Add(this->txtBusqMascota2);
			this->btabConsMasc->Controls->Add(this->lblBusqMascota2);
			this->btabConsMasc->Controls->Add(this->txtBusqMascota1);
			this->btabConsMasc->Controls->Add(this->lblBusqMascota1);
			this->btabConsMasc->Location = System::Drawing::Point(4, 45);
			this->btabConsMasc->Name = L"btabConsMasc";
			this->btabConsMasc->Size = System::Drawing::Size(917, 451);
			this->btabConsMasc->TabIndex = 3;
			this->btabConsMasc->Text = L"Mascota";
			// 
			// pBuscarMascota
			// 
			this->pBuscarMascota->BackColor = System::Drawing::Color::Teal;
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota11);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota10);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota10);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota9);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota9);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota8);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota8);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota7);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota7);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota6);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota6);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota5);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota5);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota4);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota4);
			this->pBuscarMascota->Controls->Add(this->txtBusqMascota3);
			this->pBuscarMascota->Controls->Add(this->lblBusqMascota3);
			this->pBuscarMascota->ForeColor = System::Drawing::Color::Teal;
			this->pBuscarMascota->Location = System::Drawing::Point(313, 13);
			this->pBuscarMascota->Name = L"pBuscarMascota";
			this->pBuscarMascota->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pBuscarMascota->Size = System::Drawing::Size(554, 411);
			this->pBuscarMascota->TabIndex = 113;
			this->pBuscarMascota->Visible = false;
			// 
			// lblBusqMascota11
			// 
			this->lblBusqMascota11->AutoSize = true;
			this->lblBusqMascota11->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBusqMascota11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota11->Location = System::Drawing::Point(314, 374);
			this->lblBusqMascota11->Name = L"lblBusqMascota11";
			this->lblBusqMascota11->Size = System::Drawing::Size(140, 32);
			this->lblBusqMascota11->TabIndex = 129;
			this->lblBusqMascota11->Text = L"DD/MM/AA";
			// 
			// txtBusqMascota10
			// 
			this->txtBusqMascota10->Location = System::Drawing::Point(319, 336);
			this->txtBusqMascota10->Name = L"txtBusqMascota10";
			this->txtBusqMascota10->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota10->TabIndex = 128;
			// 
			// lblBusqMascota10
			// 
			this->lblBusqMascota10->AutoSize = true;
			this->lblBusqMascota10->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBusqMascota10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota10->Location = System::Drawing::Point(314, 303);
			this->lblBusqMascota10->Name = L"lblBusqMascota10";
			this->lblBusqMascota10->Size = System::Drawing::Size(243, 37);
			this->lblBusqMascota10->TabIndex = 127;
			this->lblBusqMascota10->Text = L"Fecha Última Visita";
			// 
			// txtBusqMascota9
			// 
			this->txtBusqMascota9->Location = System::Drawing::Point(319, 244);
			this->txtBusqMascota9->Name = L"txtBusqMascota9";
			this->txtBusqMascota9->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota9->TabIndex = 126;
			// 
			// lblBusqMascota9
			// 
			this->lblBusqMascota9->AutoSize = true;
			this->lblBusqMascota9->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota9->Location = System::Drawing::Point(314, 211);
			this->lblBusqMascota9->Name = L"lblBusqMascota9";
			this->lblBusqMascota9->Size = System::Drawing::Size(123, 37);
			this->lblBusqMascota9->TabIndex = 125;
			this->lblBusqMascota9->Text = L"Castrado";
			// 
			// txtBusqMascota8
			// 
			this->txtBusqMascota8->Location = System::Drawing::Point(319, 147);
			this->txtBusqMascota8->Name = L"txtBusqMascota8";
			this->txtBusqMascota8->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota8->TabIndex = 124;
			// 
			// lblBusqMascota8
			// 
			this->lblBusqMascota8->AutoSize = true;
			this->lblBusqMascota8->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota8->Location = System::Drawing::Point(314, 114);
			this->lblBusqMascota8->Name = L"lblBusqMascota8";
			this->lblBusqMascota8->Size = System::Drawing::Size(82, 37);
			this->lblBusqMascota8->TabIndex = 123;
			this->lblBusqMascota8->Text = L"Color";
			// 
			// txtBusqMascota7
			// 
			this->txtBusqMascota7->Location = System::Drawing::Point(319, 55);
			this->txtBusqMascota7->Name = L"txtBusqMascota7";
			this->txtBusqMascota7->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota7->TabIndex = 122;
			// 
			// lblBusqMascota7
			// 
			this->lblBusqMascota7->AutoSize = true;
			this->lblBusqMascota7->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota7->Location = System::Drawing::Point(314, 22);
			this->lblBusqMascota7->Name = L"lblBusqMascota7";
			this->lblBusqMascota7->Size = System::Drawing::Size(73, 37);
			this->lblBusqMascota7->TabIndex = 121;
			this->lblBusqMascota7->Text = L"Sexo";
			// 
			// txtBusqMascota6
			// 
			this->txtBusqMascota6->Location = System::Drawing::Point(36, 336);
			this->txtBusqMascota6->Name = L"txtBusqMascota6";
			this->txtBusqMascota6->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota6->TabIndex = 120;
			// 
			// lblBusqMascota6
			// 
			this->lblBusqMascota6->AutoSize = true;
			this->lblBusqMascota6->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota6->Location = System::Drawing::Point(31, 303);
			this->lblBusqMascota6->Name = L"lblBusqMascota6";
			this->lblBusqMascota6->Size = System::Drawing::Size(266, 37);
			this->lblBusqMascota6->TabIndex = 119;
			this->lblBusqMascota6->Text = L"Fecha de Nacimiento";
			// 
			// txtBusqMascota5
			// 
			this->txtBusqMascota5->Location = System::Drawing::Point(36, 239);
			this->txtBusqMascota5->Name = L"txtBusqMascota5";
			this->txtBusqMascota5->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota5->TabIndex = 118;
			// 
			// lblBusqMascota5
			// 
			this->lblBusqMascota5->AutoSize = true;
			this->lblBusqMascota5->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota5->Location = System::Drawing::Point(31, 206);
			this->lblBusqMascota5->Name = L"lblBusqMascota5";
			this->lblBusqMascota5->Size = System::Drawing::Size(73, 37);
			this->lblBusqMascota5->TabIndex = 117;
			this->lblBusqMascota5->Text = L"Raza";
			// 
			// txtBusqMascota4
			// 
			this->txtBusqMascota4->Location = System::Drawing::Point(36, 147);
			this->txtBusqMascota4->Name = L"txtBusqMascota4";
			this->txtBusqMascota4->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota4->TabIndex = 116;
			// 
			// lblBusqMascota4
			// 
			this->lblBusqMascota4->AutoSize = true;
			this->lblBusqMascota4->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota4->Location = System::Drawing::Point(31, 114);
			this->lblBusqMascota4->Name = L"lblBusqMascota4";
			this->lblBusqMascota4->Size = System::Drawing::Size(70, 37);
			this->lblBusqMascota4->TabIndex = 115;
			this->lblBusqMascota4->Text = L"Tipo";
			// 
			// txtBusqMascota3
			// 
			this->txtBusqMascota3->Location = System::Drawing::Point(36, 55);
			this->txtBusqMascota3->Name = L"txtBusqMascota3";
			this->txtBusqMascota3->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota3->TabIndex = 114;
			// 
			// lblBusqMascota3
			// 
			this->lblBusqMascota3->AutoSize = true;
			this->lblBusqMascota3->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota3->Location = System::Drawing::Point(31, 22);
			this->lblBusqMascota3->Name = L"lblBusqMascota3";
			this->lblBusqMascota3->Size = System::Drawing::Size(115, 37);
			this->lblBusqMascota3->TabIndex = 113;
			this->lblBusqMascota3->Text = L"Nombre";
			// 
			// bBuscarMascota
			// 
			this->bBuscarMascota->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarMascota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarMascota->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarMascota->ForeColor = System::Drawing::Color::White;
			this->bBuscarMascota->Location = System::Drawing::Point(67, 351);
			this->bBuscarMascota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarMascota->Name = L"bBuscarMascota";
			this->bBuscarMascota->Size = System::Drawing::Size(210, 45);
			this->bBuscarMascota->TabIndex = 95;
			this->bBuscarMascota->Text = L"Buscar";
			this->bBuscarMascota->UseVisualStyleBackColor = false;
			this->bBuscarMascota->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarMascota_Click);
			// 
			// txtBusqMascota2
			// 
			this->txtBusqMascota2->Location = System::Drawing::Point(67, 161);
			this->txtBusqMascota2->Name = L"txtBusqMascota2";
			this->txtBusqMascota2->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota2->TabIndex = 94;
			// 
			// lblBusqMascota2
			// 
			this->lblBusqMascota2->AutoSize = true;
			this->lblBusqMascota2->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota2->Location = System::Drawing::Point(62, 128);
			this->lblBusqMascota2->Name = L"lblBusqMascota2";
			this->lblBusqMascota2->Size = System::Drawing::Size(133, 37);
			this->lblBusqMascota2->TabIndex = 93;
			this->lblBusqMascota2->Text = L"ID Animal";
			// 
			// txtBusqMascota1
			// 
			this->txtBusqMascota1->Location = System::Drawing::Point(67, 69);
			this->txtBusqMascota1->Name = L"txtBusqMascota1";
			this->txtBusqMascota1->Size = System::Drawing::Size(210, 42);
			this->txtBusqMascota1->TabIndex = 92;
			// 
			// lblBusqMascota1
			// 
			this->lblBusqMascota1->AutoSize = true;
			this->lblBusqMascota1->BackColor = System::Drawing::Color::Teal;
			this->lblBusqMascota1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqMascota1->Location = System::Drawing::Point(62, 36);
			this->lblBusqMascota1->Name = L"lblBusqMascota1";
			this->lblBusqMascota1->Size = System::Drawing::Size(204, 37);
			this->lblBusqMascota1->TabIndex = 91;
			this->lblBusqMascota1->Text = L"Número Cliente";
			// 
			// btabConsVisita
			// 
			this->btabConsVisita->BackColor = System::Drawing::Color::Teal;
			this->btabConsVisita->Controls->Add(this->pBuscarVisita);
			this->btabConsVisita->Controls->Add(this->bBuscarVisita);
			this->btabConsVisita->Controls->Add(this->txtBusqVisita2);
			this->btabConsVisita->Controls->Add(this->lblBusqVisita2);
			this->btabConsVisita->Controls->Add(this->txtBusqVisita1);
			this->btabConsVisita->Controls->Add(this->lblBusqVisita1);
			this->btabConsVisita->Location = System::Drawing::Point(4, 45);
			this->btabConsVisita->Name = L"btabConsVisita";
			this->btabConsVisita->Size = System::Drawing::Size(917, 451);
			this->btabConsVisita->TabIndex = 4;
			this->btabConsVisita->Text = L"Visita";
			// 
			// pBuscarVisita
			// 
			this->pBuscarVisita->BackColor = System::Drawing::Color::Teal;
			this->pBuscarVisita->Controls->Add(this->lblBusqVisita3);
			this->pBuscarVisita->Controls->Add(this->lblBusqVisita6);
			this->pBuscarVisita->Controls->Add(this->txtBusqVisita3);
			this->pBuscarVisita->Controls->Add(this->txtBusqVisita5);
			this->pBuscarVisita->Controls->Add(this->lblBusqVisita4);
			this->pBuscarVisita->Controls->Add(this->lblBusqVisita5);
			this->pBuscarVisita->Controls->Add(this->txtBusqVisita4);
			this->pBuscarVisita->ForeColor = System::Drawing::Color::Teal;
			this->pBuscarVisita->Location = System::Drawing::Point(460, 31);
			this->pBuscarVisita->Name = L"pBuscarVisita";
			this->pBuscarVisita->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pBuscarVisita->Size = System::Drawing::Size(239, 303);
			this->pBuscarVisita->TabIndex = 114;
			this->pBuscarVisita->Visible = false;
			// 
			// lblBusqVisita3
			// 
			this->lblBusqVisita3->AutoSize = true;
			this->lblBusqVisita3->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita3->Location = System::Drawing::Point(13, 14);
			this->lblBusqVisita3->Name = L"lblBusqVisita3";
			this->lblBusqVisita3->Size = System::Drawing::Size(243, 37);
			this->lblBusqVisita3->TabIndex = 97;
			this->lblBusqVisita3->Text = L"Fecha Última Visita";
			// 
			// lblBusqVisita6
			// 
			this->lblBusqVisita6->AutoSize = true;
			this->lblBusqVisita6->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBusqVisita6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita6->Location = System::Drawing::Point(13, 85);
			this->lblBusqVisita6->Name = L"lblBusqVisita6";
			this->lblBusqVisita6->Size = System::Drawing::Size(140, 32);
			this->lblBusqVisita6->TabIndex = 103;
			this->lblBusqVisita6->Text = L"DD/MM/AA";
			// 
			// txtBusqVisita3
			// 
			this->txtBusqVisita3->Location = System::Drawing::Point(18, 47);
			this->txtBusqVisita3->Name = L"txtBusqVisita3";
			this->txtBusqVisita3->Size = System::Drawing::Size(210, 42);
			this->txtBusqVisita3->TabIndex = 98;
			// 
			// txtBusqVisita5
			// 
			this->txtBusqVisita5->Location = System::Drawing::Point(18, 251);
			this->txtBusqVisita5->Name = L"txtBusqVisita5";
			this->txtBusqVisita5->Size = System::Drawing::Size(210, 42);
			this->txtBusqVisita5->TabIndex = 102;
			// 
			// lblBusqVisita4
			// 
			this->lblBusqVisita4->AutoSize = true;
			this->lblBusqVisita4->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita4->Location = System::Drawing::Point(13, 126);
			this->lblBusqVisita4->Name = L"lblBusqVisita4";
			this->lblBusqVisita4->Size = System::Drawing::Size(166, 37);
			this->lblBusqVisita4->TabIndex = 99;
			this->lblBusqVisita4->Text = L"Total Factura";
			// 
			// lblBusqVisita5
			// 
			this->lblBusqVisita5->AutoSize = true;
			this->lblBusqVisita5->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita5->Location = System::Drawing::Point(13, 218);
			this->lblBusqVisita5->Name = L"lblBusqVisita5";
			this->lblBusqVisita5->Size = System::Drawing::Size(196, 37);
			this->lblBusqVisita5->TabIndex = 101;
			this->lblBusqVisita5->Text = L"Forma de Pago";
			// 
			// txtBusqVisita4
			// 
			this->txtBusqVisita4->Location = System::Drawing::Point(18, 159);
			this->txtBusqVisita4->Name = L"txtBusqVisita4";
			this->txtBusqVisita4->Size = System::Drawing::Size(210, 42);
			this->txtBusqVisita4->TabIndex = 100;
			// 
			// bBuscarVisita
			// 
			this->bBuscarVisita->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarVisita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarVisita->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarVisita->ForeColor = System::Drawing::Color::White;
			this->bBuscarVisita->Location = System::Drawing::Point(208, 366);
			this->bBuscarVisita->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarVisita->Name = L"bBuscarVisita";
			this->bBuscarVisita->Size = System::Drawing::Size(210, 45);
			this->bBuscarVisita->TabIndex = 96;
			this->bBuscarVisita->Text = L"Buscar";
			this->bBuscarVisita->UseVisualStyleBackColor = false;
			this->bBuscarVisita->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarVisita_Click);
			// 
			// txtBusqVisita2
			// 
			this->txtBusqVisita2->Location = System::Drawing::Point(208, 190);
			this->txtBusqVisita2->Name = L"txtBusqVisita2";
			this->txtBusqVisita2->Size = System::Drawing::Size(210, 42);
			this->txtBusqVisita2->TabIndex = 95;
			// 
			// lblBusqVisita2
			// 
			this->lblBusqVisita2->AutoSize = true;
			this->lblBusqVisita2->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita2->Location = System::Drawing::Point(203, 157);
			this->lblBusqVisita2->Name = L"lblBusqVisita2";
			this->lblBusqVisita2->Size = System::Drawing::Size(133, 37);
			this->lblBusqVisita2->TabIndex = 94;
			this->lblBusqVisita2->Text = L"ID Animal";
			// 
			// txtBusqVisita1
			// 
			this->txtBusqVisita1->Location = System::Drawing::Point(208, 78);
			this->txtBusqVisita1->Name = L"txtBusqVisita1";
			this->txtBusqVisita1->Size = System::Drawing::Size(210, 42);
			this->txtBusqVisita1->TabIndex = 93;
			// 
			// lblBusqVisita1
			// 
			this->lblBusqVisita1->AutoSize = true;
			this->lblBusqVisita1->BackColor = System::Drawing::Color::Teal;
			this->lblBusqVisita1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBusqVisita1->Location = System::Drawing::Point(203, 45);
			this->lblBusqVisita1->Name = L"lblBusqVisita1";
			this->lblBusqVisita1->Size = System::Drawing::Size(177, 37);
			this->lblBusqVisita1->TabIndex = 92;
			this->lblBusqVisita1->Text = L"Código Visita";
			// 
			// btabConsTrat
			// 
			this->btabConsTrat->BackColor = System::Drawing::Color::Teal;
			this->btabConsTrat->Controls->Add(this->pBuscarTratamiento);
			this->btabConsTrat->Controls->Add(this->bBuscarTratamiento);
			this->btabConsTrat->Controls->Add(this->txtBuscarTrat1);
			this->btabConsTrat->Controls->Add(this->lblBuscarTrat1);
			this->btabConsTrat->Location = System::Drawing::Point(4, 45);
			this->btabConsTrat->Name = L"btabConsTrat";
			this->btabConsTrat->Size = System::Drawing::Size(917, 451);
			this->btabConsTrat->TabIndex = 5;
			this->btabConsTrat->Text = L"Tratamiento";
			// 
			// pBuscarTratamiento
			// 
			this->pBuscarTratamiento->BackColor = System::Drawing::Color::Teal;
			this->pBuscarTratamiento->Controls->Add(this->lblBuscarTrat2);
			this->pBuscarTratamiento->Controls->Add(this->lblBuscarTrat5);
			this->pBuscarTratamiento->Controls->Add(this->txtBuscarTrat2);
			this->pBuscarTratamiento->Controls->Add(this->txtBuscarTrat4);
			this->pBuscarTratamiento->Controls->Add(this->lblBuscarTrat3);
			this->pBuscarTratamiento->Controls->Add(this->lblBuscarTrat4);
			this->pBuscarTratamiento->Controls->Add(this->txtBuscarTrat3);
			this->pBuscarTratamiento->ForeColor = System::Drawing::Color::Teal;
			this->pBuscarTratamiento->Location = System::Drawing::Point(467, 38);
			this->pBuscarTratamiento->Name = L"pBuscarTratamiento";
			this->pBuscarTratamiento->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pBuscarTratamiento->Size = System::Drawing::Size(239, 303);
			this->pBuscarTratamiento->TabIndex = 120;
			this->pBuscarTratamiento->Visible = false;
			// 
			// lblBuscarTrat2
			// 
			this->lblBuscarTrat2->AutoSize = true;
			this->lblBuscarTrat2->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarTrat2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarTrat2->Location = System::Drawing::Point(13, 14);
			this->lblBuscarTrat2->Name = L"lblBuscarTrat2";
			this->lblBuscarTrat2->Size = System::Drawing::Size(243, 37);
			this->lblBuscarTrat2->TabIndex = 97;
			this->lblBuscarTrat2->Text = L"Fecha Última Visita";
			// 
			// lblBuscarTrat5
			// 
			this->lblBuscarTrat5->AutoSize = true;
			this->lblBuscarTrat5->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarTrat5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarTrat5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarTrat5->Location = System::Drawing::Point(13, 85);
			this->lblBuscarTrat5->Name = L"lblBuscarTrat5";
			this->lblBuscarTrat5->Size = System::Drawing::Size(140, 32);
			this->lblBuscarTrat5->TabIndex = 103;
			this->lblBuscarTrat5->Text = L"DD/MM/AA";
			// 
			// txtBuscarTrat2
			// 
			this->txtBuscarTrat2->Location = System::Drawing::Point(18, 47);
			this->txtBuscarTrat2->Name = L"txtBuscarTrat2";
			this->txtBuscarTrat2->Size = System::Drawing::Size(210, 42);
			this->txtBuscarTrat2->TabIndex = 98;
			// 
			// txtBuscarTrat4
			// 
			this->txtBuscarTrat4->Location = System::Drawing::Point(18, 251);
			this->txtBuscarTrat4->Name = L"txtBuscarTrat4";
			this->txtBuscarTrat4->Size = System::Drawing::Size(210, 42);
			this->txtBuscarTrat4->TabIndex = 102;
			// 
			// lblBuscarTrat3
			// 
			this->lblBuscarTrat3->AutoSize = true;
			this->lblBuscarTrat3->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarTrat3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarTrat3->Location = System::Drawing::Point(13, 126);
			this->lblBuscarTrat3->Name = L"lblBuscarTrat3";
			this->lblBuscarTrat3->Size = System::Drawing::Size(166, 37);
			this->lblBuscarTrat3->TabIndex = 99;
			this->lblBuscarTrat3->Text = L"Total Factura";
			// 
			// lblBuscarTrat4
			// 
			this->lblBuscarTrat4->AutoSize = true;
			this->lblBuscarTrat4->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarTrat4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarTrat4->Location = System::Drawing::Point(13, 218);
			this->lblBuscarTrat4->Name = L"lblBuscarTrat4";
			this->lblBuscarTrat4->Size = System::Drawing::Size(196, 37);
			this->lblBuscarTrat4->TabIndex = 101;
			this->lblBuscarTrat4->Text = L"Forma de Pago";
			// 
			// txtBuscarTrat3
			// 
			this->txtBuscarTrat3->Location = System::Drawing::Point(18, 159);
			this->txtBuscarTrat3->Name = L"txtBuscarTrat3";
			this->txtBuscarTrat3->Size = System::Drawing::Size(210, 42);
			this->txtBuscarTrat3->TabIndex = 100;
			// 
			// bBuscarTratamiento
			// 
			this->bBuscarTratamiento->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarTratamiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarTratamiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarTratamiento->ForeColor = System::Drawing::Color::White;
			this->bBuscarTratamiento->Location = System::Drawing::Point(215, 285);
			this->bBuscarTratamiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarTratamiento->Name = L"bBuscarTratamiento";
			this->bBuscarTratamiento->Size = System::Drawing::Size(210, 45);
			this->bBuscarTratamiento->TabIndex = 119;
			this->bBuscarTratamiento->Text = L"Buscar";
			this->bBuscarTratamiento->UseVisualStyleBackColor = false;
			this->bBuscarTratamiento->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarTratamiento_Click);
			// 
			// txtBuscarTrat1
			// 
			this->txtBuscarTrat1->Location = System::Drawing::Point(215, 197);
			this->txtBuscarTrat1->Name = L"txtBuscarTrat1";
			this->txtBuscarTrat1->Size = System::Drawing::Size(210, 42);
			this->txtBuscarTrat1->TabIndex = 116;
			// 
			// lblBuscarTrat1
			// 
			this->lblBuscarTrat1->AutoSize = true;
			this->lblBuscarTrat1->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarTrat1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarTrat1->Location = System::Drawing::Point(210, 164);
			this->lblBuscarTrat1->Name = L"lblBuscarTrat1";
			this->lblBuscarTrat1->Size = System::Drawing::Size(254, 37);
			this->lblBuscarTrat1->TabIndex = 115;
			this->lblBuscarTrat1->Text = L"Código Tratamiento";
			// 
			// btabConsMed
			// 
			this->btabConsMed->BackColor = System::Drawing::Color::Teal;
			this->btabConsMed->Controls->Add(this->pBuscarMedicacion);
			this->btabConsMed->Controls->Add(this->bBuscarMedicacion);
			this->btabConsMed->Controls->Add(this->txtBuscarMedicacion2);
			this->btabConsMed->Controls->Add(this->lblBuscarMedicacion2);
			this->btabConsMed->Controls->Add(this->txtBuscarMedicacion1);
			this->btabConsMed->Controls->Add(this->lblBuscarMedicacion1);
			this->btabConsMed->Location = System::Drawing::Point(4, 45);
			this->btabConsMed->Name = L"btabConsMed";
			this->btabConsMed->Size = System::Drawing::Size(917, 451);
			this->btabConsMed->TabIndex = 6;
			this->btabConsMed->Text = L"Medicación";
			// 
			// pBuscarMedicacion
			// 
			this->pBuscarMedicacion->BackColor = System::Drawing::Color::Teal;
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion8);
			this->pBuscarMedicacion->Controls->Add(this->txtBuscarMedicacion6);
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion6);
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion4);
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion3);
			this->pBuscarMedicacion->Controls->Add(this->txtBuscarMedicacion4);
			this->pBuscarMedicacion->Controls->Add(this->txtBuscarMedicacion3);
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion7);
			this->pBuscarMedicacion->Controls->Add(this->txtBuscarMedicacion5);
			this->pBuscarMedicacion->Controls->Add(this->txtBuscarMedicacion7);
			this->pBuscarMedicacion->Controls->Add(this->lblBuscarMedicacion5);
			this->pBuscarMedicacion->ForeColor = System::Drawing::Color::Teal;
			this->pBuscarMedicacion->Location = System::Drawing::Point(382, 44);
			this->pBuscarMedicacion->Name = L"pBuscarMedicacion";
			this->pBuscarMedicacion->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pBuscarMedicacion->Size = System::Drawing::Size(499, 275);
			this->pBuscarMedicacion->TabIndex = 121;
			this->pBuscarMedicacion->Visible = false;
			// 
			// lblBuscarMedicacion8
			// 
			this->lblBuscarMedicacion8->AutoSize = true;
			this->lblBuscarMedicacion8->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarMedicacion8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion8->Location = System::Drawing::Point(3, 172);
			this->lblBuscarMedicacion8->Name = L"lblBuscarMedicacion8";
			this->lblBuscarMedicacion8->Size = System::Drawing::Size(140, 32);
			this->lblBuscarMedicacion8->TabIndex = 122;
			this->lblBuscarMedicacion8->Text = L"DD/MM/AA";
			// 
			// txtBuscarMedicacion6
			// 
			this->txtBuscarMedicacion6->Location = System::Drawing::Point(277, 138);
			this->txtBuscarMedicacion6->Name = L"txtBuscarMedicacion6";
			this->txtBuscarMedicacion6->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion6->TabIndex = 110;
			// 
			// lblBuscarMedicacion6
			// 
			this->lblBuscarMedicacion6->AutoSize = true;
			this->lblBuscarMedicacion6->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion6->Location = System::Drawing::Point(272, 105);
			this->lblBuscarMedicacion6->Name = L"lblBuscarMedicacion6";
			this->lblBuscarMedicacion6->Size = System::Drawing::Size(125, 37);
			this->lblBuscarMedicacion6->TabIndex = 109;
			this->lblBuscarMedicacion6->Text = L"Cantidad";
			// 
			// lblBuscarMedicacion4
			// 
			this->lblBuscarMedicacion4->AutoSize = true;
			this->lblBuscarMedicacion4->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion4->Location = System::Drawing::Point(3, 105);
			this->lblBuscarMedicacion4->Name = L"lblBuscarMedicacion4";
			this->lblBuscarMedicacion4->Size = System::Drawing::Size(243, 37);
			this->lblBuscarMedicacion4->TabIndex = 106;
			this->lblBuscarMedicacion4->Text = L"Fecha Última Visita";
			// 
			// lblBuscarMedicacion3
			// 
			this->lblBuscarMedicacion3->AutoSize = true;
			this->lblBuscarMedicacion3->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion3->Location = System::Drawing::Point(3, 14);
			this->lblBuscarMedicacion3->Name = L"lblBuscarMedicacion3";
			this->lblBuscarMedicacion3->Size = System::Drawing::Size(254, 37);
			this->lblBuscarMedicacion3->TabIndex = 100;
			this->lblBuscarMedicacion3->Text = L"Código Tratamiento";
			// 
			// txtBuscarMedicacion4
			// 
			this->txtBuscarMedicacion4->Location = System::Drawing::Point(8, 138);
			this->txtBuscarMedicacion4->Name = L"txtBuscarMedicacion4";
			this->txtBuscarMedicacion4->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion4->TabIndex = 107;
			// 
			// txtBuscarMedicacion3
			// 
			this->txtBuscarMedicacion3->Location = System::Drawing::Point(8, 47);
			this->txtBuscarMedicacion3->Name = L"txtBuscarMedicacion3";
			this->txtBuscarMedicacion3->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion3->TabIndex = 101;
			// 
			// lblBuscarMedicacion7
			// 
			this->lblBuscarMedicacion7->AutoSize = true;
			this->lblBuscarMedicacion7->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion7->Location = System::Drawing::Point(272, 200);
			this->lblBuscarMedicacion7->Name = L"lblBuscarMedicacion7";
			this->lblBuscarMedicacion7->Size = System::Drawing::Size(150, 37);
			this->lblBuscarMedicacion7->TabIndex = 102;
			this->lblBuscarMedicacion7->Text = L"Costo Total";
			// 
			// txtBuscarMedicacion5
			// 
			this->txtBuscarMedicacion5->Location = System::Drawing::Point(277, 46);
			this->txtBuscarMedicacion5->Name = L"txtBuscarMedicacion5";
			this->txtBuscarMedicacion5->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion5->TabIndex = 105;
			// 
			// txtBuscarMedicacion7
			// 
			this->txtBuscarMedicacion7->Location = System::Drawing::Point(277, 233);
			this->txtBuscarMedicacion7->Name = L"txtBuscarMedicacion7";
			this->txtBuscarMedicacion7->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion7->TabIndex = 103;
			// 
			// lblBuscarMedicacion5
			// 
			this->lblBuscarMedicacion5->AutoSize = true;
			this->lblBuscarMedicacion5->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion5->Location = System::Drawing::Point(272, 13);
			this->lblBuscarMedicacion5->Name = L"lblBuscarMedicacion5";
			this->lblBuscarMedicacion5->Size = System::Drawing::Size(189, 37);
			this->lblBuscarMedicacion5->TabIndex = 104;
			this->lblBuscarMedicacion5->Text = L"Costo Unitario";
			// 
			// bBuscarMedicacion
			// 
			this->bBuscarMedicacion->BackColor = System::Drawing::Color::Transparent;
			this->bBuscarMedicacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuscarMedicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bBuscarMedicacion->ForeColor = System::Drawing::Color::White;
			this->bBuscarMedicacion->Location = System::Drawing::Point(114, 266);
			this->bBuscarMedicacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bBuscarMedicacion->Name = L"bBuscarMedicacion";
			this->bBuscarMedicacion->Size = System::Drawing::Size(210, 45);
			this->bBuscarMedicacion->TabIndex = 99;
			this->bBuscarMedicacion->Text = L"Buscar";
			this->bBuscarMedicacion->UseVisualStyleBackColor = false;
			this->bBuscarMedicacion->Click += gcnew System::EventHandler(this, &PopUpMenu::bBuscarMedicacion_Click);
			// 
			// txtBuscarMedicacion2
			// 
			this->txtBuscarMedicacion2->Location = System::Drawing::Point(114, 184);
			this->txtBuscarMedicacion2->Name = L"txtBuscarMedicacion2";
			this->txtBuscarMedicacion2->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion2->TabIndex = 98;
			// 
			// lblBuscarMedicacion2
			// 
			this->lblBuscarMedicacion2->AutoSize = true;
			this->lblBuscarMedicacion2->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion2->Location = System::Drawing::Point(109, 150);
			this->lblBuscarMedicacion2->Name = L"lblBuscarMedicacion2";
			this->lblBuscarMedicacion2->Size = System::Drawing::Size(133, 37);
			this->lblBuscarMedicacion2->TabIndex = 97;
			this->lblBuscarMedicacion2->Text = L"ID Animal";
			// 
			// txtBuscarMedicacion1
			// 
			this->txtBuscarMedicacion1->Location = System::Drawing::Point(114, 91);
			this->txtBuscarMedicacion1->Name = L"txtBuscarMedicacion1";
			this->txtBuscarMedicacion1->Size = System::Drawing::Size(210, 42);
			this->txtBuscarMedicacion1->TabIndex = 96;
			// 
			// lblBuscarMedicacion1
			// 
			this->lblBuscarMedicacion1->AutoSize = true;
			this->lblBuscarMedicacion1->BackColor = System::Drawing::Color::Teal;
			this->lblBuscarMedicacion1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblBuscarMedicacion1->Location = System::Drawing::Point(109, 58);
			this->lblBuscarMedicacion1->Name = L"lblBuscarMedicacion1";
			this->lblBuscarMedicacion1->Size = System::Drawing::Size(249, 37);
			this->lblBuscarMedicacion1->TabIndex = 95;
			this->lblBuscarMedicacion1->Text = L"Código Medicación";
			// 
			// btabElim
			// 
			this->btabElim->Controls->Add(this->tabEliminacion);
			this->btabElim->Location = System::Drawing::Point(4, 48);
			this->btabElim->Name = L"btabElim";
			this->btabElim->Size = System::Drawing::Size(921, 493);
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
			this->btabElimPais->BackColor = System::Drawing::Color::Teal;
			this->btabElimPais->Controls->Add(this->bEliminarPais);
			this->btabElimPais->Controls->Add(this->txtElimPais1);
			this->btabElimPais->Controls->Add(this->lblElimPais1);
			this->btabElimPais->Location = System::Drawing::Point(4, 45);
			this->btabElimPais->Name = L"btabElimPais";
			this->btabElimPais->Padding = System::Windows::Forms::Padding(3);
			this->btabElimPais->Size = System::Drawing::Size(917, 451);
			this->btabElimPais->TabIndex = 0;
			this->btabElimPais->Text = L"País";
			// 
			// bEliminarPais
			// 
			this->bEliminarPais->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarPais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarPais->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarPais->ForeColor = System::Drawing::Color::White;
			this->bEliminarPais->Location = System::Drawing::Point(92, 324);
			this->bEliminarPais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarPais->Name = L"bEliminarPais";
			this->bEliminarPais->Size = System::Drawing::Size(210, 45);
			this->bEliminarPais->TabIndex = 51;
			this->bEliminarPais->Text = L"Eliminar";
			this->bEliminarPais->UseVisualStyleBackColor = false;
			this->bEliminarPais->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarPais_Click);
			// 
			// txtElimPais1
			// 
			this->txtElimPais1->Location = System::Drawing::Point(92, 101);
			this->txtElimPais1->Name = L"txtElimPais1";
			this->txtElimPais1->Size = System::Drawing::Size(210, 42);
			this->txtElimPais1->TabIndex = 50;
			// 
			// lblElimPais1
			// 
			this->lblElimPais1->AutoSize = true;
			this->lblElimPais1->BackColor = System::Drawing::Color::Teal;
			this->lblElimPais1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimPais1->Location = System::Drawing::Point(87, 55);
			this->lblElimPais1->Name = L"lblElimPais1";
			this->lblElimPais1->Size = System::Drawing::Size(158, 37);
			this->lblElimPais1->TabIndex = 49;
			this->lblElimPais1->Text = L"Código País";
			// 
			// btabElimCdd
			// 
			this->btabElimCdd->BackColor = System::Drawing::Color::Teal;
			this->btabElimCdd->Controls->Add(this->bEliminarCiudad);
			this->btabElimCdd->Controls->Add(this->txtElimCiudad2);
			this->btabElimCdd->Controls->Add(this->lblElimCiudad2);
			this->btabElimCdd->Controls->Add(this->txtElimCiudad1);
			this->btabElimCdd->Controls->Add(this->lblElimCiudad1);
			this->btabElimCdd->Location = System::Drawing::Point(4, 45);
			this->btabElimCdd->Name = L"btabElimCdd";
			this->btabElimCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabElimCdd->Size = System::Drawing::Size(917, 451);
			this->btabElimCdd->TabIndex = 1;
			this->btabElimCdd->Text = L"Ciudad";
			// 
			// bEliminarCiudad
			// 
			this->bEliminarCiudad->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarCiudad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarCiudad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarCiudad->ForeColor = System::Drawing::Color::White;
			this->bEliminarCiudad->Location = System::Drawing::Point(94, 313);
			this->bEliminarCiudad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarCiudad->Name = L"bEliminarCiudad";
			this->bEliminarCiudad->Size = System::Drawing::Size(210, 45);
			this->bEliminarCiudad->TabIndex = 52;
			this->bEliminarCiudad->Text = L"Eliminar";
			this->bEliminarCiudad->UseVisualStyleBackColor = false;
			this->bEliminarCiudad->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarCiudad_Click);
			// 
			// txtElimCiudad2
			// 
			this->txtElimCiudad2->Location = System::Drawing::Point(94, 201);
			this->txtElimCiudad2->Name = L"txtElimCiudad2";
			this->txtElimCiudad2->Size = System::Drawing::Size(210, 42);
			this->txtElimCiudad2->TabIndex = 51;
			// 
			// lblElimCiudad2
			// 
			this->lblElimCiudad2->AutoSize = true;
			this->lblElimCiudad2->BackColor = System::Drawing::Color::Teal;
			this->lblElimCiudad2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimCiudad2->Location = System::Drawing::Point(89, 168);
			this->lblElimCiudad2->Name = L"lblElimCiudad2";
			this->lblElimCiudad2->Size = System::Drawing::Size(197, 37);
			this->lblElimCiudad2->TabIndex = 50;
			this->lblElimCiudad2->Text = L"Código Ciudad";
			// 
			// txtElimCiudad1
			// 
			this->txtElimCiudad1->Location = System::Drawing::Point(94, 109);
			this->txtElimCiudad1->Name = L"txtElimCiudad1";
			this->txtElimCiudad1->Size = System::Drawing::Size(210, 42);
			this->txtElimCiudad1->TabIndex = 49;
			// 
			// lblElimCiudad1
			// 
			this->lblElimCiudad1->AutoSize = true;
			this->lblElimCiudad1->BackColor = System::Drawing::Color::Teal;
			this->lblElimCiudad1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimCiudad1->Location = System::Drawing::Point(89, 76);
			this->lblElimCiudad1->Name = L"lblElimCiudad1";
			this->lblElimCiudad1->Size = System::Drawing::Size(158, 37);
			this->lblElimCiudad1->TabIndex = 48;
			this->lblElimCiudad1->Text = L"Código País";
			// 
			// btabElimClt
			// 
			this->btabElimClt->BackColor = System::Drawing::Color::Teal;
			this->btabElimClt->Controls->Add(this->txtElimCliente2);
			this->btabElimClt->Controls->Add(this->lblElimCliente2);
			this->btabElimClt->Controls->Add(this->txtElimCliente1);
			this->btabElimClt->Controls->Add(this->lblElimCliente1);
			this->btabElimClt->Controls->Add(this->bEliminarCliente);
			this->btabElimClt->Controls->Add(this->txtElimCliente3);
			this->btabElimClt->Controls->Add(this->lblElimCliente3);
			this->btabElimClt->Location = System::Drawing::Point(4, 45);
			this->btabElimClt->Name = L"btabElimClt";
			this->btabElimClt->Size = System::Drawing::Size(917, 451);
			this->btabElimClt->TabIndex = 2;
			this->btabElimClt->Text = L"Cliente";
			// 
			// txtElimCliente2
			// 
			this->txtElimCliente2->Location = System::Drawing::Point(78, 170);
			this->txtElimCliente2->Name = L"txtElimCliente2";
			this->txtElimCliente2->Size = System::Drawing::Size(210, 42);
			this->txtElimCliente2->TabIndex = 73;
			// 
			// lblElimCliente2
			// 
			this->lblElimCliente2->AutoSize = true;
			this->lblElimCliente2->BackColor = System::Drawing::Color::Teal;
			this->lblElimCliente2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimCliente2->Location = System::Drawing::Point(73, 137);
			this->lblElimCliente2->Name = L"lblElimCliente2";
			this->lblElimCliente2->Size = System::Drawing::Size(197, 37);
			this->lblElimCliente2->TabIndex = 72;
			this->lblElimCliente2->Text = L"Código Ciudad";
			// 
			// txtElimCliente1
			// 
			this->txtElimCliente1->Location = System::Drawing::Point(78, 78);
			this->txtElimCliente1->Name = L"txtElimCliente1";
			this->txtElimCliente1->Size = System::Drawing::Size(210, 42);
			this->txtElimCliente1->TabIndex = 71;
			// 
			// lblElimCliente1
			// 
			this->lblElimCliente1->AutoSize = true;
			this->lblElimCliente1->BackColor = System::Drawing::Color::Teal;
			this->lblElimCliente1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimCliente1->Location = System::Drawing::Point(73, 45);
			this->lblElimCliente1->Name = L"lblElimCliente1";
			this->lblElimCliente1->Size = System::Drawing::Size(158, 37);
			this->lblElimCliente1->TabIndex = 70;
			this->lblElimCliente1->Text = L"Código País";
			// 
			// bEliminarCliente
			// 
			this->bEliminarCliente->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarCliente->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarCliente->ForeColor = System::Drawing::Color::White;
			this->bEliminarCliente->Location = System::Drawing::Point(78, 355);
			this->bEliminarCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarCliente->Name = L"bEliminarCliente";
			this->bEliminarCliente->Size = System::Drawing::Size(210, 45);
			this->bEliminarCliente->TabIndex = 69;
			this->bEliminarCliente->Text = L"Eliminar";
			this->bEliminarCliente->UseVisualStyleBackColor = false;
			this->bEliminarCliente->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarCliente_Click);
			// 
			// txtElimCliente3
			// 
			this->txtElimCliente3->Location = System::Drawing::Point(78, 263);
			this->txtElimCliente3->Name = L"txtElimCliente3";
			this->txtElimCliente3->Size = System::Drawing::Size(210, 42);
			this->txtElimCliente3->TabIndex = 68;
			// 
			// lblElimCliente3
			// 
			this->lblElimCliente3->AutoSize = true;
			this->lblElimCliente3->BackColor = System::Drawing::Color::Teal;
			this->lblElimCliente3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimCliente3->Location = System::Drawing::Point(73, 230);
			this->lblElimCliente3->Name = L"lblElimCliente3";
			this->lblElimCliente3->Size = System::Drawing::Size(204, 37);
			this->lblElimCliente3->TabIndex = 67;
			this->lblElimCliente3->Text = L"Número Cliente";
			// 
			// btabElimMasc
			// 
			this->btabElimMasc->BackColor = System::Drawing::Color::Teal;
			this->btabElimMasc->Controls->Add(this->bEliminarMascota);
			this->btabElimMasc->Controls->Add(this->txtElimMascota1);
			this->btabElimMasc->Controls->Add(this->lblElimMascota1);
			this->btabElimMasc->Location = System::Drawing::Point(4, 45);
			this->btabElimMasc->Name = L"btabElimMasc";
			this->btabElimMasc->Size = System::Drawing::Size(917, 451);
			this->btabElimMasc->TabIndex = 3;
			this->btabElimMasc->Text = L"Mascota";
			// 
			// bEliminarMascota
			// 
			this->bEliminarMascota->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarMascota->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarMascota->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarMascota->ForeColor = System::Drawing::Color::White;
			this->bEliminarMascota->Location = System::Drawing::Point(58, 285);
			this->bEliminarMascota->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarMascota->Name = L"bEliminarMascota";
			this->bEliminarMascota->Size = System::Drawing::Size(210, 45);
			this->bEliminarMascota->TabIndex = 98;
			this->bEliminarMascota->Text = L"Eliminar";
			this->bEliminarMascota->UseVisualStyleBackColor = false;
			this->bEliminarMascota->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarMascota_Click);
			// 
			// txtElimMascota1
			// 
			this->txtElimMascota1->Location = System::Drawing::Point(58, 95);
			this->txtElimMascota1->Name = L"txtElimMascota1";
			this->txtElimMascota1->Size = System::Drawing::Size(210, 42);
			this->txtElimMascota1->TabIndex = 97;
			// 
			// lblElimMascota1
			// 
			this->lblElimMascota1->AutoSize = true;
			this->lblElimMascota1->BackColor = System::Drawing::Color::Teal;
			this->lblElimMascota1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimMascota1->Location = System::Drawing::Point(53, 62);
			this->lblElimMascota1->Name = L"lblElimMascota1";
			this->lblElimMascota1->Size = System::Drawing::Size(133, 37);
			this->lblElimMascota1->TabIndex = 96;
			this->lblElimMascota1->Text = L"ID Animal";
			// 
			// btabElimVisita
			// 
			this->btabElimVisita->BackColor = System::Drawing::Color::Teal;
			this->btabElimVisita->Controls->Add(this->bEliminarVisita);
			this->btabElimVisita->Controls->Add(this->txtElimVisita1);
			this->btabElimVisita->Controls->Add(this->lblElimVisita1);
			this->btabElimVisita->Location = System::Drawing::Point(4, 45);
			this->btabElimVisita->Name = L"btabElimVisita";
			this->btabElimVisita->Size = System::Drawing::Size(917, 451);
			this->btabElimVisita->TabIndex = 4;
			this->btabElimVisita->Text = L"Visita";
			// 
			// bEliminarVisita
			// 
			this->bEliminarVisita->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarVisita->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarVisita->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarVisita->ForeColor = System::Drawing::Color::White;
			this->bEliminarVisita->Location = System::Drawing::Point(82, 292);
			this->bEliminarVisita->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarVisita->Name = L"bEliminarVisita";
			this->bEliminarVisita->Size = System::Drawing::Size(210, 45);
			this->bEliminarVisita->TabIndex = 101;
			this->bEliminarVisita->Text = L"Eliminar";
			this->bEliminarVisita->UseVisualStyleBackColor = false;
			this->bEliminarVisita->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarVisita_Click);
			// 
			// txtElimVisita1
			// 
			this->txtElimVisita1->Location = System::Drawing::Point(82, 102);
			this->txtElimVisita1->Name = L"txtElimVisita1";
			this->txtElimVisita1->Size = System::Drawing::Size(210, 42);
			this->txtElimVisita1->TabIndex = 98;
			// 
			// lblElimVisita1
			// 
			this->lblElimVisita1->AutoSize = true;
			this->lblElimVisita1->BackColor = System::Drawing::Color::Teal;
			this->lblElimVisita1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimVisita1->Location = System::Drawing::Point(77, 69);
			this->lblElimVisita1->Name = L"lblElimVisita1";
			this->lblElimVisita1->Size = System::Drawing::Size(177, 37);
			this->lblElimVisita1->TabIndex = 97;
			this->lblElimVisita1->Text = L"Código Visita";
			// 
			// btabElimTrat
			// 
			this->btabElimTrat->BackColor = System::Drawing::Color::Teal;
			this->btabElimTrat->Controls->Add(this->bEliminarTratamiento);
			this->btabElimTrat->Controls->Add(this->txtElimTrat1);
			this->btabElimTrat->Controls->Add(this->lblElimTrat1);
			this->btabElimTrat->Location = System::Drawing::Point(4, 45);
			this->btabElimTrat->Name = L"btabElimTrat";
			this->btabElimTrat->Size = System::Drawing::Size(917, 451);
			this->btabElimTrat->TabIndex = 5;
			this->btabElimTrat->Text = L"Tratamiento";
			// 
			// bEliminarTratamiento
			// 
			this->bEliminarTratamiento->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarTratamiento->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarTratamiento->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarTratamiento->ForeColor = System::Drawing::Color::White;
			this->bEliminarTratamiento->Location = System::Drawing::Point(69, 176);
			this->bEliminarTratamiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarTratamiento->Name = L"bEliminarTratamiento";
			this->bEliminarTratamiento->Size = System::Drawing::Size(210, 45);
			this->bEliminarTratamiento->TabIndex = 122;
			this->bEliminarTratamiento->Text = L"Eliminar";
			this->bEliminarTratamiento->UseVisualStyleBackColor = false;
			this->bEliminarTratamiento->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarTratamiento_Click);
			// 
			// txtElimTrat1
			// 
			this->txtElimTrat1->Location = System::Drawing::Point(69, 88);
			this->txtElimTrat1->Name = L"txtElimTrat1";
			this->txtElimTrat1->Size = System::Drawing::Size(210, 42);
			this->txtElimTrat1->TabIndex = 121;
			// 
			// lblElimTrat1
			// 
			this->lblElimTrat1->AutoSize = true;
			this->lblElimTrat1->BackColor = System::Drawing::Color::Teal;
			this->lblElimTrat1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimTrat1->Location = System::Drawing::Point(64, 55);
			this->lblElimTrat1->Name = L"lblElimTrat1";
			this->lblElimTrat1->Size = System::Drawing::Size(254, 37);
			this->lblElimTrat1->TabIndex = 120;
			this->lblElimTrat1->Text = L"Código Tratamiento";
			// 
			// btabElimMed
			// 
			this->btabElimMed->BackColor = System::Drawing::Color::Teal;
			this->btabElimMed->Controls->Add(this->bEliminarMedicacion);
			this->btabElimMed->Controls->Add(this->txtElimMedicacion1);
			this->btabElimMed->Controls->Add(this->lblElimMedicacion1);
			this->btabElimMed->Location = System::Drawing::Point(4, 45);
			this->btabElimMed->Name = L"btabElimMed";
			this->btabElimMed->Size = System::Drawing::Size(917, 451);
			this->btabElimMed->TabIndex = 6;
			this->btabElimMed->Text = L"Medicación";
			// 
			// bEliminarMedicacion
			// 
			this->bEliminarMedicacion->BackColor = System::Drawing::Color::Transparent;
			this->bEliminarMedicacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bEliminarMedicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bEliminarMedicacion->ForeColor = System::Drawing::Color::White;
			this->bEliminarMedicacion->Location = System::Drawing::Point(76, 263);
			this->bEliminarMedicacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bEliminarMedicacion->Name = L"bEliminarMedicacion";
			this->bEliminarMedicacion->Size = System::Drawing::Size(210, 45);
			this->bEliminarMedicacion->TabIndex = 104;
			this->bEliminarMedicacion->Text = L"Eliminar";
			this->bEliminarMedicacion->UseVisualStyleBackColor = false;
			this->bEliminarMedicacion->Click += gcnew System::EventHandler(this, &PopUpMenu::bEliminarMedicacion_Click);
			// 
			// txtElimMedicacion1
			// 
			this->txtElimMedicacion1->Location = System::Drawing::Point(76, 88);
			this->txtElimMedicacion1->Name = L"txtElimMedicacion1";
			this->txtElimMedicacion1->Size = System::Drawing::Size(210, 42);
			this->txtElimMedicacion1->TabIndex = 101;
			// 
			// lblElimMedicacion1
			// 
			this->lblElimMedicacion1->AutoSize = true;
			this->lblElimMedicacion1->BackColor = System::Drawing::Color::Teal;
			this->lblElimMedicacion1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblElimMedicacion1->Location = System::Drawing::Point(71, 55);
			this->lblElimMedicacion1->Name = L"lblElimMedicacion1";
			this->lblElimMedicacion1->Size = System::Drawing::Size(249, 37);
			this->lblElimMedicacion1->TabIndex = 100;
			this->lblElimMedicacion1->Text = L"Código Medicación";
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
			// txtInserCliente8
			// 
			this->txtInserCliente8->Location = System::Drawing::Point(678, 207);
			this->txtInserCliente8->Name = L"txtInserCliente8";
			this->txtInserCliente8->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente8->TabIndex = 73;
			// 
			// lblInserCliente9
			// 
			this->lblInserCliente9->AutoSize = true;
			this->lblInserCliente9->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente9->Location = System::Drawing::Point(673, 174);
			this->lblInserCliente9->Name = L"lblInserCliente9";
			this->lblInserCliente9->Size = System::Drawing::Size(142, 37);
			this->lblInserCliente9->TabIndex = 72;
			this->lblInserCliente9->Text = L"Descuento";
			// 
			// txtInserCliente9
			// 
			this->txtInserCliente9->Location = System::Drawing::Point(678, 304);
			this->txtInserCliente9->Name = L"txtInserCliente9";
			this->txtInserCliente9->Size = System::Drawing::Size(210, 42);
			this->txtInserCliente9->TabIndex = 75;
			// 
			// lblInserCliente10
			// 
			this->lblInserCliente10->AutoSize = true;
			this->lblInserCliente10->BackColor = System::Drawing::Color::Teal;
			this->lblInserCliente10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblInserCliente10->Location = System::Drawing::Point(673, 271);
			this->lblInserCliente10->Name = L"lblInserCliente10";
			this->lblInserCliente10->Size = System::Drawing::Size(84, 37);
			this->lblInserCliente10->TabIndex = 74;
			this->lblInserCliente10->Text = L"Saldo";
			// 
			// PopUpMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 36);
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
			this->tabR1->ResumeLayout(false);
			this->btabFact->ResumeLayout(false);
			this->tabFacturacion->ResumeLayout(false);
			this->tabPrincipal->ResumeLayout(false);
			this->btabMant->ResumeLayout(false);
			this->tabMantenimiento->ResumeLayout(false);
			this->btabInser->ResumeLayout(false);
			this->tabInsercion->ResumeLayout(false);
			this->btabInserPais->ResumeLayout(false);
			this->btabInserPais->PerformLayout();
			this->btabInserCdd->ResumeLayout(false);
			this->btabInserCdd->PerformLayout();
			this->btabInserClt->ResumeLayout(false);
			this->btabInserClt->PerformLayout();
			this->btabInserMasc->ResumeLayout(false);
			this->btabInserMasc->PerformLayout();
			this->btabInserVisita->ResumeLayout(false);
			this->btabInserVisita->PerformLayout();
			this->btabInserTrat->ResumeLayout(false);
			this->btabInserTrat->PerformLayout();
			this->btabInserMed->ResumeLayout(false);
			this->btabInserMed->PerformLayout();
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
			this->btabConsPais->ResumeLayout(false);
			this->btabConsPais->PerformLayout();
			this->btabConsCdd->ResumeLayout(false);
			this->btabConsCdd->PerformLayout();
			this->btabConsClt->ResumeLayout(false);
			this->btabConsClt->PerformLayout();
			this->pBuscarCliente->ResumeLayout(false);
			this->pBuscarCliente->PerformLayout();
			this->btabConsMasc->ResumeLayout(false);
			this->btabConsMasc->PerformLayout();
			this->pBuscarMascota->ResumeLayout(false);
			this->pBuscarMascota->PerformLayout();
			this->btabConsVisita->ResumeLayout(false);
			this->btabConsVisita->PerformLayout();
			this->pBuscarVisita->ResumeLayout(false);
			this->pBuscarVisita->PerformLayout();
			this->btabConsTrat->ResumeLayout(false);
			this->btabConsTrat->PerformLayout();
			this->pBuscarTratamiento->ResumeLayout(false);
			this->pBuscarTratamiento->PerformLayout();
			this->btabConsMed->ResumeLayout(false);
			this->btabConsMed->PerformLayout();
			this->pBuscarMedicacion->ResumeLayout(false);
			this->pBuscarMedicacion->PerformLayout();
			this->btabElim->ResumeLayout(false);
			this->tabEliminacion->ResumeLayout(false);
			this->btabElimPais->ResumeLayout(false);
			this->btabElimPais->PerformLayout();
			this->btabElimCdd->ResumeLayout(false);
			this->btabElimCdd->PerformLayout();
			this->btabElimClt->ResumeLayout(false);
			this->btabElimClt->PerformLayout();
			this->btabElimMasc->ResumeLayout(false);
			this->btabElimMasc->PerformLayout();
			this->btabElimVisita->ResumeLayout(false);
			this->btabElimVisita->PerformLayout();
			this->btabElimTrat->ResumeLayout(false);
			this->btabElimTrat->PerformLayout();
			this->btabElimMed->ResumeLayout(false);
			this->btabElimMed->PerformLayout();
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
	
	/*	FUNCIONES INSERTAR  */

	private: System::Void bInserPais_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "El pais fue insertado correctamente";
		String^ error = "El codigo de pais ya existe";

		String^ codPais = this->txtInserPais1->Text;
		String^ nomPais = this->txtInserPais2->Text;

		int codigo = stoi(marshal_as<string, String^>(codPais));
		string nombre = marshal_as<string, String^>(nomPais);

		pNodoBinarioPaises paisBuscado = arbolPaises->buscaPais(this->arbolPaises->raiz, codigo);

		if (paisBuscado == NULL) {
			this->arbolPaises->InsertaNodoPaises(codigo, nombre);
			MessageBox::Show(exito);
		}
		else {
			MessageBox::Show(error);
		}
	}
	private: System::Void bInserCiudad_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "La ciudad fue insertada correctamente";
		String^ errorP = "El codigo de pais no existe";
		String^ errorC = "El codigo de ciudad ya existe";

		String^ codPais = this->txtInserCiudad1->Text;
		String^ codCiudad = this->txtInserCiudad2->Text;
		String^ nomCiudad = this->txtInserCiudad3->Text;

		int codigoP = stoi(marshal_as<string, String^>(codPais));
		int codigoC = stoi(marshal_as<string, String^>(codCiudad));
		string nombreC = marshal_as<string, String^>(nomCiudad);

		pNodoBinarioPaises paisBuscado = arbolPaises->buscaPais(arbolPaises->raiz, codigoP);
		if (paisBuscado != NULL) {
			pNodoBinarioCiudades ciudadBuscada = arbolCiudades->buscaCiudadRepetida(arbolCiudades->raiz, codigoP, codigoC);
			if (ciudadBuscada == NULL) {
				arbolCiudades->InsertaNodoCiudad(codigoP, codigoC, nombreC);
				MessageBox::Show(exito);
			}
			else {
				MessageBox::Show(errorC);
			}
		}
		else {
			MessageBox::Show(errorP);
		}

	}
	private: System::Void bInserCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "El cliente fue insertado correctamente";
		String^ errorP = "El codigo de pais no existe";
		String^ errorC = "El codigo de ciudad no existe";
		String^ error = "El codigo de cliente ya existe";

		String^ codCliente = this->txtInserCliente1->Text;
		String^ nomCliente = this->txtInserCliente2->Text;
		String^ dirCliente = this->txtInserCliente3->Text;
		String^ codPais = this->txtInserCliente4->Text;
		String^ codCiudad = this->txtInserCliente5->Text;
		String^ telCliente = this->txtInserCliente6->Text;
		String^ ultVisitaC = this->txtInserCliente7->Text;
		String^ descuentoC = this->txtInserCliente8->Text;
		String^ saldoC = this->txtInserCliente9->Text;

		int codigoCliente = stoi(marshal_as<string, String^>(codCliente));
		string nombreCliente = marshal_as<string, String^>(nomCliente);
		string direccionCliente = marshal_as<string, String^>(dirCliente);
		int codigoPais = stoi(marshal_as<string, String^>(codPais));
		int codigoCiudad = stoi(marshal_as<string, String^>(codCiudad));
		int telefonoCliente = stoi(marshal_as<string, String^>(telCliente));
		string ultimaVisitaC = marshal_as<string, String^>(ultVisitaC);
		int descuentoCliente = stoi(marshal_as<string, String^>(descuentoC));
		int saldoCliente = stoi(marshal_as<string, String^>(saldoC));

		pNodoBinarioPaises paisBuscado = arbolPaises->buscaPais(arbolPaises->raiz, codigoPais);
		if (paisBuscado != NULL) {
			pNodoBinarioCiudades ciudadBuscada = arbolCiudades->buscaCiudadRepetida(arbolCiudades->raiz, codigoPais, codigoCiudad);
			if (ciudadBuscada != NULL) {
				pNodoBCliente clienteBuscado = arbolClientes->buscaCliente(arbolClientes->raiz, codigoCliente);//buscaClienteRepetido(arbolClientes.raiz, codCliente, codPaisCiudadCliente, codCiudadCliente);
				if (clienteBuscado == NULL) {
					arbolClientes->InsertaNodoCliente(codigoCliente, nombreCliente, direccionCliente, codigoPais, codigoCiudad, telefonoCliente, ultimaVisitaC, descuentoCliente, saldoCliente);
					MessageBox::Show(exito);
				}
				else {
					MessageBox::Show(error);
				}
			}
			else {
				MessageBox::Show(errorC);
			}
		}
		else {
			MessageBox::Show(errorP);
		}
	}
	private: System::Void bInserMascota_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "La mascota fue insertada correctamente";
		String^ errorC = "El codigo de cliente no existe";
		String^ error = "El codigo de animal ya existe";

		String^ codCliente = this->txtInserMascota1->Text;
		String^ codAnimal = this->txtInserMascota2->Text;
		String^ nomAnimal = this->txtInserMascota3->Text;
		String^ tipo = this->txtInserMascota4->Text;
		String^ raza = this->txtInserMascota5->Text;
		String^ fNacimiento = this->txtInserMascota6->Text;
		String^ ultVisita = this->txtInserMascota10->Text;
		String^ sexo = this->txtInserMascota7->Text;
		String^ color = this->txtInserMascota8->Text;
		String^ castrado = this->txtInserMascota9->Text;

		int codigoCliente = stoi(marshal_as<string, String^>(codCliente));
		int codigoAnimal = stoi(marshal_as<string, String^>(codAnimal));
		string nombreAnimal = marshal_as<string, String^>(nomAnimal);
		string tipoAnimal = marshal_as<string, String^>(tipo);
		string razaAnimal = marshal_as<string, String^>(raza);
		string fechaNacimiento = marshal_as<string, String^>(fNacimiento);
		string ultimaVisita = marshal_as<string, String^>(ultVisita);
		string sexoAnimal = marshal_as<string, String^>(sexo);
		string colorAnimal = marshal_as<string, String^>(color);
		string castradoAnimal = marshal_as<string, String^>(castrado);

		pNodoBCliente clienteBuscado = arbolClientes->buscaCliente(arbolClientes->raiz, codigoCliente);
		if (clienteBuscado != NULL) {
			pNodoAVLMascotas mascotaBuscada = arbolMascotas->buscaMascota(arbolMascotas->raiz, codigoAnimal);//buscaMascotaRepetida(arbolMascotas.raiz, codMascota, codClienteMascota);
			if (mascotaBuscada == NULL) {
				arbolMascotas->InsertaNodoMascota(codigoCliente, codigoAnimal, nombreAnimal, tipoAnimal, razaAnimal, fechaNacimiento, sexoAnimal, colorAnimal, castradoAnimal, ultimaVisita);
				MessageBox::Show(exito);
			}
			else {
				MessageBox::Show(error);
			}
		}
		else {
			MessageBox::Show(errorC);
		}
	}
	private: System::Void bInserVisita_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "La visita fue insertada correctamente";
		String^ errorM = "El codigo de animal no existe";
		String^ error = "El codigo de visita ya existe";

		String^ codVisita = this->txtInserVisita1->Text;
		String^ codAnimal = this->txtInserVisita2->Text;
		String^ ultVisita = this->txtInserVisita3->Text;
		String^ tFactura = this->txtInserVisita4->Text;
		String^ fPago = this->txtInserVisita5->Text;

		int codigoVisita = stoi(marshal_as<string, String^>(codVisita));
		int codigoAnimal = stoi(marshal_as<string, String^>(codAnimal));
		string ultimaVisita = marshal_as<string, String^>(ultVisita);
		int totalFactura = stoi(marshal_as<string, String^>(tFactura));
		int formaPago = stoi(marshal_as<string, String^>(fPago));

		pNodoAVLMascotas mascotaBuscada = arbolMascotas->buscaMascota(arbolMascotas->raiz, codigoAnimal);
		if (mascotaBuscada != NULL) {
			pNodoBinarioVisitas visitaBuscada = arbolVisitas->buscaVisita(arbolVisitas->raiz, codigoVisita);
			if (visitaBuscada == NULL) {
				arbolVisitas->InsertaNodoVisitas(codigoVisita, codigoAnimal, ultimaVisita, totalFactura, formaPago);
				MessageBox::Show(exito);
			}
			else {
				MessageBox::Show(error);
			}
		}
		else {
			MessageBox::Show(errorM);
		}
	}
	private: System::Void binserTratamiento_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ exito = "El tratamiento fue insertado correctamente";
		String^ error = "El codigo de tratamiento ya existe";

		String^ codTratamiento = this->txtInserTrat1->Text;
		String^ nomTratamiento = this->txtInserTrat2->Text;
		String^ precioU = this->txtInserTrat3->Text;
		String^ cantidad = this->txtInserTrat4->Text;

		int codigoTratamiento = stoi(marshal_as<string, String^>(codTratamiento));
		string nombreTratamiento = marshal_as<string, String^>(nomTratamiento);
		int precioUnitario = stoi(marshal_as<string, String^>(precioU));
		int cantidadTratamiento = stoi(marshal_as<string, String^>(cantidad));

		pNodoRNTratamiento tratamientoBuscado = arbolTratamientos->buscaTratamiento(arbolTratamientos->raiz, codigoTratamiento);
		if (tratamientoBuscado == NULL) {
			arbolTratamientos->InsertaNodoTratamiento(codigoTratamiento, nombreTratamiento, precioUnitario, cantidadTratamiento);
			MessageBox::Show(exito);
		}
		else {
			MessageBox::Show(error);
		}
	}
	private: System::Void bInserMedicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	/*	FUNCIONES MODIFICAR  */

	private: System::Void bModifPais_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ codPais = this->txtModifPais1->Text;
		String^ nomPais = this->txtModifPais2->Text;
		
		int codigo = stoi(marshal_as<string, String^>(codPais));
		string nombre = marshal_as<string, String^>(nomPais);

		pNodoBinarioPaises paisBuscado = arbolPaises->buscaPais(this->arbolPaises->raiz, codigo);
			
		if (paisBuscado != NULL) {
			paisBuscado->nombre = nombre;
		}
		else {
			//messagebox
		}
	}

	private: System::Void bModifCiudad_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ errorP = "El codigo de pais no existe";
		String^ errorC = "El codigo de ciudad no existe";

		String^ codPais = this->txtModifCiudad1->Text;
		String^ codCiudad = this->txtModifCiudad2->Text;
		String^ nombre = this->txtModifCiudad3->Text;

		int codigoP = stoi(marshal_as<string, String^>(codPais));
		int codigoC = stoi(marshal_as<string, String^>(codCiudad));
		string nombreC = marshal_as<string, String^>(nombre);

		pNodoBinarioPaises paisBuscado = arbolPaises->buscaPais(this->arbolPaises->raiz, codigoP);
		pNodoBinarioCiudades ciudadBuscada = arbolCiudades->buscaCiudadRepetida(this->arbolCiudades->raiz, codigoP, codigoC);

		if (paisBuscado != NULL) {
			if (ciudadBuscada != NULL) {
				ciudadBuscada->nombre = nombreC;
			}
			else {
				MessageBox::Show(errorC);
			}
		}
		else {
			MessageBox::Show(errorP);
		}
	}
	private: System::Void bModifCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bModifMascota_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bModifVisita_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bModifTratamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bModifMedicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	/*	FUNCIONES BUSCAR  */

	private: System::Void bBuscarPais_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarCiudad_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarMascota_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarVisita_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarTratamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bBuscarMedicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}

    /*	FUNCIONES ELIMINAR  */

	private: System::Void bEliminarPais_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarCiudad_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarMascota_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarVisita_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarTratamiento_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bEliminarMedicacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	/* REPORTES */
	private: System::Void bReporte1_Click(System::Object^ sender, System::EventArgs^ e) {
		string str = "Reporte 1 - Paises Registrados\n\n";
		string nombreReporte = "Reporte1-Paises";
		arbolPaises->CreaReporte1(nombreReporte);
		arbolPaises->RecorreArbolPaises(arbolPaises->raiz, str, nombreReporte);

		MessageBox::Show("Reporte 1 generado correctamente");
	}
};
}
