#include<stdio.h>
int main(){
   int a;
   printf("Enter thr number of days:");
   scanf("%d",&a);
   printf("No.of weeks=%d\n",a/7);//9
   printf("No.of days=%d",a%7);//2
   return 0;
   }
