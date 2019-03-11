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












	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::NumericUpDown^  phi0;

	private: System::Windows::Forms::NumericUpDown^  r0;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Button^  SatEngine;

	private: System::Windows::Forms::Button^  StartSat;
	private: System::Windows::Forms::NumericUpDown^  EngineT;


	private: System::Windows::Forms::NumericUpDown^  EngineF;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::NumericUpDown^  Theta;


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
	private: System::Windows::Forms::ToolStripStatusLabel^  StatusLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^  TimeLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^  VelocityLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^  CoordsLabel;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  PauseSat;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  yMax;
	private: System::Windows::Forms::Button^  RebuildAxis;
	private: System::Windows::Forms::NumericUpDown^  xMax;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  AngleF;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label25;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"0,6000"));
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->TimeLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->VelocityLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->CoordsLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->AngleF = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->PauseSat = (gcnew System::Windows::Forms::Button());
			this->SatEngine = (gcnew System::Windows::Forms::Button());
			this->StartSat = (gcnew System::Windows::Forms::Button());
			this->EngineT = (gcnew System::Windows::Forms::NumericUpDown());
			this->EngineF = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Theta = (gcnew System::Windows::Forms::NumericUpDown());
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->yMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->RebuildAxis = (gcnew System::Windows::Forms::Button());
			this->xMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngleF))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineF))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Theta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlanetM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phi0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SatM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMax))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->StatusLabel, this->TimeLabel,
					this->VelocityLabel, this->CoordsLabel
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 531);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(759, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// StatusLabel
			// 
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Size = System::Drawing::Size(73, 17);
			this->StatusLabel->Text = L"Остановлен";
			// 
			// TimeLabel
			// 
			this->TimeLabel->Name = L"TimeLabel";
			this->TimeLabel->Size = System::Drawing::Size(117, 17);
			this->TimeLabel->Text = L"Время со старта: 0 с";
			// 
			// VelocityLabel
			// 
			this->VelocityLabel->Name = L"VelocityLabel";
			this->VelocityLabel->Size = System::Drawing::Size(100, 17);
			this->VelocityLabel->Text = L"Скорость: 0 км/с";
			// 
			// CoordsLabel
			// 
			this->CoordsLabel->Name = L"CoordsLabel";
			this->CoordsLabel->Size = System::Drawing::Size(135, 17);
			this->CoordsLabel->Text = L"Координаты: 0 км, 0 км";
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
			this->tableLayoutPanel1->Controls->Add(this->groupBox2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->chart1, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 106)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(759, 531);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->AngleF);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->PauseSat);
			this->groupBox2->Controls->Add(this->SatEngine);
			this->groupBox2->Controls->Add(this->StartSat);
			this->groupBox2->Controls->Add(this->EngineT);
			this->groupBox2->Controls->Add(this->EngineF);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->Theta);
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
			this->groupBox2->Location = System::Drawing::Point(3, 129);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(154, 379);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Управление полетом";
			// 
			// AngleF
			// 
			this->AngleF->DecimalPlaces = 2;
			this->AngleF->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->AngleF->Location = System::Drawing::Point(29, 294);
			this->AngleF->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->AngleF->Name = L"AngleF";
			this->AngleF->Size = System::Drawing::Size(83, 20);
			this->AngleF->TabIndex = 12;
			this->AngleF->ThousandsSeparator = true;
			this->AngleF->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 114, 0, 0, 131072 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(116, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"c";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(9, 297);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(17, 13);
			this->label25->TabIndex = 14;
			this->label25->Text = L"α:";
			// 
			// PauseSat
			// 
			this->PauseSat->Enabled = false;
			this->PauseSat->Location = System::Drawing::Point(127, 219);
			this->PauseSat->Name = L"PauseSat";
			this->PauseSat->Size = System::Drawing::Size(21, 23);
			this->PauseSat->TabIndex = 11;
			this->PauseSat->Text = L"||";
			this->PauseSat->UseVisualStyleBackColor = true;
			this->PauseSat->Click += gcnew System::EventHandler(this, &MainWindow::PauseSat_Click);
			// 
			// SatEngine
			// 
			this->SatEngine->Location = System::Drawing::Point(6, 343);
			this->SatEngine->Name = L"SatEngine";
			this->SatEngine->Size = System::Drawing::Size(142, 23);
			this->SatEngine->TabIndex = 4;
			this->SatEngine->Text = L"Запуск двигателя";
			this->SatEngine->UseVisualStyleBackColor = true;
			this->SatEngine->Click += gcnew System::EventHandler(this, &MainWindow::SatEngine_Click);
			// 
			// StartSat
			// 
			this->StartSat->Location = System::Drawing::Point(6, 219);
			this->StartSat->Name = L"StartSat";
			this->StartSat->Size = System::Drawing::Size(115, 23);
			this->StartSat->TabIndex = 4;
			this->StartSat->Text = L"Запуск";
			this->StartSat->UseVisualStyleBackColor = true;
			this->StartSat->Click += gcnew System::EventHandler(this, &MainWindow::StartSat_Click);
			// 
			// EngineT
			// 
			this->EngineT->Location = System::Drawing::Point(29, 318);
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
			this->label16->Location = System::Drawing::Point(116, 321);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"c";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 321);
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
			// Theta
			// 
			this->Theta->DecimalPlaces = 4;
			this->Theta->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 262144 });
			this->Theta->Location = System::Drawing::Point(29, 193);
			this->Theta->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1253305502, 146, 0, 720896 });
			this->Theta->Name = L"Theta";
			this->Theta->Size = System::Drawing::Size(83, 20);
			this->Theta->TabIndex = 2;
			this->Theta->ThousandsSeparator = true;
			this->Theta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
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
			// chart1
			// 
			chartArea3->AxisX->Maximum = 1000000;
			chartArea3->AxisX->Minimum = -1000000;
			chartArea3->AxisX->MinorGrid->Enabled = true;
			chartArea3->AxisX->MinorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea3->AxisX->MinorTickMark->LineColor = System::Drawing::Color::DarkGray;
			chartArea3->AxisY->Maximum = 1000000;
			chartArea3->AxisY->Minimum = -1000000;
			chartArea3->AxisY->MinorGrid->Enabled = true;
			chartArea3->AxisY->MinorGrid->LineColor = System::Drawing::Color::DarkGray;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chart1->Location = System::Drawing::Point(182, 22);
			this->chart1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			this->tableLayoutPanel1->SetRowSpan(this->chart1, 2);
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bubble;
			series5->CustomProperties = L"IsXAxisQuantitative=True";
			series5->LabelForeColor = System::Drawing::Color::Orange;
			series5->Name = L"Series2";
			dataPoint3->Color = System::Drawing::Color::Orange;
			dataPoint3->LabelForeColor = System::Drawing::Color::Black;
			dataPoint3->MarkerSize = 5;
			dataPoint3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Star10;
			series5->Points->Add(dataPoint3);
			series5->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series5->YValuesPerPoint = 2;
			series5->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series6->Name = L"Series1";
			series6->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series6->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(555, 487);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->yMax);
			this->groupBox1->Controls->Add(this->RebuildAxis);
			this->groupBox1->Controls->Add(this->xMax);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(2, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(156, 102);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Управление графиком";
			// 
			// yMax
			// 
			this->yMax->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->yMax->Location = System::Drawing::Point(30, 45);
			this->yMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->yMax->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->yMax->Name = L"yMax";
			this->yMax->Size = System::Drawing::Size(83, 20);
			this->yMax->TabIndex = 18;
			this->yMax->ThousandsSeparator = true;
			this->yMax->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			// 
			// RebuildAxis
			// 
			this->RebuildAxis->Location = System::Drawing::Point(7, 70);
			this->RebuildAxis->Name = L"RebuildAxis";
			this->RebuildAxis->Size = System::Drawing::Size(142, 23);
			this->RebuildAxis->TabIndex = 11;
			this->RebuildAxis->Text = L"Перестроить";
			this->RebuildAxis->UseVisualStyleBackColor = true;
			this->RebuildAxis->Click += gcnew System::EventHandler(this, &MainWindow::RebuildAxis_Click);
			// 
			// xMax
			// 
			this->xMax->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->xMax->Location = System::Drawing::Point(30, 18);
			this->xMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->xMax->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->xMax->Name = L"xMax";
			this->xMax->Size = System::Drawing::Size(83, 20);
			this->xMax->TabIndex = 13;
			this->xMax->ThousandsSeparator = true;
			this->xMax->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"км";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"|Y|<";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"|X|<";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(117, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"км";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainWindow::timer1_Tick);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 553);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->MinimumSize = System::Drawing::Size(200, 198);
			this->Name = L"MainWindow";
			this->ShowIcon = false;
			this->Text = L"Навгация на орбите";
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AngleF))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EngineF))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Theta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->v0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlanetM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phi0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SatM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->r0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMax))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void StartSat_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void SatEngine_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void PauseSat_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void RebuildAxis_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
