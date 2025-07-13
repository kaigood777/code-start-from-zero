#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,t,c,k;
    scanf("%d",&x);
    t=0;
    c=2*x-1;
    while(t<x){
    for(int i=0;i<t;i++){
        printf(" ");
        }
    for(int j=1;j<=c;j++){
        printf("*");
        }
    for(int k=0;k<t;k++){
        printf(" ");
        }
    printf("\n");
    t++;
    c=c-2;
    }
    t=t-2;
    c=c+4;
    while(t>=0){
    for(int i=0;i<t;i++){
        printf(" ");
        }
    for(int j=1;j<=c;j++){
        printf("*");
        }
    for(int k=0;k<t;k++){
        printf(" ");
        }
    printf("\n");
    t--;
    c=c+2;
    }
    system("pause");
    return 0;
}
