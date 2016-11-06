#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char* argv[]) {
	int fd;
    if( (fd = open(argv[1], O_RDONLY, 0640)) < 0){
        fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0640);
    }else {
    	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0640);
    }
    close(fd);
    return EXIT_SUCCESS;
}
d