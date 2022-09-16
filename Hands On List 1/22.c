// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 22. Write a program, open a file, call fork, and then write to the file by both the child as well as the 
// parent processes. Check output of the file.

#include <unistd.h>
#include <fcntl.h>

void main() {
    int fd = open("file22.txt",O_RDWR|O_CREAT,0777);
    int pid = fork();
    if(pid==0) {
        char buff[50]={"Child process writing"};
        write(fd,buff,sizeof(buff));
    }
    else {
        char buff[50]={"Parent process writing"};
        write(fd,buff,sizeof(buff));
    }
}