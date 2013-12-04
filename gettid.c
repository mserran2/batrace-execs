#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned long long i;

    for(i=0; i <1500000000; i++){
        syscall(SYS_gettid);
    }
    return EXIT_SUCCESS;
}
