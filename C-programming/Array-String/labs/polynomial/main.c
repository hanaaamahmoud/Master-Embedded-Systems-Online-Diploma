/*

 * main.c


 *
 *  Created on: Nov 4, 2023
 *      Author: hanaa
 */

// Polynomial using arrays
#include <stdio.h>
int main()
{
	float y;
	int i;
	float x[]={5,16,22,3.5,15};

	for (i=0;i<5;i++)
	{
		y= 5* x[i] * x[i]+ 3 * x[i]+2;
		printf("y(%f)=%f",x[i],y);
	}
	return 0;
}
