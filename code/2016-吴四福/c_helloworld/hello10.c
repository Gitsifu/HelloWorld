#include <stdio.h>
//十六进制输出 Hello World 
int main(void){
	int i;
	for(i=0;i<10;i++){
		putchar(0x48);//H 110、48
		putchar(0x65);//e 145、65
		putchar(0x6c);//l 154、6c
		putchar(0x6c);//l 154、6c
		putchar(0x6f);//o 157 6f
		putchar(0x20);// 空格  40 20
		putchar(0x57);//W 127 57
		putchar(0x6f);//o 157 6f
		putchar(0x72);//r 162 72
		putchar(0x6c);//l 154、6c
		putchar(0x64);//d 144 64
		printf("\n");
	}
	return 1;
}
