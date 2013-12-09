/* getpid.c */
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main () 
{
  unsigned long long i;

  for(i=0; i<169516129; i++) {
    syscall(SYS_getpid);
  }
  return EXIT_SUCCESS;
}
