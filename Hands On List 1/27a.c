#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char *command_path="/bin/ls";
    char *options="-Rl";
    char *arg="2.c";
    printf("-------------------------------Output using execl():--------------------------------------\n");
    execl(command_path,command_path,options,arg,NULL);

return 0;
}
