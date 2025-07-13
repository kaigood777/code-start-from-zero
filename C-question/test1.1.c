#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b,c,x1,x2,s,d,x;
    scanf("%d %d %d",&a,&b,&c);
    s=b*b-4*a*c;
    d=sqrt(s);
    if(d>0){
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("Two different roots x1=%d,x2=%d\n",x1,x2);
    }

    else if(d<0){
        printf("No real root\n");
    }
    else if(d==0){
        x=(-b+d)/(2*a);
        printf("Two same roots x=%d\n",x);
    }
    system("pause");
    return 0;
}
