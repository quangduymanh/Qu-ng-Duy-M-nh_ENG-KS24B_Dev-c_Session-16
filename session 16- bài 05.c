#include <stdio.h>
int updatevalue(int *arr,int a,int b,int c){
    if (b>=0&&b<c){
        *(arr+b)=a;
        return 1; 
    }
    return 0;  
}
void inmang(int *arr,int c){
    for (int i=0;i<c;i++){
        printf("%d",*(arr+i));
    }
}
int main() {
    int mang[]={4, 15, 30, 80, 90};
    int c=sizeof(mang)/sizeof(mang[0]);
    printf("Mang ban dau:");
    inmang(mang, c);
    int b=2,a=100;
    if (updatevalue(mang, a,b,c)){
        printf("Mang sau update:");
        inmang(mang,c);
    } else {
        printf("Vi tri sai:\n");
    }
    return 0;
}
