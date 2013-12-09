/* cacheflush.c */
#include <unistd.h>
#include <sys/syscall.h>

int main() {
  // from strace.. can't find man page w/ 5 args
  // cacheflush(0x47f7c950, 0x47f7c954, 0, 0x950, 0x47f7c950)
  char testArray [100];  

  for(i=0; i<5000000000; i++) {
    sys_cacheflush(&testArray, &testArray+100, 0);//ICACHE);
  }
  return 0;
}
