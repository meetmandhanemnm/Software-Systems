// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 11. Write a program to open a file, duplicate the file descriptor and append the file with both the 
// descriptors and check whether the file is updated properly or not.
//  a. use dup

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void main() {
    int fd = open("abc.txt",O_WRONLY);
    char arr[10] = {"abcdefghij"};
    int new_fd = dup(fd);
    write(fd,arr,10);
    printf("New fd is: %d",new_fd);
    write(new_fd,arr,10);
}