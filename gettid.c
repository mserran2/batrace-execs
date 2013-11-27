#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;

    for(i=0; i <750000000; i++){
        syscall(SYS_gettid);
    }
    return EXIT_SUCCESS;
}
