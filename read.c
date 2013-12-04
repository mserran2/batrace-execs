#include <unistd.h>
#include <stdio.h> 

int main()
{
    int fd;
    unsigned long long i;
    fd = fopen("file.txt","r"); 
    for(i=0; i < 1000000000000; i++){
        if(feof(fd)){
            fseek(fd, 16, SEEK_SET);
        read(0, &fd, 16); 
    }
    return 0;
}
}
