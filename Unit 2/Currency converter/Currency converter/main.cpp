#include <iostream>;

using std::cin;
using std::cout;
using std::endl;

double getRate(int selection, int amount){
	
	const double USD = 1.28, //US
		  GBP = 1.82, //British pound
		  JPY = 0.01, //Japanese Yen
		  MXN = 0.07; //Mexican Peso

	switch(selection){
	case 1:
		return amount * USD;
	case 2:
		return amount * GBP;
	case 3:
		return amount * JPY;
	case 4:
		return amount * MXN;
	}
	return 0;
}

int main(){
	
	int selection = 0;
	double amount = 0.00;
	
	cout << "Enter currency in CAD: ";
	cin  >> amount;

	cout << "What currenty would you like to convert to?\n";
	cout << "1) USD \n"
		 << "2) GBP \n"
		 << "3) JPY \n"
		 << "4) MXN \n";
		  
	cin >> selection;
	cout << "$" << getRate(selection, amount);

	system("pause");
}
/*
 * Kaleb Haslam
 * Currency converter
 */