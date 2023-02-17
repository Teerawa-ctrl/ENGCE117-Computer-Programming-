#include <stdio.h>

long SumLoop( int ) ;

long SumRecur( int ) ;

int main() {
 printf( "SumLoop(n) = %d\n", SumLoop( 10 ) ) ;
 printf( "SumRecur(n) = %d\n", SumRecur( 10 ) ) ;
 return 0 ;
}//end function

long SumLoop( int n ) {
    int i  ;
    long fac = 1 ;
    //loop factorial
    for ( i = 1 ; i <= n; i++)
    {
        fac *= i ;  
    return fac ;
    }
}//end function

long SumRecur( int n  ) {
    if ( n > 1 )
        return n* SumRecur( n - 1 ) ;
    return 1; 
}//end function