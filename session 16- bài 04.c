#include<stdio.h>
void inMang(int*arr,int size){
    for (int i=0;i<size;i++){
        printf("Phan tu trong mang %d: %d\n",i,*(arr+i));
    }
}
int main() {
    int mang[] = {5, 6, 7, 8, 9};
    int kichthuoc = sizeof(mang)/sizeof(mang[0]); 
    inMang(mang, kichthuoc);
    return 0;
}
