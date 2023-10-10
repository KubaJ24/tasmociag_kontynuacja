#ifndef MYPWM_H
#define MYPWM_H

#include <stdio.h>

#include "driver/ledc.h" 

#define silnik_PWM GPIO_NUM_21

#define LEDC_TIMER              LEDC_TIMER_0
#define LEDC_MODE               LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL            LEDC_CHANNEL_0
#define LEDC_DUTY_RES           LEDC_TIMER_10_BIT //Rozdzielczość 10 bit
#define LEDC_FREQUENCY          (1000) //60 kHz

void dc_mypwm_config();
/*
Konfiguracja PWM dla silnika
Kanal 0 - silnik
PWM channel 0, 60 kHz, rozdzielczość 10 bit
*/

void dc_speed(uint16_t predkosc);
/*
Ustawia wartość PWM sterującą silnikiem na podstawie zmiennej predkosc
*/

#endif //MYPWM_H