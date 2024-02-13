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
int	arr[2][2];
int brr[2][2];
int c[2][2];


	int i,j;
	printf("Enter the element of first matrix :");
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
		{
			printf("arr%d%d",i+1,j+1);

			scanf("%d%d",&arr[i][j]);

		}
	printf("Enter the element of second matrix :\n");
		for (i=0;i<2;i++)
			for (j=0;j<2;j++)
			{
				printf("brr%d%d",i+1,j+1);

				scanf("%d%d",&brr[i][j]);

			}
		c[i][j]=arr[i][j]+brr[i][j];

		printf("Sum of matrix");
		for (i=0;i<2;i++)
					for (j=0;j<2;j++)

					{
						c[i][j];
					}

	return 0;

}




