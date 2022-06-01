/*
main.c
Assignment Project 1
Amos Munteanu
this file is the program that's being ran and hold's all the logic for when each function get's called and why it gets called
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"
int main (int argc, char *argv[])
{
    //start's the random number generator
    srand (time (NULL));
    // defing all of the variable's being used
    int p1 = 0;
    int p2 = 0;
    int numRounds;
    int currentPlayer;
    int points;
    int dice;
    ROUNDTYPE roundType;
    //finding how many round's are being played
    printf ("Enter the number of rounds: ");
    scanf ("%d", &numRounds);
    //pick's which player starts first randomly 
    currentPlayer = getRandomNumber (1, 2);
    //call's the printPlayerPoints function
    printPlayerPoints (p1, p2);
    //looping for how many round's there are
    for (int i = 1; i <= numRounds; i++)
    {
        printf ("\nROUND %d\n", i);
        printf ("--------\n");
        printf ("Player  : %d\n", currentPlayer);
        //get's the roundType
        roundType = getRoundType ();
        //get's the roundPoints
        points = getRoundPoints (roundType);
        //randomly picks a dice number between 1 and 6
        dice = getRandomNumber (1, 6);
        //call's printRoundInfo function
        printRoundInfo (roundType, dice, points);
    // logic for when to add and subtract points for player's 1 and 2 depedning on if the number is odd or even
    if (currentPlayer == 1)
	{   
        if (dice % 2 != 0)
	    {
            p1 += points;
        }
	    else
        {
            p1 -= points;
            currentPlayer = 2;
        }
    }
    else
	{
        if (dice % 2 == 0)
        p2 += points;
	    else
	    {
        p2 -= points;
        currentPlayer = 1;
        }
    }
        //call's the printPlayerPoints function
        printPlayerPoints (p1, p2);
    }
    printf ("\nGAME OVER!!\n");
    // logic behind finding the winner based off who's points are higher or equal
    if (p1 > p2)
    {
        printf ("P1 Won");
    }
    else if (p1 < p2)
    {
        printf ("P2 Won");
    }
    else
    {
        printf ("P1 & P2 Tied");
    }
    return 0;

}


