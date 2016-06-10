#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;

const enum employeeType {All, Teachers, Admins, Support};
void input(){

	string position    = "";
	string name		   = "";
	int number		   = 1;
	ofstream outFile;
	outFile.open("employee_codes.txt");
	if (outFile.is_open()){
		do{
			//Output
			cout << "Enter the name (X to stop): ";
			cin >> name;
			cout << endl;
			if (name != "X" && name != "x"){
				do{
					cout << "Enter position | (A)dmin staff, (T)eaching staff, or (S)upport staff: ";
					cin >> position;
					cout << endl;
					std::transform(position.begin(), position.end(), position.begin(), ::toupper);
				}while(position != "A" && position != "T" && position != "S");
				outFile << position << number++ << "#" <<name << endl;
			}
		} while (name != "X" && name != "x");
		outFile.close();
	}else
		cout << "File could not be opened." << endl;

}
string getPosition(employeeType type){
	switch(type){
	case All:
		return "All";
	case Teachers:
		return "Teacher";
	case Admins:
		return "Admin";
	case Support:
		return "Support Staff";
	}
}
void readFromFile(employeeType typeToShow){

	string line = "";
	employeeType inputType;
	ifstream inFile;
	string employeeNumber;
	string name;
	string number;

	inFile.open("employee_codes.txt", ios::in);

	if (inFile.is_open()){
		//read next line
		getline(inFile, line);
		do {
			//Position
			char position = line.substr(0, 1)[0];
			switch(position){
			case 'A':
				inputType = Admins;
				break;
			case 'T':
				inputType = Teachers;
				break;
			case 'S':
				inputType = Support;
			}
			
			//Number
			number = line.substr(1, line.find("#", 0) - 1);
			
			//Name
			name = line.substr((line.find("#", 0) + 1));

			//display
			if(typeToShow == inputType || typeToShow == All){
				cout << number << "  " << name << "  " << getPosition(inputType) << endl;
			}//if

			//read next line
			getline(inFile, line);
		} while (!inFile.eof());
		system("pause");
		inFile.close();
	}else
		cout << "File could not be opened" << endl;
}
void menu(){
	bool doContinue = true;
	int  userInput  = 0;
	while(doContinue){
		system("cls");
		cout << "__________________________" << endl;
		cout << "      Employee Codes      " << endl;
		cout << "                          " << endl;
		cout << "1) Input                  " << endl;
		cout << "2) Display All            " << endl;
		cout << "3) Display Teachers       " << endl;
		cout << "4) Display Admins         " << endl;
		cout << "5) Display Support Staff  " << endl;
		cout << "6) Exit                   " << endl;
		cout << "__________________________" << endl;
		cin >> userInput;
		switch(userInput){
		case 1:
			input();
			break;
		case 2:
			readFromFile(All);
			break;
		case 3:
			readFromFile(Teachers);
			break;
		case 4:
			readFromFile(Admins);
			break;
		case 5:
			readFromFile(Support);
			break;
		case 6:
			doContinue = false;
			break;
		}//switch userInput
	}//while doContinue
}//menu()
int main(){
	menu();
	return 0;
}
/*
 * Employee Codes
 * Kaleb Haslam
 */