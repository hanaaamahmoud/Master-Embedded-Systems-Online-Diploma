/*

 * main.c


 *
 *  Created on: Nov 4, 2023
 *      Author: hanaa
 */


#include <stdio.h>
int main()
{
	float a[3][3];
	int  r,c;
	float b[3][3];
	for (r=0;r<3;r++)
		for(c=0;c<3;c++)
		{
			printf("Enter item (%d %d ) : ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f  ",&a[r][c]);
		}
	printf("\nMatrix is");
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			printf("%2.2f\n",a[r][c]);
		}
	printf("\r\n");
	}
	printf("Transpose matrix is ");
	for (r=0;r<3;r++)
			for(c=0;c<3;c++)
			{

				b[c][r]=a[r][c];
			}
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			printf("%2.2f\n",b[r][c]);
		}
	printf("\r\n");
	}
	return 0;
}
