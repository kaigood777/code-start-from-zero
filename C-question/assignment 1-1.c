#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,h,area;
    printf("�п�J��Ϊ��W��(����):");
    scanf("%8f",&a);
    printf("�п�J��Ϊ��U��(����):");
    scanf("%8f",&b);
    printf("�п�J��Ϊ���(����):");
    scanf("%8f",&h);
    area=(a+b)*h/2;
    printf("��Ϊ����n:%8f ���褽��\n",area);
    system("pause");
    return 0;
}
