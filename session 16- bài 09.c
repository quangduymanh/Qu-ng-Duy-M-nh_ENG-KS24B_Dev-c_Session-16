#include<stdio.h>
void add(int *arr,int *size,int a,int b){
    if (b<0||b>*size){
        printf("Vi tri sai\n");
        return;
    }
    for (int i = *size; i > b; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[b]=a; 
    (*size)++; 
}
void inmang(int *arr,int size) {
    for (int i=0;i<size;i++) {
        printf("%d",arr[i]);
    }
}
int main() {
    int mang[100] = {71,72,73,74,75}; 
    int size = 5; 
    int a = 25; 
    int b = 2; 
    printf("Mang ban dau:");
    inmang(mang,size);
    add(mang,&size,a,b);
    printf("Mang sau khi them:");
    inmang(mang,size);
    return 0;
}
