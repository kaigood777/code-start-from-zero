#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,h,area;
    printf("請輸入梯形的上底(公分):");
    scanf("%8f",&a);
    printf("請輸入梯形的下底(公分):");
    scanf("%8f",&b);
    printf("請輸入梯形的高(公分):");
    scanf("%8f",&h);
    area=(a+b)*h/2;
    printf("梯形的面積:%8f 平方公分\n",area);
    system("pause");
    return 0;
}
