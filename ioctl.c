#include "stdio.h"
#include "stdlib.h"
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
}
