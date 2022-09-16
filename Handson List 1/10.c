// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10 
//     bytes (use lseek) and write again 10 bytes. 
//      a. check the return value of lseek
//      b. open the file with od and check the empty spaces in between the data. 

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include<sys/types.h>

void main() {
    int fd = open("abc.txt",O_RDWR|O_CREAT,0777);
    char x;
    int count=10;
    printf("Enter 10 charaters to write to the file: ");
    while(count--) {
        scanf("%c",&x);
        write(fd,&x,1);
    }
    count=10;
    int seek_ret;
    seek_ret=lseek(fd,10,SEEK_CUR);
    printf("Value returned by lseek= %d",seek_ret);
    while(count--) {
        scanf("%c",&x);
        write(fd,&x,1);
    }
    
}