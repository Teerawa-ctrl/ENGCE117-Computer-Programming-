#include<stdio.h>   
#include<string.h> 

//past by value

char *GetText();

int main () {
    char str[20];
    strcpy(str, GetText () ) ;
    printf("\n Text output : %s\n", str);
    return 0 ;
}

char *GetText(){
    char *text = new char[20];
    gets(text);
    return text ;
}