#pragma once

#include "stm32f4xx_ll_gpio.h"

namespace ll {
    class Button {
    public:
        Button(GPIO_TypeDef *const port, const uint16_t pin, const bool is_pushed = false) :
                port(port), pin(pin), is_pushed(is_pushed) {}

        bool getState() const {
            return LL_GPIO_IsInputPinSet(port, pin) == (is_pushed ? 0 : 1);
        }

    protected:
        GPIO_TypeDef *const port;
        const uint16_t pin;
        const bool is_pushed;
    };
}