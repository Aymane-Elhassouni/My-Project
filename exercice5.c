#include<stdio.h>

int main(){
   int arry[10];
   int i,index=0;
   for(i=0;i<10;i++){
      printf("enter nombre %d: ",i);
      scanf("%d",&arry[i]);
   }
   for(int j=0;j<10;j++){
      if(arry[j] == 2){
         index++;
      }
   }
   printf("%d",index);
   return 0;
}