#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;

const int size = 100;

void writeNumbersToFile() {
	ofstream outFile;
	outFile.open("numbers.txt");
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
	outFile.open("evenNumbers.txt");
	inFile.open("numbers.txt");

	for (int i = 0; i <= size; i++) {
		getline(inFile, inputString);
		if (std::stoi(inputString) % 2 == 0) {
			outFile << std::stoi(inputString) << endl;
		}
	}
}
int main() {
	writeNumbersToFile();
	copyEvenNumbers();
	return 0;
}
/*
 * Kaleb Haslam
 * Numeric data
 */