/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: hanaa
 */


#include <stdio.h>

void Recursion();

int main()
{

	printf("Enter your name :");


	Recursion();

return 0;

}

void Recursion ()
{
	char c;
	scanf("%c",&c);
	if (c!='\0')
	{
	Recursion();

	printf("%c",c);
	}
}
