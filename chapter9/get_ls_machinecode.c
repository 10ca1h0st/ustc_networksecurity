#include <stdio.h>

int main(){
	__asm__(
		"mov $0x736c2f6e69622f,%rax;"
		"push %rax;"
		"push %rsp;"
		"pop %rdi;"
		
		"xor %rdx,%rdx;"

		"mov $0x3b,%rax;"
		"syscall;");
	return 0;
}