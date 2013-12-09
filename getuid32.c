/* getuid32.c */
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
  unsigned long long i;
  
  // 1,000,000,000 times
  for(i=0; i<1000000000; i++) {
    syscall(SYS_getuid32);
  }
  return EXIT_SUCCESS;
}
