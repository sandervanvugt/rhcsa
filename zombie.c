#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        printf("Parent PID = %d, Child PID = %d\n", getpid(), pid);
        sleep(60);
    } else if (pid == 0) {
        printf("Child PID = %d\n", getpid());
        exit(0);
    } else {
        fprintf(stderr, "Failed to fork the process\n");
        exit(1);
    }
    return 0;
}

