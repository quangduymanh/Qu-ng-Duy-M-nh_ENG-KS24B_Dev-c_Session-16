#include <stdio.h>
int search(int *arr,int size,int valuesearch){
    for (int i = 0; i < size; i++) {
        if (*(arr + i)==valuesearch){
            return i;
        }
    }
    return-1;
}
int main(){
    int mang[]={1,2,4,5,6};
    int size=sizeof(mang)/sizeof(mang[0]);
    int valuesearch=5;
    int vitri=search(mang, size, valuesearch);
    if (vitri!=-1){
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n",valuesearch,vitri);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n",valuesearch);
    }
    return 0;
}
