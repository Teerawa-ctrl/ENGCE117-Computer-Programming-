#include<stdio.h>
#include <math.h> 

int main () {
    int n ;
    int sum = 0 ;
    int count ;
    

    printf("User Input ") ;
    scanf( "%d" , &n ) ;

    for( int i = 1 ; i<=n ; i++)  { 
        count = 1 ;
        for ( int j = 1 ; j<=i ; j++ )  {

            count = count*10 ;

        }                                                
        printf( " %d  " ,  count -1   ) ;
        if(i != n ) 
            printf(" + ") ;
        
        sum = count +  sum-1    ;
        
    }

    printf("\n SUM = %d ", sum) ;
}
    
 