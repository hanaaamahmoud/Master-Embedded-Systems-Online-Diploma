/*

 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: hanaa
 */


#include <stdio.h>
int power(int x,int y);

int main()
{
	int base,exp;
	printf("Enter base number :\n");
	scanf("%d",&base);
	printf("Enter exponontial of power :\n");
	scanf ("%d",&exp);
	printf("%d^%d=%d",base,exp,power(base,exp));

}
int power(int base,int exp)
{
	if (exp!=0)
	{
		return (base*power(base,exp-1));

	}
	else
		return 1;


}

