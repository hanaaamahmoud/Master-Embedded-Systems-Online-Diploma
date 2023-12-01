/*
 * main.c

 *
 *  Created on: Nov 29, 2023
 *      Author: hanaa
 */


#include <stdio.h>
enum week {satrday,sunday,monday,tuesday,wdensday,thursday,friday};

int main ()
{
	enum week today;
	today= sunday;
	printf("Day is %d",today+1);


	return 0;

}
