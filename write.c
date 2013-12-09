#include <stdio.h> 
#include <stdlib.h>
/* For exit() function */ 
int main() {
  FILE *fptr; 
  unsigned long long i;

  fptr=fopen("hello.txt","w"); 
  if(fptr==NULL){ 
    printf("Error!"); 
    exit(1); 
  }
  // 100,000,000
  for(i=0;i<100000000;i++) { 
    fprintf(fptr,"%s","this is a test write to test the system call write"); 
  } 
  fclose(fptr); 
  return 0; 
}
