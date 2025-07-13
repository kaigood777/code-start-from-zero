#include <stdio.h>

long fibonacci( long n ); 

int main( void )
{
   long result; 
   long number; 
   printf( "Enter an integer: " );
   scanf( "%ld", &number );
   result = fibonacci( number );
   printf( "Fibonacci( %ld ) = %ld\n", number, result );

   return 0;
}
long fibonacci( long n )
{
   if (n==0) {
      return 0;
   } 
   else if(n==1) {
      return 1;
   }

    else{long a=0,b=1,c;
    for(long i=2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    }
    return c;}
}
