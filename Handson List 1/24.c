// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 24. Write a program to create an orphan process.

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){

	int pid=fork();
	if(pid>0){
		//Parent process
		printf("\nParent executing !!");
	}
	else if(fork_val==0)
	{
		//Child process
		printf("\nPutting child process to sleep for 20 sec");
		sleep(20);
		printf("\nChild is awake now");
	}
	return 0;
}