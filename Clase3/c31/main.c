#include "F:\Archivos\PIC\Clase3\c31\main.h"
#int_EXT
#define retardo 2000
#define parpadeo 300

void  EXT_isr(void)
{ 
  output_B(0x00);
  
  //Rojo
  output_high(PIN_B3);
  delay_ms(retardo);
  output_low(PIN_B3);
}

void main()
{
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
   ext_int_edge(L_TO_H);
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);
   set_tris_a(0xFF);
   set_tris_b(0b01);
   
   while(1){
   for (num=0x02;num<=0x64;num*=2){
         output_b(num);
         delay_ms(700);
   }
   }
   // TODO: USER CODE!!
}


