#include "I:\Archivos\PIC\Clase 7\c7_3\main.h"


#define LCD_TYPE 2
#include <lcd.c>

int n=0;
int x=4;

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
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);

   // TODO: USER CODE!!
      set_tris_b(0xF0);
   
   while(31){
      
      output_high(PIN_B0);
      output_high(PIN_B1);
      
      if(input(PIN_B4)||input(PIN_B5)||input(PIN_B6)){
      
         output_low(PIN_B0);
         output_low(PIN_B1);
         
         output_high(PIN_B0);
         if(input(PIN_B4))
         n=1;
         if(input(PIN_B5))
         n=2;
         if(input(PIN_B6))
         n=3;
         output_low(PIN_B0);
         
         output_high(PIN_B1);
         if(input(PIN_B4))
         n=4;
         if(input(PIN_B5))
         n=5;
         if(input(PIN_B6))
         n=6;
         output_low(PIN_B1);
         
         delay_ms(150);
         //x++;
      }
      
      /*if(x>20){
         printf(lcd_putc,"\f");
         x=5;
      }
      lcd_gotoxy(x,1);
      if (n!=0)
         printf(lcd_putc,"%i",n);
      delay_ms(150);*/
      
      
      
   }
}
