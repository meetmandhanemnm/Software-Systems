// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 18. Write a program to perform Record locking.
//     a. Implement write lock
// Create three records in a file. Whenever you access a particular record, first lock it then modify/access 
// to avoid race condition.

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct train {
        int ticket;
        int train_num;
        char train_name[50];
    };
    struct train t;
    int fd = open("train_data",O_RDWR);
    printf("Train No.\t\tTrain name\n");
    while(read(fd,&t,sizeof(t))) {
        printf("  %d\t%s\n",t.train_num,t.train_name);
    }
    int train_no=0;
    while(train_no>3 || train_no==0) {
        printf("Enter the train number of the train from the above list:");
        scanf("%d",&train_no);
    }
    struct flock fl;
    fl.l_type = F_WRLCK;
    fl.l_whence = SEEK_SET;
    fl.l_start = sizeof(struct train)*(train_no-1);
    fl.l_len = sizeof(struct train);
    fl.l_pid = getpid();
    printf("Trying to book the ticket\n");
    fcntl(fd,F_SETLKW,&fl);
    lseek(fd,sizeof(struct train)*(train_no-1),SEEK_SET);
    read(fd,&t,sizeof(struct train));
    printf("The current ticket number is: %d\n",t.ticket);
    t.ticket=t.ticket+1;
    printf("Press enter to book the ticket.");
    getchar();
    getchar();
    printf("Here are your journey details: \nTrain No.\t\tTrain name\tTicket number\n%d\t\t\t%s\t\t%d\n",t.train_num,t.train_name,t.ticket);
    lseek(fd,sizeof(struct train)*(train_no-1),SEEK_SET);
    write(fd,&t,sizeof(struct train));
    fl.l_type = F_UNLCK;
    fcntl(fd,F_SETLKW,&fl);
    printf("Thank You for booking :)\nHappy Journey\n");
}