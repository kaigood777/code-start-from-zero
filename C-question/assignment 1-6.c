#include<stdio.h>
#include<stdlib.h>

int main(){
	int r,m,n,t,x;
	x=0;
	scanf("%d %d %d",&r,&m,&n);
	if(r>m){
	printf("S");
	for(int i=m;i<=r;i=i+m){
        x=x+1;
        printf("T");

        if(x%n==0){
            printf("X");
            r=r-m;
        }


	}
	printf("\n");
	}
	else{
        printf("Bumbler government is not a necessary evil. It is just evil.\n");
	}
	system("pause");
	return 0;
}
