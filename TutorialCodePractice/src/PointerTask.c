/*
 * PointerTask.c
 *
 *  Created on: Mar 8, 2023
 *      Author: MBR
 */


#include<stdio.h>
#include<stdint.h>

int main(){
	double salary;
	double* ptr= &salary;

	printf("Enter your salary: ");
	fflush(stdout);
	scanf("%lf", &salary);

	*ptr = salary*2;

	printf("Your New salary is: %.0lf", salary);

	return 0;

}
