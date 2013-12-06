#include "stdio.h"

/*#include "stdlib.h"
#include "unistd.h"    
#include "sys/ioctl.h"
#include "fcntl.h"     

int main(void) {
  int fd;
  unsgiend long long i;

  
  if ((fd = open("myfile.txt", O_RDWR))<0) {
    printf("Open error on myfile.txt\n");
    exit(0);
  }
  for(i=0; i <150000000; i++){
    ioctl(fd,TIOCMGET ,0);
  }

  close(fd);
  exit(0);
}*/
#include <termios.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    int i,fd, serial;

    fd = open("/dev/ttyS0", O_RDONLY);
    for(i=0; i <150000000; i++){
	printf("hey!\n");
    	ioctl(fd, TIOCMGET, &serial);
    }
    if (serial & TIOCM_DTR)
        puts("TIOCM_DTR is not set");
    else
        puts("TIOCM_DTR is set");
    close(fd);
}
