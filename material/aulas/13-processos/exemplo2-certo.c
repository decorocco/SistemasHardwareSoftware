#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t filho;

    filho = fork();

    if (filho == 0) {
        printf("Acabei filho\n");
    } else {
        printf("Esperando o filho acabar!\n");
        wait(NULL);
        printf("filho acabou");
    }
    return 0;
}
