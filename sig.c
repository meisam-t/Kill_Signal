#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void killsignal(pid_t); 



int main(int argc, char **argv) {
	//printf(" Fork Pid is : %d  \n ",);
	printf(" Fork Pid is : %d \n ",getpid());
	int arg1 = atoi(argv[1]);
	
	printf("Arg 1 %d  \n", arg1);
	killsignal(arg1);
	return (0);
}

void killsignal(pid_t pid){
	int killsig = kill(pid,SIGTERM);
	if ( killsig== -1 ) {
		perror(" The process was not succesfull\n");
	}
	if (killsig == 0 )
		perror(" Signal killed the process sucessfully \n");
}
 
	
