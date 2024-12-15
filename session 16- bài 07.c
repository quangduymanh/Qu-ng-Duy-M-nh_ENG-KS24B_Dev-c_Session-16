#include <stdio.h>
void sapXepMang(int*arr,int size){
    for (int*p1=arr;p1<arr+size-1;p1++){
        for (int*p2=arr;p2<arr+size-1-(p1-arr);p2++){
            if (*p2>*(p2+1)){
                int temp=*p2;
                *p2=*(p2+1);
                *(p2+1)=temp;
            }
        }
    }
}
void inMang(int*arr,int size){
    for (int *ptr=arr;ptr<arr+size;ptr++){
        printf("%d",*ptr);
    }
}
int main(){
    int mang[]={6,3,2,1,8,4};
    int size=sizeof(mang)/sizeof(mang[0]);
    printf("Mang ban dau:");
    inMang(mang,size);
    sapXepMang(mang,size);
    printf("Mang sau khi xep:");
    inMang(mang,size);
    return 0;
}
