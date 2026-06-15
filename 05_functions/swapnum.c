// swapping two numbers
#include <stdio.h> 

int main(){
    int a;
    printf("enter a : ");
    scanf("%d", &a);
     int b;
    printf("enter b : ");
    scanf("%d", &b);
    /*int temp;
    temp = a;
    a = b;
    b = temp;*/
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" value of a and b is : %d %d", a,b);
    return 0;
}