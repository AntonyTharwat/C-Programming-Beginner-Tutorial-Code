/*
============================================================================
 Name        : TutorialCodePractice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Operators in C, Ansi-style
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
	return x + y;
	}


int sub(int x, int y)
{
	return x - y;
	}

int mult (int x, int y){
	return x*y;
}

int divide(int x, int y) {
    return x / y;
}

int main(void) {

	int x , y , z;
	printf("1: Addition \n");
	printf("2: Subtraction \n");
	printf("3: Multiplication \n");
	printf("4: Division \n");
	printf("Choose the operation you need to perform: ");
	fflush(stdout);
	scanf("\n%d", &z);

	if(z == 1){
		printf("please enter first number: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		printf("Sum is equal = %d \n", add(x,y));

	} else if (z == 2){
		printf("please enter two numbers: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);
		printf("Difference between Two numbers is: %d \n", sub(x,y));

	}else if (z == 3)
	{
		printf("please enter two numbers: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);
		printf ("Multiplication of two numbers are: %d \n", mult(x,y));
	}else if (z == 4)
	{
		printf("please enter two numbers: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);
		printf ("Division of two numbers are: %d \n", divide(x,y));
	}else
	{
		printf("Invalid Operation, please try again");
	}
	return 0;

}
