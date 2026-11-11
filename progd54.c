#include<stdio.h>
int main(){
  int arr[2][3]={ //1st
                        {10,20,30},
                        {40,50,60}
                        //01 02 03
                        //10 11 12
  }; //2nd
  int arr1[2][3]={10,20,30,40,50,60};
  //partial initialize
  int arr2[2][3]={10,20};
  int arr3[2][3]={
  {10},
  {20}
  };
  //traverse print
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       printf(" %d ",arr3[i][j]);
       }printf("  \n");
       }
     }
