#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Tennis.h"

int player1Points = 0;
int player2Points = 0;
char player1Name[20]="Player 1";
char player2Name[20]="Player 2";

void InitTennisGame(){
	player1Points=0;
	player2Points=0;
	//memset(player1Name,0,20);
	//memset(player2Name,0,20);
}

void playerOneScores() {
	player1Points++;
}

void playerTwoScores() {
	player2Points++;
}

void UpdateScore(int playerPoints , char playerResult[20]){

	if (player1Points==0)
		strcpy(playerResult,"Love");

	if (playerPoints==1)
		strcpy(playerResult,"Fifteen");

	if (playerPoints==2)
		strcpy(playerResult,"Thirty");

	if (playerPoints==3)
		strcpy(playerResult,"Forty");

}

void UpdateNullScore(int player1Points,int player2Points, char player1Result[20], char player2Result[20])
{
	if (player1Points == 0)
	{
		strcpy(player1Result,"Love");
	}
	else if (player2Points == 0)
	{
		strcpy(player2Result,"Love");
	}


}

void printScore(char score[20],char player1Result[20],char player2Result[20])
{
	strcpy(score,player1Result);
	strcat(score,", ");
	strcat(score,player2Result);
}

void UpdateAdvantageScore(int player1Points,int player2Points, char score[20])
{
	if (player1Points > player2Points && player2Points >= 3)
	{
		sprintf(score,"Advantage %s",player1Name);
	}

	if (player2Points > player1Points && player1Points >= 3)
	{
		sprintf(score,"Advantage %s",player2Name);
	}
}

void UpdateWinningPlayer(int player1Points,int player2Points, char score[20])
{
	if (player1Points>=4 && player2Points>=0 && (player1Points-player2Points)>=2)
	{
		sprintf(score,"%s wins",player1Name);
	}
	if (player2Points>=4 && player1Points>=0 && (player2Points-player1Points)>=2)
	{
		sprintf(score,"%s wins",player2Name);
	}        
}

void playerAheadOtherNull(int player1Points,int player2Points,char player1Result[20],char player2Result[20],char score[20])
{

	if ((player1Points > 0 && player2Points==0)   )
	{
		UpdateScore(player1Points , player1Result);
		UpdateNullScore(player1Points, player2Points, player1Result ,player2Result);

		printScore(score,player1Result,player2Result);
	}
	else if (player2Points > 0 && player1Points==0)
	{
		UpdateScore(player2Points , player2Result);
		UpdateNullScore(player1Points, player2Points, player1Result ,player2Result);

		printScore(score,player1Result,player2Result);
	}


}

void player1AheadLessThanFourPoints(int player1Points,int player2Points,char player1Result[20],char player2Result[20],char score[20])
{
	if ((player1Points>player2Points && player1Points < 4) || (player2Points>player1Points && player2Points < 4)  )
	{
		UpdateScore(player1Points , player1Result);
		UpdateScore(player2Points , player2Result);
		printScore(score,player1Result,player2Result);

	}
}

void getScore(char * score){

	char player1Result[32] = "";
	char player2Result[32] = "";

	if (player1Points == player2Points && player1Points <3 )
	{

		UpdateScore(player1Points , score);

		strcat (score," all");
	}

	if (player1Points==player2Points && player1Points>=3)
		strcpy(score,"Deuce");

	playerAheadOtherNull( player1Points, player2Points, player1Result , player2Result,score);

	player1AheadLessThanFourPoints(player1Points , player2Points , player1Result , player2Result , score);

	UpdateAdvantageScore(player1Points,player2Points,score);

	UpdateWinningPlayer(player1Points,player2Points,score);

}

