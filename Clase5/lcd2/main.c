#include "I:\Archivos\PIC\Clase5\lcd2\main.h"
#int_EXT
void  EXT_isr(void) 
{

}



#define LCD_TYPE 1
#include <lcd.c>
void main()
{
   lcd_init();



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
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);

   // TODO: USER CODE!!
   
      set_tris_d(0x00);
   set_tris_a(0xFF);
   set_tris_b(0x00);
   
   while(1){   
      lcd_gotoxy(m,i);
      printf(lcd_putc,"*");
      delay_ms(re);
      printf(lcd_putc,"\f");      
      m=m+x;
      i=i+y;
      
      if(m==7||m==1){
         x*=-1;
      }
      if(i==2||i==1){
         y*=-1;
      }
      
   }
}
