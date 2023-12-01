/*
 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */


#include <stdio.h>
int main()
{
	int i,n,f=1;
	printf("Enter positive number : ");
			fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		f=f*i;

	}
	printf("factorial of %d is : %d\r\n",n,f);
	return 0;
}
