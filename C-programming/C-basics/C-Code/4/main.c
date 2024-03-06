#include <stdio.h>
#include <math.h>
int main()
{
	//using power function 
	int exp,base,power;
	printf("Enter base number : \n");
	scnaf ("%d ",&base);
	printf("Enter exponential number : \n");
	scnaf ("%d ",&exp);
	power = pow(base,exp);
	
	printf ("power is %d",power);
	
return 0;	
}