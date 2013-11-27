/* getclocktime.c */
#include <time.h>
int main() {
  //vars 
  struct timespec time1;
  int i;

  for(i=0; i<78000000; i++) {
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
  }
  return 0;
}
