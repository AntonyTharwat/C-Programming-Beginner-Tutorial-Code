/*
Comparison Operator
-------------------
>	Greater Than
<	Less Than
== 	Equal to
>=	Greater Than or equal to
<= 	Less Than or equal to
!=	Not equal to
 ====================================================================
Logical Operator
----------------
&&	AND
||	OR
!	NOT
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){

	bool value = (9 > 12);

	printf("%d\n", value);

	int age =10;

	int height = 6.4;

	bool result = (age > 9) && (height <= 10);

	printf ("%d", result);

	return 0;
}
