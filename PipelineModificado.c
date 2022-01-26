#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>

#define READ 0
#define WRITE 1

int main(){

	pid_t pid;
	int fd[2];
	int random;
	int num = 500;
	char buf[10];

	pipe(fd);
	pid = fork();
	srand(time(NULL));

	switch(pid){
	case 0:
	close(fd[READ]);
	write(fd[WRITE],&random,5);

	if(random<num){
	printf("menor de 500\n");
	}else{ printf("mayor de 500\n");}

	close(fd[WRITE]);    
}
	case -1:
		break;

	default:

	close(fd[WRITE]);
	random = rand()%1001;
	read(fd[READ*. buf, sizeof(buf));
	close(fd[READ]);

}


}