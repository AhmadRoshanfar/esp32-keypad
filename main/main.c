#include <stdio.h>

#include "keyboard.h"

void app_main(void)
{
    keyboard_pins_init();

    while (1)
    {
        keyboard_read();
    }
}
