#include <stdio.h>
int main () {
    int a = 10;
    int *b = &a;
    int **f = &b; 

    printf(" %d " , **f );

    return  0 ;

}
  









