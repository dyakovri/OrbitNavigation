#include "Satelite.h"

const double G = 6.6740E-17;

Satelite::Satelite(double PlanetM, double SatM, double R, double Phi, double V, double Theta) : RungeKutta(4)
{
	this->PlanetM = PlanetM * 1e20;
	this->m = SatM;

	std::vector<double> Y0(4);
	Y0[0] = R * cos(Phi);
	Y0[1] = V * cos(Theta);
	Y0[2] = R * sin(Phi);
	Y0[3] = V * sin(Theta);

	SetInit(0, Y0);
}

std::vector<double> Satelite::F(double time, std::vector<double> &coordinates) {
	// x - Y[0], dx/dt - Y[1]
	// dx^2/dt^2 - FY[0] , dx/dt - FY[1]
	// y - Y[2], dy/dt - Y[3]
	// dy^2/dt^2 - FY[2] , dy/dt - FY[3]

	double z = pow(Y[0] * Y[0] + Y[2] * Y[2], -1.5);

	FY[0] = Y[1];
	FY[1] = -(G * PlanetM * Y[0] / z) + (FengX(time) / m);
	FY[2] = Y[3];
	FY[3] = -(G * PlanetM * Y[2] / z) + (FengY(time) / m);

	return FY;
}

double Satelite::Step(int interval) {
	NextStep(((double)interval) / 1000.0);
	return t;
}

double Satelite::Feng(double t) {
	if ((t > tStartF) && (t < tFinishF)) return EngineF;
	return 0;
}

double Satelite::FengY(double t) { return Feng(t)*cos(AngleF); }
double Satelite::FengX(double t) { return Feng(t)*sin(AngleF); }

void Satelite::StartEngine(double EngineF, double AngleF, double tStartF, double durationF) {
	this->EngineF = EngineF;
	this->AngleF = AngleF;
	this->tStartF = tStartF;
	this->tFinishF = tStartF + durationF;
}

double Satelite::GetX() { return Y[0]; }
double Satelite::GetY() { return Y[2]; }
double Satelite::GetR() { return sqrt(Y[0] * Y[0] + Y[2] * Y[2]); }
double Satelite::GetPhi() { return atan(Y[2]/ Y[0]);  }
double Satelite::GetV() { return sqrt(Y[1] * Y[1] + Y[3] * Y[3]); }
double Satelite::GetT() { return t;  }

Satelite::~Satelite()
{
}
