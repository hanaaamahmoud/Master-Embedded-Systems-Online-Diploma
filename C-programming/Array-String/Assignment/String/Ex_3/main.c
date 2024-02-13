/*

 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: hanaa
 */
 // determine length of string and reverse it
#include <stdio.h>
#include <string.h>

int main()
{

	char strin[100],temp;
	int i,j;
	printf("Enter string :");
	gets(strin);

	i=0;
	j=strlen(strin)-1;
	while (i<j)
	{
		temp=strin[i];
		strin[i]=strin[j];
		strin[j]=temp;
		i++;
		j--;


	}

	printf("reverse string %s:");

	//printf ("hanaa");
	return 0;

}


