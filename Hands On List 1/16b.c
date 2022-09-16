// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 16. Write a program to perform mandatory locking.
//      b. Implement read lock

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

void main() {
    int fd = open("person",O_RDWR);
    struct flock fl;
    fl.l_type = F_WRLCK;
    fl.l_whence = SEEK_SET;
    fl.l_start = 0;
    fl.l_len = 0;
    fl.l_pid = getpid();
    printf("Trying to enter in critical section\n");
    fcntl(fd,F_SETLKW,&fl);
    printf("Inside critical section\n");
    printf("Press enter to exit critical section.");
    getchar();
    fl.l_type = F_UNLCK;
    fcntl(fd,F_SETLKW,&fl);
    printf("Exiting critical section\n");
}