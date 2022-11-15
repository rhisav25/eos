#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main(int argc, char *argv[]){

    pid_t pid;
    pid =  fork();

    if(pid < 0){
        printf("Child Creation Failed \n");
        exit(-1);
    }
    else if(pid > 0) {
        wait(NULL);
        printf("Parent Process \n");
    }
    else {
        printf("Child Process With Process ID : %d \n", getpid());
        char *args[] = {"Hello", "C", "Programming", NULL};

        if(execv("./hello", args) == -1){
            printf("execv fails \n");
            exit(-1);
        }
    }
  
return 0;}