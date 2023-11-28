/*

 * main.c
 *
 *  Created on: Nov 28, 2023
 *      Author: hanaa
 */

#include <stdio.h>

int main()
{
	long h,n;
	printf("please enter two number :");
	fflush(stdin);fflush(stdout);
	scanf("%ld %ld",&h,&n);
	printf("\r\n");
	printf("Numbers before swapping : %ld %ld",h,n);
	h= h^n;
	n=h^n;
	h=h^n;
	printf("Numbers after swapping : %ld %ld",h,n);
	return 0;




}
