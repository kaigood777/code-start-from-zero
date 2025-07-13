#include<stdio.h>
int main(){
int score[6]={65,73,45,9,79,52};
int x,y;
for(int j=1;j<=5;j++){
for(int i=0;i<=5;i++){
    if(*(score+i-1)>*(score+i)){
         x=*(score+i-1);
        *(score+i-1)=*(score+i);
        *(score+i)=x;
    }
}
}
for(int i=0;i<=5;i++){
printf("%d ",*(score+i));
}
return 0;
}

