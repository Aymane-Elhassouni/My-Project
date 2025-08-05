#include<stdio.h>
int main() {
 int i,f,n;
 printf("=== les nobres paires ===\n");
 printf("enter un nombre: ");
 scanf("%d",&n);
 printf("les paires est: ");
 for(i = 0; i <= n; i++){
    if(i % 2 == 0)
    printf("%d ",i);
 }

return 0 ;    
}