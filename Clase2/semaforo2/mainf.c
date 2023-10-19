#include "E:\Archivos\PIC\Clase2\semaforo2\mainf.h"
#define retardo 700

int estado = 0;
int i;

void main()
{
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);
   
   set_tris_a(0xFF);
   set_tris_b(0x00);
   
   while(1){
   
   estado = input(PIN_A0);
   
   if(estado==1){
      for(i=128;i<=32;i/2)
      {
         outputb(0xi);
      }
   }
   
   }
   
   // TODO: USER CODE!!

}
