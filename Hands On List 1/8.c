// Name : Meet Nitin Mandhane
// Roll No. : MT2022061 
// 8. Write a program to open a file in read only mode, read line by line and display each line as it is read. 
// Close the file when end of file is reached.

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
    int fd = open("abc.txt",O_RDONLY);
    char str[100];
    char *a=(char*)malloc(sizeof(char));
    int i=0;
    while(read(fd,a,1)) {
        if(*a=='\n') {
            str[i]='\0';
            printf("%s",str);
            getchar();
            i=0;
        }
        else {
            str[i++]=*a;
        }
    }
    str[i]='\0';
    printf("%s\n",str);
}