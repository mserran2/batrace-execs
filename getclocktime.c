/* getclocktime.c */
#include <sys/syscall.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/time.h>

void safe_inc( unsigned long long *p )
{
  unsigned long long v = *p;
  (*p)++;
  if( v > *p )
    exit( -1 );
}

int main() {
  struct timespec ts;
  unsigned long long i;
 
  /*  c11 precise bit uint64_t */  
  //750,000,000 calls
  for(i=0; i<750000000; i++) {
    safe_inc(&i);
    syscall(SYS_clock_gettime, CLOCK_REALTIME, &ts);
  }
  return EXIT_SUCCESS;
}
