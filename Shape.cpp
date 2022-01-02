#include"Header.h"
#include<iostream>
using namespace std;

void Shape() {

	//Calculation for Triangle
	//double TriangleBase, TriangleHeight, TriangleArea;
	//cout << "Enter base value : ";
	//cin >> TriangleBase;

	//cout << "\n";
	//cout << "Enter height value : ";
	//cin >> TriangleHeight;

	//cout << "\n";
	//TriangleArea = 0.5 * TriangleBase * TriangleHeight;

	//cout << "Area is : " << TriangleArea;

	//Calculation for Rectangle 

	cout << "\n";
	double RectangleWidth, RectangleHeight, RectangleArea;

	cout << "Enter the Width Value : ";
	cin >> RectangleWidth;

	cout << "\n";
	cout << "Enter the Height Value : ";
	cin >> RectangleHeight;

	RectangleArea = RectangleWidth * RectangleHeight;

	cout << "\n";
	cout << "Rectangle Area is : " << RectangleArea;


}