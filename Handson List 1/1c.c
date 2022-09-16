// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 1. Create the following types of a files using (i) shell command (ii) system call
//    c. FIFO (mkfifo Library Function or mknod system call)

#include <unistd.h>
#include <fcntl.h>

int main(void) {
	mknod("myfifo",0666|S_IFIFO,0);
	perror("Result: ");
}
