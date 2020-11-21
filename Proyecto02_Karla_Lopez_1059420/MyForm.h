#pragma once
#include"Productos.h"
#include"Lista.h"
#include "Pila.h"
#include "Matriz.h"
#include"Lista_Enlazada.h"
#include"Pila_Informacion.h"
#include"Informacion.h"
namespace Proyecto02KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DGVMatriz;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ RTBDatos;
	private: System::Windows::Forms::Button^ BTNCrearBahia;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TXTFila;
	private: System::Windows::Forms::TextBox^ TXTColumna;
	private: System::Windows::Forms::RadioButton^ RBMaterialOficina;



	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ RBMaterialConstruccion;

	private: System::Windows::Forms::RadioButton^ RbRopa;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TxtMax;

	private: System::Windows::Forms::Button^ BtnCrear;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnCant;
	private: System::Windows::Forms::Button^ btnPeso;
	private: System::Windows::Forms::Button^ btnTipo;
	private: System::Windows::Forms::Button^ btnRet;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ TXTIDRetirar;
	private: System::Windows::Forms::TextBox^ TXTFechaRetiroDD;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ TXTFechaRetiroMM;
	private: System::Windows::Forms::TextBox^ TXTFechaRetiroAA;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ TXTCantRetirar;
	private: System::Windows::Forms::TextBox^ TXTNombreResponsable;



	private: System::Windows::Forms::Button^ btnEl;
	private: System::Windows::Forms::TextBox^ TXTCOLUMNAELIMINAR;

	private: System::Windows::Forms::TextBox^ TXTFILAELIMINAR;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ BtnRetirar;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnAlmacenar;
	private: System::Windows::Forms::Button^ BtnHaAlmacenar;
	private: System::Windows::Forms::Label^ lIDAlma;
	private: System::Windows::Forms::TextBox^ TXTIDAl;
	private: System::Windows::Forms::TextBox^ TXTPesoUni;
	private: System::Windows::Forms::TextBox^ TXTResponsableAlmacenar;
	private: System::Windows::Forms::TextBox^ TXTCantidadAl;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ TXTFECHAALMAAÑO;

	private: System::Windows::Forms::TextBox^ TXTFECHAALMAMES;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ TXTFECHAALMADIA;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Panel^ panel4;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DGVMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RTBDatos = (gcnew System::Windows::Forms::RichTextBox());
			this->BTNCrearBahia = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TXTFila = (gcnew System::Windows::Forms::TextBox());
			this->TXTColumna = (gcnew System::Windows::Forms::TextBox());
			this->RBMaterialOficina = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->RBMaterialConstruccion = (gcnew System::Windows::Forms::RadioButton());
			this->RbRopa = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtMax = (gcnew System::Windows::Forms::TextBox());
			this->BtnCrear = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCant = (gcnew System::Windows::Forms::Button());
			this->btnPeso = (gcnew System::Windows::Forms::Button());
			this->btnTipo = (gcnew System::Windows::Forms::Button());
			this->btnRet = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TXTIDRetirar = (gcnew System::Windows::Forms::TextBox());
			this->TXTFechaRetiroDD = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TXTFechaRetiroMM = (gcnew System::Windows::Forms::TextBox());
			this->TXTFechaRetiroAA = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TXTCantRetirar = (gcnew System::Windows::Forms::TextBox());
			this->TXTNombreResponsable = (gcnew System::Windows::Forms::TextBox());
			this->btnEl = (gcnew System::Windows::Forms::Button());
			this->TXTCOLUMNAELIMINAR = (gcnew System::Windows::Forms::TextBox());
			this->TXTFILAELIMINAR = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->BtnRetirar = (gcnew System::Windows::Forms::Button());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnAlmacenar = (gcnew System::Windows::Forms::Button());
			this->BtnHaAlmacenar = (gcnew System::Windows::Forms::Button());
			this->lIDAlma = (gcnew System::Windows::Forms::Label());
			this->TXTIDAl = (gcnew System::Windows::Forms::TextBox());
			this->TXTPesoUni = (gcnew System::Windows::Forms::TextBox());
			this->TXTResponsableAlmacenar = (gcnew System::Windows::Forms::TextBox());
			this->TXTCantidadAl = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->TXTFECHAALMAAÑO = (gcnew System::Windows::Forms::TextBox());
			this->TXTFECHAALMAMES = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->TXTFECHAALMADIA = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMatriz))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// DGVMatriz
			// 
			this->DGVMatriz->AllowUserToAddRows = false;
			this->DGVMatriz->AllowUserToDeleteRows = false;
			this->DGVMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVMatriz->ColumnHeadersVisible = false;
			this->DGVMatriz->Location = System::Drawing::Point(27, 87);
			this->DGVMatriz->Name = L"DGVMatriz";
			this->DGVMatriz->RowHeadersVisible = false;
			this->DGVMatriz->RowHeadersWidth = 51;
			this->DGVMatriz->RowTemplate->Height = 24;
			this->DGVMatriz->Size = System::Drawing::Size(537, 522);
			this->DGVMatriz->TabIndex = 66;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(578, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 96);
			this->label1->TabIndex = 67;
			this->label1->Text = L"BODEGA GRID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(27, 635);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(639, 162);
			this->groupBox1->TabIndex = 68;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Clasificacion de ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(385, 22);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Para Materiales de Contrucción el ID es 3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Para ropa el ID es 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(336, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Para Materiales de Oficina el ID es 1";
			// 
			// RTBDatos
			// 
			this->RTBDatos->Location = System::Drawing::Point(582, 87);
			this->RTBDatos->Name = L"RTBDatos";
			this->RTBDatos->Size = System::Drawing::Size(228, 522);
			this->RTBDatos->TabIndex = 73;
			this->RTBDatos->Text = L"";
			// 
			// BTNCrearBahia
			// 
			this->BTNCrearBahia->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BTNCrearBahia->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNCrearBahia->Location = System::Drawing::Point(106, 166);
			this->BTNCrearBahia->Name = L"BTNCrearBahia";
			this->BTNCrearBahia->Size = System::Drawing::Size(180, 105);
			this->BTNCrearBahia->TabIndex = 74;
			this->BTNCrearBahia->Text = L"HABILITAR LA \r\nFUNCION \r\nCREAR BAHÍA";
			this->BTNCrearBahia->UseVisualStyleBackColor = false;
			this->BTNCrearBahia->Click += gcnew System::EventHandler(this, &MyForm::BTNCrearBahia_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(79, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 23);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Fila:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(46, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 23);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Columna:";
			// 
			// TXTFila
			// 
			this->TXTFila->Enabled = false;
			this->TXTFila->Location = System::Drawing::Point(158, 40);
			this->TXTFila->Name = L"TXTFila";
			this->TXTFila->Size = System::Drawing::Size(100, 32);
			this->TXTFila->TabIndex = 77;
			// 
			// TXTColumna
			// 
			this->TXTColumna->Enabled = false;
			this->TXTColumna->Location = System::Drawing::Point(158, 76);
			this->TXTColumna->Name = L"TXTColumna";
			this->TXTColumna->Size = System::Drawing::Size(100, 32);
			this->TXTColumna->TabIndex = 78;
			// 
			// RBMaterialOficina
			// 
			this->RBMaterialOficina->AutoSize = true;
			this->RBMaterialOficina->Location = System::Drawing::Point(17, 36);
			this->RBMaterialOficina->Name = L"RBMaterialOficina";
			this->RBMaterialOficina->Size = System::Drawing::Size(217, 27);
			this->RBMaterialOficina->TabIndex = 80;
			this->RBMaterialOficina->TabStop = true;
			this->RBMaterialOficina->Text = L"Material de Oficina";
			this->RBMaterialOficina->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->RBMaterialConstruccion);
			this->groupBox2->Controls->Add(this->RbRopa);
			this->groupBox2->Controls->Add(this->RBMaterialOficina);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(13, 127);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(332, 150);
			this->groupBox2->TabIndex = 81;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"ID del Tipo de Producto";
			// 
			// RBMaterialConstruccion
			// 
			this->RBMaterialConstruccion->AutoSize = true;
			this->RBMaterialConstruccion->Location = System::Drawing::Point(17, 110);
			this->RBMaterialConstruccion->Name = L"RBMaterialConstruccion";
			this->RBMaterialConstruccion->Size = System::Drawing::Size(277, 27);
			this->RBMaterialConstruccion->TabIndex = 82;
			this->RBMaterialConstruccion->TabStop = true;
			this->RBMaterialConstruccion->Text = L"Material de Construccion";
			this->RBMaterialConstruccion->UseVisualStyleBackColor = true;
			// 
			// RbRopa
			// 
			this->RbRopa->AutoSize = true;
			this->RbRopa->Location = System::Drawing::Point(17, 73);
			this->RbRopa->Name = L"RbRopa";
			this->RbRopa->Size = System::Drawing::Size(84, 27);
			this->RbRopa->TabIndex = 81;
			this->RbRopa->TabStop = true;
			this->RbRopa->Text = L"Ropa";
			this->RbRopa->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 297);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 23);
			this->label7->TabIndex = 82;
			this->label7->Text = L"Peso Máximo:";
			// 
			// TxtMax
			// 
			this->TxtMax->Enabled = false;
			this->TxtMax->Location = System::Drawing::Point(175, 295);
			this->TxtMax->Name = L"TxtMax";
			this->TxtMax->Size = System::Drawing::Size(100, 32);
			this->TxtMax->TabIndex = 83;
			// 
			// BtnCrear
			// 
			this->BtnCrear->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BtnCrear->Enabled = false;
			this->BtnCrear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnCrear->Location = System::Drawing::Point(99, 333);
			this->BtnCrear->Name = L"BtnCrear";
			this->BtnCrear->Size = System::Drawing::Size(169, 65);
			this->BtnCrear->TabIndex = 84;
			this->BtnCrear->Text = L"Crear bahía";
			this->BtnCrear->UseVisualStyleBackColor = false;
			this->BtnCrear->Click += gcnew System::EventHandler(this, &MyForm::BtnCrear_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->btnCant);
			this->groupBox3->Controls->Add(this->btnPeso);
			this->groupBox3->Controls->Add(this->btnTipo);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(1693, 347);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(234, 312);
			this->groupBox3->TabIndex = 85;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Invetarios";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// btnCant
			// 
			this->btnCant->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnCant->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCant->Location = System::Drawing::Point(23, 223);
			this->btnCant->Name = L"btnCant";
			this->btnCant->Size = System::Drawing::Size(178, 65);
			this->btnCant->TabIndex = 85;
			this->btnCant->Text = L"INVENTARIO CANTIDAD";
			this->btnCant->UseVisualStyleBackColor = false;
			// 
			// btnPeso
			// 
			this->btnPeso->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnPeso->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPeso->Location = System::Drawing::Point(23, 136);
			this->btnPeso->Name = L"btnPeso";
			this->btnPeso->Size = System::Drawing::Size(178, 65);
			this->btnPeso->TabIndex = 84;
			this->btnPeso->Text = L"INVENTARIO PESO";
			this->btnPeso->UseVisualStyleBackColor = false;
			// 
			// btnTipo
			// 
			this->btnTipo->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnTipo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTipo->Location = System::Drawing::Point(23, 34);
			this->btnTipo->Name = L"btnTipo";
			this->btnTipo->Size = System::Drawing::Size(178, 65);
			this->btnTipo->TabIndex = 83;
			this->btnTipo->Text = L"INVENTARIO TIPO";
			this->btnTipo->UseVisualStyleBackColor = false;
			// 
			// btnRet
			// 
			this->btnRet->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnRet->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRet->Location = System::Drawing::Point(133, 162);
			this->btnRet->Name = L"btnRet";
			this->btnRet->Size = System::Drawing::Size(249, 101);
			this->btnRet->TabIndex = 86;
			this->btnRet->Text = L"HABILITAR LA \r\nFUNCIÓN \r\nRETIRAR PRODUCTO";
			this->btnRet->UseVisualStyleBackColor = false;
			this->btnRet->Click += gcnew System::EventHandler(this, &MyForm::btnRet_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(14, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(245, 23);
			this->label8->TabIndex = 87;
			this->label8->Text = L"ID del tipo de Producto:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(170, 23);
			this->label9->TabIndex = 88;
			this->label9->Text = L"Fecha de Retiro:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 183);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(314, 23);
			this->label10->TabIndex = 89;
			this->label10->Text = L"Cantidad de unidades a retirar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(260, 23);
			this->label11->TabIndex = 90;
			this->label11->Text = L"Nombre del Responsable";
			// 
			// TXTIDRetirar
			// 
			this->TXTIDRetirar->Enabled = false;
			this->TXTIDRetirar->Location = System::Drawing::Point(309, 56);
			this->TXTIDRetirar->Name = L"TXTIDRetirar";
			this->TXTIDRetirar->Size = System::Drawing::Size(144, 28);
			this->TXTIDRetirar->TabIndex = 91;
			// 
			// TXTFechaRetiroDD
			// 
			this->TXTFechaRetiroDD->Enabled = false;
			this->TXTFechaRetiroDD->Location = System::Drawing::Point(205, 115);
			this->TXTFechaRetiroDD->Name = L"TXTFechaRetiroDD";
			this->TXTFechaRetiroDD->Size = System::Drawing::Size(32, 28);
			this->TXTFechaRetiroDD->TabIndex = 92;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(252, 115);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 23);
			this->label12->TabIndex = 93;
			this->label12->Text = L"/";
			// 
			// TXTFechaRetiroMM
			// 
			this->TXTFechaRetiroMM->Enabled = false;
			this->TXTFechaRetiroMM->Location = System::Drawing::Point(282, 114);
			this->TXTFechaRetiroMM->Name = L"TXTFechaRetiroMM";
			this->TXTFechaRetiroMM->Size = System::Drawing::Size(67, 28);
			this->TXTFechaRetiroMM->TabIndex = 94;
			// 
			// TXTFechaRetiroAA
			// 
			this->TXTFechaRetiroAA->Enabled = false;
			this->TXTFechaRetiroAA->Location = System::Drawing::Point(382, 114);
			this->TXTFechaRetiroAA->Name = L"TXTFechaRetiroAA";
			this->TXTFechaRetiroAA->Size = System::Drawing::Size(71, 28);
			this->TXTFechaRetiroAA->TabIndex = 95;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(355, 114);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 23);
			this->label13->TabIndex = 96;
			this->label13->Text = L"/";
			// 
			// TXTCantRetirar
			// 
			this->TXTCantRetirar->Enabled = false;
			this->TXTCantRetirar->Location = System::Drawing::Point(326, 182);
			this->TXTCantRetirar->Name = L"TXTCantRetirar";
			this->TXTCantRetirar->Size = System::Drawing::Size(127, 28);
			this->TXTCantRetirar->TabIndex = 97;
			// 
			// TXTNombreResponsable
			// 
			this->TXTNombreResponsable->Enabled = false;
			this->TXTNombreResponsable->Location = System::Drawing::Point(288, 254);
			this->TXTNombreResponsable->Name = L"TXTNombreResponsable";
			this->TXTNombreResponsable->Size = System::Drawing::Size(165, 28);
			this->TXTNombreResponsable->TabIndex = 98;
			// 
			// btnEl
			// 
			this->btnEl->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnEl->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEl->Location = System::Drawing::Point(88, 152);
			this->btnEl->Name = L"btnEl";
			this->btnEl->Size = System::Drawing::Size(249, 121);
			this->btnEl->TabIndex = 99;
			this->btnEl->Text = L"HABILITAR LA\r\nFUNCIÓN \r\nELIMINAR BAHÍA";
			this->btnEl->UseVisualStyleBackColor = false;
			this->btnEl->Click += gcnew System::EventHandler(this, &MyForm::btnEl_Click);
			// 
			// TXTCOLUMNAELIMINAR
			// 
			this->TXTCOLUMNAELIMINAR->Enabled = false;
			this->TXTCOLUMNAELIMINAR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXTCOLUMNAELIMINAR->Location = System::Drawing::Point(195, 176);
			this->TXTCOLUMNAELIMINAR->Name = L"TXTCOLUMNAELIMINAR";
			this->TXTCOLUMNAELIMINAR->Size = System::Drawing::Size(119, 28);
			this->TXTCOLUMNAELIMINAR->TabIndex = 103;
			// 
			// TXTFILAELIMINAR
			// 
			this->TXTFILAELIMINAR->Enabled = false;
			this->TXTFILAELIMINAR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXTFILAELIMINAR->Location = System::Drawing::Point(195, 121);
			this->TXTFILAELIMINAR->Name = L"TXTFILAELIMINAR";
			this->TXTFILAELIMINAR->Size = System::Drawing::Size(119, 28);
			this->TXTFILAELIMINAR->TabIndex = 102;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(72, 174);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 23);
			this->label14->TabIndex = 101;
			this->label14->Text = L"Columna:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(115, 121);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(47, 23);
			this->label15->TabIndex = 100;
			this->label15->Text = L"Fila:";
			// 
			// BtnRetirar
			// 
			this->BtnRetirar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BtnRetirar->Enabled = false;
			this->BtnRetirar->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnRetirar->Location = System::Drawing::Point(151, 319);
			this->BtnRetirar->Name = L"BtnRetirar";
			this->BtnRetirar->Size = System::Drawing::Size(150, 65);
			this->BtnRetirar->TabIndex = 104;
			this->BtnRetirar->Text = L"Retirar producto";
			this->BtnRetirar->UseVisualStyleBackColor = false;
			this->BtnRetirar->Click += gcnew System::EventHandler(this, &MyForm::BtnRetirar_Click);
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BtnEliminar->Enabled = false;
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(152, 251);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(150, 65);
			this->BtnEliminar->TabIndex = 105;
			this->BtnEliminar->Text = L"Eliminar bahía";
			this->BtnEliminar->UseVisualStyleBackColor = false;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &MyForm::BtnEliminar_Click);
			// 
			// BtnAlmacenar
			// 
			this->BtnAlmacenar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BtnAlmacenar->Enabled = false;
			this->BtnAlmacenar->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnAlmacenar->Location = System::Drawing::Point(138, 333);
			this->BtnAlmacenar->Name = L"BtnAlmacenar";
			this->BtnAlmacenar->Size = System::Drawing::Size(213, 65);
			this->BtnAlmacenar->TabIndex = 106;
			this->BtnAlmacenar->Text = L"Almacenar producto";
			this->BtnAlmacenar->UseVisualStyleBackColor = false;
			this->BtnAlmacenar->Click += gcnew System::EventHandler(this, &MyForm::BtnAlmacenar_Click);
			// 
			// BtnHaAlmacenar
			// 
			this->BtnHaAlmacenar->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BtnHaAlmacenar->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnHaAlmacenar->Location = System::Drawing::Point(109, 161);
			this->BtnHaAlmacenar->Name = L"BtnHaAlmacenar";
			this->BtnHaAlmacenar->Size = System::Drawing::Size(279, 112);
			this->BtnHaAlmacenar->TabIndex = 107;
			this->BtnHaAlmacenar->Text = L"HABILITAR LA \r\nFUNCIÓN \r\nALMACENAR PRODUCTO";
			this->BtnHaAlmacenar->UseVisualStyleBackColor = false;
			this->BtnHaAlmacenar->Click += gcnew System::EventHandler(this, &MyForm::BtnHaAlmacenar_Click);
			// 
			// lIDAlma
			// 
			this->lIDAlma->AutoSize = true;
			this->lIDAlma->BackColor = System::Drawing::Color::Transparent;
			this->lIDAlma->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lIDAlma->ForeColor = System::Drawing::Color::Black;
			this->lIDAlma->Location = System::Drawing::Point(40, 37);
			this->lIDAlma->Name = L"lIDAlma";
			this->lIDAlma->Size = System::Drawing::Size(248, 23);
			this->lIDAlma->TabIndex = 108;
			this->lIDAlma->Text = L"ID del Tipo de producto:";
			// 
			// TXTIDAl
			// 
			this->TXTIDAl->Enabled = false;
			this->TXTIDAl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXTIDAl->Location = System::Drawing::Point(307, 37);
			this->TXTIDAl->Name = L"TXTIDAl";
			this->TXTIDAl->Size = System::Drawing::Size(121, 28);
			this->TXTIDAl->TabIndex = 109;
			// 
			// TXTPesoUni
			// 
			this->TXTPesoUni->Enabled = false;
			this->TXTPesoUni->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXTPesoUni->Location = System::Drawing::Point(307, 102);
			this->TXTPesoUni->Name = L"TXTPesoUni";
			this->TXTPesoUni->Size = System::Drawing::Size(121, 28);
			this->TXTPesoUni->TabIndex = 110;
			// 
			// TXTResponsableAlmacenar
			// 
			this->TXTResponsableAlmacenar->Enabled = false;
			this->TXTResponsableAlmacenar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TXTResponsableAlmacenar->Location = System::Drawing::Point(282, 163);
			this->TXTResponsableAlmacenar->Name = L"TXTResponsableAlmacenar";
			this->TXTResponsableAlmacenar->Size = System::Drawing::Size(146, 28);
			this->TXTResponsableAlmacenar->TabIndex = 111;
			// 
			// TXTCantidadAl
			// 
			this->TXTCantidadAl->Enabled = false;
			this->TXTCantidadAl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TXTCantidadAl->Location = System::Drawing::Point(283, 280);
			this->TXTCantidadAl->Name = L"TXTCantidadAl";
			this->TXTCantidadAl->Size = System::Drawing::Size(145, 28);
			this->TXTCantidadAl->TabIndex = 112;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(99, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(138, 23);
			this->label16->TabIndex = 113;
			this->label16->Text = L"Peso Unitario:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(6, 165);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(265, 23);
			this->label17->TabIndex = 114;
			this->label17->Text = L"Nombre del Responsable:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(354, 216);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 23);
			this->label18->TabIndex = 120;
			this->label18->Text = L"/";
			// 
			// TXTFECHAALMAAÑO
			// 
			this->TXTFECHAALMAAÑO->Enabled = false;
			this->TXTFECHAALMAAÑO->Location = System::Drawing::Point(381, 217);
			this->TXTFECHAALMAAÑO->Name = L"TXTFECHAALMAAÑO";
			this->TXTFECHAALMAAÑO->Size = System::Drawing::Size(55, 28);
			this->TXTFECHAALMAAÑO->TabIndex = 119;
			// 
			// TXTFECHAALMAMES
			// 
			this->TXTFECHAALMAMES->Enabled = false;
			this->TXTFECHAALMAMES->Location = System::Drawing::Point(307, 217);
			this->TXTFECHAALMAMES->Name = L"TXTFECHAALMAMES";
			this->TXTFECHAALMAMES->Size = System::Drawing::Size(44, 28);
			this->TXTFECHAALMAMES->TabIndex = 118;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(290, 216);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 23);
			this->label19->TabIndex = 117;
			this->label19->Text = L"/";
			// 
			// TXTFECHAALMADIA
			// 
			this->TXTFECHAALMADIA->Enabled = false;
			this->TXTFECHAALMADIA->Location = System::Drawing::Point(256, 217);
			this->TXTFECHAALMADIA->Name = L"TXTFECHAALMADIA";
			this->TXTFECHAALMADIA->Size = System::Drawing::Size(32, 28);
			this->TXTFECHAALMADIA->TabIndex = 116;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(16, 214);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(237, 23);
			this->label20->TabIndex = 115;
			this->label20->Text = L"Fecha de Almacenaje:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->BtnCrear);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->TxtMax);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->TXTFila);
			this->groupBox4->Controls->Add(this->TXTColumna);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(831, 87);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(357, 414);
			this->groupBox4->TabIndex = 121;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Crear Bahia";
			this->groupBox4->Visible = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->BTNCrearBahia);
			this->panel1->Location = System::Drawing::Point(816, 87);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 423);
			this->panel1->TabIndex = 122;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(33, 280);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(238, 23);
			this->label21->TabIndex = 123;
			this->label21->Text = L"Unidades a Almacenar";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->BtnAlmacenar);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->lIDAlma);
			this->groupBox5->Controls->Add(this->TXTIDAl);
			this->groupBox5->Controls->Add(this->TXTPesoUni);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->TXTResponsableAlmacenar);
			this->groupBox5->Controls->Add(this->TXTFECHAALMAAÑO);
			this->groupBox5->Controls->Add(this->TXTCantidadAl);
			this->groupBox5->Controls->Add(this->TXTFECHAALMAMES);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->TXTFECHAALMADIA);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(831, 520);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(442, 443);
			this->groupBox5->TabIndex = 124;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Almacenar Producto";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->BtnHaAlmacenar);
			this->panel2->Location = System::Drawing::Point(816, 516);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(469, 467);
			this->panel2->TabIndex = 125;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->BtnEliminar);
			this->groupBox6->Controls->Add(this->TXTCOLUMNAELIMINAR);
			this->groupBox6->Controls->Add(this->TXTFILAELIMINAR);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(1293, 529);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(385, 434);
			this->groupBox6->TabIndex = 126;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Eliminar Bahía";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnEl);
			this->panel3->Location = System::Drawing::Point(1293, 516);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(394, 458);
			this->panel3->TabIndex = 127;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->TXTNombreResponsable);
			this->groupBox7->Controls->Add(this->TXTCantRetirar);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->TXTFechaRetiroAA);
			this->groupBox7->Controls->Add(this->TXTFechaRetiroMM);
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Controls->Add(this->TXTFechaRetiroDD);
			this->groupBox7->Controls->Add(this->BtnRetirar);
			this->groupBox7->Controls->Add(this->TXTIDRetirar);
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->label10);
			this->groupBox7->Controls->Add(this->label9);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(1206, 88);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(472, 413);
			this->groupBox7->TabIndex = 128;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Retirar Producto";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->btnRet);
			this->panel4->Location = System::Drawing::Point(1200, 87);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(487, 423);
			this->panel4->TabIndex = 129;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 988);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->RTBDatos);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DGVMatriz);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMatriz))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Variables a Utilizar
		//variables enteras
		int CrearColumna;
		int ID1 = 0;
		int ID2 = 0;
		int ID3 = 0;
		int PesoMax = 0;
		int CantidadTipo = 0;
		int NumFila;
		int IDAlmacenar;
		int PesoUnitarioAlmacenar;
		int CantidadAlmacenar;
		int CantidadParaGuardar;
		int IDRetirar;
		int CantidadparaRetiro;
		int FilaRetirar;
		int CantRetiroTemporalNueva;
		int FilaEliminar;
		int Codigo = 0;
		int ProductosFaltantes = 0;
		int ColumnaRec;
		int Tipo1R;
		int Tipo2R;
		int Tipo3R;
		int PesoMaxRec;
		int PesoDis1;
		int PesoDis2;
		int PesoDis3;
		int PesoUtiliRec;
		int CantRec;
		int CantRec1;
		int CantRec2;
		int CantRec3;
		int PesoUni1;
		int PesoUni2;
		int PesoUni3;
		int PesoDUti;
		//variables char
		char CrearFila;
		char ColumnaRetirar;
		char ColumnaEliminar;
		//variables booleanas
		bool BusacarID = false;
		bool POSIBILIDAD = false;
		bool ProcesoCreando = true;
		bool UnidadesGuardadas = false;
		bool Primero = true;
		bool AgregarF = true;;
		bool AgregarC = true;
		bool ES1 = false;
		bool ES2 = false;
		bool ES3 = false;
		bool DatosValidos = false;
		//variables string
		String^ FechaAlmacenarDD;
		String^ FechaAlmacenarMM;
		String^ FechaAlmacenarAA;
		String^ ResponsableAlmacenar;
		String^ FechaAlma = "";
		String^ FechaRetiroDD;
		String^ FechaRetiroMM;
		String^ FechaRetiroAA;
		String^ ResponsableRetirar;
		//pilas
		Pila* Ropa = new Pila();
		Pila* Oficina = new Pila();
		Pila* Construccion = new Pila();
		Matriz* MATRIZ = new Matriz();
		Pila* OficinaEl = new Pila();
		Pila* RopaEl = new Pila();
		Pila* ConstrucciónEl = new Pila();
		//listas
		Lista* listaFila = new Lista();
		Lista* listaColumna = new Lista();
		Lista* listaBahias = new Lista();
		char FilaRec;
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BTNCrearBahia_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = false;
	groupBox4->Visible = true;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void BtnHaAlmacenar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel2->Visible = false;
}
private: System::Void btnRet_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel4->Visible = false;
}
private: System::Void btnEl_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel3->Visible = false;
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
//buscar dentro de la matriz
void BuscandoMatriz()
	   {
		   Nodo1* BA = new Nodo1();
		   Nodo1* BB = new Nodo1();
		   Nodo1* BI = new Nodo1();
		   Nodo1* BD = new Nodo1();
		   Nodo1* BAG = new Nodo1();
		   BA = nullptr;
		   BB = nullptr;
		   BI = nullptr;
		   BD = nullptr;
		   if (AgregarC == false)
		   {
			   for (int i = 1; i < listaBahias->contador + 1; i++)
			   {
				   if (CrearColumna == listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->Columna)
				   {
					   int BAI = listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->FNum;
					   if (NumFila < BAI)
					   {
						   BA = listaBahias->ObtenerProducto(listaBahias->contador + 1, i);
					   }
					   else if (NumFila > BAI)
					   {
						   BB = listaBahias->ObtenerProducto(listaBahias->contador + 1, i);
					   }
				   }
			   }
		   }
		   else
		   {
			   BA = nullptr;
			   BB = nullptr;
		   }
		   if (AgregarF == false)
		   {
			   for (int i = 1; i < listaBahias->contador + 1; i++)
			   {
				   if (NumFila == listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->FNum)
				   {
					   int BAI = listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->Columna;
					   if (CrearColumna < BAI)
					   {
						   BI = listaBahias->ObtenerProducto(listaBahias->contador + 1, i);
					   }
					   else if (CrearColumna > BAI)
					   {
						   BD = listaBahias->ObtenerProducto(listaBahias->contador + 1, i);
					   }
				   }
			   }
		   }
		   for (int i = 1; i < listaBahias->contador + 1; i++)
		   {
			   if (NumFila == listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->FNum && CrearColumna == listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->Columna)
			   {
				   BAG = listaBahias->ObtenerProducto(listaBahias->contador + 1, i);
				   i = listaBahias->contador + 1;
			   }
		   }
		   Nodo3* ARR = new Nodo3(BA);
		   Nodo3* ABB = new Nodo3(BB);
		   Nodo3* IZZ = new Nodo3(BI);
		   Nodo3* DRR = new Nodo3(BD);
		   Nodo3* AGG = new Nodo3(BAG);
		   MATRIZ->Insertar(AgregarF, AgregarC, IZZ, DRR, ARR, ABB, CrearColumna, NumFila, AGG);
	   }
//Ver que la bahia no esta ya
void RevisandoLista(String^ Letra, int num)
	   {
		   for (int i = 1; i < listaColumna->contador + 1; i++)
		   {
			   //verificar que se agregue un elemento a la columna
			   if (num == Convert::ToInt32(listaColumna->ObtenerElementoColumna(listaColumna->contador + 1, i)->NumColumna))
			   {
				   AgregarC = false;
				   i = listaColumna->contador + 1;
			   }
		   }

		   for (int j = 1; j < listaFila->contador + 1; j++)
		   {
			   //verificar que se debe de agregar un elemento
			   if (Letra == Convert::ToString(Convert::ToChar(listaFila->ObtenerElementoFila(listaFila->contador + 1, j)->NumFila)))
			   {
				   AgregarF = false;
				   j = listaFila->contador + 1;
			   }
		   }

		   for (int i = 1; i < listaBahias->contador + 1; i++)
		   {
			   //verificar que no existan las bahias
			   if (num == Convert::ToInt32(listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->Columna))
			   {
				   if (Letra == Convert::ToString(Convert::ToChar(listaBahias->ObtenerProducto(listaBahias->contador + 1, i)->producto->Fila)))
				   {
					   ProcesoCreando = false;
					   i = listaBahias->contador + 1;
				   }
			   }
		   }
		   //ver que se agregue a la lista
		   if (ProcesoCreando)
		   {
			   //Agregar elemento a lista
			   if (AgregarF)
			   {
				   char letritaF = Convert::ToChar(TXTFila->Text);
				   listaFila->InsertarFila(letritaF, ABECEDARIO(Convert::ToString(Convert::ToChar(letritaF))));
			   }

			   //AGREGAR ELEMENTO A LA COLUMNA
			   if (AgregarC)
			   {
				   int numeroC = Convert::ToInt32(TXTColumna->Text);
				   listaColumna->InsertarColumna(numeroC);
			   }
			   //CREANDO LA BAHÍA
			   Productos* actual;
			   actual = CreandoBahia();
			   Nodo1* actualSi = new Nodo1(actual);
			   listaBahias->AgregarProducto(actualSi);
		   }
		   else
		   {
			   //MENSAJE DE AVISO AL USUARIO
			   System::Windows::Forms::MessageBox::Show("LA BAHÍA YA SE ENCUENTRA CREADA");
		   }
	   }
//para almacenar
void TipoAlmacenamientoRdio()
	   {
		   //PRODUCTO A GUARDAR ES 1
		   if (RBMaterialOficina->Checked == true)
		   {
			   ID1 = 1;
			   CantidadTipo += 1;
		   }

		   //PRODUCTO A GUARDAR ES 2
		   if (RbRopa->Checked == true)
		   {
			   ID2 = 2;
			   CantidadTipo += 1;
		   }

		   //PRODUCTO A GUARDAR ES 3
		   if (RBMaterialConstruccion->Checked == true)
		   {
			   ID3 = 3;
			   CantidadTipo += 1;
		   }
	   }
//CREANDO PRODUCTO BAHÍA
Productos* CreandoBahia()
	   {
		   //ALAMACENANDO EL PRODUCTO EN LA BAHÍA
		   Productos* Bahia = new Productos();
		   int pesoDisTodos;
		   pesoDisTodos = PesoMax / CantidadTipo;
		   Bahia->Fila = Convert::ToChar(CrearFila);
		   Bahia->FNum = ABECEDARIO(Convert::ToString(Convert::ToChar(CrearFila)));
		   Bahia->Columna = CrearColumna;
		   //ALMACENANDO EL TIPO DE PRODUCTO
		   if (ID1 == 1)
		   {
			   Bahia->TipoProducto1 = ID1;
			   Bahia->PesoDisponible = pesoDisTodos;
		   }
		   if (ID2 == 2)
		   {
			   Bahia->TipoProducto2 = ID2;
			   Bahia->PesoDisponible2 = pesoDisTodos;
		   }
		   if (ID3 == 3)
		   {
			   Bahia->TipoProducto3 = ID3;
			   Bahia->PesoDisponible3 = pesoDisTodos;
		   }
		   //ALAMACENANDO DATOS DEL PRODUCTO
		   Bahia->PesoMaximo = PesoMax;
		   Bahia->Cantidad = 0;
		   Bahia->PesoUtilizado = 0;
		   return Bahia;
	   }
bool PRIMEROAL;
//VERIFICAR QUE LA FECHA SEA VPALIDA
void VerificandoFecha(int año, int mes, int dia)
{
	//VERIFICANDO QUE EL AÑO SEA VÁLIDO
	if (año <= 2020)
	{
		//VERIFICANDO QUE EL MES SEA VALIDO
		if (mes <= 12)
		{
			//VERIFICANDO QUE EL DÍA INGRESADO SEA VÁLIDO
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
			{
				//MESES DE 31 DÍAS
				if (dia <= 31)
				{
					DatosValidos = true;
				}
				else
				{
					//MENSAJE DE ERROR
					System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
				}
			}
			else
			{
				//VERIFICANDO SI ES FEBRERO
				if (mes == 2)
				{
					//VERIFICANDO SI ES AÑO BISIESTO O ES AÑO NO BISIESTO
					if ((año % 4) == 0 && (año % 100) != 0 || (año % 400) == 0)
					{
						//VERIFICANDO MES DE FEBRERO BISIESTO
						if (dia <= 29)
						{
							DatosValidos = true;
						}
						else
						{
							//MENSAJE DE ERROR
							System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
						}
					}
					else
					{
						//VERIFICANDO MES DE FEBRERO NO BISISESTO
						if (dia <= 28)
						{
							DatosValidos = true;
						}
						else
						{
							//MENSAJE DE ERROR
							System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
						}
					}
				}
				else
				{
					//VERIFICANDO MESES DE 30 DÍAS
					if (dia <= 30)
					{
						DatosValidos = true;
					}
					else
					{
						//MENSAJE DE ERROR
						System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
					}
				}
			}
		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
		}
	}
	else
	{
		//MENSAJE DE ERROR
		System::Windows::Forms::MessageBox::Show("Ingrese una fecha válida");
	}

}
int CantActual;
bool PRIMERPRUEBA;
bool SIESPOSIBLEAL;
//VERIFICAR QUE SI SE PUEDE ALMACENAR
void VERIFICACIÓNALMACENAR(Lista* lista, int tipo)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VARIABLES QUE SE NECESITAN BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);
		int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);
		int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

		//PESO A GUARDAR

		int cantPRUEBAG = PesoUnitarioAlmacenar * CantActual;
		if (PRIMERPRUEBA == true)
		{
			if (CantActual == 1)
			{
				mitad = cantPRUEBAG;
			}
			else
			{
				mitad = PesoUnitarioAlmacenar * (CantActual / 2);
			}
		}
		else
		{
			mitad = cantPRUEBAG;
			if (i == usado)
			{
				i++;
			}
		}
		//TIPO DE PRODUCTO 1
		if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantActual != 0)
				{
					PRIMERPRUEBA = false;
					ES1 = true;

					VerificandoEspacio(listaBahias, i);

					if (CantActual != 0)
					{
						VERIFICACIÓNALMACENAR(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}
				}
				else
				{
					i = lista->contador + 1;
				}
			}
		}
		else if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2)) //TIPO DE PRODUCTO 2
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible2))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantActual != 0)
				{
					ES2 = true;
					PRIMERPRUEBA = false;

					VerificandoEspacio(listaBahias, i);

					if (CantActual != 0)
					{
						VERIFICACIÓNALMACENAR(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}
				}
				else
				{
					i = lista->contador + 1;
				}
			}
		}
		else if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3)) //TIPO DE PRODUCTO 3
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible3))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantActual != 0)
				{
					ES3 = true;
					PRIMEROAL = false;

					VerificandoEspacio(listaBahias, i);

					if (CantActual != 0)
					{
						VERIFICACIÓNALMACENAR(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}

				}
			}
		}

		if (CantActual == 0)
		{
			SIESPOSIBLEAL = true;
		}

		if (i == lista->contador)
		{
			//SI NO HAY BAHÍA DISPONIBLE CON ESE PRODUCTO MOSTRAR MENSAJE DE ERROR
			if (AlmacenadoCorrectamente == false)
			{
				//MENSAJE DE ERROR
				System::Windows::Forms::MessageBox::Show("No existe bahías disponibles para almacenar el producto");
			}
		}
	}
}
int CantidadNoCompleta;
int usado;
void VerificandoEspacio(Lista* lista, int ubi)
{
	//TIPO DE PRODUCTO 1
	if (ES1)
	{
		//SE PUEDE GUARDAR TODO EN UNA SOLA BAHÍA
		if (CantActual <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible))
		{
			AlmacenadoCorrectamente = true;
			CantActual = 0;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAS O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubi);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible);

			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l < SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l < SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			usado = ubi;
			CantActual = CantActual - PorGuardar;
		}
	}
	else if (ES2)
	{
		if (CantActual <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible2))
		{
			AlmacenadoCorrectamente = true;
			CantActual = 0;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAD O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubi);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible2);
			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l < SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l < SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			usado = ubi;
			CantActual = CantActual - PorGuardar;
		}
	}
	else if (ES3)
	{
		if (CantActual <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible3))
		{
			AlmacenadoCorrectamente = true;
			CantActual = 0;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAD O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubi);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->PesoDisponible3);
			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l < SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l < SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			usado = ubi;
			CantActual = CantActual - PorGuardar;
		}
	}
}
int cantAlmacenarFinal;
bool AlmacenadoCorrectamente = false;
int mitad;
int CantGuardandoActual;
//BUSCAR BAHÍA CON EL TIPO DE PRODUCTO
void Buscando(Lista* lista, int tipo)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VARIABLES QUE SE NECESITAN BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);
		int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);
		int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

		//PESO A GUARDAR
		CantidadParaGuardar = PesoUnitarioAlmacenar * CantidadAlmacenar;
		CantGuardandoActual = CantidadAlmacenar;
		if (PRIMEROAL == true)
		{
			if (CantidadAlmacenar == 1)
			{
				mitad = CantidadParaGuardar;
			}
			else
			{
				mitad = PesoUnitarioAlmacenar * (CantidadAlmacenar / 2);
			}
		}
		else
		{
			mitad = CantidadParaGuardar;
		}

		//TIPO DE PRODUCTO 1
		if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantidadAlmacenar != 0)
				{
					PRIMEROAL = false;
					ES1 = true;
					VerificandoPeso(i, lista);

					if (CantidadAlmacenar != 0)
					{
						Buscando(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}
				}
				else
				{
					i = lista->contador + 1;
				}
			}
		}
		else if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2)) //TIPO DE PRODUCTO 2
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible2))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantidadAlmacenar != 0)
				{
					ES2 = true;
					VerificandoPeso(i, lista);
					PRIMEROAL = false;

					if (CantidadAlmacenar != 0)
					{
						Buscando(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}
				}
				else
				{
					i = lista->contador + 1;
				}
			}
		}
		else if (IDAlmacenar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3)) //TIPO DE PRODUCTO 3
		{
			//VERIFICAR QUE MÍNIMO PUEDE GUARDAR LA MITAD DEL PEDIDO
			if (mitad <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible3))
			{
				//VER SI SE PARTIO A LA MITAD EL PEDIDO
				if (CantidadAlmacenar != 0)
				{
					ES3 = true;
					VerificandoPeso(i, lista);
					PRIMEROAL = false;

					if (CantidadAlmacenar != 0)
					{
						Buscando(lista, tipo);
					}
					else
					{
						i = lista->contador + 1;
					}

				}
			}
		}

		if (i == lista->contador)
		{
			//SI NO HAY BAHÍA DISPONIBLE CON ESE PRODUCTO MOSTRAR MENSAJE DE ERROR
			if (AlmacenadoCorrectamente == false)
			{
				//MENSAJE DE ERROR
				System::Windows::Forms::MessageBox::Show("No existe bahías disponibles para almacenar el producto");
			}
		}
	}
}
//REVISAR SI EL PESO ES SUFICIENTE
void VerificandoPeso(int ubicacion, Lista* lista)
{
	PesoUtiliRec = 0;
	CantRec1 = 0;
	CantRec2 = 0;
	CantRec3 = 0;

	//TIPO DE PRODUCTO 1
	if (ES1)
	{
		//SE PUEDE GUARDAR TODO EN UNA SOLA BAHÍA
		if (CantidadParaGuardar <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible))
		{
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//NUEVO PESO DISPONIBLE EN LA BAHÍA
			PesoDis1 = PesoDis1 - CantidadParaGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
			CantRec1 += CantGuardandoActual;
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
			//CANTIDAD A ALMACENAR PENDIENTE = 0
			CantidadAlmacenar = 0;
			AlmacenadoCorrectamente = true;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAS O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible);
			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l <= SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l <= SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			/*int PorGuardar = (SoloSePuede) / CantidadAlmacenar;*/
			//PESO A GUARDAR
			CantidadParaGuardar = PesoUnitarioAlmacenar * PorGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
			CantRec1 += PorGuardar;
			//NUEVA CANTIDAD A ALMACENAR
			CantidadAlmacenar = CantidadAlmacenar - PorGuardar;
			CantGuardandoActual = PorGuardar;
			PesoDis1 = PesoDis1 - CantidadParaGuardar;

			//ALMACENAR DATOS ACTUALIZADOS
			/*AlmacenandoObjeto();*/
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
		}
	}
	else if (ES2)
	{
		if (CantidadParaGuardar <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible2))
		{
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//NUEVO PESO DISPONIBLE EN LA BAHÍA
			PesoDis2 = PesoDis2 - CantidadParaGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 2 EN LA BAHÍA
			CantRec2 += CantGuardandoActual;
			CantGuardandoActual = CantidadAlmacenar;
			//ALMACENAR DATOS ACTUALIZADOS
			/*AlmacenandoObjeto();*/
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
			//CANTIDAD A ALMACENAR PENDIENTE = 0
			CantidadAlmacenar = 0;
			AlmacenadoCorrectamente = true;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAD O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible2);
			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l <= SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l <= SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			/*int PorGuardar = (SoloSePuede) / CantidadAlmacenar;*/
			//PESO A GUARDAR
			CantidadParaGuardar = PesoUnitarioAlmacenar * PorGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
			CantRec2 += PorGuardar;
			CantGuardandoActual = PorGuardar;
			//NUEVA CANTIDAD A ALMACENAR
			CantidadAlmacenar = CantidadAlmacenar - PorGuardar;
			PesoDis2 = PesoDis2 - CantidadParaGuardar;

			//ALMACENAR DATOS ACTUALIZADOS
			/*AlmacenandoObjeto();*/
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
		}
	}
	else if (ES3)
	{
		if (CantidadParaGuardar <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible3))
		{
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//NUEVO PESO DISPONIBLE EN LA BAHÍA
			PesoDis3 = PesoDis3 - CantidadParaGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 3 EN LA BAHÍA
			CantRec3 += CantGuardandoActual;
			CantGuardandoActual = CantidadAlmacenar;
			//ALMACENAR DATOS ACTUALIZADOS
			/*AlmacenandoObjeto();*/
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
			//CANTIDAD A ALMACENAR PENDIENTE = 0
			CantidadAlmacenar = 0;
			AlmacenadoCorrectamente = true;
		}
		else
		{
			//SI PUEDE GUARDAR LA MITAD O UN POCO MÁS DE LA MITAD
			//RECOLECTANDO LOS DATOS YA GUARDADOS EN LA BAHÍA
			RecolectandoDatos(lista, ubicacion);

			//VERIFICAR CUANTO PESO PUEDE GUARDAR LA BAHÍA
			int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubicacion)->producto->PesoDisponible3);
			//LOS ELEMENTOS QUE VA ALMACENAR
			int j = 0;
			int h = 1;
			int l = 0;
			while (l <= SoloSePuede)
			{
				j = PesoUnitarioAlmacenar * h;
				l = PesoUnitarioAlmacenar * (h + 1);
				if (l <= SoloSePuede)
				{
					h++;
				}
			}
			int PorGuardar = h;
			/*int PorGuardar = (SoloSePuede) / CantidadAlmacenar;*/
			//PESO A GUARDAR
			CantidadParaGuardar = PesoUnitarioAlmacenar * PorGuardar;
			//PESO UTILIZADO ACTUALIZADO
			PesoUtiliRec = PesoUtiliRec + CantidadParaGuardar;
			//CANTIDAD DE PRODUCTO 3 EN LA BAHÍA
			CantRec3 += PorGuardar;
			CantGuardandoActual = PorGuardar;
			//NUEVA CANTIDAD A ALMACENAR
			CantidadAlmacenar = CantidadAlmacenar - PorGuardar;
			PesoDis3 = PesoDis3 - CantidadParaGuardar;
			//HACER LOS CAMBIOS
			NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubicacion));
		}
	}
}
//CONVERTIR A CHAR EL NOMBRE
void IngresandoNombreChar(String^ cadena, char salida[])
{
	for (int i = 0; i < cadena->Length; i++)
	{
		salida[i] = Convert::ToChar(cadena[i]);
	}
}
//RECOLECTANDO DATOS
void RecolectandoDatos(Lista* listaRecPro, int ubi)
{
	//COLUMNA DE LA BAHÍA
	ColumnaRec = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Columna);
	//FILA DE LA BAHÍA
	FilaRec = Convert::ToChar(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Fila);
	//TIPO 1 DE ALMACENAMIENTO
	Tipo1R = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->TipoProducto1);
	//TIPO 2 DE ALMACENAMIENTO
	Tipo2R = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->TipoProducto2);
	//TIPO 3 DE ALMACENAMIENTO
	Tipo3R = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->TipoProducto3);
	//PESO DISPONIBLE TIPO 1
	PesoDis1 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoDisponible);
	//PESO DISPONIBLE TIPO 2
	PesoDis2 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoDisponible2);
	//PESO DISPONIBLE TIPO 3
	PesoDis3 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoDisponible3);
	//CANTIDAD DEL PRODUCTO 1
	CantRec1 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Cant1);
	//CANTIDAD DEL PRODUCO 2
	CantRec2 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Cant2);
	//CANTIDAD DEL PRODUCTO 3
	CantRec3 = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Cant3);


	//PESO MÁXIMO DE LA BAHÍA
	PesoMaxRec = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoMaximo);

	//PILA CON EL PRODUCTO
	int GuardandoDatosCant;
	int GuardandoDatosPeso;
	int GuardandoDatosTipo;
	int GuardandoDatosCod;
	int cantElementos;
	cantElementos = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->cn);
	////GUARDANDO LOS PRODUCTOS QUE YA ESTABAN EN LA PILA
	for (int i = 0; i < cantElementos; i++)
	{
		GuardandoDatosCant = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cantidad);
		GuardandoDatosCod = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cod);
		GuardandoDatosPeso = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().peso);
		GuardandoDatosTipo = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().tipo);

		if (GuardandoDatosTipo == 1)
		{
			Oficina->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
		else if (GuardandoDatosTipo == 2)
		{
			Ropa->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
		else if (GuardandoDatosTipo == 3)
		{
			Construccion->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
	}
	//CANTIDAD DE PRODUCTOS TOTAL ALMACENADOS
	CantRec = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->Cantidad);
	//PESO TOTAL UTILIZADO
	PesoDUti = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoUtilizado);
	PesoUtiliRec = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->PesoUtilizado);
}
//RECOLECTANDO DATOS
void RecolectandoDatosELIMINACION(Lista* listaRecPro, int ubi)
{

	//PILA CON EL PRODUCTO
	int GuardandoDatosCant;
	int GuardandoDatosPeso;
	int GuardandoDatosTipo;
	int GuardandoDatosCod;
	int cantElementos;
	cantElementos = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->cn);
	////GUARDANDO LOS PRODUCTOS QUE YA ESTABAN EN LA PILA
	for (int i = 0; i < cantElementos; i++)
	{
		GuardandoDatosCant = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cantidad);
		GuardandoDatosCod = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cod);
		GuardandoDatosPeso = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().peso);
		GuardandoDatosTipo = Convert::ToInt32(listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->ObtenerCima().tipo);

		if (GuardandoDatosTipo == 1)
		{
			OficinaEl->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
		else if (GuardandoDatosTipo == 2)
		{
			RopaEl->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
		else if (GuardandoDatosTipo == 3)
		{
			ConstrucciónEl->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
			listaRecPro->ObtenerProducto(listaRecPro->contador + 1, ubi)->producto->pilaPro->Desapilar();
		}
	}

}
int codigoUnico = 0;
bool ALMACENANDO = false;
bool RETIRANDO = false;
bool ELIMINANDO = false;
//ALMACENANDO PRODUCTOS
Productos* AlmacenandoObjeto()
{
	codigoUnico++;
	//INICIALIZANDO EL PRODUCTO
	Productos* Bahia = new Productos();

	//FILA
	Bahia->Columna = ColumnaRec;
	//COLUMNA
	Bahia->Fila = FilaRec;


	//TIPO DE PRODUCTO 1
	Bahia->TipoProducto1 = Tipo1R;
	//TIPO DE PRODUCTO 2
	Bahia->TipoProducto2 = Tipo2R;
	//TIPO DE PRODUCTO 3
	Bahia->TipoProducto3 = Tipo3R;

	//PESO MAXIMO
	Bahia->PesoMaximo = PesoMaxRec;

	//CANTIDAD DEL TIPO 1
	Bahia->Cant1 = CantRec1;
	//CANTIDAD DEL TIPO 2
	Bahia->Cant2 = CantRec2;
	//CANTIDAD DEL TIPO 3
	Bahia->Cant3 = CantRec3;


	//PESO DISPONIBLE 1
	Bahia->PesoDisponible = PesoDis1;
	//PESO DISPONIBLE 2
	Bahia->PesoDisponible2 = PesoDis2;
	//PESO DISPONIBLE 3
	Bahia->PesoDisponible3 = PesoDis3;

	//PESO UTILIZADO
	Bahia->PesoUtilizado = PesoUtiliRec;

	if (ALMACENANDO == true || ELIMINANDO == true)
	{
		//CANTIDAD TOTAL
		Bahia->Cantidad = CantGuardandoActual + CantRec;

		if (ALMACENANDO == true)
		{
			//NOMBRE RESPONSABLE
			IngresandoNombreChar(ResponsableAlmacenar, Bahia->NombreA);

			//FECHA DE INGRESO
			Bahia->FechaAlmacenada = Convert::ToInt32(FechaAlmacenarAA + FechaAlmacenarMM + FechaAlmacenarDD);
		}

		//AGREGANDO EL PRODUCTO A ALMACENAR
		if (ES1)
		{
			Oficina->Apilar(CantGuardandoActual, 1, PesoUnitarioAlmacenar, codigoUnico);
		}
		else if (ES2)
		{
			Ropa->Apilar(CantGuardandoActual, 2, PesoUnitarioAlmacenar, codigoUnico);
		}
		else if (ES3)
		{
			Construccion->Apilar(CantGuardandoActual, 3, PesoUnitarioAlmacenar, codigoUnico);
		}
	}

	if (RETIRANDO == true)
	{
		//CANTIDAD TOTAL
		Bahia->Cantidad = CantRec1 + CantRec2 + CantRec3;

		//NOMBRE RESPONSABLE
		IngresandoNombreChar(ResponsableRetirar, Bahia->NombreR);

		//FECHA DE RETIRO
		Bahia->FechaRetiro = Convert::ToInt32(FechaRetiroAA + FechaRetiroMM + FechaRetiroDD);
	}

	if (ELIMINANDO == true)
	{

	}

	//ORDENANDO CONFORME AL ORDEN LA PILA DE BAHÍA:
	//1. OFICINA
	//2. ROPA
	//3. CONSTRUCCIÓN

	//VARIABLES
	int GuardandoDatosCant;
	int GuardandoDatosPeso;
	int GuardandoDatosTipo;
	int GuardandoDatosCod;
	int cantElementos;

	cantElementos = Construccion->cn;
	for (int i = 0; i < cantElementos; i++)
	{
		//RECOLECTANDO DATOS
		GuardandoDatosCant = Convert::ToInt32(Construccion->ObtenerCima().cantidad);
		GuardandoDatosPeso = Convert::ToInt32(Construccion->ObtenerCima().peso);
		GuardandoDatosTipo = Convert::ToInt32(Construccion->ObtenerCima().tipo);
		GuardandoDatosCod = Convert::ToInt32(Construccion->ObtenerCima().cod);
		//INSERTANDO EN LA PILA BAHÍA
		Bahia->pilaPro->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
		/*Bahia->PilaObjetos->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);*/
		//DESAPILANDO
		Construccion->Desapilar();
	}

	cantElementos = Ropa->cn;
	for (int i = 0; i < cantElementos; i++)
	{
		//RECOLECTANDO DATOS
		GuardandoDatosCant = Convert::ToInt32(Ropa->ObtenerCima().cantidad);
		GuardandoDatosPeso = Convert::ToInt32(Ropa->ObtenerCima().peso);
		GuardandoDatosTipo = Convert::ToInt32(Ropa->ObtenerCima().tipo);
		GuardandoDatosCod = Convert::ToInt32(Ropa->ObtenerCima().cod);
		//INSERTANDO EN LA PILA BAHÍA
		Bahia->pilaPro->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
		/* Bahia->PilaObjetos->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);*/
		 //DESAPILANDO
		Ropa->Desapilar();
	}

	cantElementos = Oficina->cn;
	for (int i = 0; i < cantElementos; i++)
	{
		//RECOLECTANDO DATOS
		GuardandoDatosCant = Convert::ToInt32(Oficina->ObtenerCima().cantidad);
		GuardandoDatosPeso = Convert::ToInt32(Oficina->ObtenerCima().peso);
		GuardandoDatosTipo = Convert::ToInt32(Oficina->ObtenerCima().tipo);
		GuardandoDatosCod = Convert::ToInt32(Oficina->ObtenerCima().cod);
		//INSERTANDO EN LA PILA BAHÍA
		Bahia->pilaPro->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
		/*Bahia->PilaObjetos->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);*/
		//DESAPILANDO
		Oficina->Desapilar();
	}
	return Bahia;
}
//AGRGANDO PRODUCTO
void NuevosDatos(Nodo1* Bahia1)
{
	Nodo1* Auxiliar = Bahia1;
	Productos* Nuevo;
	/*Nuevo = AlmacenandoObjeto();*/
	Nodo1* DatosActualizados = new Nodo1(AlmacenandoObjeto());
	Bahia1->producto = DatosActualizados->producto;
}
int CantidadTempRet;
//RETIRAR CON ID
void RetirarID(Lista* lista)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VERIFICAR QUE ESTA HACIENDO EL PROGRAMA - BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Columna);
		String^ investi2 = Convert::ToString(Convert::ToChar(lista->ObtenerProducto(lista->contador + 1, i)->producto->Fila));

		//BUSCA LA BAHÍA - MÉTODO SECUENCIAL
		//BUSCA LA COLUMNA
		if (ColumnaRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Columna))
		{
			//BUSCA LA FILA
			if (FilaRetirar == (Convert::ToChar(lista->ObtenerProducto(lista->contador + 1, i)->producto->Fila)))
			{
				//VERIFICA QUE LA BAHÍA TENGA LA CANTIDAD A RETIRAR SUFICIENTE
				VerificandoDatos(lista, i);
				i = lista->contador + 1;
			}
			else
			{
				if (i == lista->contador + 1)
				{
					//MENSAJE DE ERROR
					System::Windows::Forms::MessageBox::Show("No existe la bahía");
				}
			}
		}
		else
		{
			if (i == lista->contador + 1)
			{
				//MENSAJE DE ERROR
				System::Windows::Forms::MessageBox::Show("No existe la bahías");
			}
		}
	}
}
int CantActualizada1;
int CantActualizada2;
int CantActualizada3;
int PesoRetirado;
String^ ResponsableAl;
//VERIFICAR QUE LOS DATOS ESTE CORRECTOS
void VerificandoDatos(Lista* lista, int ubi)
{
	int PESORETIRAR = 0;
	if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->TipoProducto1))
	{
		if (CantidadparaRetiro <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant1))
		{
			//RECOLECTANDO DATOS
			RecolectandoDatos(lista, ubi);
			int ProductoCimaPeso;
			int ProductoCimaCant;
			int CODIGOCIMA;
			bool TERMINADO = false;

			//VARIABLES
			int ProductoRetirado;
			int ProductoSobrante;
			int ProductoFaltante;
			int PesoRetirado;
			int PesoSobrante;

			//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO POR COMPLETO
			while (TERMINADO == false)
			{
				if (Oficina->cn != 0)
				{
					//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
					ProductoCimaPeso = Oficina->ObtenerCima().peso;
					ProductoCimaCant = Oficina->ObtenerCima().cantidad;
					CODIGOCIMA = Oficina->ObtenerCima().cod;
					Oficina->Desapilar();
					if (CantidadparaRetiro <= ProductoCimaCant)
					{
						ProductoSobrante = ProductoCimaCant - CantidadparaRetiro;
						PesoUtiliRec = PesoUtiliRec - (CantidadparaRetiro * ProductoCimaPeso);
						PesoDis1 = PesoDis1 + (CantidadparaRetiro * ProductoCimaPeso);
						CantRec1 = CantRec1 - CantidadparaRetiro;
						CantidadTempRet = CantidadparaRetiro;
						if (ProductoSobrante != 0)
						{
							Oficina->Apilar(ProductoSobrante, 1, ProductoCimaPeso, CODIGOCIMA);
						}
						//HACER LOS CAMBIOS
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
						CantidadTempRet = 0;
						TERMINADO = true;
					}
					else
					{
						ProductoFaltante = CantidadparaRetiro - ProductoCimaCant;
						PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
						PesoDis1 = PesoDis1 + (ProductoCimaCant * ProductoCimaPeso);
						CantRec1 = CantRec1 - ProductoCimaCant;
						CantidadparaRetiro = ProductoFaltante;
					}
				}
				else
				{
					if (TERMINADO == false)
					{
						//MENSAJE DE ERROR
						System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
					}
				}
			}

		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
		}
	}
	else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->TipoProducto2))
	{
		if (CantidadparaRetiro <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant2))
		{
			//RECOLECTANDO DATOS
			RecolectandoDatos(lista, ubi);
			int ProductoCimaPeso;
			int ProductoCimaCant;
			int CODIGOCIMA;
			bool TERMINADO = false;

			//VARIABLES
			int ProductoRetirado;
			int ProductoSobrante;
			int ProductoFaltante;
			int PesoRetirado;
			int PesoSobrante;

			//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO POR COMPLETO
			while (TERMINADO == false)
			{
				if (Ropa->cn != 0)
				{
					//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
					ProductoCimaPeso = Ropa->ObtenerCima().peso;
					ProductoCimaCant = Ropa->ObtenerCima().cantidad;
					CODIGOCIMA = Ropa->ObtenerCima().cod;
					Ropa->Desapilar();
					if (CantidadparaRetiro <= ProductoCimaCant)
					{
						ProductoSobrante = ProductoCimaCant - CantidadparaRetiro;
						PesoUtiliRec = PesoUtiliRec - (CantidadparaRetiro * ProductoCimaPeso);
						PesoDis2 = PesoDis2 + (CantidadparaRetiro * ProductoCimaPeso);
						CantRec2 = CantRec2 - CantidadparaRetiro;
						CantidadTempRet = CantidadparaRetiro;
						if (ProductoSobrante != 0)
						{
							Ropa->Apilar(ProductoSobrante, 2, ProductoCimaPeso, CODIGOCIMA);
						}
						//HACER LOS CAMBIOS
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
						CantidadTempRet = 0;
						TERMINADO = true;

					}
					else
					{
						ProductoFaltante = CantidadparaRetiro - ProductoCimaCant;
						PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
						PesoDis2 = PesoDis2 + (ProductoCimaCant * ProductoCimaPeso);
						CantRec2 = CantRec2 - ProductoCimaCant;
						CantidadparaRetiro = ProductoFaltante;
					}
				}
				else
				{
					if (TERMINADO == false)
					{
						//MENSAJE DE ERROR
						System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
					}
				}
			}


		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
		}
	}
	else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->TipoProducto3))
	{
		if (CantidadparaRetiro <= Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant3))
		{
			//RECOLECTANDO DATOS
			RecolectandoDatos(lista, ubi);
			int ProductoCimaPeso;
			int ProductoCimaCant;
			int CODIGOCIMA;
			bool TERMINADO = false;

			//VARIABLES
			int ProductoRetirado;
			int ProductoSobrante;
			int ProductoFaltante;
			int PesoRetirado;
			int PesoSobrante;

			//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO POR COMPLETO
			while (TERMINADO == false)
			{
				if (Construccion->cn != 0)
				{
					//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
					ProductoCimaPeso = Construccion->ObtenerCima().peso;
					ProductoCimaCant = Construccion->ObtenerCima().cantidad;
					CODIGOCIMA = Construccion->ObtenerCima().cod;
					Construccion->Desapilar();
					if (CantidadparaRetiro <= ProductoCimaCant)
					{
						ProductoSobrante = ProductoCimaCant - CantidadparaRetiro;
						PesoUtiliRec = PesoUtiliRec - (CantidadparaRetiro * ProductoCimaPeso);
						PesoDis3 = PesoDis3 + (CantidadparaRetiro * ProductoCimaPeso);
						CantRec3 = CantRec3 - CantidadparaRetiro;
						CantidadTempRet = CantidadparaRetiro;
						if (ProductoSobrante != 0)
						{
							Construccion->Apilar(ProductoSobrante, 3, ProductoCimaPeso, CODIGOCIMA);
						}
						//HACER LOS CAMBIOS
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
						CantidadTempRet = 0;
						TERMINADO = true;
					}
					else
					{
						ProductoFaltante = CantidadparaRetiro - ProductoCimaCant;
						PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
						PesoDis3 = PesoDis3 + (ProductoCimaCant * ProductoCimaPeso);
						CantRec3 = CantRec3 - ProductoCimaCant;
						CantidadparaRetiro = ProductoFaltante;
					}
				}
				else
				{
					if (TERMINADO == false)
					{
						//MENSAJE DE ERROR
						System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
					}
				}
			}
		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no tiene la cantidad que se desea retirar");
		}
	}
	else
	{
		//MENSAJE DE ERROR
		System::Windows::Forms::MessageBox::Show("La bahía" + Convert::ToString(FilaRetirar) + Convert::ToString(ColumnaRetirar) + ", no almacena ningún producto del que se desea retirar");
	}
}
//BUSCAR BAHÍA DONDE RETIRAR PRODUCTO
void RetirandoBuscando(Lista* lista)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);
		int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);
		int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

		if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
		{
			//EL PRODUCTO ES TIPO 1
			ES1 = true;

			//VERIFICA SI EXOSTE LA CANTIDAD A RETIRAR
			VerificandoRetiroSi(lista, i);

			//SI YA ESTA LA CANTIDAD A RETIRAR
			if (POSIBILIDAD == true)
			{
				i = lista->contador + 1;
			}
		}
		else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2))
		{
			//EL PRODUCTO ES TIPO 2
			ES2 = true;

			//VERIFICA SI EXOSTE LA CANTIDAD A RETIRAR
			VerificandoRetiroSi(lista, i);

			//SI YA ESTA LA CANTIDAD A RETIRAR
			if (POSIBILIDAD == true)
			{
				i = lista->contador + 1;
			}
		}
		else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3))
		{
			//EL PRODUCTO ES TIPO 2
			ES3 = true;

			//VERIFICA SI EXOSTE LA CANTIDAD A RETIRAR
			VerificandoRetiroSi(lista, i);

			//SI YA ESTA LA CANTIDAD A RETIRAR
			if (POSIBILIDAD == true)
			{
				i = lista->contador + 1;
			}
		}
	}
}
//VERIFICANDO QUE SI SE PUEDA LLEVAR A CABO EL RETIRO
void VerificandoRetiroSi(Lista* lista, int ubi)
{
	//SI ES TIPO 1
	if (ES1 == true)
	{
		//CANTIDAD DISPONIBLE
		int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant1);
		//SE PUEDE EXTRAER MINIMO UN PRODUCTO
		if (1 <= Disp)
		{
			//SE PUEDE EXTRAER LA CANTIDAD QUE DESEA EL USUARIO
			if (CantRetiroTemporalNueva <= Disp)
			{
				//SI ES POSIBLE HACER EL RETIRO
				POSIBILIDAD = true;
			}
			else
			{
				//SI ES POSIBLE RETIRAR PERO NO TODO EL PRODUCTO
				CantRetiroTemporalNueva = CantRetiroTemporalNueva - Disp;
			}
		}
	}
	else if (ES2 == true) //SI ES TIPO 2
	{
		//CANTIDAD DISPONIBLE
		int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant2);
		//SE PUEDE EXTRAER MINIMO UN PRODUCTO
		if (1 <= Disp)
		{
			//SE PUEDE EXTRAER LA CANTIDAD QUE DESEA EL USUARIO
			if (CantRetiroTemporalNueva <= Disp)
			{
				//SI ES POSIBLE HACER EL RETIRO
				POSIBILIDAD = true;
			}
			else
			{
				//SI ES POSIBLE RETIRAR PERO NO TODO EL PRODUCTO
				CantRetiroTemporalNueva = CantRetiroTemporalNueva - Disp;
			}
		}
	}
	else if (ES3 == true)
	{
		//CANTIDAD DISPONIBLE
		int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, ubi)->producto->Cant3);
		//SE PUEDE EXTRAER MINIMO UN PRODUCTO
		if (1 <= Disp)
		{
			//SE PUEDE EXTRAER LA CANTIDAD QUE DESEA EL USUARIO
			if (CantRetiroTemporalNueva <= Disp)
			{
				//SI ES POSIBLE HACER EL RETIRO
				POSIBILIDAD = true;
			}
			else
			{
				//SI ES POSIBLE RETIRAR PERO NO TODO EL PRODUCTO
				CantRetiroTemporalNueva = CantRetiroTemporalNueva - Disp;
			}
		}
	}
}
//MÉTODO PARA RETIRAR EL PRODUCTO
void SACANDOPRODUCTOS(Lista* lista)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);
		int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);
		int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

		if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
		{
			//EL TIPO DE PRODUCTO ES 1
			ES1 = true;

			//CANTIDAD DISPONIBLE EN ESA BAHÍA
			int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Cant1);
			//ES POSIBLE RETIRAR MÍNIMO UN PRODUCTO
			if (1 <= Disp)
			{
				//RETIRAR EL PRODUCTO
				RetirandoSinID(lista, i);

				//TERMINAR PROCESO
				if (CantRetiroTemporalNueva == 0)
				{
					i = lista->contador;
				}
			}

		}
		else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2))
		{
			ES2 = true;

			//CANTIDAD DISPONIBLE EN ESA BAHÍA
			int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Cant2);
			//ES POSIBLE RETIRAR MÍNIMO UN PRODUCTO
			if (1 <= Disp)
			{
				//RETIRAR EL PRODUCTO
				RetirandoSinID(lista, i);

				//TERMINAR PROCESO
				if (CantRetiroTemporalNueva == 0)
				{
					i = lista->contador;
				}
			}
		}
		else if (IDRetirar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3))
		{
			ES3 = true;

			//CANTIDAD DISPONIBLE EN ESA BAHÍA
			int Disp = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Cant3);
			//ES POSIBLE RETIRAR MÍNIMO UN PRODUCTO
			if (1 <= Disp)
			{
				//RETIRAR EL PRODUCTO
				RetirandoSinID(lista, i);

				//TERMINAR PROCESO
				if (CantRetiroTemporalNueva == 0)
				{
					i = lista->contador;
				}
			}
		}
	}
}
//MÉTODO PARA RETIRAR PRODUCTO
void RetirandoSinID(Lista* lista, int ubi)
{
	if (ES1 == true)
	{
		//RECOLECTANDO DATOS
		RecolectandoDatos(lista, ubi);
		int ProductoCimaPeso;
		int ProductoCimaCant;
		int CODIGOCIMA;
		bool TERMINADO = false;

		//VARIABLES
		int ProductoRetirado;
		int ProductoSobrante;
		int ProductoFaltante;
		int PesoRetirado;
		int PesoSobrante;

		//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO 
		while (TERMINADO == false)
		{
			if (Oficina->cn != 0)
			{
				//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
				ProductoCimaPeso = Oficina->ObtenerCima().peso;
				ProductoCimaCant = Oficina->ObtenerCima().cantidad;
				CODIGOCIMA = Oficina->ObtenerCima().cod;
				Oficina->Desapilar();
				if (CantRetiroTemporalNueva <= ProductoCimaCant)
				{
					ProductoSobrante = ProductoCimaCant - CantRetiroTemporalNueva;
					PesoUtiliRec = PesoUtiliRec - (CantRetiroTemporalNueva * ProductoCimaPeso);
					PesoDis1 = PesoDis1 + (CantRetiroTemporalNueva * ProductoCimaPeso);
					CantRec1 = CantRec1 - CantRetiroTemporalNueva;
					CantidadTempRet = CantRetiroTemporalNueva;
					if (ProductoSobrante != 0)
					{
						Oficina->Apilar(ProductoSobrante, 1, ProductoCimaPeso, CODIGOCIMA);
					}
					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					CantidadTempRet = 0;
					CantRetiroTemporalNueva = 0;
					TERMINADO = true;
				}
				else
				{
					ProductoFaltante = CantRetiroTemporalNueva - ProductoCimaCant;
					PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
					PesoDis1 = PesoDis1 + (ProductoCimaCant * ProductoCimaPeso);
					CantRec1 = CantRec1 - ProductoCimaCant;
					CantRetiroTemporalNueva = ProductoFaltante;
					if (Oficina->cn == 0)
					{
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					}
				}
			}
			else
			{
				TERMINADO = true;
			}
		}
	}
	else if (ES2 == true)
	{
		//RECOLECTANDO DATOS
		RecolectandoDatos(lista, ubi);
		int ProductoCimaPeso;
		int ProductoCimaCant;
		int CODIGOCIMA;
		bool TERMINADO = false;

		//VARIABLES
		int ProductoRetirado;
		int ProductoSobrante;
		int ProductoFaltante;
		int PesoRetirado;
		int PesoSobrante;

		//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO 
		while (TERMINADO == false)
		{
			if (Ropa->cn != 0)
			{
				//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
				ProductoCimaPeso = Ropa->ObtenerCima().peso;
				ProductoCimaCant = Ropa->ObtenerCima().cantidad;
				CODIGOCIMA = Ropa->ObtenerCima().cod;
				Ropa->Desapilar();
				if (CantRetiroTemporalNueva <= ProductoCimaCant)
				{
					ProductoSobrante = ProductoCimaCant - CantRetiroTemporalNueva;
					PesoUtiliRec = PesoUtiliRec - (CantRetiroTemporalNueva * ProductoCimaPeso);
					PesoDis2 = PesoDis2 + (CantRetiroTemporalNueva * ProductoCimaPeso);
					CantRec2 = CantRec2 - CantRetiroTemporalNueva;
					CantRetiroTemporalNueva = CantRetiroTemporalNueva;
					if (ProductoSobrante != 0)
					{
						Ropa->Apilar(ProductoSobrante, 2, ProductoCimaPeso, CODIGOCIMA);
					}
					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					CantidadTempRet = 0;
					CantRetiroTemporalNueva = 0;
					TERMINADO = true;
				}
				else
				{
					ProductoFaltante = CantRetiroTemporalNueva - ProductoCimaCant;
					PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
					PesoDis2 = PesoDis2 + (ProductoCimaCant * ProductoCimaPeso);
					CantRec2 = CantRec2 - ProductoCimaCant;
					CantRetiroTemporalNueva = ProductoFaltante;
					if (Ropa->cn == 0)
					{
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					}
				}
			}
			else
			{
				TERMINADO = true;
			}
		}
	}
	if (ES3 == true)
	{
		//RECOLECTANDO DATOS
		RecolectandoDatos(lista, ubi);
		int ProductoCimaPeso;
		int ProductoCimaCant;
		int CODIGOCIMA;
		bool TERMINADO = false;

		//VARIABLES
		int ProductoRetirado;
		int ProductoSobrante;
		int ProductoFaltante;
		int PesoRetirado;
		int PesoSobrante;

		//REPTE EL PROCESO HASTA QUE SE RETIRE EL PRODUCTO POR COMPLETO
		while (TERMINADO == false)
		{
			if (Construccion->cn != 0)
			{
				//PESO Y CANTIDAD DEL PRODUCTO EN LA CIMA
				ProductoCimaPeso = Construccion->ObtenerCima().peso;
				ProductoCimaCant = Construccion->ObtenerCima().cantidad;
				CODIGOCIMA = Construccion->ObtenerCima().cod;
				Construccion->Desapilar();
				if (CantRetiroTemporalNueva <= ProductoCimaCant)
				{
					ProductoSobrante = ProductoCimaCant - CantRetiroTemporalNueva;
					PesoUtiliRec = PesoUtiliRec - (CantRetiroTemporalNueva * ProductoCimaPeso);
					PesoDis3 = PesoDis3 + (CantRetiroTemporalNueva * ProductoCimaPeso);
					CantRec3 = CantRec3 - CantRetiroTemporalNueva;
					CantRetiroTemporalNueva = CantRetiroTemporalNueva;
					if (ProductoSobrante != 0)
					{
						Construccion->Apilar(ProductoSobrante, 3, ProductoCimaPeso, CODIGOCIMA);
					}
					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					CantidadTempRet = 0;
					CantRetiroTemporalNueva = 0;
					TERMINADO = true;
				}
				else
				{
					ProductoFaltante = CantRetiroTemporalNueva - ProductoCimaCant;
					PesoUtiliRec = PesoUtiliRec - (ProductoCimaCant * ProductoCimaPeso);
					PesoDis3 = PesoDis3 + (ProductoCimaCant * ProductoCimaPeso);
					CantRec3 = CantRec3 - ProductoCimaCant;
					CantRetiroTemporalNueva = ProductoFaltante;
					if (Construccion->cn == 0)
					{
						NuevosDatos(lista->ObtenerProducto(lista->contador + 1, ubi));
					}
				}
			}
			else
			{
				TERMINADO = true;
			}
		}
	}

}
int ubiEl;
void VerificandoEliminacion(Lista* lista)
{
	for (int i = 1; i < lista->contador + 1; i++)
	{
		//VERIFICAR QUE ESTA HACIENDO EL PROGRAMA - BORRAR
		int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Columna);
		String^ investi2 = Convert::ToString(Convert::ToChar(lista->ObtenerProducto(lista->contador + 1, i)->producto->Fila));

		//BUSCA LA BAHÍA - MÉTODO SECUENCIAL
		//BUSCA LA COLUMNA
		if (ColumnaEliminar == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->Columna))
		{
			//BUSCA LA FILA
			if (FilaEliminar == (Convert::ToChar(lista->ObtenerProducto(lista->contador + 1, i)->producto->Fila)))
			{
				//VERIFICA QUE LA BAHÍA TENGA LA CANTIDAD A RETIRAR SUFICIENTE
				VerificandoDatosEli(lista, i);
				ubiEl = i;
				i = lista->contador + 1;
			}
			else
			{
				if (i == lista->contador + 1)
				{
					//MENSAJE DE ERROR
					System::Windows::Forms::MessageBox::Show("No existe la bahía");
				}
			}
		}
	}
}
bool RevisadoCorrecto = false;
bool Mitad1 = false;
int porElUsado;
void VerificandoDatosEli(Lista* lista, int ubi)
{
	//RECOLECTAR DATOS
	RecolectandoDatos(lista, ubi);

	//REGRESANDO A FALSO TODO
	ES1 = false;
	ES2 = false;
	ES3 = false;

	//VER LA PILA ELEMENTOS DE LA PILA OFICINA
	if (Oficina->cn != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);

			if (1 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
			{
				int cantidadEl = Oficina->ObtenerCima().cantidad;
				int PesoEl = Oficina->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible);

				if (Mitad1 == false)
				{

				}

				if (porElUsado != i)
				{
					//VER SI PUEDE GUARDAR LA CANTIDAD
					if (NuevaUbi <= espacioDisB)
					{
						Oficina->Desapilar();
						if (Oficina->cn == 0)
						{
							i = lista->contador + 1;
						}
						else
						{
							i = 1;
						}
					}
					else
					{
						int SoloSePuede = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible);
						//LOS ELEMENTOS ALMACENAR
						int j = 0;
						int h = 1;
						int l = 0;
						while (l < SoloSePuede)
						{
							j = PesoEl * h;
							j = PesoEl * (h + 1);
							if (l < SoloSePuede)
							{
								h++;
							}
						}
						int CantELiminar = cantidadEl - h;
						Oficina->Apilar(CantELiminar, 1, PesoEl, codigoUnico);
						porElUsado = i;
						Mitad1 = true;

					}
				}
			}
		}
	}

	if (Ropa->cn != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);

			if (2 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2))
			{
				int cantidadEl = Ropa->ObtenerCima().cantidad;
				int PesoEl = Ropa->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible2);
				//VER SI PUEDE GUARDAR LA CANTIDAD
				if (NuevaUbi <= espacioDisB)
				{
					Ropa->Desapilar();
					if (Ropa->cn == 0)
					{
						i = lista->contador + 1;
					}
					else
					{
						i = 1;
					}
				}

			}
		}
	}

	if (Construccion != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

			if (3 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3))
			{
				int cantidadEl = Construccion->ObtenerCima().cantidad;
				int PesoEl = Construccion->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible3);
				//VER SI PUEDE GUARDAR LA CANTIDAD
				if (NuevaUbi <= espacioDisB)
				{
					Construccion->Desapilar();
					if (Construccion->cn == 0)
					{
						i = lista->contador + 1;
					}
					else
					{
						i = 1;
					}
				}

			}
		}
	}

	if (Oficina->cn == 0 && Ropa->cn == 0 && Construccion->cn == 0)
	{
		RevisadoCorrecto = true;
	}

}
void ProcesoEliminación(Lista* lista, int ubi)
{
	//RECOLECTANDO DATOS
	RecolectandoDatosELIMINACION(lista, ubi);

	//VER LA PILA ELEMENTOS DE LA PILA OFICINA
	if (Oficina->cn != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi1 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1);

			//VARIABLES
			int GuardandoDatosCant;
			int GuardandoDatosPeso;
			int GuardandoDatosTipo;
			int GuardandoDatosCod;
			int cantElementos;

			if (1 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto1))
			{
				int cantidadEl = OficinaEl->ObtenerCima().cantidad;
				int PesoEl = OficinaEl->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible);

				PesoUtiliRec = 0;
				CantRec1 = 0;
				//VER SI PUEDE GUARDAR LA CANTIDAD
				if (NuevaUbi <= espacioDisB)
				{
					RecolectandoDatos(lista, i);

					GuardandoDatosCant = OficinaEl->ObtenerCima().cantidad;
					GuardandoDatosCod = OficinaEl->ObtenerCima().cod;
					GuardandoDatosTipo = OficinaEl->ObtenerCima().tipo;
					GuardandoDatosPeso = OficinaEl->ObtenerCima().peso;

					//APILAR EN ESTA PARTE
					Oficina->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
					//DESAPILAR DE LA PILA "OficinaEl"
					OficinaEl->Desapilar();

					//NUEVO PESO DISPONIBLE EN LA BAHÍA
					PesoDis1 = PesoDis1 - NuevaUbi;

					//PESO UTILIZADO ACTUALIZADO
					PesoUtiliRec += NuevaUbi;

					//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
					CantRec1 += GuardandoDatosCant;

					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, i));
					if (OficinaEl->cn == 0)
					{
						i = lista->contador + 1;
					}
					else
					{
						i = 1;
					}
				}
			}
		}
	}

	if (Ropa->cn != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES
			int GuardandoDatosCant;
			int GuardandoDatosPeso;
			int GuardandoDatosTipo;
			int GuardandoDatosCod;
			int cantElementos;

			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi2 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2);

			if (2 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto2))
			{
				int cantidadEl = RopaEl->ObtenerCima().cantidad;
				int PesoEl = RopaEl->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible2);

				PesoUtiliRec = 0;
				CantRec1 = 0;
				//VER SI PUEDE GUARDAR LA CANTIDAD
				if (NuevaUbi <= espacioDisB)
				{
					RecolectandoDatos(lista, i);

					GuardandoDatosCant = RopaEl->ObtenerCima().cantidad;
					GuardandoDatosCod = RopaEl->ObtenerCima().cod;
					GuardandoDatosTipo = RopaEl->ObtenerCima().tipo;
					GuardandoDatosPeso = RopaEl->ObtenerCima().peso;

					//APILAR EN ESTA PARTE
					Ropa->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
					//DESAPILAR DE LA PILA "OficinaEl"
					RopaEl->Desapilar();

					//NUEVO PESO DISPONIBLE EN LA BAHÍA
					PesoDis2 = PesoDis2 - NuevaUbi;

					//PESO UTILIZADO ACTUALIZADO
					PesoUtiliRec += NuevaUbi;

					//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
					CantRec2 += GuardandoDatosCant;

					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, i));
					if (RopaEl->cn == 0)
					{
						i = lista->contador + 1;
					}
					else
					{
						i = 1;
					}
				}
			}
		}
	}

	if (Construccion != 0)
	{
		for (int i = 1; i < lista->contador + 1; i++)
		{
			//VARIABLES
			int GuardandoDatosCant;
			int GuardandoDatosPeso;
			int GuardandoDatosTipo;
			int GuardandoDatosCod;
			int cantElementos;

			//VARIABLES QUE ME ESTAN AYUDANDO A SABER QUE ESTA PASANDO -> BORRAR
			int investi3 = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3);

			if (3 == Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->TipoProducto3))
			{
				int cantidadEl = ConstrucciónEl->ObtenerCima().cantidad;
				int PesoEl = ConstrucciónEl->ObtenerCima().peso;
				int NuevaUbi = cantidadEl * PesoEl;
				int espacioDisB = Convert::ToInt32(lista->ObtenerProducto(lista->contador + 1, i)->producto->PesoDisponible3);

				PesoUtiliRec = 0;
				CantRec1 = 0;
				//VER SI PUEDE GUARDAR LA CANTIDAD
				if (NuevaUbi <= espacioDisB)
				{
					RecolectandoDatos(lista, i);

					GuardandoDatosCant = RopaEl->ObtenerCima().cantidad;
					GuardandoDatosCod = RopaEl->ObtenerCima().cod;
					GuardandoDatosTipo = RopaEl->ObtenerCima().tipo;
					GuardandoDatosPeso = RopaEl->ObtenerCima().peso;

					//APILAR EN ESTA PARTE
					Ropa->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
					//DESAPILAR DE LA PILA "OficinaEl"
					RopaEl->Desapilar();

					//NUEVO PESO DISPONIBLE EN LA BAHÍA
					PesoDis3 = PesoDis3 - NuevaUbi;

					//PESO UTILIZADO ACTUALIZADO
					PesoUtiliRec += NuevaUbi;

					//CANTIDAD DE PRODUCTO 1 EN LA BAHÍA
					CantRec3 += GuardandoDatosCant;

					//HACER LOS CAMBIOS
					NuevosDatos(lista->ObtenerProducto(lista->contador + 1, i));
					if (RopaEl->cn == 0)
					{
						i = lista->contador + 1;
					}
					else
					{
						i = 1;
					}
				}
			}
		}
	}
}
//DESHABILITAR TODOS LOS BOTONES
void EnBlanco()
{
	TXTCantidadAl->Enabled = false;
	TXTCantidadAl->Clear();
	TXTCantRetirar->Enabled = false;
	TXTCantRetirar->Clear();
	TXTFila->Enabled = false;
	TXTFila->Clear();
	TXTColumna->Enabled = false;
	TXTColumna->Clear();
	TxtMax->Enabled = false;
	TxtMax->Clear();
	TXTPesoUni->Enabled = false;
	TXTPesoUni->Clear();
	TXTFECHAALMADIA->Enabled = false;
	TXTFECHAALMADIA->Clear();
	TXTFECHAALMAMES->Enabled = false;
	TXTFECHAALMAMES->Clear();
	TXTFECHAALMAAÑO->Enabled = false;
	TXTFECHAALMAAÑO->Clear();
	TXTResponsableAlmacenar->Enabled = false;
	TXTResponsableAlmacenar->Clear();
	TXTIDRetirar->Enabled = false;
	TXTIDRetirar->Clear();
	TXTFechaRetiroAA->Enabled = false;
	TXTFechaRetiroAA->Clear();
	TXTFechaRetiroDD->Enabled = false;
	TXTFechaRetiroDD->Clear();
	TXTFechaRetiroMM->Enabled = false;
	TXTFechaRetiroMM->Clear();
	TXTCantRetirar->Enabled = false;
	TXTCantRetirar->Clear();
	TXTNombreResponsable->Enabled = false;
	TXTNombreResponsable->Clear();
	TXTFILAELIMINAR->Enabled = false;
	TXTFILAELIMINAR->Clear();
	TXTCOLUMNAELIMINAR->Enabled = false;
	TXTCOLUMNAELIMINAR->Clear();

	//DESHABILITAR RADIOBUTTOM
	RBMaterialConstruccion->Enabled = false;
	RBMaterialConstruccion->Checked = false;
	RBMaterialOficina->Enabled = false;
	RBMaterialOficina->Checked = false;
	RbRopa->Enabled = false;
	RbRopa->Checked = false;

	//BOTONES PARA HABILITAR LOS ESPACIOS
	panel1->Enabled = true;
	panel2->Enabled = true;
	panel3->Enabled = true;
	panel4->Enabled = true;
}
//REESTABLECER DATAGRIDVIEW
void ReestablecerData()
{
	DGVMatriz->Rows->Clear();
	DGVMatriz->Columns->Clear();
	DGVMatriz->ColumnHeadersVisible = false;
	DGVMatriz->RowHeadersVisible = false;
}
//AGREGAR FILAS Y COLUMNAS DE MANERA DINÁMICA
void AgregarFilasYColumnas(int filas, int columnas)
{
	for (int i = 0; i < columnas + 1; i++)
	{
		//Crea una columna
		DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
		nuevacolumna->Width = 100;

		/*nuevacolumna->AutoSizeMode;*/
		//Le agrega el tipo de columna que será
		DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
		nuevacolumna->CellTemplate = cellTemplate;
		DGVMatriz->Columns->Add(nuevacolumna);

	}

	//AGREGAR FILAS
	for (int i = 0; i < filas + 1; i++)
	{
		DGVMatriz->Rows->Add();
	}

	for (int i = 0; i < filas + 1; i++)
	{
		DGVMatriz->Rows[i]->Height = 50;
	}
}
String^ DATOS;
String^ TEXTMostrar;
Lista_Enlazada* ListaPruebaOrdenar = new Lista_Enlazada();
//AGREGANDO VALORES
void MostrarUsuario(Lista* listaPro, Lista* ListaFilasD, Lista* ListaColumnaD)
{
	RTBDatos->Text = "";
	//VOLVER A INSTANCIAR
	ListaPruebaOrdenar = new Lista_Enlazada();
	for (int i = 1; i < listaPro->contador + 1; i++)
	{
		TEXTMostrar = "";
		int UBIDataF;
		int UBIDataC;
		int buscandoUbiProC = Convert::ToInt32(listaPro->ObtenerProducto(listaPro->contador + 1, i)->producto->Columna);
		char buscandoUbiProF = Convert::ToInt32(listaPro->ObtenerProducto(listaPro->contador + 1, i)->producto->Fila);

		for (int j = 1; j < ListaFilasD->contador + 1; j++)
		{
			char hola = Convert::ToChar(listaFila->ObtenerElementoFila(listaFila->contador + 1, j)->NumFila);
			if (buscandoUbiProF == hola)
			{
				UBIDataF = j;
				j = ListaFilasD->contador + 1;
			}
		}

		for (int j = 1; j < ListaColumnaD->contador + 1; j++)
		{
			if (buscandoUbiProC == Convert::ToInt32(ListaColumnaD->ObtenerElementoColumna(ListaColumnaD->contador + 1, j)->NumColumna))
			{
				UBIDataC = j;
				j = ListaColumnaD->contador + 1;
			}
		}
		Datos(listaPro, i);

		DGVMatriz->Rows[UBIDataF]->Cells[UBIDataC]->Value = "Bahía " + Convert::ToString(Convert::ToChar(listaPro->ObtenerProducto(listaPro->contador + 1, i)->producto->Fila)) + Convert::ToString(listaPro->ObtenerProducto(listaPro->contador + 1, i)->producto->Columna);
		RTBDatos->Text += TEXTMostrar + "\n";

	}
}
//PONER LOS ENCABEZADOS
void ENCABEZADOS()
{
	for (int i = 1; i < listaFila->contador + 1; i++)
	{
		String^ Fila;
		Fila = Convert::ToString(Convert::ToChar(listaFila->ObtenerElementoFila(listaFila->contador + 1, i)->NumFila1));
		DGVMatriz->Rows[i]->Cells[0]->Value = Fila;
	}

	for (int i = 1; i < listaColumna->contador + 1; i++)
	{
		String^ Columna;
		Columna = Convert::ToString(listaColumna->ObtenerElementoColumna(listaColumna->contador + 1, i)->NumColumna);
		DGVMatriz->Rows[0]->Cells[i]->Value = Columna;
	}
}
//DATOS PARA MOSTRAR
void Datos(Lista* listaBahiaM, int ubi)
{
	String^ TipoMaterial;

	TEXTMostrar = "ID: " + Convert::ToString(Convert::ToChar(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->Fila));
	TEXTMostrar += Convert::ToString(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->Columna) + "\n";

	if (Convert::ToInt16(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->TipoProducto1) != 0)
	{
		TipoMaterial += "1, ";
	}
	if (Convert::ToInt16(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->TipoProducto2) != 0)
	{
		TipoMaterial += "2, ";
	}
	if (Convert::ToInt16(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->TipoProducto3) != 0)
	{
		TipoMaterial += "3";
	}
	TEXTMostrar += " MATERIAL: " + TipoMaterial + "\n";
	TEXTMostrar += " UNIDADES: " + Convert::ToString(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->Cantidad) + "\n";

	/*int contando = listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->count;*/
	int contando = listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->cn;
	Pila* pilaRep = new Pila();
	for (int i = 0; i < contando; i++)
	{

		/*int GuardandoDatosCant = listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().cant;
		int GuardandoDatosCod = listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().cod;
		int GuardandoDatosTipo = listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().tipo;
		int GuardandoDatosPeso = listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().peso;*/

		int GuardandoDatosCant = listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cantidad;
		int GuardandoDatosCod = listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cod;
		int GuardandoDatosTipo = listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().tipo;
		int GuardandoDatosPeso = listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().peso;

		//APILAR EN ESTA PARTE
		pilaRep->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
		ListaPruebaOrdenar->Insertar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);

		/*TEXTMostrar += "Tipo: " + listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().tipo + ", Cant: " + listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().cant + ", Peso: " + listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->ObtenerCima().peso + "\n";
		listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->Desapilar();*/
		TEXTMostrar += "Tipo: " + listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().tipo + ", Cant: " + listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().cantidad + ", Peso: " + listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->ObtenerCima().peso + "\n";
		listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->Desapilar();
	}

	contando = pilaRep->cn;
	for (int i = 0; i < contando; i++)
	{
		int GuardandoDatosCant = pilaRep->ObtenerCima().cantidad;
		int GuardandoDatosCod = pilaRep->ObtenerCima().cod;
		int GuardandoDatosTipo = pilaRep->ObtenerCima().tipo;
		int GuardandoDatosPeso = pilaRep->ObtenerCima().peso;

		/*listaBahiaM->ObtenerProducto(listaBahiaM->count + 1, ubi)->producto->PilaObjetos->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);*/
		listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->pilaPro->Apilar(GuardandoDatosCant, GuardandoDatosTipo, GuardandoDatosPeso, GuardandoDatosCod);
		pilaRep->Desapilar();
	}
	TEXTMostrar += " PESO MAX: " + Convert::ToString(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->PesoMaximo) + "\n";
	TEXTMostrar += " PESO UTILIZADO: " + Convert::ToString(listaBahiaM->ObtenerProducto(listaBahiaM->contador + 1, ubi)->producto->PesoUtilizado) + "\n";
}
//ORDENAR POR TIPO
void OrdenandoTipo()
{
	for (int i = 0; i < ListaPruebaOrdenar->contador + 2 - 1; i++)
	{
		for (int j = i + 1; j < ListaPruebaOrdenar->contador + 2 - 1; j++)
		{
			//COMPARAR
			if (ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->tipo > ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j)->tipo)
			{
				//HACER EL INTERCAMBIO
				IntercambioProductoS(ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i), ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j));
			}
		}
	}

}
//ORDENAR POR CANTIDAD
void OrdenandoCantidad()
{
	for (int i = 0; i < ListaPruebaOrdenar->contador + 2 - 1; i++)
	{
		for (int j = i + 1; j < ListaPruebaOrdenar->contador + 2 - 1; j++)
		{
			//COMPARAR
			if (ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->cantidad > ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j)->cantidad)
			{
				//HACER EL INTERCAMBIO
				IntercambioProductoS(ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i), ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j));
			}
		}
	}

}
//ORDENAR POR TIPO
void OrdenandoPeso()
{
	for (int i = 0; i < ListaPruebaOrdenar->contador + 2 - 1; i++)
	{
		for (int j = i + 1; j < ListaPruebaOrdenar->contador + 2 - 1; j++)
		{
			//COMPARAR
			if (ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->peso > ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j)->peso)
			{
				//HACER EL INTERCAMBIO
				IntercambioProductoS(ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i), ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, j));
			}
		}
	}

}
//INTERCAMBIAR PRODUCTO
void IntercambioProductoS(Nodo4* LISTAP1, Nodo4* LISTAP2)
{
	Nodo4* auxiliar = LISTAP1;
	int GuardandoDatosCant = LISTAP1->cantidad;
	int GuardandoDatosCod = LISTAP1->cod;
	int GuardandoDatosTipo = LISTAP1->tipo;
	int GuardandoDatosPeso = LISTAP1->peso;

	Nodo4* remp = new Nodo4();
	remp->cantidad = GuardandoDatosCant;
	remp->cod = GuardandoDatosCod;
	remp->tipo = GuardandoDatosTipo;
	remp->peso = GuardandoDatosPeso;
	LISTAP1->cantidad = LISTAP2->cantidad;
	LISTAP1->cod = LISTAP2->cod;
	LISTAP1->peso = LISTAP2->peso;
	LISTAP1->tipo = LISTAP2->tipo;
	//ASIGNAR VALORES
	LISTAP2->cantidad = GuardandoDatosCant;
	LISTAP2->cod = GuardandoDatosCod;
	LISTAP2->tipo = GuardandoDatosTipo;
	LISTAP2->peso = GuardandoDatosPeso;
}
int LetraNum;
//MÉTODO PARA ORDENAR LETRA
int ABECEDARIO(String^ letra)
{
	if (letra == "A")
	{
		LetraNum = 1;
	}
	else if (letra == "B")
	{
		LetraNum = 2;
	}
	else if (letra == "C")
	{
		LetraNum = 3;
	}
	else if (letra == "D")
	{
		LetraNum = 4;
	}
	else if (letra == "E")
	{
		LetraNum = 5;
	}
	else if (letra == "F")
	{
		LetraNum = 6;
	}
	else if (letra == "G")
	{
		LetraNum = 7;
	}
	else if (letra == "H")
	{
		LetraNum = 8;
	}
	else if (letra == "I")
	{
		LetraNum = 9;
	}
	else if (letra == "J")
	{
		LetraNum = 10;
	}
	else if (letra == "K")
	{
		LetraNum = 11;
	}
	else if (letra == "L")
	{
		LetraNum = 12;
	}
	else if (letra == "M")
	{
		LetraNum = 13;
	}
	else if (letra == "N")
	{
		LetraNum = 14;
	}
	else if (letra == "O")
	{
		LetraNum = 15;
	}
	else if (letra == "P")
	{
		LetraNum = 16;
	}
	else if (letra == "Q")
	{
		LetraNum = 17;
	}
	else if (letra == "R")
	{
		LetraNum = 18;
	}
	else if (letra == "S")
	{
		LetraNum = 19;
	}
	else if (letra == "T")
	{
		LetraNum = 20;
	}
	else if (letra == "U")
	{
		LetraNum = 21;
	}
	else if (letra == "V")
	{
		LetraNum = 22;
	}
	else if (letra == "W")
	{
		LetraNum = 23;
	}
	else if (letra == "X")
	{
		LetraNum = 24;
	}
	else if (letra == "Y")
	{
		LetraNum = 25;
	}
	else if (letra == "Z")
	{
		LetraNum = 26;
	}
	return LetraNum;
}
//ORDENAR POR FILA
void ORDENANDOBAHIAS(Lista* lista)
{
	for (int i = 1; i < (lista->contador + 2) - 1; i++)
	{
		for (int j = i + 1; j < (lista->contador + 2) - 1; j++)
		{
			//COMPARAR
			if (lista->ObtenerProducto(lista->contador + 1, i)->producto->Columna > lista->ObtenerProducto(lista->contador + 1, j)->producto->Columna)
			{
				if (lista->ObtenerProducto(lista->contador + 1, i)->producto->FNum > lista->ObtenerProducto(lista->contador + 1, j)->producto->FNum)
				{
					//HACER EL INTERCAMBIO
					IntercambioProducto(lista->ObtenerProducto(lista->contador + 1, i), lista->ObtenerProducto(lista->contador + 1, j));
				}
			}
		}
	}
}
void ORDENANDOABC(Lista* lista)
{
	for (int i = 1; i < (lista->contador + 2) - 1; i++)
	{
		for (int j = i + 1; j < (lista->contador + 2) - 1; j++)
		{
			//COMPARAR
			if (lista->ObtenerElementoFila(lista->contador + 1, i)->NumFila > lista->ObtenerElementoFila(lista->contador + 1, j)->NumFila)
			{
				//HACER EL INTERCAMBIO
				IntercambioABC(lista->ObtenerElementoFila(lista->contador + 1, i), lista->ObtenerElementoFila(lista->contador + 1, j), Convert::ToInt32(lista->ObtenerElementoFila(lista->contador + 1, i)->NumFila), Convert::ToChar(lista->ObtenerElementoFila(lista->contador + 1, i)->NumFila1), Convert::ToInt32(lista->ObtenerElementoFila(lista->contador + 1, j)->NumFila), Convert::ToChar(lista->ObtenerElementoFila(lista->contador + 1, j)->NumFila));
			}
		}
	}
}
void ORDENANDOCOLUMNAS(Lista* lista)
{
	for (int i = 1; i < (lista->contador + 2) - 1; i++)
	{
		for (int j = i + 1; j < (lista->contador + 2) - 1; j++)
		{
			//COMPARAR
			if (lista->ObtenerElementoColumna(lista->contador + 1, i)->NumColumna > lista->ObtenerElementoColumna(lista->contador + 1, j)->NumColumna)
			{
				//HACER EL INTERCAMBIO
				IntercambioCOLUMNA(lista->ObtenerElementoColumna(lista->contador + 1, i), lista->ObtenerElementoColumna(lista->contador + 1, j), Convert::ToInt32(lista->ObtenerElementoColumna(lista->contador + 1, i)->NumColumna), Convert::ToInt32(lista->ObtenerElementoColumna(lista->contador + 1, j)->NumColumna));
			}
		}
	}
}
void IntercambioABC(Nodo1* ABC1, Nodo1* ABC2, int hola, char hola1, int adios, char adios1)
{
	ABC1->NumFila = adios1;
	ABC1->NumFila1 = adios;

	ABC2->NumFila1 = hola;
	ABC2->NumFila = hola1;
}
void IntercambioCOLUMNA(Nodo1* COL1, Nodo1* COL2, int hola, int adios)
{
	COL1->NumColumna = adios;
	COL2->NumColumna = hola;
}
//INTERCAMBIANDO PRODUCTO
void IntercambioProducto(Nodo1* Producto1, Nodo1* Producto2)
{
	Nodo1* auxiliar = Producto1;
	Productos* remp;
	remp = Producto1->producto;
	Nodo1* remplazando = new Nodo1(remp);

	Producto1->producto = Producto2->producto;
	//ASIGNAR VALORES
	Producto2->producto = remplazando->producto;
}
String^ OrdenandoTEXT;
void RECOLECTARORDEN()
{
	OrdenandoTEXT = "";
	int contando = ListaPruebaOrdenar->contador;
	for (int i = 1; i < contando + 1; i++)
	{
		int GuardandoDatosCant = ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->cantidad;
		int GuardandoDatosCod = ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->cod;
		int GuardandoDatosTipo = ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->tipo;
		int GuardandoDatosPeso = ListaPruebaOrdenar->ObtenerProducto(ListaPruebaOrdenar->contador + 1, i)->peso;

		OrdenandoTEXT += "Tipo: " + GuardandoDatosTipo + ", Cant: " + GuardandoDatosCant + ", Peso: " + GuardandoDatosPeso + "\n";
	}
}
private: System::Void BtnCrear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//validar que ingrese los datos deseados
	try
	{
		//se regresa a 0
		ID1 = 0;
		ID2 = 0;
		ID3 = 0;
		CantidadTipo = 0;
		AgregarC = true;
		AgregarF = true;
		ProcesoCreando = true;

		//DATOS A PONER
		CrearColumna = System::Convert::ToInt32(TXTColumna->Text);
		CrearFila = System::Convert::ToChar(TXTFila->Text);
		PesoMax = System::Convert::ToInt32(TxtMax->Text);
		NumFila = ABECEDARIO(Convert::ToString(Convert::ToChar(	CrearFila)));

		//TIPO DE ALMACENAMIENTO
		TipoAlmacenamientoRdio();

		//VALIDANDO DATOS
		if (ID1 == 1 || ID2 == 2 || ID3 == 3)
		{
			//REVISAR SI LA BAHÍA NO EXISTE Y SI NO EXISTE CREARLA
			RevisandoLista(Convert::ToString(Convert::ToChar(CrearFila)), CrearColumna);
			//ORDENANDO
			ORDENANDOABC(listaFila);
			ORDENANDOCOLUMNAS(listaColumna);
			ORDENANDOBAHIAS(listaBahias);
			if (Primero == false)
			{
				//MOSTRAR AL USUARIO
				ReestablecerData();
				AgregarFilasYColumnas(listaFila->contador, listaColumna->contador);
				MostrarUsuario(listaBahias, listaFila, listaColumna);
				ENCABEZADOS();

			}
			else
			{
				//MOSTRAR AL USUARIO
				AgregarFilasYColumnas(listaFila->contador, listaColumna->contador);
				MostrarUsuario(listaBahias, listaFila, listaColumna);
				ENCABEZADOS();
				Primero = false;
			}

			if (ProcesoCreando)
			{
				//CREANDO MATRIZ
				BuscandoMatriz();
			}

			//REGRESANDO DATOS A BLANCO
			EnBlanco();
		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("ID de tipo de producto no válido");
		}

	}
	catch (Exception^ e) {
		//MENSAJE DE ERROR
		MessageBox::Show("Error encontrado", "Fallo en la operación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnRetirar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		//DECIRLE AL SISTEMA QUE SE ESTA ELIMINANDO UNA BAHÍA
		RETIRANDO = false;
		ALMACENANDO = true;
		ELIMINANDO = false;
		ES1 = false;
		ES2 = false;
		ES3 = false;
		RevisadoCorrecto = false;

		//VERIFICA LOS DATOS INGRESADOS POR EL USUARIO
		FilaEliminar = System::Convert::ToChar(TXTFILAELIMINAR->Text);
		ColumnaEliminar = System::Convert::ToInt32(TXTCOLUMNAELIMINAR->Text);



		//VERIFICA QUE SE PUEDE PASAR LOS DATOS
		VerificandoEliminacion(listaBahias);

		if (0 == Convert::ToInt32(listaBahias->ObtenerProducto(listaBahias->contador + 1, ubiEl)->producto->Cantidad))
		{
			//ELIMINAR
			listaBahias->ExtractAtPosition(ubiEl - 1);
		}
		else
		{
			//SI ES VERDADERO HACER EL CAMBIO EN LAS PILAS NECESARIAS
			if (RevisadoCorrecto == true)
			{
				//PASAR LOS PRODUCTOS
				ProcesoEliminación(listaBahias, ubiEl);

				//ELIMINAR
				listaBahias->ExtractAtPosition(ubiEl - 1);

			}
			else
			{
				//MENSAJE DE ERROR
				System::Windows::Forms::MessageBox::Show("No es posible eliminar la bahía hasta que exista otra en donde se pueda almacenar el producto");
			}
		}

		//MOSTRAR AL USUARIO
		ReestablecerData();
		AgregarFilasYColumnas(listaFila->contador, listaColumna->contador);
		MostrarUsuario(listaBahias, listaFila, listaColumna);
		ENCABEZADOS();

		//REGRESANDO DATOS A BLANCO
		EnBlanco();

		//MOSTRAR EN QUE BAHÍAS SE INSERTARON

	}
	catch (Exception^ e) {
		//MENSAJE DE ERROR
		MessageBox::Show("Error encontrado", "Fallo en la operación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnAlmacenar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		DatosValidos = false;
		ELIMINANDO = false;
		RETIRANDO = false;
		//EL TIPO DE PRODUCTO QUE SE DESEA GUARDAR
		ES1 = false;
		ES2 = false;
		ES3 = false;
		ALMACENANDO = true;
		PRIMEROAL = true;
		PRIMERPRUEBA = true;
		SIESPOSIBLEAL = false;
		AlmacenadoCorrectamente == true;
		//DATOS QUE EL USUARIO INGRESA
		IDAlmacenar = System::Convert::ToInt32(TXTIDAl->Text);
		PesoUnitarioAlmacenar = System::Convert::ToInt32(TXTPesoUni->Text);
		CantidadAlmacenar = System::Convert::ToInt32(TXTCantidadAl->Text);
		FechaAlmacenarDD = (TXTFechaRetiroDD->Text);
		FechaAlmacenarMM = (TXTFechaRetiroMM->Text);
		FechaAlmacenarAA = (TXTFechaRetiroAA->Text);
		cantAlmacenarFinal = CantidadAlmacenar;
		//COMPROBANDO QUE LA FECHA INGRESADA SEA VÁLIDA
		VerificandoFecha(Convert::ToInt32(FechaAlmacenarAA), Convert::ToInt32(FechaAlmacenarMM), Convert::ToInt32(FechaAlmacenarDD));

		if (IDAlmacenar != 1 && IDAlmacenar != 2 && IDAlmacenar != 3)
		{
			DatosValidos = false;
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("ID de tipo de producto no válido");
		}
		else
		{
			//RESPONSABLE DEL PRODUCTO
			ResponsableAlmacenar = TXTResponsableAlmacenar->Text;
			CantActual = CantidadAlmacenar;

			//VERIFICAR QUE SEA POSIBLE ALMACENAR EL PRODUCTO
			VERIFICACIÓNALMACENAR(listaBahias, IDAlmacenar);
		}

		if (SIESPOSIBLEAL == true)
		{
			if (DatosValidos == true)
			{
				//BUSCAR LA BAHÍA QUE CONTIENE ESTE PRODUCTO Y ALMACENARLO
				Buscando(listaBahias, IDAlmacenar);

				//MOSTRAR AL USUARIO
				ReestablecerData();
				AgregarFilasYColumnas(listaFila->contador, listaColumna->contador);
				MostrarUsuario(listaBahias, listaFila, listaColumna);
				ENCABEZADOS();

				//REGRESANDO DATOS A BLANCO
				EnBlanco();
			}
		}
		else
		{
			//MENSAJE DE ERROR
			System::Windows::Forms::MessageBox::Show("No existe bahía disponible para almacenar la cantidad");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error encontrado", "Fallo en la operación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		//DECIRLE AL SISTEMA QUE SE ESTA RETIRANDO UN PRODUCTO
		RETIRANDO = true;
		ALMACENANDO = false;
		ELIMINANDO = false;
		ES1 = false;
		ES2 = false;
		ES3 = false;
		DatosValidos = false;
		BusacarID = false;
		POSIBILIDAD = false;


		//DATOS QUE INGRESA EL USUARIO
		//TIPO DE PRODUCTO
		IDRetirar = System::Convert::ToInt32(TXTIDRetirar->Text);
		//FECHA DE RETIRO
		FechaRetiroDD = TXTFechaRetiroDD->Text;
		FechaRetiroMM = TXTFechaRetiroMM->Text;
		FechaRetiroAA = TXTFechaRetiroAA->Text;
		//COMPROBANDO QUE LA FECHA INGRESADA SEA VÁLIDA
		VerificandoFecha(Convert::ToInt32(FechaRetiroAA), Convert::ToInt32(FechaRetiroMM), Convert::ToInt32(FechaRetiroDD));

		//CANTIDAD DE PRODUCTO A RETIRAR
		CantidadparaRetiro = System::Convert::ToInt32(TXTCantRetirar->Text);
		CantRetiroTemporalNueva = CantidadparaRetiro;
		//NOMBRE DEL RESPONSABLE A RETIRAR
		ResponsableRetirar = TXTNombreResponsable->Text;
		//VERIFICAR SI SE CUENTA CON LA BAHÍA A RETIRAR
		if (TXTFILAELIMINAR->Text != "")
		{
			//VER UBICACIÓN DE LA FILA Y COLUMNA
			FilaRetirar = System::Convert::ToChar(TXTFILAELIMINAR->Text);
			ColumnaRetirar = System::Convert::ToInt32(TXTCOLUMNAELIMINAR->Text);
		}
		else
		{
			//NO SE CUENTA CON UBICACIÓN
			BusacarID = true;
		}

		if (DatosValidos == true)
		{
			//NO SE DE BUSCAR LA BAHÍA
			if (BusacarID == false)
			{
				RetirarID(listaBahias);
			}
			else
			{
				//SE DEBE BUSCAR LA BAHÍA Y SE VERIFICA QUE EL PRODUCTO SI SEA POSIBLE DE RETIRAR
				RetirandoBuscando(listaBahias);
				if (POSIBILIDAD == true)
				{
					CantRetiroTemporalNueva = CantidadparaRetiro;
					//SI ES POSIBLE RETIRAR PRODUCTOS
					SACANDOPRODUCTOS(listaBahias);
				}
				else
				{
					System::Windows::Forms::MessageBox::Show("´No hay producto disponible en las bahías");
				}

			}

			//MOSTRAR AL USUARIO
			ReestablecerData();
			AgregarFilasYColumnas(listaFila->contador, listaColumna->contador);
			MostrarUsuario(listaBahias, listaFila, listaColumna);
			ENCABEZADOS();

			//REGRESANDO DATOS A BLANCO
			EnBlanco();
		}


	}
	catch (Exception^ e) {
		//MENSAJE DE ERROR
		MessageBox::Show("Error encontrado", "Fallo en la operación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
