/*
 * PointersFunctionsMultiply.c
 *
 *  Created on: Mar 8, 2023
 *      Author: MBR
 */


#include<stdio.h>
#include<stdint.h>

int* multi(int* number1, int* number2, int* result){

	*result = *number1 * *number2;

	return result;

}
int main(){

	int x=8;
	int y= 10;
	int result;

	result = *multi(&x, &y, &result);

	printf("Result is: %d", result);
	return 0;
}
