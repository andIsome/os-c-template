#pragma once

#include <stdarg.h>

void kprintf(const char *format, ...);
void vkprintf(const char *format, va_list args);
