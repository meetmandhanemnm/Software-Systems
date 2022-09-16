// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 21. Write a program, call fork and print the parent and child process id.

#include <stdio.h>
#include <unistd.h>

void main() {
    int pid;
    pid = fork();
    if(pid==0) {
        printf("In Child process\nParent process id is %d",getppid());
        printf("\nMy id is %d",getpid());
        sleep(10);
    }
    else {
        printf("In Parent process\nChild process id is %d",pid);
        printf("\nMy id is %d",getpid());
        sleep(20);
    }
}