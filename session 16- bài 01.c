#include<stdio.h>
int main(){
	int a= 20;
	int *ptr=&a;
	printf("gia tri cua a duoc khai bao bang bien la %d\n",a);
	printf("dia chi cua a sau khi duoc khai bao bang bien: %p\n",(void*)&a);
	printf("gia tri cua a sau khi duoc khai bao bang con tro la %d\n",*ptr);
	printf("dia chi cua a sau khi duoc khai bao bang con tro la: %p\n",(void*)ptr);
    return 0;
}
