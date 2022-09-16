// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call

#include <stdio.h>
#include <fcntl.h>

void main() {
    int fd = creat("a.txt",O_RDWR);
    printf("fd = %d",fd);
}