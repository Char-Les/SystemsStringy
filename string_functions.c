#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char* s){
  int answer = 0;
  while (*(s+answer)){
    answer++;}
  
  return answer;
}

char * my_strcpy(char *dest, char *source){
  pass;
}

char * my_strcat(char *dest, char *source){
  pass;
}

int my_strcmp(char *s1, char *s2){
  pass;
}

char * my_strchr(char *s, char c){
  pass;
}



int main(){
  char* s = "w";
  char* s1 = "mr dw";

  //regular
  printf("testing standard strlen for w: %lu \n", strlen(s) );
  printf("testing our strlen for w: %d \n", my_strlen(s) );

  printf("testing standard strlen for mr dw: %lu \n", strlen(s1) );
  printf("testing our strlen for mr dw: %d \n", my_strlen(s1) );
  

  
  
}

 
