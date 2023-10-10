#include "main.h"

void app_main(void)
{
    printf("Example text\n");

    REG_WRITE(GPIO_ENABLE_W1TS_REG, (1 << 18) | (1 << 19) | (1 << 21));

    REG_WRITE(GPIO_OUT_W1TC_REG, (1 << 18) | (1 << 19) | (1 << 21));

    

    while(1)
    {
        
    }
    
}
