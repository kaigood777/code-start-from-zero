#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    float s;
    printf("請輸入對戰時間:");
    scanf("%d",&a);
    if(a>=0 && a<=10000){
        if(a<=120){
            s=(2.1)*a;
            printf("%f\n",s);
        }
        else if(a>=121 && a<=330){
            b=a-120;
            c=2.1*120;
            printf("%f\n",c+3.02*b);
        }
        else if(a>=331 && a<=500){
            b=a-330;
            c=2.1*120+3.02*210;
            printf("%f\n",c+4.39*b);
        }
        else if(a>=501 && a<=700){
            b=a-500;
            c=2.1*120+3.02*210+4.39*170;
            printf("%f\n",c+4.97*b);
        }
        else if(a>=701 && a<=1000){
            b=a-700;
            c=2.1*120+3.02*210+4.39*170+4.97*200;
            printf("%f\n",c+5.63*b);
        }
        else if(a>1000){
            printf("RIP!!\n");
        }
    }
    else
        printf("Get out!!\n");
    system("pause");
    return 0;
}
