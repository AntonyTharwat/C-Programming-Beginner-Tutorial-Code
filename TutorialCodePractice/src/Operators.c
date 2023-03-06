/*
============================================================================
 Name        : TutorialCodePractice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 + 		Addition
 - 		Subtraction
 * 		Multiplication
 / 		Division
 % 		Reminder
 ++ 	Increment
 -- 	decrement

*/

#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
	return x+ y;
	}
int main(void) {

	int x = 4, y = 20;

	printf("please enter two numbers: \n");

//	scanf("\n %d %d", x, y);

	printf("Sum is equal = %d", add(x,y));

	return 0;
}
