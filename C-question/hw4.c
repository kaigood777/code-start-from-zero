#include <stdio.h>
#include<stdbool.h>
#define SIZE 10

int main( void )
{
   int x=SIZE;
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int pass; 
   int i; 
   int hold; 
    bool swap;
   printf( "Data items in original order\n" );

   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } 

   for ( pass = 1; pass < SIZE; pass++ ) {
        swap=false;
      for ( i = 0; i < x - 1; i++ ) {
         if ( a[ i ] > a[ i + 1 ] ) {
            hold = a[ i ];
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
            swap = true;
         } 

      } 
      x--;
      if (!swap) {
            break;
   }
   } 

   printf( "\nData items in ascending order\n" );

   for ( i = 0; i < SIZE; i++ ) {
      printf( "%4d", a[ i ] );
   } 

   printf( "\n" );
   return 0; 
} 
