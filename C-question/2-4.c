#include<stdio.h>
#include<time.h>

int main(){
    int sum;
    for(int i=1;i<=100000000;i++){
        sum=5.6*5.6;
    }
    long x=clock();
    float sec=(float)x/CLK_TCK;
    printf("程式的執行時間:%lf",sec);
    return 0;
}
