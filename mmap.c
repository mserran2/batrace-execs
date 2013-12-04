#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>

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
