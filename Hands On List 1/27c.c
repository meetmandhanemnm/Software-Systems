#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char *command_path="/bin/ls";
    char *options="-lR";


    printf("-------------------------------Output using execle():--------------------------------------\n");
    execle(command_path,command_path,options,NULL);

return 0;
}
