#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using  namespace std;

class Tic_tac_toe
{
protected:
	char board[9] = { 1,2,3,4,5,6,7,8,9 };
public:
	Tic_tac_toe();
	void show_board();
	void computer_move();
	void player_move();
	int judge();						// 判断输赢
};

Tic_tac_toe::Tic_tac_toe()
{
	int flag = 0;
	void show_board();
	while (flag == 0)
	{

	}

}

void Tic_tac_toe::show_board()
{
	cout << board[0] << "|" << board[1] << "|" << board[2]<<"\n"
		<< "----------"<<"\n"
		<< board[3] << "|" << board[4] << "|" << board[5]<<"\n"
		<< "----------" << "\n"
		<< board[6] << "|" << board[7] << "|" << board[8] << endl;
}

void Tic_tac_toe::computer_move()
{

}

void Tic_tac_toe::player_move()
{

}

int Tic_tac_toe::judge()
{
	if ((board[0] == board[1] == board[2] == O)||(board[0] == board[1] == board[2] == O)||(board[0] == board[1] == board[2] == O))
	{
		/* code */
	}
	return 0;
}
