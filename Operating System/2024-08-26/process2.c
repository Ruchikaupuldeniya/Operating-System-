#include <stdio.h>
 // For getpid() and getppid()

int main() {
    int pid, ppid;

    // Get the PID of the current process
    pid = getpid();
    // Get the PID of the parent process
    ppid = getppid();

    printf("Current process ID (PID): %d\n", pid);
    printf("Parent process ID (PPID): %d\n", ppid);

    return 0;
}
