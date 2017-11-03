#include <stdio.h>
//八进制输出 Hello World 
int main(void){
	int i;
	for(i=0;i<10;i++){
		putchar(0110);//H 110、48
		putchar(0145);//e 145、65
		putchar(0154);//l 154、6c
		putchar(0154);//l 154、6c
		putchar(0157);//o 157 6f
		putchar(040);// 空格  40 20
		putchar(0127);//W 127 57
		putchar(0157);//o 157 6f
		putchar(0162);//r 162 72
		putchar(0154);//l 154、6c
		putchar(0144);//d 144 64
		printf("\n");
	}
	return 1;
}
