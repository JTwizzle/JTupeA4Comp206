#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void) {
  
  int len = atoi(getenv("CONTENT_LENGTH"));
  int i;
  fgets(input,len+1,stdin);
  
  printf("Content-Type:text/html\n\n");
  printf("<html>");
    
  while( input[i] < (len+1)){
    printf("%d", i);
    i++;
  }
  
  printf("</html">);

}
