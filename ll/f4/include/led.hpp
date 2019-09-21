#pragma once

#include "stm32f4xx_ll_gpio.h"

namespace ll {
    class Led {
    public:
        Led(GPIO_TypeDef *const led_gpio_port, const uint16_t led_pin) : port(led_gpio_port), pin(led_pin),
                                                                         is_on(false) {}

        void on() {
            LL_GPIO_SetOutputPin(port, pin);
            is_on = true;
        }

        void off() {
            LL_GPIO_ResetOutputPin(port, pin);
            is_on = false;
        }

        void toggle() {
            is_on ? off() : on();
        }

    protected:
        GPIO_TypeDef *const port;
        const uint16_t pin;
        bool is_on;
    };
}