#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	double netBalance;
	int d1; 
	int d2; 
	double payment;
	double averageDailyBalance;
	double interest;
	double interestRate;

	cout << "Enter the net balance:"; 
	cin >> netBalance; 
	cout << endl; 

	cout << "Enter the number of days of the billing cycle:"; 
	cin >> d1; 
	cout << endl; 

	cout << "Enter the number of days payment is made before billing cycle:"; 
	cin >> d2; 
	cout << endl; 

	cout << "Enter the payment made:"; 
	cin >> payment; 
	cout << endl; 

	cout << "The average daily balance is: " << ((netBalance * d1 - payment * d2) / d1) << endl; 
	cin >> averageDailyBalance; 
	cout << endl;

	cout << "Enter intrest rate: ";
	cin >> interestRate;
	cout << endl;

	cout << "The interest is: " << averageDailyBalance * 0.0152 << endl; 
	cin >> interest; 
	cout << endl; 
	return 0;

}