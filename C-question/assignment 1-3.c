#include<stdio.h>
#include<stdlib.h>

int main(){
    char a='43';
    printf("月份  預計花費 實際花費   結餘\n");
    printf("三月\t48000\t 52000\t %d\n",48000-52000);
    printf("六月\t70000\t 58000  +%d\n",70000-58000);
    printf("九月\t52000\t 56000\t %d\n",52000-56000);
    printf("十二月  50000\t 48000\t +%d\n",50000-48000);
system("pause");
return 0;
}
