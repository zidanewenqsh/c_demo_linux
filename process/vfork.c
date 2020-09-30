#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 20;
    printf("getpid:%d\n", getpid());
    printf("getppid:%d\n", getppid());
    int count = 0;
    pid_t pid = vfork(), pr;
    pid = vfork();

    if (pid == 0) {
        ++count;
        sleep(1);
        a = 100, b = 200;
        printf("son: a = %d, b = %d\n", a, b);
        printf("children process:%d, %d\n", getpid(), getppid());
        printf("children vcount:%d\n",count);
        _exit(0);
    } else if (pid > 0) {
        ++count;
//        pr = wait(NULL);
        pr = waitpid();
        sleep(1);
        printf("parent: a = %d, b = %d\n", a, b);
        printf("parent process:%d, %d, %d\n", pr, getpid(), getppid());
        printf("parent vcount:%d\n",count);
        _exit(0);
    }
    else
    {
        perror("pid error\n");
    }

    return 0;
}
