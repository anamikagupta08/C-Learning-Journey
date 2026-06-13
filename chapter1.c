#include <stdio.h> 

int main(){
    int dividend;
    int divisor;
    printf("enter dividend\n");
    scanf("%d", &dividend);
    printf("enter divisor\n");
    scanf("%d", &divisor);
    int quotient = dividend/divisor;
    int remainder = dividend - (divisor* quotient);
    printf("remainder of given number is : %d", remainder);   
     return 0;
}