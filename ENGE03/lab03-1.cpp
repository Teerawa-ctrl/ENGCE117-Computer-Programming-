#include<stdio.h>
#include<string.h>

typedef struct {  
    char *name ;
    int age  ;
    float gpa  ;
    char *sex;
}aboutme;

int main(){
    aboutme Myinfo ={"First", 18, 5.00, "Male" };
    printf("\nShow About my self\n");
    printf("Name:%s\n",Myinfo.name);
    printf("Age:%d\n",Myinfo.age);
    printf("Gpa:%f\n",Myinfo.gpa);
    printf("Sex:%s\n",Myinfo.sex);
    return 0;
}


