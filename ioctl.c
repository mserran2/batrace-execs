#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"    
#include "sys/ioctl.h"
#include "fcntl.h"     

int main(void) {
  int fd;
  int i;

  
  if ((fd = open("myfile.txt", O_RDWR))<0) {
    printf("Open error on myfile.txt\n");
    exit(0);
  }
  for(i=0; i <10000; i++){
    ioctl(fd,TIOCMGET ,0);
  }

  close(fd);
  exit(0);
}
