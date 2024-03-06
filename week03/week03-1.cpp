#include <stdio.h>
int main()
{
	printf("請輸入兩個數字:");
	int a,b;
	scanf("%d %d",&a,&b);//課本ch6-16
	printf("%5d\n",a);
	printf("%5d\n",b);
	printf("--------\n");
	printf("%5d\n",a+b);
}
