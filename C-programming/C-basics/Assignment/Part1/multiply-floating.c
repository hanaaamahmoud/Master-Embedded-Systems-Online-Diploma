/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	float j, i;
	printf("Enter 2 number : ");
	fflush (stdin);fflush(stdout);
	scanf("%f %f",&i,&j);
	printf("Product : %f",i*j);
	return 0;
}

