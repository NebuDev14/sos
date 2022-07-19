#include "stdlib/stdio.h"

#include "config.h"
#include "io/io.h"
#include "stdlib/stdstr.h"

static struct iostream *iostream;

void stdio_init() {
    #if CONFIG_UART_IO
    iostream = uart_iostream();
    #endif
    (iostream->init)();
}

void prints(const char *s) {
    (iostream->prints)(s);
}

void printc(char c) {
    (iostream->printc)(c);
}

void gets(char *buffer, unsigned int length) {
    (iostream->gets)(buffer, length);
}

char getc() {
    return (iostream->getc)();
}
