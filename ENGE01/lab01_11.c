#include <stdio.h>

int main () {
    int g[3][5]  = {
        { 10, 20, 30, 40, 50 } ,
        { 11, 21, 31, 41, 51 } ,
        { 12, 22, 32, 42, 52 } 

    } ;

    for(int a = 0 ; a <3 ; a++ ){
        for( int b = 0 ; b < 5 ; b++)
            printf("%d", g[a][b]);
        printf("\n");
    }
    
    printf("\n-----------------------\n") ;

    int (*a)[5] = g ;

    a[1][4] = 99;

    for( int a = 0 ; a < 3 ; a++){
        for( int b = 0 ; b < 5 ; b++ )
            printf("%d" , g[a][b] );
        printf("\n");
    }

    return 0 ;

}