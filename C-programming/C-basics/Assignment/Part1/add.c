/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	int j, i;
	printf("Enter 2 integer : ");
	fflush (stdin);fflush(stdout);
	scanf("%d %d",&i,&j);
	printf("Sum : %d",i+j);
	return 0;
}

