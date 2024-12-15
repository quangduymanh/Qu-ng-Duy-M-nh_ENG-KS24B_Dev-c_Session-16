#include<stdio.h>
#include<string.h>
void daonguoc(char *p1,char *p2){
    int length=strlen(p1);
    for (int i=0;i<length;i++){
        *(p2+i)=*(p1+length-1-i);
    }
    *(p2+length)='\0';
}
int main() {
    char inputString[1000],reverseString[1000];
    printf("Nhap chuoi:");
    fgets(inputString,sizeof(inputString),stdin);
    size_t length=strlen(inputString);
    if (inputString[length-1]=='\n'){
        inputString[length-1]='\0';
    }
    daonguoc(inputString,reverseString);
    printf("Chuoi ban dau: %s\n",inputString);
    printf("Chuoi dao nguoc: %s\n",reverseString);
    return 0;
}
