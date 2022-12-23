#include<stdio.h>

struct Student {
    char name [25] ;
    int  Age ;
    float GPA ;
    char Sex ; 
};

typedef struct Student stds;

int main (){
    struct Student aboy;
    stds agirl ;
    aboy.Age = 10;
    agirl.Age = 25;
    printf(" show Age of boy&girl:\n");
    printf(" %d %d ",aboy.Age,agirl.Age); 
    return 0 ;    
}
