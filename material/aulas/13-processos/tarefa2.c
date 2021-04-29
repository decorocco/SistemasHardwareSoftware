#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t pai, filho;

    for (int i = 0; i < 8; i++) {
        filho = fork();
        if (filho == 0) {
            printf("Eu sou um processo filho, pid=%d, ppied=%d, meu id do programa é %d\n", filho, pai, i);
            return 0;
        } else {
            printf("Eu sou o processo pai, pid=%d, meu id do programa é %d\n", pai, i);
        }
    }
}
