#include <stdio.h>
#include <unistd.h>

void call_ls(){
	char* argv[2];
	argv[0] = "/bin/ls";
	argv[1] = NULL;

	execve(argv[0],argv,NULL);
}

int main(){
	call_ls();
	return 0;
}