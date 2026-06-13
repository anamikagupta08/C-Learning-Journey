#include <stdio.h> 

int main(){
    int x;
    printf("enter x");
    scanf("%d", &x);
    if( x % 2 == 0) {
        printf(" number is even : %d", x);
    }
else{
    printf(" number is odd: %d", x);
}
    return 0;
}