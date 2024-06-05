#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char a[100];
	int n=strlen(a);
	for(int i=0;i<n;i++){
		scanf("%c",&a[i]);
		if(isdigit(a[i])){
			printf("%c\n",a[i]);
			break;
		}
	}
}