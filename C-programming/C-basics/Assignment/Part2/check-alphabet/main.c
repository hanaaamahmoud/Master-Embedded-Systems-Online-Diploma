/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	char i;
	printf("Enter an alphabet : ");
	fflush (stdin);fflush(stdout);
	scanf("%c",&i);
if ((i=='a')||(i=='e')||(i=='i')||(i=='o')||(i=='u'))
{
	printf("%c is vowel",i);
}
else
	printf("%c is consonant",i);
	return 0;
}

