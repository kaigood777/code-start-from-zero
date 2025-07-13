#include<stdio.h>
#include<stdlib.h>

void fn(int a);
int main(){
    int a;
    scanf("%d",&a);
    fn(a);
    return 0;
}
void fn(int a){
    int x=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            x++;
        }
    }
    if(x==0){
        printf("1\n");
    }
    else
        printf("0\n");
}
