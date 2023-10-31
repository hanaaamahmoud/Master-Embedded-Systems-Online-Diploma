/*
 * main.c

 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two number :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("The minumum is \r\n : %d ",(a<b)?a:b);


	return 0;
}


