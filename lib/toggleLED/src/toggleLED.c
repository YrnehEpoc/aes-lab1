#include "toggleLED.h"

int ToggleLED(const struct device *devbrd, int ledstatus,gpio_pin_t pinNum ){
    ledstatus = !(ledstatus); //toggle led status on/off
    gpio_pin_set(devbrd, pinNum, (int) ledstatus);   //set LED on Devboard
    return ledstatus;
}

int ConfigureLED(const struct device *dev, gpio_pin_t pinNum, gpio_flags_t flags){

	gpio_pin_configure(dev, pinNum, GPIO_OUTPUT_ACTIVE | flags);
    return 0;

}