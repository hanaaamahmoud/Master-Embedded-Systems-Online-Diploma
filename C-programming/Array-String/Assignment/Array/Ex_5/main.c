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
int element,i,num;
printf("Enter no of element:");
scanf("%d",&element);

printf ("Enter number of values");
for (i=0;i<num;i++)
{
	scanf("%d",&arr[i]);

}
printf("value to search :");
scanf ("%d",&element);


i=0;
while (i<num && element!= arr[i] )
{
	i++;

}
if (i<num )
{
	printf(" num found at location : %d",i+1);

}
else
{
	printf("num not found ");
}
	return 0;

}


