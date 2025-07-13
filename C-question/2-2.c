#include<stdio.h>
#include<stdlib.h>


int main(){
    int num,max,n9=0,n8=0,n7=0,n6=0,n5=0;
    float avg,sum;
    scanf("%d",&num);
    int sc[num];
    for(int i=0;i<num;i++){
        scanf("%d",&sc[i]);
        sum=sum+sc[i];
    }
    avg=sum/num;
    printf("%.2f\n",avg);
    for(int i=0;i<num;i++){
        if(sc[i]>max){
            max=sc[i];
        }
        if(sc[i]>=90 && sc[i]<=100){
            n9++;
        }
        else if(sc[i]>=80 && sc[i]<=89){
            n8++;
        }
        else if(sc[i]>=70 && sc[i]<=79){
            n7++;
        }
        else if(sc[i]>=60 && sc[i]<=69){
            n6++;
        }
        }
        n5=num-n9-n8-n7-n6;
    for(int i=0;i<num;i++){
        if(sc[i]==max){
            printf("%d\n",i+1);
        }
    }
    printf("A:");
    for(int i=0;i<n9;i++){
        printf("*");

    }
    printf("\nB:");
    for(int i=0;i<n8;i++){
        printf("*");

    }
    printf("\nC:");
    for(int i=0;i<n7;i++){
        printf("*");
    }
    printf("\nD:");
    for(int i=0;i<n6;i++){
        printf("*");
    }
    printf("\nE:");
    for(int i=0;i<n5;i++){
        printf("*");
    }

    return 0;
}

