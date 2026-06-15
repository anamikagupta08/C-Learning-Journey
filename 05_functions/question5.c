// finding largest number using functions
#include <stdio.h> 
int findmax(int x, int y, int z){
    int largest = x;
    if(y > largest)  largest = y;
    if(z > largest) largest = z;
    return largest;
}
int main(){
    int a;
    printf("enter 1st nmuber : ");
    scanf("%d", &a);
     int b;
    printf("enter 2nd nmuber : ");
    scanf("%d", &b);
    int c;
    printf("enter 3rd nmuber : ");
    scanf("%d", &c);
    int large = findmax(a,b,c);
    printf("  largest number from  %d, %d and %d is : %d",a,b,c, large);
    return 0;
}