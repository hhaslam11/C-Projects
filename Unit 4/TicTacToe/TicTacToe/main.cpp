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

		if(checkIfWin(board) == 1){
			cout << "Player 1 one!" << endl;
			system("pause");
			return 0;
		}

		//Player 2
		drawBoard(board);
		cout << "Player 2's turn!" << endl;
		cin >> move;
		if(board[placeCol[move]][placeRow[move]] == DEFAULT)
			board[placeCol[move]][placeRow[move]] = PLAYER2;	
		i++;

		if(checkIfWin(board) == 2){
			cout << "Player 2 one!" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "It's a tie!" << endl;
	system("pause");
	return 0;

}
int checkIfWin(char board[SIZE][SIZE]){
	
	int player1Count = 0;//Amount of the same char in a row
	int player2Count = 0;

	//CHECK VERTICAL
	for(int row = 0; row < SIZE; row++){
			for(int col = 0; col < SIZE; col++){
				if(board[col][row] == PLAYER1){
					player1Count++;
				}else if(board[col][row] == PLAYER2){
					player2Count++;
				}
			}
			if(player1Count >= SIZE)
				return 1;
			if(player2Count >= SIZE)
				return 2;
			player1Count = 0;
			player2Count = 0;
	}

	//CHECK HORIZONTAL
	for(int col = 0; col < SIZE; col++){
			for(int row = 0; row < SIZE; row++){
				if(board[col][row] == PLAYER1){
					player1Count++;
				}else if(board[col][row] == PLAYER2){
					player2Count++;
				}
			}
			if(player1Count >= SIZE)
				return 1;
			if(player2Count >= SIZE)
				return 2;
			player1Count = 0;
			player2Count = 0;
	}

	//CHECK TOP-LEFT TO BOTTOM_RIGHT                     // ? _ _
	for (int i = 0; i < SIZE; i++){                      // _ ? _
		if(board[i][i] == PLAYER1)                       // _ _ ?
			player1Count++;
		if(board[i][i] == PLAYER2)
			player2Count++;
	}
	if(player1Count >= SIZE)
		return 1;
	if(player2Count >= SIZE)
		return 2;
	player1Count = 0;
	player2Count = 0;

	//CHECK TOP-RIGHT TO BOTTOM-LEFT                     // _ _ ?
	int countCol = SIZE - 1;                             // _ ? _
	int countRow = 0;                                    // ? _ _
	for(int i = 0; i < SIZE; i++){
	
		if(board[countCol][countRow] == PLAYER1)
			player1Count++;
		if(board[countCol][countRow] == PLAYER2)
			player2Count++;
		
		countCol--; 
		countRow++;
	}
	if(player1Count >= SIZE)
		return 1;
	if(player2Count >= SIZE)
		return 2;

	return 0;
}
void drawBoard(char board[][SIZE]){
	system("cls");
	int counter = 1;
	for(int y = 0; y < SIZE; y++){
		for(int x = 0; x < SIZE; x++)
			cout << board[x][y];
		cout << "     ";
		for(int x = 0; x < SIZE; x++){
			cout << counter << "_";
			counter++;
		}
		cout << endl;
	}
}