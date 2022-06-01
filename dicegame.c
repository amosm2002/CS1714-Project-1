/*
dicegame.c
Assignment Project 1
Amos Munteanu
This file stores all of the function's and their logic to make main.c file work
*/ 
  
  
#include "dicegame.h"
#include <stdio.h>
#include <stdlib.h>
  
/*
Function: getRandomNumber
min: stores the min value
max: stores the max value
Returns: a random number between the two values
*/ 
  
int getRandomNumber (int min, int max) 
{
    return rand () % (max - min + 1) + min;
}

/*
Function: getRoundType
this function gives BONUS, DOUBLE, and REGULAR a propbilty to appear
BONUS: has a 20% chance to occur
DOUBLE: has a 30% chance to occur
REGULAR: has a 50% chance to occur
Returns: a roundType based of the propbilty given 
*/ 
  
ROUNDTYPE getRoundType ()
{
    int k = getRandomNumber (1, 10);
    if (k <= 2)
    {
        return BONUS;
    }
    else if (k <= 5)
    {
        return DOUBLE;
    }
    else
    {
        return REGULAR;
    }
}
/*
Function: getRoundPoints
Calutes the points for the round being played
ROUNDTYPE: the type of round that is being played
Returns: the correct points based of the ROUNDTYPE
*/ 
  
int getRoundPoints (ROUNDTYPE roundType)
{
    int points = getRandomNumber (1, 10) * 10;
    if (roundType == BONUS)
    {
        points = 200;
    }
    else if (roundType == DOUBLE)
    {
        points = 2 * points;
    }
    return points;
}

/*
Function: printPlayerPoints
p1: player one's integer value
p2: player two's integer value
Returns: both playes point values
*/ 
  
void printPlayerPoints (int p1, int p2)
{
    printf ("P1      : %d\n", p1);
    printf ("P2      : %d\n", p2);
} 

/*
Function: printRoundInfo
ROUNTTYPE: the type of round that's being played
Dice: what number the dice was 
Points: how many points there are 
Returns: prints the rounds info
*/ 
  
void printRoundInfo (ROUNDTYPE t, int dice, int points)
{
    printf ("Type    : ");
    if (t == BONUS)
    {
        printf ("BONUS\n");
    }
    else if (t == REGULAR)
    {
        printf ("REGULAR\n");
    }
    else
    {
        printf ("DOUBLE\n");
    }
    printf ("Dice    : %d\n", dice);
    printf ("Points  : %d\n", points);
}


