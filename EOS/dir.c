#include <stdio.h>
#include <dirent.h> 
#include <stdlib.h> 
int main(int argc, char *argv[]) {
DIR* dirp;
struct dirent* direntp;

dirp = opendir(argv[1]);

if(dirp==NULL){
    printf("can't open\n");
    exit(-1);
}else{
    for(;;){
        direntp = readdir(dirp);
        if(direntp==NULL)
        break;
    printf("%s\n",direntp->d_name);
    }
    closedir(dirp);
}
return 0;
}