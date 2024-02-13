/*

 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: hanaa
 */
#include <stdio.h>
#include <string.h>

int main()
{

	char str[50];
	int i;
	char ch;
	int counter;

	printf("Enter string :");
	gets(str);
	printf("character enter");
	scanf("%c",&ch);
	for (i=0;str[i]!='\0';++i)
	{
		if (ch==str[i])
			++ counter;

	}
	printf("Frequency of character is = %c %d:",counter,ch);



	return 0;

}


