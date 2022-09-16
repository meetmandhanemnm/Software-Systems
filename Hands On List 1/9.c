// Name : Meet Nitin Mandhane
// Roll No. : MT2022061
// 9. Write a program to print the following information about a given file.
//    a. inode
//    b. number of hard links
//    c. uid
//    d. gid
//    e. size
//    f. block size
//    g. number of blocks
//    h. time of last access
//    i. time of last modification
//    j. time of last change

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
    struct stat *S=(struct stat *)malloc(sizeof(struct stat));
    stat("abc.txt",S);
    printf("Inode number: %d\n",S->st_ino);
    printf("Number of hard links: %d\n",S->st_nlink);
    printf("Uid: %d\n",S->st_uid);
    printf("Gid: %d\n",S->st_gid);
    printf("File Size: %d\n",S->st_size);
    printf("Block Size: %d\n",S->st_blksize);
    printf("Number of blocks: %d\n",S->st_blocks);
    printf("Time of last access: %d\n",S->st_atim);
    printf("Time of last modification: %d\n",S->st_mtim);
    printf("Time of last change: %d\n",S->st_ctim);
}