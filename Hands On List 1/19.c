// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 19. Write a program to find out time taken to execute getpid system call. Use time stamp counter. 

#include <stdio.h>
#include <unistd.h>

long long int readtsc() {
    long long int time;
	__asm__ __volatile__("rdtsc":"=A"(time));
	return time;
}

void main() {
    long long int start, end;
    start = readtsc();
    getpid();
    end = readtsc();
    printf("The time taken by getpid() call is %lld\n",end-start);
}