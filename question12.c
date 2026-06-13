#include <stdio.h> 

int main(){
    int factorial;
    printf("enter factorial");
    scanf("%d", &factorial);
    int product = 1;
    int sum = 0;

    for(int i =1; i <=factorial; i++){
        product = product*i;
        sum = sum + product;
        printf("factorial  of %d is: %d\n",i,product);
    }
        printf(" sum of factorial is equal to: %d\n", sum);
    

    return 0;
}