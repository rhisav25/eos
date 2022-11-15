#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>

int main(int argc, char *argv[]){

    struct stat file;

    stat(argv[1], &file);

    printf("st_uid %d \n", file.st_uid);
    printf("st_gid %d \n", file.st_gid);
    printf("st_blksize %ld \n", file.st_blksize);
    printf("st_blocks %ld \n", file.st_blocks);
    printf("st_size %ld \n", file.st_size);
    printf("st_nlink %ld \n", file.st_nlink);
    printf("st_atime %s \n", ctime(&file.st_atime));
    printf("st_mtime %s \n", ctime(&file.st_mtime));


    printf("File Permissions \n");

    printf((file.st_mode & S_IRUSR)? "r" : "-");
    printf("\n");

    printf((file.st_mode & S_IWGRP)? "w" : "-");
    printf("\n");

    printf((file.st_mode & S_IXOTH)? "x" : "-");

return 0;}