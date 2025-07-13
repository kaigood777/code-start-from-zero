#include <stdio.h>

long f( long n );

int main( void )
{
   long result;
   long number;
   scanf( "%ld", &number );
   if(number<=100){
        result = f( number );
        printf( "F(%ld) = %ld\n", number, result );
   }
   return 0;
}

long f( long n )
{
   if ( n == 0 || n == 1 ) {
      return n;
   }
   else {
      return f( n - 1 ) + f( n - 2 );
   }
}


