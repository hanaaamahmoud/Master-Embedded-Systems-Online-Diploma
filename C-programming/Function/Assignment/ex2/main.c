/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: hanaa
 */


#include <stdio.h>

int fact(int n);

int main()
{
	printf("enter number :");

	int x;
	scanf("%d",&x);
	printf("Factorial of numer is = %d %d ",x,fact(x));
	return 0;

}
int fact(int n)
{
	if (n!=1)
	{
		return n*fact(n-1);
	}


}
