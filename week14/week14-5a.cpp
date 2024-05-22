#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char a[100];
	scanf("%s",&a);
	int n=strlen(a);
	int ans=0;
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
		if(isdigit(a[i])) ans+=1;
	}
	printf("%d\n",ans);
} 