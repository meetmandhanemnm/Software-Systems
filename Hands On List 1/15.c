// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 15. Write a program to display the environmental variable of the user (use environ).

#include <unistd.h>
#include <stdio.h>

void main() {
    extern char **environ;
    char **p=environ;
    while(*p!=NULL) {
        printf("%s\n",*p);
        p++;
    }
}