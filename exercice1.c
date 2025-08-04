#include<stdio.h>

int main (){
    int PIN = 1234;
    int i,pin;
    printf("enter code pin: ");
    scanf("%d",&pin);
    for(i = 0; i < 2; i++){
        if(pin != PIN){
           printf("code incorrect\n");
           printf("enter code pin: ");
           scanf("%d",&pin);
        }
    }
    if(pin == PIN)
      printf("correct");
    else if(i == 2)
      printf("code bloque");
    return 0;
}
