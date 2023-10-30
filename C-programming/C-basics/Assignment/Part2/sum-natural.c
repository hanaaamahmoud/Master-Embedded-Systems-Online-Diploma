/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */


#include <stdio.h>
int main()
{
	int i,n,sum= 0;
	printf("Enter positive number : ");
			fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		sum +=i;

	}
	printf("sum is :%d",sum);
	return 0;
}
