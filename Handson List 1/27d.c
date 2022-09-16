#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char *args[]={"/bin/ls","-lh","2.c"};

    printf("-------------------------------Output using execv():--------------------------------------\n");
    execv(args[0],args);

return 0;
}
