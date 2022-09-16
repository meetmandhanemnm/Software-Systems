// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 1. Create the following types of a files using (i) shell command (ii) system call
//    b. hard link (link system call)

#include <stdlib.h>
#include <unistd.h>

int main(void) {
	link("abc.txt","hrdlnk");
	perror("link return: ");
}
