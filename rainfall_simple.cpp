// Programmer: Nate Sobol
// Ch. 11 p. 652 #4 & 5
// Last Modified: 2/22/16

#include <iostream>
using namespace std;

struct weather
{
	double totalRainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;
};

void main() {

	// Declarations
	const int NUM_OF_MONTHS = 12;
	weather months[NUM_OF_MONTHS];
	int i = 0;
	double yearlyRainfall = 0, averageRainfall;
	

	for (int i = 0; i < NUM_OF_MONTHS; i++) {
		cout
			<< "Enter rainfall for month :" << (i + 1) << ": ";
		cin >> months[i].totalRainfall;
		yearlyRainfall += months[i].totalRainfall;
		averageRainfall = yearlyRainfall / NUM_OF_MONTHS;
	}

	cout
		<< "The total rainfall for the year is"
		<< yearlyRainfall << " inches" << "\n"
		<< "The average rainfall for the year is "
		<< averageRainfall << " inches" << "\n";
	cin.get();
}
