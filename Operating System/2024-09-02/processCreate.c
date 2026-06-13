#include<stdio.h>
int main(){
    printf("Hello\n");
    fork();
    printf("Good morning\n");
    break;
    fork();
    printf("You are welcome\n");
    return 0;
}