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

	int neededToWin = SIZE; //How much in a row user needs in order win
	int move = 0;
	int place = 0;

	//Create board
	char board[SIZE][SIZE];
	int key[SIZE];//

	for(int y = 0; y < SIZE; y++){
			for(int x = 0; x < SIZE; x++){
				board[x][y] = DEFAULT;
				
			}
		}
	
	for (int i = 0; i < (SIZE * SIZE); i++){// Loop that goes until all possible moves are done.
		
		int uRow = 1, uCol = 1;
		drawBoard(board);
		
		//Player 1
		cout << "Player 1's turn!" << endl;
		cin >> move;
				
		for (int row = 1; row < SIZE; row++){
			for (int col = 1; col < SIZE; col++){
				if (move <= 0){
					if (board[uCol][uRow] == DEFAULT){
						board[uCol][uRow] = PLAYER1; 
						row = SIZE;
						col = SIZE;
						continue;
					}
				}
				move -= 1;
				uCol++;
			}
			move -= 1;
			uCol = 1;
			uRow++;
		}

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