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

void getData(string[5], double[5]);
void update (string[5], double[5]);
void display(string[5], double[5]);
bool isRecordEmpty(string[5]);

int main(){
	string desc[5]  = {""};
	double price[5] = {0.00};

	//Prettiness
	cout << fixed;
	cout << setprecision(2);

	int choice = 0;
	while (choice != 4){
		system("cls");
		cout << "____________________" << endl;
		cout << "      Inventory     " << endl;
		cout << "1) Input            " << endl;
		cout << "2) Update Record    " << endl;
		cout << "3) Display          " << endl;
		cout << "4) Exit             " << endl;
		cout << "____________________" << endl;
		
		cin >> choice;
		switch(choice){
		case 1:
			getData(desc, price);
			break;
		case 2:
			update(desc, price);
			break;
		case 3:
			display(desc, price);
			break;
		case 4:
			continue; 
		} //end switch
	}// While loop
} //main

void getData(string desc[5], double price[5]){
	
	for (int i = 0; i < 5; i++){
		
		system("cls");
		cout << "Enter product name: " << endl;
		cin >> desc[i];
		system("cls");
		cout << "Enter product price: " << endl;
		cin >> price[i];
	
	}//For loop
}

void update(string desc[5], double price[5]){

	//Make sure theres already records
	if(isRecordEmpty(desc)) return;

	int choice = 0;
	while (choice != 6){
		system("cls");
		cout << "______________________________" << endl;
		cout << "               Update         " << endl;
		for (int i = 1; i <= 5; i++){
			cout << i << ") Update record " << i << " (" << desc[i - 1] << ")" << endl;
		}
		cout << "6) Back                       " << endl;
		cout << "______________________________" << endl;
		
		cin >> choice;

		if(choice == 6 || choice > 6 || choice <= 0)
			continue;

		system("cls");
		cout << "Enter new name" << endl;
		cin >> desc[choice - 1];
		cout << "Enter new price" << endl;
		cin >> price[choice - 1];
		system("cls");
		cout << "Record updated" << endl;
		system("pause");
	}// While loop	
}//update

void display(string desc[5], double price[5]){

	if(isRecordEmpty(desc)) return;

	system("cls");
	cout << "-----------------------------" << endl;
	cout << "        Inventory list       " << endl;
	for (int i = 0; i < 5; i++){
		cout << "Name:    " << desc[i] << endl;
		cout << "Price:   $" << price[i] << "\n\n";
	}
	cout << "-----------------------------" << endl;
	system("pause");
}

bool isRecordEmpty(string desc[5]){
	if(desc[0].empty()){
		system("cls");
		cout << "No records. Input some data first!" << endl;
		system("pause");
		return true;
	}
	return false;
}
/*
 * Kaleb Haslam
 * Parallel One-D Arrays
 */