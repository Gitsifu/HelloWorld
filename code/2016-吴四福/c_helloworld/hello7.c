#include <stdio.h>
//十进制输出 
int main(void){
	int i;
	for(i=0;i<10;i++){
		putchar(72);//H 110、48
		putchar(101);//e 145、65
		putchar(108);//l 154、6c
		putchar(108);//l 154、6c
		putchar(111);//o 157 6f
		putchar(32);// 空格  40 20
		putchar(87);//W 127 57
		putchar(111);//o 157 6f
		putchar(114);//r 162 72
		putchar(108);//l 154、6c
		putchar(111);//d 144 64
		printf("\n");
	}
	return 1;
}
