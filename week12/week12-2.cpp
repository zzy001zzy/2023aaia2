#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
        else return 1;
    }
}

int main(){
    printf("�п�J�@�Ӽ�:");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)) printf("%d ",i);
    }
}
