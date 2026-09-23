// This program estimates energy drink purchasing preferences from survey data.
#include <iostream>
using namespace std;
int main()
{
	cout << "Results From 16,500 Surveyed Customers!" << endl;

	//Constants, Variables, and Calculations.

	const int totalCustomers = 16500;
	const double percentageEnergy = 0.15;
	const double percentageCitrus = 0.58;
	double energy_drink_customers = totalCustomers * percentageEnergy;
	double citrus_customers = energy_drink_customers * percentageCitrus;

	// Diplays.

	cout << "Customers who purchase energy drinks weekly: " << energy_drink_customers;
	cout << "Customers who prefer citrus energy drinks: " << citrus_customers;
	return 0;
}

