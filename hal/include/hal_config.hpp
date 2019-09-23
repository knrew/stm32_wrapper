#pragma once

#if defined(STM32F7)

#include "stm32f7xx_hal.h"

#elif defined(STM32F4)

#include "stm32f4xx_hal.h"

#elif defined(STM32F1)

#include "stm32f1xx_hal.h"

#else
#error
#endif

