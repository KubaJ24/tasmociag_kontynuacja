#include "myadc.h"
#include "driver/adc.h" 

void myadc_config(){
  //Napiecie odniesienia 1,1 V
  //Ustawic attenuation po ustawieniu dzielnika z potencjometrem
  //Dzielnik to potencjometr 10 kOhm i identyczny rezystor
  //Rozdzielczosc 10 bit -> PWM jest 10 bit

  adc1_config_width(ADC_WIDTH_BIT_10);
  adc1_config_channel_atten(ADC1_CHANNEL_0,ADC_ATTEN_DB_2_5);
}

uint16_t odczyt_myadc(){
  return adc1_get_raw(silnik_pot);
}