#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
    if (-1==execl("/home/wen/Projects/c_demo_linux/exec2/test01.py", "./test01.py", NULL))
    {
        perror("execlp\n");
        exit(-1);
    }
    return 0;
}
