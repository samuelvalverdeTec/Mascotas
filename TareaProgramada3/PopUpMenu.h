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
	protected:

	protected:













	
	public: BinarioPaises* arbolPaises;
	public: BinarioCiudades* arbolCiudades;
	public: BCliente* arbolClientes;
	public: AVLMascotas* arbolMascotas;
	public: BinarioVisitas* arbolVisitas;
	public: RNTratamiento* arbolTratamientos;
	public: AAMedicacion* arbolMedicaciones;
	private: System::Windows::Forms::TabPage^ btabCont;
	public:

	private: System::Windows::Forms::TabPage^ btabAD;
	public:


	private: System::Windows::Forms::TabPage^ btabSucs;
	public:


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












	public:

	public:







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
			this->btabModifCdd = (gcnew System::Windows::Forms::TabPage());
			this->btabModifClt = (gcnew System::Windows::Forms::TabPage());
			this->btabModifMasc = (gcnew System::Windows::Forms::TabPage());
			this->btabModifVisita = (gcnew System::Windows::Forms::TabPage());
			this->btabModifTrat = (gcnew System::Windows::Forms::TabPage());
			this->btabModifMed = (gcnew System::Windows::Forms::TabPage());
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
			this->btabModifPais->Location = System::Drawing::Point(4, 39);
			this->btabModifPais->Name = L"btabModifPais";
			this->btabModifPais->Padding = System::Windows::Forms::Padding(3);
			this->btabModifPais->Size = System::Drawing::Size(917, 457);
			this->btabModifPais->TabIndex = 0;
			this->btabModifPais->Text = L"País";
			this->btabModifPais->UseVisualStyleBackColor = true;
			// 
			// btabModifCdd
			// 
			this->btabModifCdd->Location = System::Drawing::Point(4, 39);
			this->btabModifCdd->Name = L"btabModifCdd";
			this->btabModifCdd->Padding = System::Windows::Forms::Padding(3);
			this->btabModifCdd->Size = System::Drawing::Size(917, 457);
			this->btabModifCdd->TabIndex = 1;
			this->btabModifCdd->Text = L"Ciudad";
			this->btabModifCdd->UseVisualStyleBackColor = true;
			// 
			// btabModifClt
			// 
			this->btabModifClt->Location = System::Drawing::Point(4, 39);
			this->btabModifClt->Name = L"btabModifClt";
			this->btabModifClt->Size = System::Drawing::Size(917, 457);
			this->btabModifClt->TabIndex = 2;
			this->btabModifClt->Text = L"Cliente";
			this->btabModifClt->UseVisualStyleBackColor = true;
			// 
			// btabModifMasc
			// 
			this->btabModifMasc->Location = System::Drawing::Point(4, 39);
			this->btabModifMasc->Name = L"btabModifMasc";
			this->btabModifMasc->Size = System::Drawing::Size(917, 457);
			this->btabModifMasc->TabIndex = 3;
			this->btabModifMasc->Text = L"Mascota";
			this->btabModifMasc->UseVisualStyleBackColor = true;
			// 
			// btabModifVisita
			// 
			this->btabModifVisita->Location = System::Drawing::Point(4, 39);
			this->btabModifVisita->Name = L"btabModifVisita";
			this->btabModifVisita->Size = System::Drawing::Size(917, 457);
			this->btabModifVisita->TabIndex = 4;
			this->btabModifVisita->Text = L"Visita";
			this->btabModifVisita->UseVisualStyleBackColor = true;
			// 
			// btabModifTrat
			// 
			this->btabModifTrat->Location = System::Drawing::Point(4, 39);
			this->btabModifTrat->Name = L"btabModifTrat";
			this->btabModifTrat->Size = System::Drawing::Size(917, 457);
			this->btabModifTrat->TabIndex = 5;
			this->btabModifTrat->Text = L"Tratamiento";
			this->btabModifTrat->UseVisualStyleBackColor = true;
			// 
			// btabModifMed
			// 
			this->btabModifMed->Location = System::Drawing::Point(4, 39);
			this->btabModifMed->Name = L"btabModifMed";
			this->btabModifMed->Size = System::Drawing::Size(917, 457);
			this->btabModifMed->TabIndex = 6;
			this->btabModifMed->Text = L"Medicación";
			this->btabModifMed->UseVisualStyleBackColor = true;
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
};
}
