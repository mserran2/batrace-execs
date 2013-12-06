#include <linux/futex.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned long long i;
    //int *ptr;

    //ptr = (int *)malloc(sizeof(10));    

    for(i=0; i <1500000; i++){
	printf("hi!\n");
        syscall(SYS_futex, FUTEX_WAIT);
    }
    return 0;
}

