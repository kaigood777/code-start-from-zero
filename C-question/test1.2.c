#include<stdio.h>
#include<stdlib.h>

int main(){
    int oc,lv,x;
    scanf("%d %d",&oc,&lv);
    x=0;
    if(oc==0){
        printf("%d\n",x);
    }
    else if(oc==2){
        if(lv<30){
            x=1+(lv-8)*3;
            printf("%d\n",x);
        }
        else if(lv>=30 && lv<70){
            x=2+(lv-8)*3;
            printf("%d\n",x);
        }
        else if(lv>=70 && lv<120){
            x=3+(lv-8)*3;
            printf("%d\n",x);
        }
        else if(lv>=120 && lv<=200){
            x=6+(lv-8)*3;
            printf("%d\n",x);
        }
    }
    else if(oc!=0 && oc!=2){
        if(lv<30){
            x=1+(lv-10)*3;
            printf("%d\n",x);
        }
        else if(lv>=30 && lv<70){
            x=2+(lv-10)*3;
            printf("%d\n",x);
        }
        else if(lv>=70 && lv<120){
            x=3+(lv-10)*3;
            printf("%d\n",x);
        }
        else if(lv>=120 && lv<=200){
            x=6+(lv-10)*3;
            printf("%d\n",x);
        }
        }

    system("pause");
    return 0;


}
