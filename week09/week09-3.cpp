#include <stdio.h>
int main(){
    printf("�п�J10�Ӧr��,���঳�Ů�b�̭�:\n");
    char line[11];
    scanf("%s",line);
    printf("�o�Ӧr�O:%s �̭����r,���O�O:\n");

    for(int i=1;i<11;i++){
        printf("��%d�Ӧr��: %c �������Ʀr�O: %d\n",i,line[i],line[i]);
    }
}
