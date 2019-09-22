#pragma once

#include <string>
#include "hal_config.hpp"

constexpr char endl[] = "\r\n";

namespace hal {
    class Debug {
    public:
        Debug() {
            setbuf(stdout, NULL);
        }

        Debug &operator<<(const char *const str) {
            printf("%s", str);
            return *this;
        }

        Debug &operator<<(const char c) {
            printf("%c", c);
            return *this;
        }

        Debug &operator<<(const int val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const int8_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const uint8_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const int16_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const uint16_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const int32_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const uint32_t val) {
            printf("%d", val);
            return *this;
        }

        Debug &operator<<(const float val) {
            printf("%f", val);
            return *this;
        }

        Debug &operator<<(const std::string &str) {
            return (*this) << str.c_str();
        }
    };
}