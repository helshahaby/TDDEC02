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
    memset(player1Name,0,20);
    memset(player2Name,0,20);
}

void playerOneScores() {
    player1Points++;
}

void playerTwoScores() {
    player2Points++;
}

void getScore(char * score){
char player1Result[32] = "";
char player2Result[32] = "";
    
    if (player1Points == player2Points && player1Points < 4)
    {
        if (player1Points==0)
            strcpy(score,"Love");
        
        if (player1Points==1)
            strcpy(score,"Fifteen");
        
        if (player1Points==2)
            strcpy(score,"Thirty");

        strcat (score," all");
    }
    
    if (player1Points==player2Points && player1Points>=3)
        strcpy(score,"Deuce");

    if (player1Points > 0 && player2Points==0)
    {
        if (player1Points==1)
            strcpy(player1Result,"Fifteen");

        if (player1Points==2)
            strcpy(player1Result,"Thirty");

        if (player1Points==3)
            strcpy(player1Result,"Forty");

        strcpy(player2Result,"Love");
        strcpy(score,player1Result);
        strcat(score,", ");
        strcat(score,player2Result);
    }
    
    if (player2Points > 0 && player1Points==0)
    {
        if (player2Points==1)
            strcpy(player2Result,"Fifteen");

        if (player2Points==2)
            strcpy(player2Result,"Thirty");

        if (player2Points==3)
            strcpy(player2Result,"Forty");

        strcpy(player1Result,"Love");
        strcpy(score,player1Result);
        strcat(score,", ");
        strcat(score,player2Result);
    }

    if (player1Points>player2Points && player1Points < 4)
    {
        if (player1Points==2)
            strcpy(player1Result,"Thirty");
        if (player1Points==3)
            strcpy(player1Result,"Forty");
        if (player2Points==1)
            strcpy(player2Result,"Fifteen");
        if (player2Points==2)
            strcpy(player2Result,"Thirty");

        strcpy(score,player1Result);
        strcat(score,", ");
        strcat(score,player2Result);
    }
    
    if (player2Points>player1Points && player2Points < 4)
    {
        if (player2Points==2)
            strcpy(player2Result,"Thirty");
        if (player2Points==3)
            strcpy(player2Result,"Forty");
        if (player1Points==1)
            strcpy(player1Result,"Fifteen");
        if (player1Points==2)
            strcpy(player1Result,"Thirty");

        strcpy(score,player1Result);
        strcat(score,", ");
        strcat(score,player2Result);
    }

    if (player1Points > player2Points && player2Points >= 3)
    {
        sprintf(score,"Advantage %s",player1Name);
    }

    if (player2Points > player1Points && player1Points >= 3)
    {
        sprintf(score,"Advantage %s",player2Name);
    }

    if (player1Points>=4 && player2Points>=0 && (player1Points-player2Points)>=2)
    {
        sprintf(score,"%s wins",player1Name);
    }
    if (player2Points>=4 && player1Points>=0 && (player2Points-player1Points)>=2)
    {
        sprintf(score,"%s wins",player2Name);
    }
}

