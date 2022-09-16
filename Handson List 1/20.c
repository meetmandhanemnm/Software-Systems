// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 20. Find out the priority of your running program. Modify the priority with nice command.

#include <unistd.h>
#include <stdio.h>

void main() {
    int priority=nice(0);
    printf("Priority of program is :%d\n",priority);
    priority=nice(-3);
    printf("Priority of program is :%d\n",priority);
    sleep(10);
}