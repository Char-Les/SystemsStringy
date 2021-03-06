#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Charles Weng
//Systems Period 4
//HW05 -- If you like it you should've put a string on it
//2017-10-6

// get the length of s
int my_strlen(char * s){
  int answer = -1;
  // keep adding until you get the null character
  while (*(s + ++answer)){}
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

//not required
char * my_strncpy(char *dest, char * source, int n){
  int check = -1;
  while (check != n && source[++check]){
    dest[check] = source[check]; }

  dest[check] = '\0';
  return dest; }

// concatenates source to dest
char * my_strcat(char * dest, char * source){
  // this is basically just copying source to the end of dest
  my_strcpy(dest + strlen(dest), source);
  return dest;
}

int my_strcmp(char *s1, char *s2){
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

char * my_strchr(char *s, char c){
  return 0;
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

  // strncpy testing
  char sb[20];
  char sc[20];
  printf("\nstrncpy testing:\n");
  memset(sb, '\0', sizeof(sb));
  printf("strncpy(<empty array>, \"mr dw\", 3): %s\n", strncpy(sb, "mr dw", 3));
  printf("my_strcpy(<empty array>, \"mr dw\", 3): %s\n", my_strncpy(sc, "mr dw", 3));

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
}
 
