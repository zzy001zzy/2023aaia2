#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]!='2') printf("%c",a[i]);
	}
	printf("\n");
}