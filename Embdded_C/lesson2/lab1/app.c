#include "uart.h"
unsigned char string_name[100]= "Hello everyone : hanaa mahoud";
unsigned char const string_name2[100]= "Hello everyone : hanaa mahoud";

void main()
{
	uart_send_string(string_name);
	
}