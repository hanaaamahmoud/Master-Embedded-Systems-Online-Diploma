/*
 * main.c

 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */


#include <stdio.h>
int main()
{
	int i,nStudent;
	float degree ,sum;
	printf("Enter the number of student :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&nStudent);
	for(i=1,sum=0;i<=nStudent;i++)
	{
		printf("Enter student %d degree",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degree);
		sum +=degree;

	}
	printf("Average student degree is : %f\r\n",sum/nStudent);

}
