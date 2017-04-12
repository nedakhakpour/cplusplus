//NedaKhakpour-Assignment2.cpp 
//Neda Khakpour

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;


int main()
{
	//START
	
	//INPUT Subtotal
	//declare variable
	double Subtotal;
	cout << "Enter the Subtotal: ";
	//read value
	cin >> Subtotal;

	//COMPUTE Tax
	double Tax;
	Tax = (0.0825)*(Subtotal);
	

	//COMPUTE Amount
	double Amount;
	Amount = (Tax)+(Subtotal);


	//COMPUTE 10%
	double G10;
	G10 = (Amount)*(0.10);

	//COMPUTE 15%
	double G15;
	G15 = (Amount)*(0.15);

	//COMPUTE 20%
	double G20;
	G20 = (Amount)*(0.20);

	//COMPUTE 25%
	double G25;
	G25 = (Amount)*(0.25);


	//COMPUTE 30%
	double G30;
	G30 = (Amount)*(0.30);

	//OUTPUT
	cout << "\n" << "\t" << "Neda's Restuarant" << "\n";
	cout << "\t" << "4540 Pebble Brook Ln." << "\n";
	cout << "\t" << "(972)-567-8632" << "\n" << "\n";
		
	//Format numbers
	cout << fixed << setprecision(2);
	cout << setfill('_');

	cout << setw(15) << left << setfill(' ') << "Subtotal"
		<< setw(4) << right << setfill(' ') << "$"
		<< setw(12) << right << setfill('_') << Subtotal
		<< "\n";

	cout << setw(15) << left << setfill(' ') << "Tax"
		<< setw(4) << right << setfill(' ') << "$"
		<< setw(12) << right << setfill('_') << Tax
		<< "\n";

	cout << setw(15) << left << setfill(' ') << "Amount"
		<< setw(4) << right << setfill(' ') << "$"
		<< setw(12) << right << setfill('_') << Amount
		<< "\n";

	cout << setw(15) << left << setfill(' ') << "Gratuity"
		<< setw(4) << right << setfill(' ') << "$"
		<< setw(12) << right << setfill('_') << ""
		<< "\n";

	cout << setw(15) << left << setfill(' ') << "Total"
		<< setw(4) << right << setfill(' ') << "$"
		<< setw(12) << right << setfill('_') << ""
		<< "\n";

	cout << setw(15) << left << setfill(' ') << ""
		<< setw(4) << right << setfill(' ') << ""
		<< setw(12) << right << setfill(' ') << ""
		<< "\n";

	cout << setw(15) << left << setfill(' ') << "Signature"
		<< setw(4) << right << setfill(' ') << ""
		<< setw(12) << right << setfill('_') << ""
		<< "\n";

	cout << "Gratuity suggestions: " << "10%=$" << G10 << ", 15%=$" << G15 << ", 20%=$" << G20 << ", 25%=$" << G25 << ", 30%=$" << G30 << ".";

	//STOP

	//prevent the console from closing
	_getch();


    return 0;
}

