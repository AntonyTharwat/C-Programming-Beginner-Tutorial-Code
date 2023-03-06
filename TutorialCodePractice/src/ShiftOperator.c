/*
 * ShiftOperator.c
 *
 *  Created on: Mar 6, 2023
 *      Author: MBR
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
	int x=212, i;

	printf("The Number is %d \n",x);
	for (i=0; i<=2; ++i){
		printf("Left shift by %d: %d\n", i, x<<i);
	}
	for(i=0; i<=2; i++){
		printf("Right Shift by %d: %d\n", i, x>>i);
	}
	return 0;

	}
