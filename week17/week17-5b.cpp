#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	char b[100];
	int ans;
	scanf("%s%s",a,b);
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1>n2) ans=1;
	else if(n1<n2) ans=-1;
	else ans=strcmp(a,b);
	printf("%d",ans);
}