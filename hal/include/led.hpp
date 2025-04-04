#pragma once

#include "hal_config.hpp"

namespace hal {
    class Led {
    public:
        explicit Led(GPIO_TypeDef *const led_gpio_port, const uint16_t led_pin, const bool is_reverse = false) noexcept:
                port_(led_gpio_port),
                pin_(led_pin),
                is_reverse_(is_reverse) {}

        void On() const {
            HAL_GPIO_WritePin(port_, pin_, is_reverse_ ? GPIO_PIN_RESET : GPIO_PIN_SET);
        }

        void Off() const {
            HAL_GPIO_WritePin(port_, pin_, is_reverse_ ? GPIO_PIN_SET : GPIO_PIN_RESET);
        }

        void Toggle() const { IsOn() ? Off() : On(); }

        bool IsOn() const {
            return HAL_GPIO_ReadPin(port_, pin_) == (is_reverse_ ? GPIO_PIN_RESET : GPIO_PIN_SET);
        }

    protected:
        GPIO_TypeDef *const port_;
        const uint16_t pin_;
        const bool is_reverse_;
    };
}

