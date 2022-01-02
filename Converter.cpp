#include"Header.h"
#include<iostream>

using namespace std;

void TemperatureConverter() {

	cout << "**Temprature Converter**\n";

	double Celsius, Fahrenheit, Kelvin;

	cout << "Input the value of Celsius : \n";
	cin >> Celsius;

	cout << "Input the value of Fahrenheit : \n";
	cin >> Fahrenheit;

	cout << "Inpute the value of Kelvin : \n";
	cin >> Kelvin;

	Fahrenheit = 1.8 * Celsius + 32;
	Celsius = (Fahrenheit - 32) / 1.8;
	Kelvin = Celsius + 273;

	cout << "Fahrenheit is : \n" << Fahrenheit;
	cout << "Celsius is : \n" << Celsius;
	cout << "Kelvin is : \n" << Kelvin;



}