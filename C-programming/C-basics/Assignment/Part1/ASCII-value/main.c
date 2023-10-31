/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	char j;
	printf("Enter a character : ");
	fflush (stdin);fflush(stdout);
	scanf("%c",&j);
	printf("ASCII value of %c= %d",j,j);
	return 0;
}

