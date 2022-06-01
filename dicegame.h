/*
dicegame.h
Assignment Project 1
Amos Munteanu
This file stores the enum and function names
*/ 
#ifndef DICEGAME_H
#define DICEGAME_H

typedef enum ROUNDTYPE { BONUS, DOUBLE, REGULAR } ROUNDTYPE;

/*
Function: getRandomNumber
min: stores the min value
max: stores the max value
Returns: a random number between the two values
*/ 

int getRandomNumber(int min, int max);

/*
Function: getRoundType
this function gives BONUS, DOUBLE, and REGULAR a propbilty to appear
BONUS: has a 20% chance to occur
DOUBLE: has a 30% chance to occur
REGULAR: has a 50% chance to occur
Returns: a roundType based of the propbilty given 
*/ 

ROUNDTYPE getRoundType();

/*
Function: getRoundPoints
Calutes the points for the round being played
ROUNDTYPE: the type of round that is being played
Returns: the correct points based of the ROUNDTYPE
*/ 

int getRoundPoints(ROUNDTYPE roundType);

/*
Function: printPlayerPoints
p1: player one's integer value
p2: player two's integer value
Returns: both playes point values
*/ 

void printPlayerPoints(int p1, int p2);

/*
Function: printRoundInfo
ROUNTTYPE: the type of round that's being played
Dice: what number the dice was 
Points: how many points there are 
Returns: prints the rounds info
*/ 

void printRoundInfo(ROUNDTYPE t, int dice, int points);

#endif
