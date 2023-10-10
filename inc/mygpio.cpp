#include "mygpio.h"

void mygpio_config(void){
    //INPUTS

    //GPIO 21 -> INPUT ENABLE | PULL UP ENABLE
    IO_MUX_21_REG = (1 << FUN_IE) | (1 << FUN_WPU);
    //GPIO 22 -> INPUT ENABLE | PULL UP ENABLE
    IO_MUX_22_REG = (1 << FUN_IE) | (1 << FUN_WPU);

    //OUTPUTS
    //GPIO 23 -> OUTPUT "0" VALUE
    GPIO_OUT_W1TC_REG = (1 << 23);
}