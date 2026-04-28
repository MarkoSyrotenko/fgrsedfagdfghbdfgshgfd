#pragma once
#include <iostream>
using namespace std;

struct fraction
{
	int num;
	int den;
};

fraction makeFraction()
{
	int n, d;
	cout << "enter numerator: ";
	cin >> n;
	cout << "enter denominator: ";
	cin >> d;
	fraction fr{ n,d };
	return fr;
}
void showFraction(fraction fr)
{
	cout << fr.num << "/" << fr.den;
}