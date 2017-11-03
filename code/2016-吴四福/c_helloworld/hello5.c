#include <stdio.h>
//µİ¹éÊä³ö 
int hello(int i);
int main(void){
	int i = 1;
	hello(i);
	return 1;
}
int hello(int i){
	printf("Hello World\n");
	if(i==10){
		exit(0);
	}else{
		return hello(++i);
	}
}
