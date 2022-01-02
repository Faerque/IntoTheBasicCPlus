#include"Header.h"
#include<iostream>


void UserInput() {
	int num;
	double doubleNum;
	std::cout << "Input some Numbers : ";

	std::cin >> num;
	std::cout << "Inputted number is : " << num;

	std::cout << "\n";
	std::cout << "Input decimal numbers : ";
	std::cin >> doubleNum;
	std::cout << "Inputted Double Numbers : " << doubleNum;

	int sum = num + doubleNum;

	std::cout << "\n";
	std::cout << "Summation is : " << sum;

	std::cout << "\n";
	char name[12];
	std::cout << "Input your nmuber : ";

	std::cin >> name;
	std::cout << "Your Name is : " << name;
}