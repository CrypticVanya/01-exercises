#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

/* exercise 1

int getNum();

int main() {

	int num1 = 0;
	int num2 = 0;
	int totalNum = 0;

	cout << "Enter your first Number here: ";
	num1 = getNum();

	cout << "Enter your second Number here: ";
	num2 = getNum();
	totalNum = (num1 + num2);

	cout << "The sum of the numbers you have entered is: " << totalNum << endl;
}

int getNum() {
	
	int num1 = 0;

	cin >> num1;

	return num1;

}
*/

/* exercise 1
int CompanyRev();
const double eastCostPerc = 0.58;

int main() {
	int compRev = 0;
	int totalEastCostRev = 0;

	cout << "How much revenue did the company make in total? ";
	compRev = CompanyRev();

	totalEastCostRev = ((double)compRev * eastCostPerc);

	cout << "The amount the east cost branch made was: " << "$" << totalEastCostRev << endl;

}

int CompanyRev() {
	int revenue = 0;
	bool invalidNum = true;

	do  {
		cin >> revenue;
		invalidNum = (revenue < 0);
		if (invalidNum) {
			cout << "Please, enter a valid number : ";
		}
	} while (invalidNum);
	

	return revenue;
}

*/

/*
int getNum();

const double stateTax = 0.04;
const double countyTax = 0.02;

int main() {
	double totalPurchase = 0;
	double stateTaxPurchase = 0;
	double countyTaxPurchase = 0;
	double totalSalesTax = 0;

	cout << "What was the total of your purchase? ";
	totalPurchase = getNum();
	stateTaxPurchase = (totalPurchase * stateTax);
	countyTaxPurchase = (totalPurchase * countyTax);
	totalSalesTax = (stateTaxPurchase + countyTaxPurchase);

	cout << "The amount the goverment is stealing from you in taxes is: " << "$" << totalSalesTax << endl;


}

int getNum() {
	int posNum = 0;
	bool validNum = true;

	do {
		cin >> posNum;
		validNum = (posNum < 0);
		if (validNum) {
			cout << "Please, enter a positive number ";
		}

	} while (validNum);

	return posNum;

}
*/

/*
int getNum(string);

const double TAX = 0.0675,
			 TIP = 0.20;

int main() {

	double patronBill = 0,
		patronTaxBill = 0,
		patronTip = 0,
		totalBill = 0;

	patronBill = getNum("What is the total bill? ");
	patronTaxBill = (patronBill * TAX);
	patronTip = ((patronTaxBill + patronBill) * TIP);
	totalBill = (patronBill + patronTaxBill + patronTip);

	cout << "The total bill is: " << "$" << totalBill << ". " << endl;
}

int getNum(string prompt) {
	int posNum = 0;
	bool validateNum = true;

	do {
		cout << prompt;
		cin >> posNum;
		validateNum = (posNum < 0);
		if (validateNum) {
			cout << "Try again please";
		}
	} while (validateNum);

	return posNum;
}
*/

/*
double getNum(string);

int main() {
	double num1 = 0,
		num2 = 0,
		num3 = 0,
		num4 = 0,
		num5 = 0,
		totalSum = 0,
		numAvg = 0;

	num1 = getNum("What is number 1: ");
	num2 = getNum("What is number 2: ");
	num3 = getNum("What is number 3: ");
	num4 = getNum("What is number 4: ");
	num5 = getNum("What is number 5: ");

	totalSum = (num1 + num2 + num3 + num4 + num5);
	numAvg = (totalSum / 5);


	cout << "The average is " << numAvg << endl;
}

double getNum(string prompt) {
	double posNum = 0;
	bool validateNum = false;

	do {
		cout << prompt;
		cin >> posNum;
		validateNum = (posNum < 0);
		if (validateNum) {
			cout << "Try a positive number";
		}
	}
	while (validateNum);

	return posNum;
}
*/

/*
did it work??????
sssnot showing on github
*/
