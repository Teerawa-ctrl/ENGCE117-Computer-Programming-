#include<stdio.h>   
#include<string.h> 

//dynamic array

void GetText (char **text );

int main () {
    char *str;  //ยังไม่กำหนดค่า ไว้กำหนดค่าชั่วคราวที่Functionแบบชั่วคราว
    GetText(&str);
    printf("\n Text output : %s\n", str);
    return 0 ;
}

void GetText( char **text ){
    *text = new char [20];
    gets(*text);
}