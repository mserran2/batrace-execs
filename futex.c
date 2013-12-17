/* 
 * futex.c
 */

#include <linux/futex.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int sys_futex(void *addr1, int op, int val1, struct timespec *timeout, void *addr2, int val3) {
  return syscall(SYS_futex, addr1, op, val1, timeout, addr2, val3);
}

int main() {
  int futexVar;
  unsigned long long i;

  //150,000,000 times
  for(i=0; i <15000000; i++){
    sys_futex(&futexVar, FUTEX_WAKE_PRIVATE, 1, NULL, NULL, 0);
  }
  return EXIT_SUCCESS;
}

