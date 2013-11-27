#include <linux/futex.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int *ptr;

    ptr = (int *)malloc(sizeof(10));    

    for(i=0; i <10000; i++){
        syscall(SYS_futex, ptr, FUTEX_WAIT);
    }
    return EXIT_SUCCESS;
}

