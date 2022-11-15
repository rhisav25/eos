#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    pid_t k;
    k = fork();
    if(k<0){
        printf("Error creating a child process\n");
        exit(-1);
    }else if(k>0){
        printf("The process is running with the id = %d\n",getpid());
    }else{
        printf("The child process is runnnig with id = %d\n",getpid());
        printf("The parent process id is = %d\n",getppid());
        exit(0);
    }
    return 0;
}