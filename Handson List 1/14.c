// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 14 Write a program to find the type of a file.
//    a. Input should be taken from command line.
//    b. program should be able to identify any type of a file.

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

void main() {
    char arr[100];
    printf("Enter the path of file:");
    scanf("%s",arr);
    struct stat statvar;
    stat(arr,&statvar);
    switch(statvar.st_mode & S_IFMT) {
        case(S_IFSOCK):
            printf("It is a socket file");
            break;
        case(S_IFLNK):
            printf("It is a symbolic link");
            break;
        case(S_IFREG):
            printf("It is a regular file");
            break;
        case(S_IFBLK):
            printf("It is a block device");
            break;
        case(S_IFDIR):
            printf("It is a directory");
            break;
        case(S_IFCHR):
            printf("It is a character device");
            break;
        case(S_IFIFO):
            printf("It is a FIFO");
            break;
    }
}