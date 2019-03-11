#include "MainWindow.h"
#include "Satelite.h"
#include <cstdio>

namespace OrbitNavigation {
	double t;
	bool paused = false, started = false;
	Satelite *s;

	System::Void MainWindow::StartSat_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!started) {
			chart1->Series["Series1"]->Points->Clear();
			PauseSat->Enabled = true;
			timer1->Enabled = true;
			StartSat->Text = "Остановить";
			started = true; 
			StatusLabel->Text = "В полете";

			s = new Satelite((double)PlanetM->Value, (double)SatM->Value, (double)r0->Value, (double)phi0->Value, (double)v0->Value, (double)Theta->Value);
			
			timer1->Interval = 10;
			t = 0;
		}
		else {
			chart1->Series["Series1"]->Points->Clear();
			PauseSat->Enabled = false;
			timer1->Enabled = false;
			StartSat->Text = "Запустить";
			started = false; paused = false;
			StatusLabel->Text = "Остановлен";

			delete s; s = 0;
		}
	}

	System::Void MainWindow::PauseSat_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = !(timer1->Enabled);
		
		
		if (paused) {
			PauseSat->Text = "||";
			paused = false;
			StatusLabel->Text = "В полете";
		}
		else {
			PauseSat->Text = ">";
			paused = true;
			StatusLabel->Text = "На паузе";
		}

	}

	System::Void MainWindow::RebuildAxis_Click(System::Object^  sender, System::EventArgs^  e) {
		chart1->ChartAreas["ChartArea1"]->AxisX->Maximum =	(double) xMax->Value;
		chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = -(double) xMax->Value;
		chart1->ChartAreas["ChartArea1"]->AxisY->Maximum =  (double) yMax->Value;
		chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = -(double) yMax->Value;
	}

	System::Void MainWindow::SatEngine_Click(System::Object^  sender, System::EventArgs^  e) {
		if (s!=nullptr)
			s->StartEngine((double)EngineF->Value, (double)AngleF->Value, s->GetT(), (double)EngineT->Value);
	}

	System::Void MainWindow::timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		t = s->Step(timer1->Interval);

		TimeLabel->Text = "Время со старта : " + ((Int64)t).ToString() + " c";
		CoordsLabel->Text = "Координаты: " + ((Int64)s->GetX()).ToString() + " км, " + ((Int64)s->GetY()).ToString() + " км";
		VelocityLabel->Text = "Скорость: " + ((Int64)s->GetV()).ToString() +" км/с";

		chart1->Series["Series1"]->Points->AddXY(s->GetX(), s->GetY());
	}
}