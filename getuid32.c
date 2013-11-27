/* getuid32.c */

#include <unistd.h>
#include <sys/types.h>

int main() {
  int i;

  for(i=0; i<10000; i++) {
    getuid(); //getuid32();
  }
  return 0;
}
