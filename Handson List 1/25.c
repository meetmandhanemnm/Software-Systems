// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 25. Write a program to create three child processes. The parent should wait for a particular child (use 
// waitpid system call).


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
int n;
printf("Enter the child for which parent has to wait : 1,2 or 3 - ");
scanf("%d",&n);
int child1=fork(),child2,child3,cid1,cid2,cid3,child;
int waitStatus,terminatedChild;

if(child1==0){
	printf("\nchild1 is executing ");
	cid1=getpid();
	sleep(5);
	printf("\nchild1 is awake!! ");
}
else{
	child2=fork();
	if(child2==0){
		printf("\nchild2 is executing ");
		cid2=getpid();
		sleep(10);
		printf("\nchild2 is awake!! ");
		}
	else{
		child3=fork();
		if(child3==0){
			printf("\nchild3 is executing ");
			cid3=getpid();
			sleep(15);
			printf("\nchild3 is awake!! ");
		}
		else{
		if(n==1) child=child1;
		if(n==2) child=child2;
		if(n==3) child=child3;
		terminatedChild=waitpid(child,&waitStatus,0);
			if(terminatedChild==child){
				printf("\nParent waited for child%d !!",n);
			}
			
		
		}
	   }
       
}
return 0;
}
