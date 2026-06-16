#include <stdio.h> 
int factorial(int n){
    if (n==1 || n==0) return 1;  // base case
int recAns = n*factorial(n-1);
return recAns;
}
int main(){
    int n;
    printf(" enter n");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("factorial of number %d is : %d",n,fact);
    return 0;
}