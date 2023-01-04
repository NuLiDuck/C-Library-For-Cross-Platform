#ifndef B98SUPP_UART_
#define B98SUPP_UART_

#include <strings.h>
#include <stdio.h>
#include <fcntl.h>
#include <termios.h>

int B98uart_set_speed(int fd, int speed);
int B98uart_set_Parity(int fd, int databits, int stopbits, int parity);
int B98uart_open(const char *dev);

#endif
