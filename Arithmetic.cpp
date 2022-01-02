#include"Header.h"
#include<iostream>
using namespace std;

void Arithmetic() {

	int num1, num2;

	cout << "Input first number : ";
	cin >> num1;

	cout << "Input second number : ";
	cin >> num2;

	int	sum = num1 + num2;
	cout << "Sum is : " << sum;

	cout << "\n";
	int sub = num1 - num2;
	cout << "Sub is : " << sub;

	cout << "\n";
	int mul = num1 * num2;
	cout << "Multpication is : " << mul;

	// Type Casting >> Its a method to convert a data type to another data type
	cout << "\n";
	double divi = (float)num1 / num2;
	cout << "Divison is : " << divi;

	cout << "\n";
	int rem = num1 % num2;
	cout << "Reminder is : " << rem;
}