#include <vector>
#include <stdexcept>

#pragma once

class RungeKutta
{
	/// <summary>
	/// ������� �����
	/// </summary>
public:
	double t = 0;

	/// <summary>
	/// ������� ������� Y[0] - ���� �������, Y[i] - i-��� ����������� �������
	/// </summary>
	///
	std::vector<double> Y;
	/// <summary>
	/// ���������� ����������
	/// </summary>
	///
private:
	std::vector<double> YY, Y1, Y2, Y3, Y4;
protected:
	std::vector<double> FY;

	/// <summary>
	/// �����������
	/// </summary>
	/// <param name="N">����������� �������</param>
public:
	RungeKutta(unsigned int N);
	/// <summary>
	/// �����������
	/// </summary>
	RungeKutta();

	/// <summary>
	/// ��������� ������ ��� ������� �������
	/// </summary>
	/// <param name="N">����������� ��������</param>
protected:
	void Init(unsigned int N);

	/// <summary>
	/// ��������� ��������� �������
	/// </summary>
	/// <param name="t0">��������� �����</param>
	/// <param name="Y0">��������� �������</param>
public:
	void SetInit(double t0, std::vector<double> &Y0);

	/// <summary>
	/// ������ ������ ������ �������
	/// </summary>
	/// <param name="t">������� �����</param>
	/// <param name="Y">������ �������</param>
	/// <returns>������ �����</returns>
	virtual std::vector<double> F(double t, std::vector<double> &Y) = 0;

	/// <summary>
	/// ��������� ��� ������ �����-�����
	/// </summary>
	/// <param name="dt">������� ��� �� ������� (����� ���� ����������)</param>
	std::vector<double> NextStep(double dt);
};
