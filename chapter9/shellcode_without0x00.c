#include <stdio.h>

char badshellcode[] = "\x48\x31\xc0"
                      "\x50"
					  "\x48\xb8\x2f\x62\x69\x6e\x2f\x2f\x6c\x73"
					  "\x50"
					  "\x54"
					  "\x5f"
					  "\x48\x31\xd2"
					  "\x48\x31\xc0"
					  "\xb0\x3b"
					  "\x0f\x05";
int main(){
	(*(void (*)())badshellcode)();
	return 0;
}