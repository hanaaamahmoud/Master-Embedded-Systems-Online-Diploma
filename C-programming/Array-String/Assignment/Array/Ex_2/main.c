/*

 * main.c
 *
 *  Created on: Feb 13, 2024
 *      Author: hanaa
 */
#include <stdio.h>
#include <string.h>

int main()
{

	float arr[100],i,aver,sum;
int x;
	printf("Enter the number of data :");
	scanf("%d",&i);
	for (x=0;x<i;++x)
	{
	printf(" %d Enter number ",i+1);
	scanf("%f",arr[x]);
	sum+= arr[x];
	}
	aver=sum/i;
	printf("%d average is ",aver);

	return 0;

}



