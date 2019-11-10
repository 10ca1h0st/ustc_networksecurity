#include <stdio.h>
#include <unistd.h>

void call_sh(){
	char* argv[2];
	argv[0] = "/bin/sh";
	argv[1] = NULL;

	char* envp[2];
	envp[0] = "test=test";
	envp[1] = NULL;

	execve(argv[0],argv,envp);
}

int main(){
	call_sh();
	return 0;
}