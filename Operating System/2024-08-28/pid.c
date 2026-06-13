#include<stdio.h>
#include<sys/types.h>
int main(){
    pid_t pid,ppid;
    pid = getpid();
    ppid = getppid();
    printf("PID is %d",pid);
    printf("\nPPID is %d\n",ppid);
}