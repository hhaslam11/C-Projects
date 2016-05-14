#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

const int SIZE = 3; //rows and cols
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';
const char DEFAULT = '_';

int checkIfWin(char[SIZE][SIZE]);
void drawBoard(char[][SIZE]);
int main(){

	int move = 0;
	int place = 1;

	//Create board
	char board[SIZE][SIZE];
	int placeCol[SIZE * SIZE];
	int placeRow[SIZE * SIZE];
	int counter = 1;

	for(int row = 0; row < SIZE; row++){
			for(int col = 0; col < SIZE; col++){
				board[col][row] = DEFAULT;
				placeCol[counter] = col;
				placeRow[counter] = row;
				counter++;
			}
		}
	
	int i = 0;
	while(i < (SIZE * SIZE)){// Loop that goes until all possible moves are done.
		
		int uRow = 1, uCol = 1;
		drawBoard(board);
		
		//Player 1
		cout << "Player 1's turn!" << endl;
		cin >> move;
		if(board[placeCol[move]][placeRow[move]] == DEFAULT)
			board[placeCol[move]][placeRow[move]] = PLAYER1;		
		i++;

		drawBoard(board);

		//Player 2
		cout << "Player 2's turn!" << endl;
		cin >> move;
		if(board[placeCol[move]][placeRow[move]] == DEFAULT)
			board[placeCol[move]][placeRow[move]] = PLAYER2;	
		i++;

		if(checkIfWin(board) != 0)
			return 0;
	}
	cout << "It's a tie!" << endl;
	system("pause");
	return 0;

}
int checkIfWin(char board[SIZE][SIZE]){

	
	return 0;
}
void drawBoard(char board[][SIZE]){
	system("cls");
	for(int y = 0; y < SIZE; y++){
		for(int x = 0; x < SIZE; x++){
			cout << board[x][y];
		}
		cout << endl;
	}
}