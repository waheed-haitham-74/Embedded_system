#include "uart.h" 
unsigned char string_name[100]="learn-in-depthWAHEED HAITHAM";
unsigned char const string_name2[100]="to create rodata section";
void main(void)
{
Uart_Send_string(string_name);
}