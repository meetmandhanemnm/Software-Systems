// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 23. Write a program to create a Zombie state of the running program.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main() {
    int pid=fork();
        if(pid==0){
            printf("\nExiting Child Process");
            exit(0);
        }
        else{
            printf("\nParent is sleeping for 10s.");
            sleep(10);
            printf("\nParent is awake now");
        }
}
