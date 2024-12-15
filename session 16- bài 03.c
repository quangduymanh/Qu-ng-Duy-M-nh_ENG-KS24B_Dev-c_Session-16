#include<stdio.h>
void sum(int *a,int *b,int *ketqua){
	*ketqua=*a+*b;
}
int main(){
	int x=19;
	int y=39;
	int ketqua=0;
	sum(&x,&y,&ketqua);
	printf("tong cua hai so %d va %d: %d\n",x,y,ketqua);
	return 0;
}
