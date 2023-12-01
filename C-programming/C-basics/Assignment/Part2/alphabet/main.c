/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */

#include <stdio.h>
int main()
{

	char i;
	printf("Enter a charcter :");
	fflush(stdin);fflush(stdout);
	scanf("%c ",&i);
	if ((i>='a')&&(i<='z')||(i>='A')&&(i<='Z'))
	{
		printf("%c is alphabet ",i);

	}

	else
		printf("%c is not alphabet ",i);
}
