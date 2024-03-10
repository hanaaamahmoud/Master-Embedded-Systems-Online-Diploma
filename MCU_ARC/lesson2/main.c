//Write 1 on pin16 on ODR register using numeric address directly

#include <stdio.h>
#include <stdint.h>
 
 uint32_t G_GPIO_ODR_variable=0;
 #define G_GPIO_ODR &G_GPIO_ODR_variable
int main()
{
	
	*((volatile uint32_t *) G_GPIO_ODR) |=1UL <<16;
	printf ("G_GPIO_ODR_variable = 0x%x",G_GPIO_ODR_variable);
	
	return 0;
	
}