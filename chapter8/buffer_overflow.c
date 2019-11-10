#include <stdio.h>
#include <string.h>

void foo1(){
	char buff[16];
	char Lbuffer[] = "01234567890123456789========ABCD";
	strcpy(buff,Lbuffer);

}

char Lbuffer[] = "01234567890123456789========ABCD";
void foo2(){
	char buff[16];
	strcpy(buff,Lbuffer);
}

void foo3(){
	char Lbuffer[] = "01234567890123456789========ABCD";
	char buff[16];
	
	strcpy(buff,Lbuffer);

}

int main(int argc,char* argv[]){
	//foo1();
	//foo2();
	foo3();
	return 0;
}