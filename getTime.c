#include <sys/time.h>
#include <time.h>

void getTime();

int main()
{
    //vars
    int i;
    
    //call get time 10,000 times
    for (i=0; i<10000; i++) {
      getTime(); 
    }

    return 0;
}

void getTime() 
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
}
