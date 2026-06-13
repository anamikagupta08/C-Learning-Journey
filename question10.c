// sum of digits of a given number
#include <stdio.h>

int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    if(n < 0) n = -n;   // convert negative to positive
    int sum = 0;
    int count = 0;
    while( n!=0){
     int last_digit = n%10;
     sum = sum + last_digit;
     n =  n/10; 
    }

    printf(" sum of given number is: %d", sum);

    return 0;
}