/*

 * main.c


 *
 *  Created on: Nov 4, 2023
 *      Author: hanaa
 */


#include <stdio.h>
int main()
{
	int i;
	float degree[10];
	for(i=0;i<10;i++)
	{
		printf("Enter student %d degree :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degree[i]);

	}
	for (i=0;i<10;i++)
	{
		printf("student %d degree is %f :",i+1,degree[i]);
	}
	return 0;
}
