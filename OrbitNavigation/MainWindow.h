#pragma once

namespace OrbitNavigation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  y0;

	private: System::Windows::Forms::NumericUpDown^  x0;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  MakeAxis;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::NumericUpDown^  phi0;

	private: System::Windows::Forms::NumericUpDown^  r0;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  graphBox;

	private: System::Windows::Forms::Button^  SatEngine;

	private: System::Windows::Forms::Button^  StartSat;
	private: System::Windows::Forms::NumericUpDown^  EngineT;


	private: System::Windows::Forms::NumericUpDown^  EngineF;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::NumericUpDown^  AngleV;

	private: System::Windows::Forms::NumericUpDown^  v0;

	private: System::Windows::Forms::NumericUpDown^  PlanetM;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::NumericUpDown^  SatM;


	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->y0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->x0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MakeAxis = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->SatEngine = (gcnew System::Windows::Forms::Button());
			this->StartSat = (gcnew System::Windows::Forms::Button());
			this->EngineT = (gcnew System::Windows::Forms::NumericUpDown());
			this->EngineF = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->AngleV = (gcnew System::Windows::Forms::NumericUpDown());
			this->v0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->PlanetM = (gcnew System::Windows::Forms::NumericUpDown());
			this->phi0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SatM = (gcnew System::Windows::Forms::NumericUpDown());
			this->r0 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->graphBox = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x0))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineF))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngleV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlanetM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phi0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SatM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel4,
					this->toolStripStatusLabel1, this->toolStripStatusLabel2, this->toolStripStatusLabel3
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 531);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(759, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(73, 17);
			this->toolStripStatusLabel4->Text = L"Остановлен";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(117, 17);
			this->toolStripStatusLabel1->Text = L"Время со старта: 0 с";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(128, 17);
			this->toolStripStatusLabel2->Text = L"Скорость: 0 м/с, 2 рад";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(135, 17);
			this->toolStripStatusLabel3->Text = L"Координаты: 0 км, 0 км";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				160)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->groupBox2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->graphBox, 2, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 120)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(759, 531);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->y0);
			this->groupBox1->Controls->Add(this->x0);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->MakeAxis);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(154, 114);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Управление графиком";
			// 
			// y0
			// 
			this->y0->Location = System::Drawing::Point(29, 58);
			this->y0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->y0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->y0->Name = L"y0";
			this->y0->Size = System::Drawing::Size(83, 20);
			this->y0->TabIndex = 2;
			this->y0->ThousandsSeparator = true;
			this->y0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50000, 0, 0, 0 });
			// 
			// x0
			// 
			this->x0->Location = System::Drawing::Point(29, 32);
			this->x0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->x0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->x0->Name = L"x0";
			this->x0->Size = System::Drawing::Size(83, 20);
			this->x0->TabIndex = 2;
			this->x0->ThousandsSeparator = true;
			this->x0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50000, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(116, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"км";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Y:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размеры области";
			// 
			// MakeAxis
			// 
			this->MakeAxis->Location = System::Drawing::Point(6, 84);
			this->MakeAxis->Name = L"MakeAxis";
			this->MakeAxis->Size = System::Drawing::Size(142, 23);
			this->MakeAxis->TabIndex = 2;
			this->MakeAxis->Text = L"Установить";
			this->MakeAxis->UseVisualStyleBackColor = true;
			this->MakeAxis->Click += gcnew System::EventHandler(this, &MainWindow::MakeAxis_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(116, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"км";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"X:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->SatEngine);
			this->groupBox2->Controls->Add(this->StartSat);
			this->groupBox2->Controls->Add(this->EngineT);
			this->groupBox2->Controls->Add(this->EngineF);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->AngleV);
			this->groupBox2->Controls->Add(this->v0);
			this->groupBox2->Controls->Add(this->PlanetM);
			this->groupBox2->Controls->Add(this->phi0);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->SatM);
			this->groupBox2->Controls->Add(this->r0);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(3, 143);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(154, 365);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Управление полетом";
			// 
			// SatEngine
			// 
			this->SatEngine->Location = System::Drawing::Point(6, 322);
			this->SatEngine->Name = L"SatEngine";
			this->SatEngine->Size = System::Drawing::Size(142, 23);
			this->SatEngine->TabIndex = 4;
			this->SatEngine->Text = L"Запуск";
			this->SatEngine->UseVisualStyleBackColor = true;
			this->SatEngine->Click += gcnew System::EventHandler(this, &MainWindow::SatEngine_Click);
			// 
			// StartSat
			// 
			this->StartSat->Location = System::Drawing::Point(6, 219);
			this->StartSat->Name = L"StartSat";
			this->StartSat->Size = System::Drawing::Size(142, 23);
			this->StartSat->TabIndex = 4;
			this->StartSat->Text = L"Запуск";
			this->StartSat->UseVisualStyleBackColor = true;
			this->StartSat->Click += gcnew System::EventHandler(this, &MainWindow::StartSat_Click);
			// 
			// EngineT
			// 
			this->EngineT->Location = System::Drawing::Point(29, 296);
			this->EngineT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->EngineT->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->EngineT->Name = L"EngineT";
			this->EngineT->Size = System::Drawing::Size(83, 20);
			this->EngineT->TabIndex = 5;
			this->EngineT->ThousandsSeparator = true;
			this->EngineT->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// EngineF
			// 
			this->EngineF->Location = System::Drawing::Point(29, 270);
			this->EngineF->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->EngineF->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->EngineF->Name = L"EngineF";
			this->EngineF->Size = System::Drawing::Size(83, 20);
			this->EngineF->TabIndex = 6;
			this->EngineF->ThousandsSeparator = true;
			this->EngineF->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(116, 298);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"c";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 298);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 10;
			this->label17->Text = L"t:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 272);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"|F|:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(9, 254);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(143, 13);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Навигационный двигатель";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(116, 272);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(15, 13);
			this->label20->TabIndex = 8;
			this->label20->Text = L"Н";
			// 
			// AngleV
			// 
			this->AngleV->DecimalPlaces = 4;
			this->AngleV->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 262144 });
			this->AngleV->Location = System::Drawing::Point(29, 193);
			this->AngleV->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1253305502, 146, 0, 720896 });
			this->AngleV->Name = L"AngleV";
			this->AngleV->Size = System::Drawing::Size(83, 20);
			this->AngleV->TabIndex = 2;
			this->AngleV->ThousandsSeparator = true;
			this->AngleV->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// v0
			// 
			this->v0->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->v0->Location = System::Drawing::Point(29, 167);
			this->v0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->v0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->v0->Name = L"v0";
			this->v0->Size = System::Drawing::Size(83, 20);
			this->v0->TabIndex = 2;
			this->v0->ThousandsSeparator = true;
			this->v0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45000, 0, 0, 0 });
			// 
			// PlanetM
			// 
			this->PlanetM->DecimalPlaces = 1;
			this->PlanetM->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->PlanetM->Location = System::Drawing::Point(29, 45);
			this->PlanetM->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->PlanetM->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->PlanetM->Name = L"PlanetM";
			this->PlanetM->Size = System::Drawing::Size(83, 20);
			this->PlanetM->TabIndex = 2;
			this->PlanetM->ThousandsSeparator = true;
			this->PlanetM->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5972, 0, 0, 131072 });
			// 
			// phi0
			// 
			this->phi0->DecimalPlaces = 4;
			this->phi0->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 262144 });
			this->phi0->Location = System::Drawing::Point(29, 119);
			this->phi0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1253305502, 146, 0, 720896 });
			this->phi0->Name = L"phi0";
			this->phi0->Size = System::Drawing::Size(83, 20);
			this->phi0->TabIndex = 2;
			this->phi0->ThousandsSeparator = true;
			this->phi0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(116, 195);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"рад";
			// 
			// SatM
			// 
			this->SatM->Location = System::Drawing::Point(29, 19);
			this->SatM->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->SatM->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->SatM->Name = L"SatM";
			this->SatM->Size = System::Drawing::Size(83, 20);
			this->SatM->TabIndex = 2;
			this->SatM->ThousandsSeparator = true;
			this->SatM->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 417, 0, 0, 0 });
			// 
			// r0
			// 
			this->r0->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->r0->Location = System::Drawing::Point(29, 93);
			this->r0->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->r0->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->r0->Name = L"r0";
			this->r0->Size = System::Drawing::Size(83, 20);
			this->r0->TabIndex = 2;
			this->r0->ThousandsSeparator = true;
			this->r0->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45000, 0, 0, 0 });
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(116, 47);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 13);
			this->label24->TabIndex = 3;
			this->label24->Text = L"10²⁰ т";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 195);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"θ:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(116, 121);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"рад";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 47);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 3;
			this->label23->Text = L"M:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 169);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"|v|:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 21);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(18, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"m:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 121);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"φ:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"R:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Начальная скорость";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(116, 169);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"км/c";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(116, 21);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(12, 13);
			this->label21->TabIndex = 2;
			this->label21->Text = L"т";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Точка выхода на орбиту";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(116, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"км";
			// 
			// graphBox
			// 
			this->graphBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->graphBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->graphBox->Location = System::Drawing::Point(183, 23);
			this->graphBox->Name = L"graphBox";
			this->tableLayoutPanel1->SetRowSpan(this->graphBox, 2);
			this->graphBox->Size = System::Drawing::Size(553, 485);
			this->graphBox->TabIndex = 2;
			this->graphBox->TabStop = false;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 553);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->MinimumSize = System::Drawing::Size(200, 200);
			this->Name = L"MainWindow";
			this->ShowIcon = false;
			this->Text = L"Навгация на орбите";
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x0))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineF))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngleV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlanetM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phi0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SatM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void MakeAxis_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void StartSat_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void SatEngine_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
