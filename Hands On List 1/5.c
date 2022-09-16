// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 5. Write a program to create five new files with infinite loop. Execute the program in the background 
// and check the file descriptor table at /proc/pid/fd.

#include <stdio.h>
#include <fcntl.h>

void main() {
    int fd1 = creat("a.txt",O_RDWR);
    printf("fd = %d",fd1);
    int fd2 = creat("b.txt",O_RDWR);
    printf("fd = %d",fd2);
    int fd3 = creat("c.txt",O_RDWR);
    printf("fd = %d",fd3);
    int fd4 = creat("d.txt",O_RDWR);
    printf("fd = %d",fd4);
    int fd5 = creat("e.txt",O_RDWR);
    printf("fd = %d",fd5);
    getchar();
}