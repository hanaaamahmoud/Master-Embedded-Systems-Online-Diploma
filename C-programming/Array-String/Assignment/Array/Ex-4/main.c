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
	char arr[50];
	char element,i,num,location;
	printf("Enter no of element:");
	scanf("%d",&element);

	printf ("Enter number of values");
	for (i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);

	}
	printf("value to search :");
	scanf ("%d",&element);

printf("Enter the element to be inserted :");
scanf("%d",&element);

printf("Location of element is :");
scanf ("%d",&location);

for (i=num;i>=location;i--)
{
 arr[i]=arr[i-1];
 num++;
 arr[location-1]=element;
 //print result
 for (i=0;i<num;i++)
{
	 printf("%d",arr[i]);

	 }
}
	return 0;

}


