#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<n;i++){
		if(i*i==n) ans=i;
	}
	printf("%d",ans);
}