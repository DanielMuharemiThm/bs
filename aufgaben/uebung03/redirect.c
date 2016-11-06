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
	int in = open(arg[1],O_RDONLY, 0640);
	int out = open(arg[2],O_WRONLY | O_CREAT | O_TRUNC, 0640);
	int err = open(arg[3],O_WRONLY | O_CREAT | O_TRUNC, 0640);
	char* argumente;


	argumente[0] = "param1";
	argumente[1] = "param2";
	argumente[2] = "param3";
	argumente[3] = NULL;
	execvp("program", argumente);
    
    return EXIT_SUCCESS;
}
d