// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 7. Write a program to copy file1 into file2 ($cp file1 file2).

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void main() {
    int fd=open("abc.txt",O_RDONLY);
    int fd1=open("abc_copy.txt",O_CREAT|O_WRONLY,0777);
    char *a=(char *)malloc(sizeof(char));
    while(read(fd,a,1)) {
        write(fd1,a,1);
    }
    close(fd);
    close(fd1);
}