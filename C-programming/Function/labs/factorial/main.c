/*

 * main.c
 *
 *  Created on: Nov 25, 2023
 *      Author: hanaa
 */
#include <stdio.h>

int factorial(int x)
{
	int f=1;
	for(;x>0;x--)

		f*=x;
		return f;




}
int main()
{

	printf("%d ",factorial(10));
	printf("\n");

	printf("%d",factorial(5));



	return 0;

}