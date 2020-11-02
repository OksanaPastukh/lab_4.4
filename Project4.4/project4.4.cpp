// Lab_04_4.cpp
// < Пастух Оксани >
// Лабораторна робота № 4.4
// Табуляція функції,заданої графіком
// Варіант 14

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx,  y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "--------------------------" << endl;
	cout << "|" << setw(5) << "x" << "    |"
		 << setw(7) << "y" << "      |" << endl;
	cout << "--------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -4)
			y = -2;
		else
			if (-4 < x && x <= 0)
				y = x / 4;
			else
				if (0 < x && x <= 2)
					y = (x * x);
				else
					y = (10 - x) / 2;
		cout << "|" << setw(7) << setprecision(2) << x
			<< "  |" << setw(10) << setprecision(3) << y
			<< "   |" << endl;
		x += dx;
	}
	cout << "--------------------------" << endl;

	return 0;
}