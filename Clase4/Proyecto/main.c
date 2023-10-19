#include "F:\Archivos\PIC\Clase4\Proyecto\main.h"
#int_EXT
#define ret 350

int i;

void  EXT_isr(void)
{
     output_B(0x00);
  
     //Rojo
     output_high(PIN_B7);
     delay_ms(ret);
     output_low(PIN_B7);
}

void main()
{

   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_wdt(WDT_OFF);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
   ext_int_edge(L_TO_H);
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);

   // TODO: USER CODE!!
   
   set_tris_b (0x01);
   
   while(1) 
   {
      output_high(PIN_B1);
      delay_ms(1000);
      output_low(PIN_B1);
      delay_ms(1000);
      /*for(i=0x02;i<=0x64;i*=2){
         output_b(i);
         delay_ms(ret);
      }*/
   }
}


