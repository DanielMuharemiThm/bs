#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (void) {
    pid_t child1,child2;
    child1 = fork();    
    if(child1 == 0){
        printf("%d",child1);
        execlp("xterm","xterm","-bg","red",NULL);
        exit(0);
    }else{
        wait(NULL);
    }
    
    child2 = fork();
    printf("%d",child2);
    if(child2 == 0){
        execlp("xterm","xterm","-bg","blue",NULL);
        exit(0);
    }else{
        wait(NULL);
    }
    //execlp("xterm","xterm","-bg","red",NULL);
    //execlp("xterm","xterm","-bg","blue",NULL);   
    
    
    return EXIT_SUCCESS;
}