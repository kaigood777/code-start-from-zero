#include <stdio.h>

int main () {
	FILE*input;
	input=fopen("FitTarget2024.txt","r");
	double x[90] ;
	double y[90] ;
	int i  ;
	for ( i = 0 ; i < 90 ; i ++){

	 fscanf(input,"%lf %lf",&x[i],&y[i]);
}
    double x_ = 0, x_2 = 0  , x_3 =0,x_4=0 , y_=0 , xy=0 , x_2y =0;
    double n =35 ;
    double a0 , a1 , a2 ;
	for ( i = 0 ; i < 35 ; i++){
		x_ = x_ + x[i];
	}
    for ( i = 0 ; i < 35 ; i++) {
    	 x_2 = x_2 + x[i]*x[i] ;
	}
	for ( i= 0 ; i < 35 ; i ++){
		 x_3 = x_3 + x[i]*x[i]*x[i];
	}
	for ( i= 0 ; i < 35 ; i++){
		x_4 = x_4 + x[i]*x[i]*x[i]*x[i] ;
	}

	for ( i= 0 ; i < 35 ; i ++){
		y_ = y_ + y[i] ;
	}
	 for ( i= 0 ; i < 35 ; i++){
	 	xy = xy + x[i]*y[i] ;
	 }
	  for ( i= 0 ; i < 35 ; i ++){
	  	x_2y = x_2y +x[i]*x[i]*y[i];
	  }
 a0 = (y_*x_2*x_4+xy*x_3*x_2+x_2y*x_*x_3-x_2y*x_2*x_2-xy*x_*x_4-x_3*x_3*y_)/(n*x_2*x_4+x_*x_3*x_2+x_2*x_*x_3-x_2*x_2*x_2-x_*x_*x_4-n*x_3*x_3);
 a1 = (n*xy*x_4+x_*x_2y*x_2+y_*x_3*x_2-xy*x_2*x_2-x_*y_*x_4-x_3*x_2y*n)/(n*x_2*x_4+x_*x_3*x_2+x_2*x_*x_3-x_2*x_2*x_2-x_*x_*x_4-n*x_3*x_3);
 a2 = (n*x_2*x_2y+x_*x_3*y_+x_*xy*x_2-x_2*y_*x_2-x_*x_*x_2y-n*x_3*xy)/(n*x_2*x_4+x_*x_3*x_2+x_2*x_*x_3-x_2*x_2*x_2-x_*x_*x_4-n*x_3*x_3);
 printf("\n\n a0=%lf ",a0);
 printf("a1=%lf ",a1);
 printf("a2=%lf\n",a2);
 printf("%lf\n",a2);
 printf("%lf\n",a1/(2*a2));
	fclose(input);
	return 0;

 }
