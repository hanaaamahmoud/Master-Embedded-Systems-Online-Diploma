/*
 * main.c

 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include <stdio.h>
int main(){

	char choice;
	float radius;
	float area, circumfrence;
	printf ("Enter circle radius: ");
	fflush (stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("please enter your choice a or c :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice);
	switch(choice)
	{
	case 'a':
	{
		area =3.14 * radius*radius;
				printf("\r\narea is %f \r\n",area);
	}
	break;
	case 'c':
	{
		circumfrence=3.14 * radius*2;
				printf("\r\ncircumfrence is %f \r\n",circumfrence);
	}
	break;
	default:
	printf("\r\nwrong choice\r\n");
	break;
	}
	return 0;

}

