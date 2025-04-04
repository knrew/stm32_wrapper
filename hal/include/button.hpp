#pragma once

#include "hal_config.hpp"

namespace hal {
    class Button {
    public:
        explicit Button(GPIO_TypeDef *const port, const uint16_t pin, const bool is_reverse = false) noexcept :
                port_(port),
                pin_(pin),
                is_reverse_(is_reverse) {}

        bool IsPushed() const {
            return HAL_GPIO_ReadPin(port_, pin_) == (is_reverse_ ? GPIO_PIN_RESET : GPIO_PIN_SET);
        }

    protected:
        GPIO_TypeDef *const port_;
        const uint16_t pin_;
        const bool is_reverse_;
    };
}