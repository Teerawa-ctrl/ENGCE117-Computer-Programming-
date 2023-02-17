#include <stdio.h>

int BinSearch(int data[], int n, int find);

int main() {
    int data[6] = {1, 2, 3, 4, 5, 7};
    int n = 6, find = 5;
    int pos = BinSearch(data, n, find);
    //if index = -1 print not found cause index start at 0
    if (pos == -1) {
        printf("Not found\n");
    } else {
        printf("Found 5 in position %d\n", pos);
    }
    return 0;
}

int BinSearch(int data[], int n, int find) {
    int i , j , m , pos ;
    i = 0 ; 
    j = n - 1 ;
    while ( i < j ) {
        m = ( i + j )/2 ;
        if( data[m] < find ){
            i = m + 1 ;
        }
        else{
            j = m ;
        }
    }
    pos  = (data[i] == find ? i : -1 ) ;
    return pos ;
}


