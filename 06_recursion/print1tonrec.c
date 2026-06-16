// print 1 to n using recursion
#include <stdio.h> 
void  increase(int x,int n){
    if(x>n) return;  //base case
    printf("%d\n", x);  
    increase(x+1,n);
    return;
}
int main(){
    int n;
    printf(" enter n");
    scanf("%d", &n);
    increase(1,n);
    return 0;
}