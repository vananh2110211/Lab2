/*
 * Software_Timer.h
 *
 *  Created on: 3 thg 11, 2022
 *      Author: ASUS
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;

void SetTimer0(int duration);
void SetTimer1(int duration);

void Runtimer0();
void Runtimer1();



#endif /* INC_SOFTWARE_TIMER_H_ */
