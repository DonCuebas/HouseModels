// Your Name: Don-Omar Cuebas
// Date: 9/23/22
// Program Title: House Models
// Program Description: This program outputs the price per square foot of three types of houses.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main()
{

	// Variable declaration
	int choice;
	double basePrice, squareFeet, footPrice;

	//Program title and description for the user

	cout << "This program calculates the price per square foot of an apartment based on the base price." << endl << endl;

	// User input

	cout << "\nChoose the corresponding number for which type of house you want to calculate for." << endl;
	cout << "1 - Colonial" << endl;
	cout << "2 - Split-entry" << endl;
	cout << "3 - Single-story" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	
	// Output to the screen
	system("cls");

	switch (choice)
	{
	case 1:
		cout << "1 : Colonial" << endl;                          // User input
		cout << "What is the base price of the house?" << endl;
		cin >> basePrice;
		cout << "How many square feet is the house?" << endl;
		cin >> squareFeet; 

		footPrice = basePrice / squareFeet;                      // Calculations

		system("cls");                                           // Output to screen
		cout << fixed << showpoint << setprecision(2);
		cout << setw(15) << left << "Model" << "Price Per Square Foot" << endl;
		cout << setw(15) << left << "Colonial" << "$" << footPrice << endl;
		

		break;

	case 2:
		cout << "2 : Split-entry" << endl;
		cout << "What is the base price of the house?" << endl;
		cin >> basePrice;
		cout << "How many square feet is the house?" << endl;
		cin >> squareFeet;

		footPrice = basePrice / squareFeet;                      // Calculations

		system("cls");                                           // Output to screen
		cout << fixed << showpoint << setprecision(2);
		cout << setw(15) << left << "Model" << "Price Per Square Foot" << endl;
		cout << setw(15) << left << "Split-entry" << "$" << footPrice << endl;
		break;

	case 3:
		cout << "3 : Single-story" << endl;
		cout << "What is the base price of the house?" << endl;
		cin >> basePrice;
		cout << "How many square feet is the house?" << endl;
		cin >> squareFeet;

		footPrice = basePrice / squareFeet;                      // Calculations

		system("cls");                                           // Output to screen
		cout << fixed << showpoint << setprecision(2);
		cout << setw(20) << left << "Model" << "Price Per Square Foot" << endl;
		cout << setw(20) << left << "Single-story" << "$" << footPrice << endl;
		break;

	default:
		cout << "Input error; program is terminating" << endl;
	}
	return 0;
}