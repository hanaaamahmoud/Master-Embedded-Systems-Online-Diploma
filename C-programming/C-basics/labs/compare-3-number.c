/*

1 * main.c
 *
 *  Created on: Oct 30, 2023
 *      Author: hnaal
 */
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three number :");
	fflush (stdin);fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			printf("the largest value is %d \r\n",a);
		else
			printf("the largest value is %d \r\n",c);

	}
	else
	{
		if (b>c)
			printf("the largest value is %d \r\n",c);
		else
			printf("the largest value is %d \r\n",c);
	}


	return 0;

}

