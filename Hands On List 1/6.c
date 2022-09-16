// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls 

#include <unistd.h>
#include <stdio.h>

void main() {
    char buf[10];
    printf("Enter the message to print: \n");
    // fflush(NULL);
    read(0,buf,10);
    printf("The message is: ");
    fflush(NULL);
    write(1,buf,10);
}