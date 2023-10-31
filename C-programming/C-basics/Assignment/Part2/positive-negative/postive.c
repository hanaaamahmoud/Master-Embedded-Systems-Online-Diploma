/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */

#include <stdio.h>
int main()
{

	int i;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d ",&i);
	if (i>0)
	{
		printf("%d is positive ",i);

	}
	else if (i==0)
	{
		printf("zero");
	}
	else
		printf("%d is negative ",i);
}
