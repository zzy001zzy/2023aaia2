#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=1;
	while(n>0){
		printf("%d ",n%10*m);
		n/=10;
		m*=10;
	}
}