#include<stdio.h>
int main(){
    printf("Hello\n");
    int id=fork();
    int x = getppid();
    printf("My process getpid is %d\n",x);
    printf("My process id is %d\n",id);
    return 0;
}