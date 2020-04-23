#include <iostream>
using namespace std;

double V(double r, double h)
{
	return 3.14159265 * r * r * h; // pi * r^2 * h
}

int main()
{
	setlocale(LC_ALL, "russian");

	double r1, h1;
	double r2, h2;

	cout << "Введите радиус и высоту первого цилиндра: ";
	cin >> r1 >> h1;
	cout << "Введите радиус и высоту второго цилиндра: ";
	cin >> r2 >> h2;

	double v1 = V(r1, h1);
	double v2 = V(r2, h2);
	
	if (v1 > v2)
	{
		cout << "1 больше\n";
	}
	else
	{
		cout << "2 больше\n";
	}

	system("pause");
	return 0;
}
