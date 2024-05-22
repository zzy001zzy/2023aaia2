#include <stdio.h>
int main(){
	int n;
	int ans=0;
	while(n>0){
		scanf("%d",&n);
		if(n!=0) ans+=1;
	}
	printf("%d",ans);
}