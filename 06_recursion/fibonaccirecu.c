// fibonacci using recursion
#include <stdio.h> 
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int fibo = fibonacci(n-1) + fibonacci(n-2);
    return fibo;
}
int main(){
int n;
    printf(" enter a number");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}
   