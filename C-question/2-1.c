#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,lw,sam,h;
    scanf("%d",&num);
    int sc[num];
    for(int i=0;i<num;i++){
        scanf("%d",&sc[i]);
    }
    for(int i=1;i<num;i++){
        if(sc[i]<sc[0]){
            lw++;
        }
        else if(sc[i]==sc[0]){
            sam++;
        }
        else{
            h++;
        }
    }
    printf("%d \n%d \n%d \n",lw,sam,h);
    system("pause");
    return 0;
}
