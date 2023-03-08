/*
 * test condition ? expression1 : expression2;
 * */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main() {

	int x = -8;

	bool result = (x <= 8) ? (result = true) : (result = false);

//	(x < 0) ? printf("The number is a negative number \n") : printf("The number is positive number \n");
//	int result = (x < 8) ? (x = 8) : (x = 9);
//	printf("%d", x);

	printf("The result is = %d", result);
	return 0;
}
