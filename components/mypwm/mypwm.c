#include "mypwm.h"

void dc_mypwm_config(){
  //Kanał 0 - silnik

  //Konfiguracja timera
  ledc_timer_config_t ledc1_timer = {
        .speed_mode       = LEDC_MODE,
        .timer_num        = LEDC_TIMER,
        .duty_resolution  = LEDC_DUTY_RES,
        .freq_hz          = LEDC_FREQUENCY,  
        .clk_cfg          = LEDC_AUTO_CLK
  };
  //Załadowanie konfiguracji
  ledc_timer_config(&ledc1_timer);

  //Konfiguracja kanału
   ledc_channel_config_t ledc1_channel = {
        .speed_mode     = LEDC_MODE,
        .channel        = LEDC_CHANNEL,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = silnik_PWM,
        .duty           = 0, // Set duty to 0%
        .hpoint         = 0
  };
  //Załadowanie konfiguracji
  ledc_channel_config(&ledc1_channel);
}

void dc_speed(uint16_t predkosc){

  //Jezeli sie nie skompiluje - zmienic rzutowanie

  ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, predkosc);
  ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
}