// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 4. Write a program to open an existing file with read write mode. Try O_EXCL flag also. 

#include <stdio.h>
#include <fcntl.h>

void main() {
    int fd=open("a.txt",O_RDWR);
    printf("%d",fd);
}
