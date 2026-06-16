#include <stdio.h> 
void zigzag(int n){
    if(n==0) return;   // base case
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
}

int main(){
int n;
printf("enter a number");
scanf("%d",&n);
zigzag(n);
    return 0;
}