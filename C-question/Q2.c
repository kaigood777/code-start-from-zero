#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
    system("pause");
    return 0;
}
