#include <stdio.h> 
#include<string.h>
int main(){
typedef struct person{
    char name[30];
    float salary;
    int age;
} person;
person a,b,c;
strcpy(a.name, "anu");
a.salary = 7500.78;
a.age = 21;

b=a; // b mai a ka sara content aa gya (deep copy)
strcpy(b.name, "ankit");
printf("%d", b.age);
return 0;
}
