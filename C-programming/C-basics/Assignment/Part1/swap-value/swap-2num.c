/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include<stdio.h>
int main(){
	//printf("Welcome to C programming");
	int i, j,temp;
	printf("Enter value of i\r\n : ");
	fflush (stdin);fflush(stdout);
	scanf("%d",&i);
	printf("Enter value of j\r\n : ");
		fflush (stdin);fflush(stdout);
		scanf("%d",&j);
		temp=i;
		i=j;
		j=temp;

		printf("value of i after swapping : %d\r\n",i);

		printf("value of j after swapping : %d\r\n",j);
	return 0;
}

