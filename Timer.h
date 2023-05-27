/*
 * Timer.h
 *
 * Created: 7/30/2022 8:11:29 PM
 *  Author: kamar salah
 */ 


#ifndef TIMER_H_
#define TIMER_H_

/* Function Description : initialize the interrupt of the CTC mode of timer0 */
void timer_CTC_vinit_interrupt(void);

/* Function Description : initialize the generation of a wave on OC0 pin in non PWM mode*/
void timer_vwave_nonPWM(void);

/* Function Description : initialize the generation of a wave on OC0 pin in fast PWM mode */
void timer_vwave_fastPWM(void);

/* Function Description : initialize the generation of a wave on OC0 pin in phase correct PWM mode */
void timer_vwave_phasecorrectPWM(void);




#endif /* TIMER_H_ */