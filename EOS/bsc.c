#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
    pid_t p;
    p = fork();

    if(p<0){
        printf("Child creationg unsuccesfull\n");
    }else if(p>0){
        wait(NULL);
        printf("Parent process starts\n");

        for(int i=2;i<=10;i+=2){
            printf("%d ",i);
        }
        printf("Parent process ends\n");
    }else{
        printf("child process starts \n");
        for(int i=1;i<=10;i+=2){
            printf("%d ",i);
        }
        printf("child ends\n");
    }
    return 0;
}