#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	
	string word;
	char currGuess;
	
	cout << "Enter word" << endl;
	system("cls");
	const int wordLength = static_cast<int>(word.length());
	char guesses[wordLength];

	cout << "Guess a letter" << endl;
	cin >> currGuess;
	
	if(word.find(currGuess, 0) != -1){
		//guesses
	}
	
	for (int i = 0; i < static_cast<int>(word.length()); i++)
		cout << "_ ";
	cout << endl;
	
	system("pause");
	return 0;
}

/* 
 * Kaleb Haslam
 * Hangman
 */ 