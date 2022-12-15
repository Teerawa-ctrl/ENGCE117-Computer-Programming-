#include<stdio.h>   
#include<string.h> 

//dynamic array

void GetText (char **text );

int main () {
    char *str;
    for(int i = 0 ;i<= 3 ; i++ ){
    	GetText(&str);
    	printf("\n Text output : %s\n", str);
	}
    return 0 ;
}

void GetText( char **text ){
    *text = new char [15];
    gets(*text);
}