#include<stdio.h>

int main(){
   int n,i,j,sum=0;
   printf("Enter taille de matrice ?x?: ");
   scanf("%d",&n);
   int matrix[n][n];
   printf("enter of all elements in a 2D array:\n");
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         scanf("%d",&matrix[i][j]);
         sum += matrix[i][j];
      }
   }
   printf("Sum of all elements: %d\n",sum);
   
   return 0;
}