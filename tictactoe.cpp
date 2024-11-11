#include <iostream>
#include <string>
using namespace std;

class TicTacToe {
	private:
		string board[9];
	public:
		TicTacToe() {
			cout << "Game is starting RIGHT NOW!" << endl;
			for (int i = 0; i < 9; i++) {
				board[i] = to_string(i + 1);
			}
		};

		~TicTacToe(){};

		void printboard();
		void tictactoe();
		int isCell(int cell);
		bool winnerCheck(string *winner);
};

void TicTacToe::printboard() {

	cout << "-------------" << endl;
	cout << "| " << board[0] << " | " << board[1] << " | " << board[2] << " |" << endl;

	cout << "-------------" << endl;
	cout << "| " << board[3] << " | " << board[4] << " | " << board[5] << " |" << endl;

	cout << "-------------" << endl;
	cout << "| " << board[6] << " | " << board[7] << " | " << board[8] << " |" << endl;

	cout << "-------------" << endl;

}


int TicTacToe::isCell(int cell) {
	while (board[cell - 1] == "O" || board[cell - 1] == "X" || cell > 9 || cell <= 0) {
		cout << "Insert a correct cell number : ";
		cin >> cell;
	}

	return cell;
}

void TicTacToe::tictactoe() {
	printboard();

	system("pause");

	int cell;
	bool game = true;

	int step_count = 0;
	string winner = "";

	while (game) {

		string step = "X";
		cout << "Now it's " << step << "'s turn" << endl;
		cout << "Choose the cell for step : ";

		cin >> cell;
		cell = isCell(cell);
		step_count++;

		board[cell - 1] = step;

		printboard();

		game = winnerCheck(&winner);

		if (!game) {
			break;
		}
		if (step_count == 9) {
			break;
		}

		step = "O";

		cout << "Now it's " << step << "'s turn" << endl;
		cout << "Choose the cell for step : ";

		cin >> cell;
		cell = isCell(cell);
		step_count++;

		board[cell - 1] = step;

		printboard();

		game = winnerCheck(&winner);
		
	}

	if (winner == "X" || winner == "O") {
		cout << "Congratulations to " << winner << "'s player " << endl;
	}
	else {
		cout << "Game Draw." << endl;
	}
}

bool TicTacToe :: winnerCheck(string *winner) {
	string line;

	bool game = true;

	for (int i = 1; i < 9; i++) {

		switch (i){

			// horizontal
			case 1:
				line = board[0] + board[1] + board[2];
				break;
			case 2:
				line = board[3] + board[4] + board[5];
				break;
			case 3:
				line = board[6] + board[7] + board[8];
				break;


			//angular
			case 4:
				line = board[0] + board[4] + board[8];
				break;
			case 5:
				line = board[2] + board[4] + board[6];
				break;


			//vertical
			case 6:
				line = board[0] + board[3] + board[6];
				break; 
			case 7:
				line = board[1] + board[4] + board[7];
				break; 
			case 8:
				line = board[2] + board[5] + board[8];
				break;

			default:
				break;
		}


		if (line == "XXX") {
			*winner = "X";
			game = false;
			break;
		}

		else if (line == "OOO") {
			*winner = "O";
			game = false;
			break;
		}
	}

	return game;
}



int main() {
	TicTacToe ob;

	ob.tictactoe();

	return 0;
}