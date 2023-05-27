/*
 * print from 0 to 20.c
 *
 * Created: 5/27/2023 11:24:20 PM
 * Author : kamar salah
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer.h"
#include "seven segment.h"
#include "macros.h"

volatile unsigned char counter1=0;
volatile unsigned char counter2=0;                          // indecate ISR code execute 
unsigned char counter3=0;                                  // have the value which appare on 7 seg                                  

int main(void)
{
	seven_seg_vinti ('D');
	SET_BIT(DDRA,0);
	SET_BIT(DDRA,1);
	timer_CTC_vinit_interrupt();
    
    while (1) 
    {
		 CLEAR_BIT(PORTA,0);
		 SET_BIT(PORTA,1);
		 seven_seg_vwrite ('D' ,counter3%10);
		 
		 while(counter2==0);                       // ISR dont execute 
		 counter2=0;
		 CLEAR_BIT(PORTA,1);
		 SET_BIT(PORTA,0);
		 seven_seg_vwrite ('D' ,counter3/10);
		 
		 while(counter2==0);                       // ISR dont execute 
		 counter2=0;
		 
		 if (counter1>=100)
		 {
			 counter1=0;
			 counter3++;
			 if(counter3==21)
			 {
				 counter3=0;
			 }
		 }
		 
		 
		 
    }
}

ISR(TIMER0_COMP_vect)
{
	counter1++;
	counter2=1;
}

