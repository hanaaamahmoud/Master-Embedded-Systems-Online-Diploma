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

	int arr[10][10],tran[10][10],r,c,i,j;
	printf("Enter rows and columns of matrix :");

	scanf("%d %d",&r,&c);

	printf("Enter element of matrix :\n ");
	//store element of matrix
	for (i=0; i<r ;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&arr[r][c]);

		}
		//print element of matrix
		printf ("Entered matrix :");
		for (i=0; i<r ;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d",arr[r][c]);
				if (j==c-1)
				{
					printf("\n\n");
				}
			}
		}
		//for transpose matrix
		for (i=0; i<r ;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("Enter elements : ");
				scanf("%d",&tran[r][c]);
				tran[j][i]=arr[i][j];


			}
			for (i=0; i<c ;i++)
			{
				for (j=0;j<r;j++)
				{
					printf("%d",tran[r][c]);
					if (j==r-1)
					{
						printf("\n\n");
					}
				}
			}
			return 0;

		}
	}


