// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 17. Write a program to simulate online ticket reservation. Implement write lock 
// Write a program to open a file, store a ticket number and exit. Write a separate program, to 
// open the file, implement write lock, read the ticket number, increment the number and print 
// the new ticket number then close the file.

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    struct ticket {
        int tnum;
    };
    struct ticket t;
    int fd = open("ticket.txt",O_RDWR);
    struct flock fl;
    fl.l_type = F_WRLCK;
    fl.l_whence = SEEK_SET;
    fl.l_start = 0;
    fl.l_len = 0;
    fl.l_pid = getpid();
    printf("Trying to read the file\n");
    fcntl(fd,F_SETLKW,&fl);
    read(fd,&t.tnum,1);
    printf("The current ticket number is: %c\n",t.tnum);
    t.tnum=t.tnum+1;
    printf("Press enter to increment the ticket number.");
    getchar();
    printf("The updated ticket number is: %c\n",t.tnum);
    lseek(fd,0,SEEK_SET);
    write(fd,&t.tnum,1);
    fl.l_type = F_UNLCK;
    fcntl(fd,F_SETLKW,&fl);
    printf("Thank You\n");
}