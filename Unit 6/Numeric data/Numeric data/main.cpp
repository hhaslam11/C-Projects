#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ios;

const int size = 1000;
void writeNumbersToFile() {
	ofstream outFile;
	outFile.open("numbers.txt", ios::app);
	if (outFile.is_open()) {
		for (int i = 0; i <= size; i++) {
			outFile << (rand() % 100 + 1) << endl;
		}
	} else
		cout << "File could not be opened." << endl;
	outFile.close();
}
void copyEvenNumbers() {
	ofstream outFile;
	ifstream inFile;
	std::string inputString = "";
	outFile.open("evenNumbers.txt", ios::app);
	inFile.open("numbers.txt");

	for (int i = 0; i <= size; i++) {
		inputString = inFile.getline();
		if (/*(int)inputstring*/ % 2 = 0) {
			outFile << //(int)inputstring
		}
	}
	
	
}
int main() {
	writeNumbersToFile();
	return 0;
}
/*
 * Kaleb Haslam
 * Numeric data
 */