#ifndef MYGPIO_H
#define MYGPIO_H

#include "driver/gpio.h"
#include "soc/gpio_reg.h"
#include "soc/io_mux_reg.h"

#define silnik_L GPIO_NUM_18
#define silnik_P GPIO_NUM_19
#define silnik_PWM GPIO_NUM_21

//DLA REJESTRÓW
//#define silnik_L 18
//#define silnik_P 19
//#define silnik_PWM 21

void mygpio_config(void);
/*
Konfiguracja wejść/wyjść
*/

#endif //MYGPIO_H 