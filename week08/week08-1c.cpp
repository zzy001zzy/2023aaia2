#include <stdio.h>
int main(){
    printf("�п�J�j�p:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<10;i++){
        int space = i,star=n;
        for(int k=1;k<=space;k++) printf(" ");
        for(int k=1;k<=star;k++) printf("*");
        printf("i:%d\n",i);
    }
}
