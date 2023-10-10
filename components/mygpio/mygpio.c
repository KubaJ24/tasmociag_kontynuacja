#include "mygpio.h"

void mygpio_config(void){
    //Silnik
    gpio_set_direction(silnik_L, GPIO_MODE_OUTPUT); gpio_set_level(silnik_L, 0);
    gpio_set_direction(silnik_P, GPIO_MODE_OUTPUT); gpio_set_level(silnik_P, 0);
    //gpio_set_direction(silnik_PWM, GPIO_MODE_OUTPUT); gpio_set_level(silnik_PWM, 0);

    //Potencjometr sterujący silnikiem
    //Bez pull up
    gpio_set_direction(GPIO_NUM_35, GPIO_MODE_INPUT);



    //Alternatywnie na rejestrach
    /*
    //OUTPUT ENABLE
    REG_WRITE(GPIO_ENABLE_W1TS_REG, (1 << 18) | (1 << 19));
    //OUTPUTS CLEAR
    REG_WRITE(GPIO_OUT_W1TC_REG, (1 << 18) | (1 << 19));

    //INPUT ENABLE - WITHOUT PULLUP FOR ADC
    REG_WRITE(IO_MUX_GPIO21_REG, (1 << 21));
    */
}