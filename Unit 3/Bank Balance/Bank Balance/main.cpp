#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

double bal = 0.00;
double amount();
void withdraw(double), deposit(double);

int main(){
	
	//Prettiness
	cout << fixed;
	cout << setprecision(2);


	while (true){ //Exits from case 3 in switch
		system("cls");
		cout << "__________________________" << endl;
		cout << "           Bank           " << endl;
		cout << "Current Balance: $" << bal << endl;
		cout << endl;
		cout << "1) Withdraw" << endl;
		cout << "2) Deposit"  << endl;
		cout << "3) Exit"  << endl;
		cout << "__________________________" << endl;

		int input;
		cin >> input;

		switch (input){
			case 1:
				withdraw(amount());
				break;
			case 2:
				deposit(amount());
				break;
			case 3:
				return 0;
				break;
			default:
				continue;
		}
	}
	return 0;
}

double amount(){
	cout << "Amount: ";
	double input;
	cin >> input;
	return input;
}

void withdraw(double amount){
	if (amount > bal){
		cout << "Not enough money in your account." << endl;
		system("pause");
		return;
	}else{
		bal -= amount;
	}
}

void deposit(double amount){
	bal += amount;
}

/*
 * Kaleb Haslam
 * Bank Balance
 */