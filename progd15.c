#include<stdio.h>
int main(){
   float a,b;
   printf("Enter amount and tax percentage:");
   scanf("%f %f",&a,&b);
   printf("%f",(a*b)/100);
   return 0;
   }
