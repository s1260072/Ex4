#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int a,b;
    char c[100];
    printf("What your name?\n");
    scanf("%s",c);
    printf("Hello! %s",c);
    printf("Rolling the dice...\n");
    srand((unsigned int)time(NULL));
    a=rand()%6+1;
    b=rand()%6+1;
    printf("Die 1: %d \nDie 2: %d\nTotal value: %d\n",a,b,a+b);
}
