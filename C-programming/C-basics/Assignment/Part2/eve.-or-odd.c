/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	int i;
	printf("Enter an integer you want to check : ");
	fflush (stdin);fflush(stdout);
	scanf("%d",&i);
if (i%2==0)
{
	printf("%d is even",i);
}
else
	printf("%d is odd",i);
	return 0;
}

