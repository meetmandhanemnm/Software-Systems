#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
struct train {
   int ticket;
   int train_num;
   char train_name[50];
};
int main () {
   int of= open ("train_data", O_RDWR);
   struct train inp1,inp2,inp3;
   inp1.train_num = 1;
   inp2.train_num = 2;
   inp3.train_num = 3;
   strcpy(inp1.train_name,"Howrah express");
   strcpy(inp2.train_name,"Rajdhani express");
   strcpy(inp3.train_name,"Garibrath express");
   inp1.ticket=0;
   inp2.ticket=0;
   inp3.ticket=0;
   write (of,&inp1, sizeof(struct train));
   write (of,&inp2, sizeof(struct train));
   write (of,&inp3, sizeof(struct train));
   lseek(of,0,SEEK_SET);
   struct train t;
   printf("Train No.\tTicket no.\n");
    while(read(of,&t,sizeof(t))) {
        printf("  %d\t\t%d\n",t.train_num,t.ticket);
    }
}