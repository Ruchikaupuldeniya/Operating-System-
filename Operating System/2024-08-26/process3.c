#include <stdio.h>
int main() {
    pid_t pid;

    // Print the PID of the initial process
    printf("Initial process ID: %d\n", getpid());

    // Create a new process
    pid = fork();

    if (pid < 0) {
        // If fork() returns a negative value, an error occurred
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {
        // This block is executed by the child process
        printf("This is the child process with PID: %d\n", getpid());
        printf("This is the parent process with PID: %d\n", getppid());
        printf("The parent process ID is: %d\n", getppid());
    } else {
        // This block is executed by the parent process
        printf("This is the parent process with PID: %d\n", getpid());
        printf("This is the parent process with PID: %d\n", getppid());
        printf("The child process ID is: %d\n", pid);
    }

    return 0;
}
