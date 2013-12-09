#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define FILEPATH "hello.txt"
#define NUMINTS  (1000)
#define FILESIZE (NUMINTS * sizeof(int))

int main() {
  int fd;
  unsigned long long i, j;
  int *map;
  
  fd =open(FILEPATH, O_RDWR | O_CREAT | O_TRUNC, (mode_t)0600); 
  for (j=0;j<1000000000;i++) {
    lseek(fd, FILESIZE-1, SEEK_SET); //go to end of file
    write(fd, "", 1);  // write empty string
    map = mmap(0, FILESIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    for (i = 1; i <=NUMINTS; ++i) {
      map[i] = 2 * i; 
    }
    munmap(map, FILESIZE);  //free memory
  }
  close(fd); //close file
  return 0;
}
