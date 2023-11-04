/*

 * main.c


 *
 *  Created on: Nov 4, 2023
 *      Author: hanaa
 */


#include <stdio.h>
int main()
{
	char name[20];
	printf("Enter your name:");
	fflush(stdin);fflush(stdout);
	scanf("%s",name);
	printf("your name is %s",name);
	return 0;
}
