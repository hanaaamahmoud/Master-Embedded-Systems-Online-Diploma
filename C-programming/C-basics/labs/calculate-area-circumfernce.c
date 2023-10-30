/*

 * main.c

 *
 *  Created on: Oct 28, 2023
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
	if (choice=='a')
	{
		area =3.14 * radius*radius;
		printf("\r\narea is %f \r\n",area);

	}
	else if (choice =='c')
	{
		circumfrence=3.14 * radius*2;
		printf("\r\ncircumfrence is %f \r\n",circumfrence);

	}
	else
		printf("\r\nwrong choice\r\n");



	return 0;
}


