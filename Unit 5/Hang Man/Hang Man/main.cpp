#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
		
	string word;
	string wordOriginal;
	bool correct = false; //Is player guess correct
	char currGuess;
	char guesses[50];
	int wrongGuesses = 0;

	//Get word
	cout << "Enter word" << endl;
	cin >> word;
	system("cls");
	int wordLength = static_cast<int>(word.length());
	wordOriginal = word;
	
	//Build array
	for (int i = 0; i < wordLength; i++)
		guesses[i] = '_';
	
	while(wrongGuesses < 10){

		//Draw
		for (int i = 0; i < wordLength; i++)
			cout << guesses[i] << " ";
		cout << endl;
		cout << "Wrong guesses: " << wrongGuesses << "/10" << endl;

		//Guess letter
		cout << "Guess a letter" << endl;
		cin >> currGuess;
		
		//Test input
		for (int i = 0; i < wordLength; i++)
			if(word.find(currGuess, 0) != -1){
				guesses[word.find(currGuess, 0)] = currGuess;
				word.replace(word.find(currGuess, 0), 1, "#");
				correct = true;
			}

		if(!correct)
			wrongGuesses++;
		else
			correct = false;//reset
		
		if(string(guesses).compare(0, wordLength, wordOriginal) == 0){
			cout << "Correct!" << endl;
			system("pause");
			return 0;
		}		
	}//while
	
	cout << "Failed." << endl;
	system("pause");
	return 0;
}

/* 
 * Kaleb Haslam
 * Hangman
 */ 