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
	printf("Enter string :");
	scanf("%s",str);
	for (i=0;str[i]!='\0';++i);
	printf ("length of string = %d",i);

	return 0;

}


