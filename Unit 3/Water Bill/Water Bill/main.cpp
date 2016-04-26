#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Prettiness
#include <iomanip>
using std::fixed;
using std::setprecision;

//Functions
void getInput(string &, double &, double &);
double calcBill(double);
void displayBill(string, double, double, double);

const double RATE = 0.00175;  
int main(){
	
	//Prettiness
	cout << fixed;
	cout << setprecision(2);

	string name = "";
	double current = 0.00;
	double previous = 0.00;
 
	getInput(name, current, previous);
	displayBill(name, previous, current, calcBill(current));
	return 0;
}

void getInput(string &name, double &current, double &previous){
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Enter previous usage: " << endl; //Not quite sure why this is relevant.
	cin >> previous;
	cout << "Enter current usage: " << endl;
	cin >> current;
	return;
}
double calcBill(double current){
	return (current * RATE);
}
void displayBill(string name, double previous, double current, double charge){
	system("cls");
	cout << name << endl;
	cout << "Previous usage:   " << previous << endl;
	cout << "Current usage:    " << current  << endl;
	cout << "Charge:           " << charge   << endl;
	system("pause");
	return;
}

/*
 * Kaleb Haslam
 * Water Bill
 */