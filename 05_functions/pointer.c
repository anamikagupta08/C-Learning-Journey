// swapping number using pointers
#include <stdio.h> 
void swap(int* x, int* y){
    int temp;
   temp = *x;   // temp = 2
   *x = *y;    // a = 9
   *y = temp;  // *y = 2 -> b = 2;
   return;
}
int main(){
    int a = 2; 
    int b = 9;
    swap(&a,&b);
    printf("the value of a and b is %d %d",a,b);
    return 0;
}