#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int rn[3],gs,bt,sum;
    float te,wp;
    srand(time(0));
    for(int j=1;j<=1000;j++){
        bt=rand()%2;
        for(int i=0;i<=2;i++){
            rn[i]=rand()%6+1;
            sum=sum+rn[i];
        }
        switch (sum){
            case 5:
            case 7:
            case 9:
            case 11:
            case 13:
            case 15:
            case 17:
                if(bt==1){
                    te++;
                }
            case 4:
            case 6:
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
                if(bt==0){
                    te++;
                }
        }
        if(rn[0]==rn[1] && rn[1]==rn[2]){
            te--;
        }


    }
    wp=te/1000;
    printf("%f",wp);
    return 0;
}
