#include <unistd.h>
#include <stdio.h> 

int main() {
  unsigned long long i;
  FILE *fp;
  char line[80]; 
  
  //open file 
  fp = fopen("file.txt", "rt");

  // 1,000,000,000 times
  for(i=0;i<1000000000; i++) {
    //read to end of file
    while(fgets(line, sizeof line, fp) != NULL) { /*do nothing*/ }
    //reset file pointer to start of file
    rewind(fp);
  }
  return 0;
}
