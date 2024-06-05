#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int ans=0;
	int max=0;
	for(int i=1;i<=n;i++){
		max+=i;
		ans++;
		if(max>n) break;
	}
	printf("%d",ans);
}