#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    printf("Clocks per second = %d", CLOCKS_PER_SEC);
    for (;;){
        printf("%d \n",clock());
    }
    return 0;
}