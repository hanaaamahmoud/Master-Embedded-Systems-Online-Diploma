/*

 * main.c


 *
 *  Created on: Nov 4, 2023
 *      Author: hanaa
 */


#include <stdio.h>
int main()
{
	char name[4][12]={"hana mahmoud","ahmed mahmoud","hamza mahmoud","mohamed mahmoud"};
	int i;
	for (i=0;i<4;i++)
	{
		printf("%s\r\n",name[i]);
	}
	return 0;
}
