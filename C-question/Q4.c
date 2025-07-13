#include<stdio.h>
#include<stdlib.h>

int main(){
    int le,a,x,k,w;

    scanf("%d",&le);
    scanf("%d",&k);
    int b[le];
    for(int i=0;i<le;i++){
        scanf("%d",&a);
        b[i]=a;
    }
    while(k>0){
        w=0;
        scanf("%d",&x);
        for(int i=0;i<le;i++){
            if(b[i]==x){
                printf("%d\n",i+1);
                w++;
            }
        }
        if(w==0){
            printf("0");
        }
        k--;

    }
    return 0;
}

