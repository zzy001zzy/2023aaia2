#include <stdio.h>
int z=100;
void myFunc(){
    int x=20;
    printf("myFunc()�̪� x: %d z: %d\n",x,z);
    printf("�b���}��,����� x �M z ���]�� 0\n");
    x=0;
    x=0;
}
int main(){
    int x=10;
    printf("main()  �̪� x: %d z: %d\n",x,z);
    myFunc();
    printf("main()  �̪� x: %d z: %d\n",x,z);
}
