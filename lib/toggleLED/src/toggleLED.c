#include "toggleLED.h"

int ToggleLED(const struct device *devbrd, bool *ledstatus,gpio_pin_t pinNum ){
    *ledstatus = !(*ledstatus); //toggle led status on/off
    gpio_pin_set(devbrd, pinNum, (int) *ledstatus);   //set LED on Devboard
    return 0;
}

int ConfigureLED(){
    const struct device *dev;
    dev = device_get_binding(LED1);
    bool led_is_on = true;
	int ret = gpio_pin_configure(dev, PIN1, GPIO_OUTPUT_ACTIVE | FLAGS0);

}