/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: hanaa
 */


#include <stdio.h>


struct distance
{
	int  feet;
	double inch;

}first,second;




int main()
{
	printf ("Enter infornation for first distance :\n");
	printf("Enter feet :");
	scanf ("%d",&first.feet);
	printf("Enter inch :");
	scanf ("%f",&first.inch);
	printf ("\r\n");

	printf("Enter information for second distance :\n");
	printf("Enter feet :");
	scanf ("%d",&second.feet);
	printf("Enter inch :");
	scanf ("%f",&second.inch);

	struct distance sum ;
	sum.feet=first.feet+second.feet;
	sum.inch=first.inch+second.inch;


	if (sum.inch>12)
	{
		sum.inch=sum.inch-12;
		++sum.feet;
	}
	printf("Sum of distance = %d %.1f",sum.feet,sum.inch);






	return 0;
}
