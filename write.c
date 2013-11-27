/* write.c */

#include <sys/types.h>
#include <fcntl.h>

int main() {
  //vars
  int i;

  int out_fd = open("hello.txt", O_CREAT);
  char x[10]="HelloWorld";

  for(i=0; i<10000; i++) {
    write(out_fd, x, sizeof(x));
  }
  close(out_fd);
  return 0;
}
