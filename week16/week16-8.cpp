#include <stdio.h>
int main(){
	int a[1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=0;i--){
		if(a[i]%2==1) printf("%d ",a[i]);
	}
}