#include "stdio.h"
#include <termios.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
    int i, serial,fd;

    fd = open("/dev/ttyS0", O_RDONLY);
    for(i=0; i <150000000; i++){
        ioctl(fd, TIOCMGET, &serial);
    }
    if (serial & TIOCM_DTR)
        puts("TIOCM_DTR is not set");
    else
        puts("TIOCM_DTR is set");

    close(fd);

    return EXIT_SUCCESS;
}
