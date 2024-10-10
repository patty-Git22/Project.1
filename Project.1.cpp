

#include <iostream>
#include <iomanip>
using namespace std;


double calculatingcommission(double sales) {
	if (sales < 10000)return 0.05;
	if (sales < 15000)return 0.10;
	if (sales < 18000)return 0.12;
	if (sales < 22000)return 0.14;
	if (sales > 22000)return 0.16;
	return 0.0; //default value
}

int main() {
	char choice;
	do {
		double sales, advancePay, commission, remainingPay;

		//gain numbers for equation
		cout << "What was the total monthly sales?  ";
		cin >> sales;
		cout << "what is the person requesting in advance pay?  ";
		cin >> advancePay;

		double commissionRate = calculatingcommission(sales);
		commission = sales * commissionRate;
		remainingPay = commission - advancePay;
		//shows results
		cout << "pay results" << endl;
		cout << "____________" << endl;
		cout << fixed << setprecision(2);
		cout << "Sales: $" << sales << endl;
		cout << "commission rate:  " << commissionRate << endl;
		cout << "commission:  " << commission << endl;
		cout << "advance pay:  " << advancePay << endl;
		cout << "remaining pay: " << remainingPay << endl;


		cout << "Would you like to input a new salespersons numbers? (y/n) ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');


	return 0;

}
