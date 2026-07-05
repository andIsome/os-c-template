#pragma once

#include <types.h>
#include <stdarg.h>

int snprintf(char *buff, int buff_len, const char *fmt, ...);

int vsnprintf(char *buff, int buff_len, const char *fmt, va_list args);
