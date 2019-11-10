#include <stdio.h>
#include <unistd.h>

int main(){
	
	char* argv[2];
	argv[0] = "/home/wjm/Desktop/networksecurity/chapter8/test/test_mmap";
	argv[1] = NULL;

	char* envp[2];
	envp[0] = "SHELLCODE=\x2f\x2f\x2f\x2f\x2f\x2f\x2f\x2f\x2f\x2f\x2f\x2f";
	envp[1] = NULL;

	execve(argv[0],argv,envp);
	return 0;


}