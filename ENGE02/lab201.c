#include<stdio.h>   
#include<string.h> 


int main () {
    //กำหนดArray มาเก็บค่า
    char b[6] ;
         b[0] = 'H' ;
         b[1] = 'e' ;
         b[2] = 'l' ;
         b[3] = 'l' ;
         b[4] = 'o' ;
    for ( int i = 0 ; i <= 4 ; i++){    //loop แสดงค่าตำแหน่งarray b
        printf("%c\n", b[i]);

    }
printf("\\0");
    return  0 ;

}