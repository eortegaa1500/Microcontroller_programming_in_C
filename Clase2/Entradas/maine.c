#include "E:\Archivos\PIC\Clase2\Entradas\maine.h"
#define retardo 700

int estado = 0;
int estado2 = 0;
int aux = 0;

void main()
{

   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);
   
   set_tris_b(0x00);
   set_tris_a(0xFF);
   
   output_b(0x00); //Todo b en 0
   
   while(1)
   {  
      estado=input(PIN_A0);
      
      if(estado==1)
      {
         aux = 1;
         while(aux==1)
         {
            output_high(PIN_B0);
            delay_ms(retardo);
            
            output_low(PIN_B0);
            delay_ms(retardo);
            
            estado2=input(PIN_A1);
            
            if(estado2==1)
            aux = 0;
         }
      }
  }
   // TODO: USER CODE!!
}
