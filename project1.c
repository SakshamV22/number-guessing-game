#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x,guess,attempts=0;
    srand(time(0));
    x=rand()%100+1;
    do{    
        printf("guess a number (1-100): ");
        scanf("%d",&guess);
        attempts++;
        if(guess<x){
            printf("too short!\n");
        }
        else if(guess>x){
            printf("too long!\n");
        }
        else{
            printf("CORRECT! so u finally guessed it in %d attempts", attempts);    
        }     
    }
    while(guess!=x);
    return 0;
}