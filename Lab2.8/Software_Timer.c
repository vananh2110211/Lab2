/*
 * Software_Timer.c
 *
 *  Created on: 3 thg 11, 2022
 *      Author: ASUS
 */

#include "Software_Timer.h"

int TIME_CYCLE = 10;

int	timer0_counter = 0;
int	timer0_flag = 0;

int	timer1_counter = 0;
int timer1_flag = 0;

void SetTimer0(int duration){
	timer0_counter = duration / TIME_CYCLE;
	timer0_flag = 0;
}

void SetTimer1(int duration){
	timer1_counter = duration / TIME_CYCLE;
	timer1_flag = 0;
}

void RunTimer0(){
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter <= 0){
			timer0_flag = 1;
		}
	}
}

void RunTimer1(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}


