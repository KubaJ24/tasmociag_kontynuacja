#ifndef MAIN_H
#define MAIN_H

//Lista rejestrów jest z komponencie soc

#include <stdio.h>

#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/timer.h"
#include "driver/adc.h" 
#include "driver/ledc.h"
#include "driver/mcpwm.h"

#include "soc/gpio_reg.h"
#include "mygpio.h" 
#include "myadc.h" 
#include "mypwm.h" 
#include "my_mcpwm.h"

#endif //MAIN_H