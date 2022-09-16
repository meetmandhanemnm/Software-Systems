// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 12. Write a program to find out the opening mode of a file. Use fcntl.

#include <fcntl.h>
#include <stdio.h>

void main() {
    int fd = open("abc.txt",O_RDONLY);
    printf("The file is opened in %d mode",fcntl(fd,F_GETFL));
}