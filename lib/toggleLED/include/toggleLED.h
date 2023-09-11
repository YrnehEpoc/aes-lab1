#ifndef TOGGLELED_H_
#define TOGGLELED_H_

#include "stdbool.h"
#include <drivers/gpio.h>

int ToggleLED(const struct device *devbrd, bool *ledstatus, gpio_pin_t pinNum );

int ConfigureLED(struct device *dev, gpio_pin_t pinNum, gpio_flags_t flags);

#endif