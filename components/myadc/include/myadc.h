#ifndef MYADC_H
#define MYADC_H

#include <stdio.h>

#include "driver/adc.h" 

#define silnik_pot ADC1_CHANNEL_7                 //GPIO 32 - 39 - tutaj GPIO 35

void myadc_config();
/*
Konfiguracja ADC
Napiecie odniesienia 1,1 V
Rozdzielczość 10 bit -> tak samo jak PWM
*/

uint16_t odczyt_myadc();
/*
Zwraca wynik odczytu ADC z potencjometru sterującego silnikiem
*/

#endif //MYADC_H 