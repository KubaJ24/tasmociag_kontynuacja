#include <stdio.h>
#include "my_mcpwm.h"

void my_mcpwm_init(void){
    mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, silnik_PWM); 
}

void my_mcpwm_config(void){
    mcpwm_config_t my_mcpwm_conf;
    my_mcpwm_conf.frequency = 10000;    //Częstotliwość 10 kHz
    my_mcpwm_conf.cmpr_a = 0;           //Wsp. wypełnienia w %
    my_mcpwm_conf.counter_mode = MCPWM_UP_COUNTER;
    my_mcpwm_conf.duty_mode = MCPWM_DUTY_MODE_0;
    mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &my_mcpwm_conf);  
}

void dc_motor_speed(uint16_t predkosc){
    //Przeliczanie prędkości na zakres 0 - 100
    uint8_t motor_duty_cycle = (predkosc / 1024) * 100;
    mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, motor_duty_cycle);
}

/*
void my_mcpwm_reg_config(void){
    //Okres PWM_clk = 6,25ns * 256 = 1600ns
    REG_WRITE(PWM_CLK_CFG_REG, 256);
    //Konfiguracja Timera 0
    //Aktualizacja stanu w zerze
    //Okres timera = 1600ns * 250 = 400 000ns
    //Częstotliwość = 2,5 kHz
    REG_WRITE(PWM_TIMER0_CFG0_REG, 250);
    //Zliczanie w górę, praca ciągła
    REG_WRITE(PWM_TIMER0_CFG1_REG, (1 << PWM_TIMER0_START) | (1 << PWM_TIMER0_MOD));
}
*/