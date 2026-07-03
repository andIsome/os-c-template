#include <log/log.h>

#include <lib/snprintf.h>
#include <flanterm.h>

void kprintf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    vkprintf(format, args);

    va_end(args);
}

static char __fmt_buff[0x1000];

struct flanterm_context *ft_ctx;

void vkprintf(const char *format, va_list args) {
    int count = vsnprintf(__fmt_buff, sizeof(__fmt_buff), format, args);

    if (count >= sizeof(__fmt_buff))
        count = sizeof(__fmt_buff);

    flanterm_write(ft_ctx, __fmt_buff, count);
}
