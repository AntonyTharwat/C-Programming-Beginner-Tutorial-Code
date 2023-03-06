/*
 * BitwiseOperator.c
 *
 *  Created on: Mar 6, 2023
 *      Author: MBR
 */
/*
 * ==============================================================
 * &	AND operator
 * |	OR operator
 * ^	XOR operator
 * ~	Bitwise complement
 * <<	Bitwise Right
 * >>	Bitwise Left
 * ==============================================================
 * */

#include <stdio.h>
#include <stdint.h>

#define MAX 0x8
#define MIN 0xc

int main(){

	int x= MIN;
	int y= MAX;

	printf("And Operator result is: %d", x&y);

	printf("\nOR operator result is (in hex-decimel): 0X%X", x|y);

	printf("\nXOR operator result is: %d", x^y);

	printf("\nComplement of n is -(n+1), where complement of %d is %d, and the complement of %d is %d", 35, ~35, -12, ~-12);

	return 0;
}
