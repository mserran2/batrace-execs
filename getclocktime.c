/* getclocktime.c */
#include <sys/syscall.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/time.h>

int main() {
  struct timespec ts;
  unsigned long long i;
  
  //750,000,000 calls
  for(i=0; i<750000000; i++) {
    syscall(SYS_clock_gettime, CLOCK_REALTIME, &ts);
  }
  return EXIT_SUCCESS;
}
