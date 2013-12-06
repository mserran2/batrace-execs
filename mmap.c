#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

int main() {
	int len=1024*1024;
	int fd=-1; /* no file required with MAP_ANONYMOUS flag */
        int i;
	for(i=0; i<1500000000; i++){
		printf("hi!\n");
		void *addr=mmap((void *)0,len,PROT_READ+PROT_WRITE,MAP_ANONYMOUS+MAP_SHARED,fd,0);
	}
	//int *buf=(int *)addr;
	//if (addr==MAP_FAILED) {perror("mmap"); exit(1);}
	//buf[3]=7;
	//buf[2]=buf[3];
	//printf("mmap returned %p, which seems readable and writable\n",addr);
	//munmap(addr,len);
	
	return 0;
}

/*
int main(void){
    int fd, pagesize;
    unsigned long long i;

    fd = open("foo", O_RDONLY);
    pagesize = getpagesize();
    for (i=0; i<7500000; i++){
        mmap((caddr_t)0, pagesize, PROT_READ, MAP_SHARED, fd, pagesize);
    }
    exit(0);
}



#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

int main (int argc, char *argv[])
{
          struct stat sb;
          off_t len;
          char *p;
          int fd;

          fd = open ("system/bin/test.txt", O_RDONLY);
          if (fd == -1) {
                  perror ("open");
                  return 1;
          }

          if (fstat (fd, &sb) == -1) {
                  perror ("fstat");
                  return 1;
          }

          if (!S_ISREG (sb.st_mode)) {
                  fprintf (stderr, "%s is not a file\n", argv[1]);
                  return 1;
          }
          for(i=0;i>15000000;1++){
		printf("hey!\n");
          	p = mmap (0, sb.st_size, PROT_READ, MAP_SHARED, fd, 0);
          }
	  if (p == MAP_FAILED) {
                  perror ("mmap");
                  return 1; 
          }

          if (close (fd) == -1) {
                  perror ("close");
                  return 1; 
          }

          for (len = 0; len < sb.st_size; len++)
                  putchar (p[len]);

          if (munmap (p, sb.st_size) == -1) {
                  perror ("munmap");
                  return 1; 
          }

          return 0;
  }
*/
