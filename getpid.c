/* getpid.c */
#include <sys/types.h>
#include <unistd.h>

int main () 
{
  //vars
  int i;

  for(i=0; i<69516129; i++) {
    getpid();
  }
  return 0;
}
