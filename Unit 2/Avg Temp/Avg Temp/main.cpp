#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

	const int SENTINEL = 999;
	double input = 0.00;
	int amountOfTemps = 0,
		totalTemp     = 0;

	while ((int)input != 999){
		cout << "Type a temperature, or '999' to finish" << endl;
		cin >> input;

		if (input != 999){
			totalTemp += input;
			amountOfTemps++;		
		}
		if (amountOfTemps == 0){
			cout << "You need to enter at least one temperature.\n";
			system("pause");
			input = 0;
		}
	}
	cout << "Average: " << (totalTemp / amountOfTemps);

	system("pause");
}

/*
 * Kaleb Haslam
 * Average Temperature
 */