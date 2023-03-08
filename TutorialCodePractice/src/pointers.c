///*
// * pointers.c
// *
// *  Created on: Mar 8, 2023
// *      Author: MBR
// */
//
//
//#include<stdio.h>
//#include<stdint.h>
//
//void main(){
//
//	int age=25;
//	int* ptr= &age;
//
//
//	printf("\nAge address:%p \n", ptr); //address of the variable
//	printf("Age value: %d", *ptr); //access the variable using pointer
//
//	*ptr = 31; //change variable value using pointer
//
//	printf("\nThe new age value: %d", age);
//	return 0;
//}
//
///*
// Notes
// ------
// int *ptr; // invalid
// int* ptr; // valid
//
// *ptr=31; //valid because both are the value inside ptr address
//  ptr=31;  // invalid because ptr is an address and 31 is a value
//  ptr = &age; //valid because ptr and &age are addresses
//  *ptr=&age; //invalid because *ptr is a value and &age is an address
//
// */
