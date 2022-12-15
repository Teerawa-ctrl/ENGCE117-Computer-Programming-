#include<stdio.h>   
#include<string.h> 

//return Argument
//past by reference

void GetText (char *text );

int main () {
    char str[20];
    GetText(str);
    printf("\n%s\n", str);
    return 0 ;
}

void GetText( char *text ){
    gets(text);
}