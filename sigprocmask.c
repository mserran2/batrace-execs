#include <sys/syscall.h>
#include <signal.h>
#include <sys/signal.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  unsigned long long i;
  sigset_t x;
  
  sigemptyset (&x);
  sigaddset(&x, SIGUSR1);

  for(i=0;i<1000000000;i++) {
    syscall(SYS_sigprocmask, SIG_BLOCK, &x, NULL);
    //sigprocmask(SIG_UNBLOCK, &x, NULL);
  }
  return EXIT_SUCCESS;
}
