#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char *command_path="/bin/ls";
    char *options="-lh";

    printf("-------------------------------Output using execlp():--------------------------------------\n");
    execlp(command_path,command_path,options,NULL);

    return 0;
}
