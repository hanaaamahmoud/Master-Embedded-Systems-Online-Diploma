#include "uart.h"

#define UART0DR  *((volatile unsigned int *const) ((unsigned int *)0x101f1000))

void uart_send_string(unsigned char *P_send_string)
{
   while(*P_send_string !='\0')
   {
	  UART0DR = (unsigned int) (*P_send_string);
	  P_send_string++;
	  
   }
   
}