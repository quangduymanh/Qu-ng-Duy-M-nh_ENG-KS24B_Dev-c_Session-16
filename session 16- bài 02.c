#include<stdio.h>
int main(){
    int a=8;  
    int b=14; 
    printf("Truoc khi doi: a = %d, b = %d\n",a,b);
    int *ptrA=&a; 
    int *ptrB=&b; 
    int temp=*ptrA; 
    *ptrA=*ptrB;    
    *ptrB=temp;     
    printf("Sau khi doi: a = %d, b = %d\n",a,b);
    return 0;
}
