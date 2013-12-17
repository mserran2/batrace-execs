/* cacheflush.c */
#include <unistd.h>
#include <sys/syscall.h>

int main() {
  char testArray [100];  
  unsigned long long i;
  
  for(i=0; i<5000000000; i++) {
    syscall(__ARM_NR_cacheflush, &testArray, 100, 0);
  }
  return 0;
}
