#include<stdio.h>
#include<stdlib.h>

int main(){
	int cn,stn;
	scanf("%d %d",&cn,&stn);
	if(cn>0 && cn<=45){
		for(int i=1;i<=cn;i++){
			printf("%d: %d\n",i,(stn+i));
		}
	}
	else
		printf("Error\n");
    system("pause");
	return 0;
}
