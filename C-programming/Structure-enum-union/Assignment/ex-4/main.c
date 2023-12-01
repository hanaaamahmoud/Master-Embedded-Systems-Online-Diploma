/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: hanaa
 */


#include <stdio.h>

#define PI 3.145
#define area(r) PI*(r)*(r)

int main()
{


	float radius;
	printf("Enter radius:");
	scanf ("%f",&radius);
	float aArea;
	aArea=area(radius );

	printf("Area is ",aArea);




	return 0;
}
