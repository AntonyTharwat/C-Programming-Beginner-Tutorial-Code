#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){

	int x,y;

	scanf("%d %d", &x,&y);
	if(x > y){
		printf("First number is greater than second number \n");
	}else if (x < y){
		printf("First number is less than second number \n");
	}else{
		printf("Both Numbers are equal \n");
	}
	return 0;
}
