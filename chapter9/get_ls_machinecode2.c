#include <stdio.h>

int main(){
	__asm__(
		"xor %rax,%rax;"
		"push %rax;"
		"mov $0x736c2f2f6e69622f,%rax;"
		"push %rax;"
		"push %rsp;"
		"pop %rdi;"
		
		"xor %rdx,%rdx;"

		"xor %rax,%rax;"
		"mov $0x3b,%al;"
		"syscall;");
	return 0;
}