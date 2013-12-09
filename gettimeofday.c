#include <sys/time.h>
#include <sys/syscall.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  struct timeval tv;
  unsigned long long i;
  
  // 100,000,000 times  
  for (i=0; i<100000000; i++) {
    syscall(SYS_gettimeofday, &tv, NULL);    
  }
  return EXIT_SUCCESS;
}
