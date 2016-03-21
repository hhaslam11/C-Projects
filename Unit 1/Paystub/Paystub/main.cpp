#include <iostream>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main(){
	
	const double INCOME_TAX = 0.33,
			     EI         = 0.04,
		         PENSION    = 0.05;

	string name;
	double hours, rate, gross, deductions,
		   incomeTax, ei, pension, net;

	cout << fixed;
	cout << setprecision(2);

	//Input
	cout << "Name: ";
	getline(cin, name);
	cout << "Hours: ";
	cin >> hours;
	cout << "Rate: ";
	cin >> rate;
	
	//Calulations
	gross = hours * rate;
	incomeTax = gross * INCOME_TAX;
	ei = gross * EI;
	pension = gross * PENSION;
	deductions = incomeTax + ei + pension;
	net = gross - deductions;

	//output
	system("cls");
	cout << "______________________________________\n";
	cout << "               Pay Stub               \n";
	cout << name << endl << endl;
	cout << "______________________________________\n";
	cout << "Hours:            "  << hours << endl;
	cout << "Rate:             $" << rate  << endl;
	cout << "Gross:            $" << gross << endl;
	cout << "______________________________________\n";
	cout << "Income Tax:       $" << incomeTax << endl;
	cout << "EI:               $" << ei << endl;
	cout << "Pension:          $" << pension << endl;
	cout << "Total Deductions: $" << deductions << endl;
	cout << "______________________________________\n";
	cout << "Net Pay:          $" << net << endl;
	cout << "______________________________________\n";
	system("pause");
	return 0;
}

//Kaleb Haslam
//Paystub