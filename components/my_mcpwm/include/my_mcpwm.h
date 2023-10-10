#ifndef MY_MCPWM_H
#define MY_MCPWM_H

#include "driver/gpio.h"
#include "driver/mcpwm.h"
#include "soc/mcpwm_periph.h"
#include "soc/mcpwm_reg.h"

#define silnik_PWM GPIO_NUM_21

void my_mcpwm_init(void);
/*
Inicjalizacja mcpwm dla silnika
*/

void my_mcpwm_config(void);
/*
Wstępna konfiguracja mcpwm dla silnika
*/

void dc_motor_speed(uint16_t predkosc);
/*
Ustawia wartość PWM sterującą silnikiem na podstawie zmiennej predkosc
*/

void my_mcpwm_reg_config(void);
/*
Konfiguracja mcpwm na rejestrach
*/

#endif //MY_MCPWM_H