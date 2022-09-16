// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 13. Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to 
// verify whether the data is available within 10 seconds or not (check in $man 2 select).

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/select.h>

void main() {
    fd_set fd;
    struct timeval tv;
    int retval;
    FD_ZERO(&fd);
    FD_SET(0,&fd);
    tv.tv_sec=10;
    tv.tv_usec=0;
    printf("Enter a number within 10 sec: \n");
    // fflush(NULL);
    retval=select(1,&fd,NULL,NULL,&tv);
    if(retval) {
        printf("Data entered in 10 sec\nThank you\n");
    }
    else {
        printf("No data entered in 10 sec\nExiting");
    }
}
