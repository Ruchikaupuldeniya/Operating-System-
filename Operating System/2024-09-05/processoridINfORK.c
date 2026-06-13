#include<stdio.h>

int main(){
    int Fd[2];
    int rv;

    rv = pipe(p);

    if (rv < 0){
        printf("pipe is not created");
    }else{
        printf("pipe is created");
    }
    return 0;
}

