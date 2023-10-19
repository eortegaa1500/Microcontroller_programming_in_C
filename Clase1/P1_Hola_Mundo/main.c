#include "E:\Archivos\PIC\P1_Hola_Mundo\main.h"


void main()
{
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);
   
   set_tris_b(0x00);
   
   while(1){
   
   output_high(PIN_B0);
   delay_ms(700);
   
   output_low(PIN_B0);
   delay_ms(700);
   
   }
   

   // TODO: USER CODE!!

}
