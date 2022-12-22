// лаба 13.2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

using namespace std;

void Audit(double sum_rad);
void Suma(double radian_A, double radian_B, double radian_C, double& sum_radian);

#define SUM(x,y,z) (x)+(y)+(z)
#define RAD(gradian, PI) (gradian)*((PI) / 180)
#define GRAD(radian, PI) (radian) * (180 / (PI))

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	const double PI = 4 * atan(1);
	double gradian_A;
	double gradian_B;
	double gradian_C;
	cout << "Gradus A = "; cin >> gradian_A;
	cout << "Gradus B = "; cin >> gradian_B;
	cout << "Gradus C = "; cin >> gradian_C;
	double radian_A;
	double radian_B;
	double radian_C;
	double sum_gradian;
	double sum_radian;
	sum_gradian = SUM(gradian_A, gradian_B, gradian_C);
	if (sum_gradian != 180)
	{
		cout << sum_gradian << endl;
		cout << "This triangle is not correct" << endl;
	}
	else
	{
		radian_A = RAD(gradian_A, PI);
		radian_B = RAD(gradian_B, PI);
		radian_C = RAD(gradian_C, PI);
		cout << "Radian A = " << radian_A << endl;
		cout << "Radian B = " << radian_B << endl;
		cout << "Radian C = " << radian_C << endl;
		Suma(radian_A, radian_B, radian_C, sum_radian);
		cout << "Sum of all cos of radian = " << sum_radian << endl;
		Audit(sum_radian);
	}
}
void Suma(double radian_A, double radian_B, double radian_C, double& sum_radian) {
	sum_radian = SUM(cos(radian_A), cos(radian_B), cos(radian_C));
}
void Audit(double sum_radian)
{
	if (sum_radian <= 3. / 2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}