#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,t,x,b,c,f;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&t);
        b=1;
        c=t;
        x=2*t-1;
        while(b<=(t-3)){
            f=2*b-1;
            for(int i=1;i<c;i++){
                printf(" ");
            }
            for(int i=1;i<=f;i++){
            printf("*");
            }
            for(int i=1;i<c;i++){
                printf(" ");
            }
            printf("\n");
            c--;
            b++;
        }
        for(int i=1;i<=x;i++){
            printf("*");
        }
        printf("\n ");
        for(int i=1;i<=(x-2);i++){
            printf("*");
        }
        printf("\n");
        for(int i=1;i<=x;i++){
            printf("*");
        }
        printf("\n");
        b--;
        c++;
        while(b>0){
            f=2*b-1;
            for(int i=1;i<c;i++){
                printf(" ");
            }
            for(int i=1;i<=f;i++){
            printf("*");
            }
            for(int i=1;i<c;i++){
                printf(" ");
            }
            printf("\n");
            b--;
            c++;
        }
        a--;

    }
    return 0;
}
