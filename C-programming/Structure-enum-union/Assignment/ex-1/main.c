/*

 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: hanaa
 */


#include <stdio.h>

struct Sstudent{
	 char name[50];
	 int roll_num;
	 float  marks;

};

int main()
{
	struct Sstudent student;
	printf("Enter information about student \r\n:");

	printf ("Enter name \n:");
	fflush (stdin); fflush(stdout);
	scanf ("%s",&student.name);
	printf("Enter roll number \r\n:");
	fflush (stdin); fflush(stdout);
	scanf ("%d",&student.roll_num);
	printf("Enter marks \r\n:");

	fflush (stdin); fflush(stdout);
	scanf ("%f",&student.marks);

	printf ("Dispalying information\r\n");

	printf ("name : %s\r\n",student.name);
	printf("roll_num= %d\r\n",student.roll_num);
	printf("marks : %.2f",&student.marks);



	return 0;
}
