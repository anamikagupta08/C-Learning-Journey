#include <stdio.h>

int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int reverse_n0 = 0;
    int original = n;
    while( n != 0){
     int last_digit = n%10;
     reverse_n0 = reverse_n0*10 + last_digit;
     n= n/10;
    }
    int sum = original + reverse_n0;
    printf(" sum of  original number and reverse number is: %d", sum);

    return 0;
}