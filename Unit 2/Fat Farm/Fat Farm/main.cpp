#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	
	double total, fat, caloriesDueToFat, percent;

	//input
	cout << "Total Calories: ";
	cin >> total;
	cout << "Grams of fat: ";
	cin >> fat;

	//calculations
	caloriesDueToFat = total - (total - (fat * 9));
	percent          = (caloriesDueToFat / total) * 100;

	//output
	cout << "Calories due to fat: " << caloriesDueToFat << endl;
	cout << "Percent of fat: " << percent << "%\n\n\n";

	system("pause");
	return 0;
}
//Kaleb Haslam
//Fat Farm