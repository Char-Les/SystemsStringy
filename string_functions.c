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
  int i=0;
  while( *(source + i) ){
    dest[i] = source[i];}

  dest[i] = ;
  return dest;
}

char * my_strcat(char *dest, char *source){
  return 0;
}

int my_strcmp(char *s1, char *s2){
  return 0;
}

char * my_strchr(char *s, char c){
  return 0;
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

 
