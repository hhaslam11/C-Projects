#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	double weeklyPay = 0,
		   raise = 0,
		   newWeeklyPay = 0;
	
	//Get input
	cout << "Enter current weekly pay: ";
	cin >> weeklyPay;
	cout << "Enter raise: ";
	cin >> raise;

	//Calculate Data
	newWeeklyPay = weeklyPay + (weeklyPay * raise);

	//Output data
	system("cls");
	cout << "New weekly pay: $" << newWeeklyPay << endl;

	system("pause");
	return 0;
}

/*
 * Kaleb Haslam
 * PayRaise
 */