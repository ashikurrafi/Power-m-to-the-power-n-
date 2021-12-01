#include<iostream>
#include<cmath>
using namespace std;

double power(double a, int b)
{
	return pow(a, b);
}

int main()
{
	int n;
	double m;
	cout << "Enter value of m : ";
	cin >> m;
	cout << "Enter value of n : ";
	cin >> n;
	cout << "m^n = " << power(m, n);
	return 0;
}