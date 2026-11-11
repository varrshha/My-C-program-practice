#include<stdio.h>
#include<string.h>
int main(){
  char string1[50],string2[50];
     scanf("%s%s",string1,string2);
      if(strcmp(string1,string2)==0)
         printf("Equal\n");
         else
          printf("Not Equal\n");
         return 0;
      }
