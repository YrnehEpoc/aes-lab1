#ifndef TOGGLELED_H_
#define TOGGLELED_H_

#include <zephyr.h>
#include <device.h>
#include "stdbool.h"
#include <drivers/gpio.h>

int ToggleLED(const struct device *devbrd, int ledstatus,gpio_pin_t pinNum );

int ConfigureLED(const struct device *dev, gpio_pin_t pinNum, gpio_flags_t flags);

#endif