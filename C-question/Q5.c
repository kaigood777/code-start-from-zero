#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,f;
    scanf("%d %d",&x,&y);
    float a[x][y],sump[x],sumc[y],max;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%f",&a[i][j]);
        }
    }
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            sump[i]=sump[i]+a[i][j];
        }
        printf("%.2f ",sump[i]/y);
    }
    printf("\n");
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            sumc[i]=sumc[i]+a[j][i];
        }
        printf("%.2f ",sumc[i]/x);
    }
    printf("\n");
    max=0;
    for(int i=0;i<x;i++){
        if(sump[i]>max){
            max=sump[i];
        }
    }
    for(int i=0;i<x;i++){
        if(sump[i]==max){
            printf("%d\n",i+1);
        }
    }
    for(int i=0;i<x;i++){
        if((sump[i]/y)<60){
            f++;
        }
    }
    printf("%d\n",f);
    return 0;
}

