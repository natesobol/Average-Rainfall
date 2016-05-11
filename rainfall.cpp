// Programmer: Nate Sobol
// Ch. 11 p. 652 #4 & 5
// Last Modified: 2/22/16
// Resubmitted: 5/10/16

/* Records weather for each month. Generates average and yearly total*/
/* Uses enums and structures*/

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

struct weather
{
	double totalRainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;
};

enum Months {
	January, 
	Februaury, 
	March, 
	April, 
	May,
	June, 
	July, 
	August, 
	September, 
	October, 
	November,
	December
};

void printTitle(){
	cout
		<< "\n\t\t\t Rainfall Program    "
		<< "\n\t\t\t  by Nate Sobol      ";
}


void main() {

	// Declarations
	const int NUM_OF_MONTHS = 12;
	weather months[NUM_OF_MONTHS];
	int i = 0;
	double yearlyRainfall = 0, averageRainfall;
	Months Month;

	// Title
	printTitle();

	// Processing (puts weather to months)
	for (Month = January; Month <= December; Month = Month) {
		cout
			<< "Enter rainfall for month" << i++ << ": ";
		cin >> months[i].totalRainfall;
		yearlyRainfall += months[i].totalRainfall;
		averageRainfall = yearlyRainfall / NUM_OF_MONTHS;
	}

	// Output
	cout
		<< "The total rainfall for the year is"
		<< yearlyRainfall << " inches" << "\n"
		<< "The average rainfall for the year is "
		<< averageRainfall << " inches" << "\n";
	cin.get();

	// Cleanup
	system("pause");
}
