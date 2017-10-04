#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// get the length of s
int my_strlen(char * s){
  int answer = -1;
  // keep adding until you get the null character
  while (s[++answer]){}
  return answer;
}

// copy over the entire source into dest
// dest has to be an array
char * my_strcpy(char * dest, char * source){
  int check = -1;
  // copy each character over one by one
  while (source[++check]){
    dest[check] = source[check];
  }
  // one more for the null character
  dest[check] = source[check];
  return dest;
}

// concatenates source to dest
char * my_strcat(char * dest, char * source){
  // this is basically just copying source to the end of dest
  my_strcpy(dest + strlen(dest), source);
  return dest;
}

int my_strcmp(char * s1, char * s2){
  int check = -1;
  // loop through s2
  while (s2[++check]){
    //check if they're not equal
    if (s1[check] > s2[check]){
      return 1;
    }else if(s1[check] < s2[check])
      return -1;
  }
  // s1 equal and longer
  if(s1[check])
    return 1;
  // they're equal
  return 0;
}

char * my_strchr(char * s, char c){
  int check = -1;
  // loops through while s has characters and stops if it hits the end or it hits c
  while(s[++check] && s[check] != c){}
  return s + check;
}



int main(){

  // strlen testing
  char* s = "";
  char* s1 = "mr dw";
  printf("strlen testing:\n");
  printf("strlen(\"\"): %lu\n", strlen(s));
  printf("my_strlen(\"\"): %d\n", my_strlen(s));
  printf("strlen(\"mr dw\"): %lu\n", strlen(s1));
  printf("my_strlen(\"mr dw\"): %d\n", my_strlen(s1));


  // strcpy testing
  char s2[20];
  char s3[20];
  printf("\nstrcpy testing:\n");
  printf("strcpy(<empty array>, \"mr dw\"): %s\n", strcpy(s2, "mr dw"));
  printf("my_strcpy(<empty array>, \"mr dw\"): %s\n", my_strcpy(s2, "mr dw"));


  // strcat testing
  char s4[20] = "mr dw";
  char s5[20] = "mr dw";
  printf("\nstrcat testing:\n");
  printf("strcat(\"mr dw\", \" is awesome\"): %s\n", strcat(s4, " is awesome"));
  printf("my_strcat(\"mr dw\", \" is awesome\"): %s\n", my_strcat(s5, " is awesome"));


  // strcmp testing
  printf("\nstrcmp testing:\n");
  printf("strcmp(\"mr dw\", \"MR DW\"): %d\n", strcmp("mr dw", "MR DW"));
  printf("my_strcmp(\"mr dw\", \"MR DW\"): %d\n", my_strcmp("mr dw", "MR DW"));
  printf("strcmp(\"MR DW\", \"mr dw\"): %d\n", strcmp("MR DW", "mr dw"));
  printf("my_strcmp(\"MR DW\", \"mr dw\"): %d\n", my_strcmp("MR DW", "mr dw"));
  printf("strcmp(\"\", \"\"): %d\n", strcmp("", ""));
  printf("my_strcmp(\"\", \"\"): %d\n", my_strcmp("", ""));


  // strchr testing
  printf("\nstrchr testing:\n");
  printf("strchr(\"mr dw\", 'd'): %s\n", strchr("mr dw", 'd'));
  printf("my_strchr(\"mr dw\", 'd'): %s\n", my_strchr("mr dw", 'd'));
}
