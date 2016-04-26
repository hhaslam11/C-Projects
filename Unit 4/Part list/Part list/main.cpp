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

void input(string[5] &, double[5] &);

int main(){
	
	string desc[5]  = {""};
	double price[5] = {0.00};

	//Prettiness
	cout << fixed;
	cout << setprecision(2);

	while (true){ //Breaks from case statement (Case 4)
		system("cls");
		cout << "____________________" << endl;
		cout << "      Inventory     " << endl;
		cout << "1) Input            " << endl;
		cout << "2) Update Record    " << endl;
		cout << "3) Display          " << endl;
		cout << "4) Exit             " << endl;
		cout << "____________________" << endl;

		switch(){
		case 1:
			input(desc, price);
			break;
		case 2:
			//update();
			break;
		case 3:
			//display();
			break;
		case 4:
			return 0; 
		}
	}// While loop
}

void input(string[5] &name, double[5] &price){
	
	for (int i = 0; i < 5; i++){
		
		system("cls");
		cout << "Enter product name: " << endl;
		cin >> desc[i];
		system("cls");
		cout << "Enter product price: " << endl;
		cin >> price[i];
	
	}//For loop
}

/*
 * Kaleb Haslam
 * Parallel One-D Arrays
 */