#include <stdio.h>
int main(){
    printf("�п�J�j�p: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int star=n;
        for(int k=1;k<=star;k++) printf("*");
        printf("\n");
    }
}
