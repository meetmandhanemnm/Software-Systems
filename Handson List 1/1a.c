// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 1. Create the following types of a files using (i) shell command (ii) system call
//    a. soft link (symlink system call)

#include <unistd.h>

int main(void) {
	symlink("abc.txt","softlnk");
	perror("Link return: ");
}
