#pragma once

#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <string>

static const int USER_TURN = 1;
const int BOARD_BOX_COUNT = 9;

class gameStats {

private:
	int round;
	int turn;
	bool isGameOnGoing;
	int draw = 0;

	int pScore = 0;
	int aScore = 0;

public:
	bool IS_2_PLAYER = false;

	gameStats() {
		srand(time(NULL));
		this->turn = rand() % 2;
		this->round = 1;
		this->isGameOnGoing = true;
	}

	std::string board[BOARD_BOX_COUNT] = {
	"", "", "",
	"", "", "",
	"", "", ""
	};

	int getRound() {
		return this->round;
	}

	bool isUserTurn() {
		return this->turn == USER_TURN;
	}

	std::string getBoxState(int boxNumber) {
		return this->board[boxNumber];
	}

	bool isBoxAvailable(int boxNumber) {
		return this->board[boxNumber] == "";
	}

	std::string getUserAnswer() {
		return (this->isUserTurn()) ? "X" : "O";
	}

	void updateBoard(int boxNumber) {
		std::string userAnswer = getUserAnswer();
		this->board[boxNumber] = userAnswer;
		this->updateGame();
	}

	void updateGame() {
		this->checkBoardCheck();
	}

	void changeTurn() {
		// Change Turn 
		if (this->turn == USER_TURN) {
			this->turn = 0;
		}
		else {
			this->turn = 1;
		}
		
	}

	int getDraw() {
		return draw;
	}

	void checkBoardCheck() {
		// WINNER
		if (hasAWinner(getUserAnswer())) {
			addTurnerPoint();
			endGame();
			round++;
		}
		// DRAW
		else if (isDraw())
		{
			round++;
			draw++;
			endGame();
		}
		//CHANGE TURN
		else {
			this->changeTurn();
		}
	}

	void endGame() {
		isGameOnGoing = false;
	}

	bool _isGameOnGoing() {
		return isGameOnGoing;
	}

	void startGame() {
		this->isGameOnGoing = true;
	}

	int getPlayerScore() {
		return pScore;
	}

	int getAIScore() {
		return aScore;
	}

	void addTurnerPoint() {
		if (turn == USER_TURN)
		{
			PlaySound(TEXT("music/winner.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			pScore++;
		}
		else {
			PlaySound(TEXT("music/gameover.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			aScore++;
		}

		if (IS_2_PLAYER)
		{
			PlaySound(TEXT("music/winner.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
	}

	std::string announcer() {
		if (hasAWinner(getUserAnswer()))
		{
			if (turn == USER_TURN) {
				return "YOU WIN";
			}
			else {
				return "YOU LOSE";
			}
		}
		else {
			return "";
		}
	}

	bool hasAWinner(std::string userAnswer) {
		bool isHasAWinner = false;

		if (board[0] == userAnswer && board[1] == userAnswer && board[2] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[3] == userAnswer && board[4] == userAnswer && board[5] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[6] == userAnswer && board[7] == userAnswer && board[8] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[0] == userAnswer && board[3] == userAnswer && board[6] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[1] == userAnswer && board[4] == userAnswer && board[7] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[2] == userAnswer && board[5] == userAnswer && board[8] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[0] == userAnswer && board[4] == userAnswer && board[8] == userAnswer) {
			isHasAWinner = true;
		}
		else if (board[2] == userAnswer && board[4] == userAnswer && board[6] == userAnswer) {
			isHasAWinner = true;
		}

		return isHasAWinner;
	}

	bool isDraw() {
		bool isDraw = true;
		for (int i = 0; i < BOARD_BOX_COUNT; i++)
		{
			if (board[i] == "")
			{
				isDraw = false;
			}
		}
		return isDraw;
	}

	int randomizeAIAttack() {
		srand(time(NULL));
		int randomized;
		while (true)
		{
			randomized = rand() % 9;
			if (board[randomized] == "")
			{
				break;
			}
		}
		return randomized;
	}
};

static gameStats gStats;
