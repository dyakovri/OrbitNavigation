#pragma once
#include "RungeKutta.h"
#include <cmath>

class Satelite :
	public RungeKutta
{
private:
	double EngineF, AngleF, tStartF, tFinishF;

protected:
	double PlanetM, m;

public:
	Satelite(double, double,double,double,double,double);

	std::vector<double> F(double, std::vector<double>&);
	double Step(int);

	void StartEngine(double, double, double, double);
	double Feng(double t);
	double FengX(double t);
	double FengY(double t);

	double GetX();
	double GetY();
	double GetR();
	double GetPhi();
	double GetV();
	double GetT();

	~Satelite();
};

