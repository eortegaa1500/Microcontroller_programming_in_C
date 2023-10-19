#include "F:\Archivos\PIC\Clase2\semaforo\semaforo.h"


void main()
{
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);
   set_tris_b(0x00);
   
   int num;
   
   while(1){
      for (num=0x01;num<=0x04;num*=2){
         output_b(num);
         delay_ms(700);
      }
   }

   // TODO: USER CODE!!
}
