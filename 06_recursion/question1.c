// for printing 4 3 2 1 1 2 3 4
#include <stdio.h> 
void increase(int n){
    if(n==0 ) return;
    printf("%d\n",n);
     increase(n-1);
     //increase(n-1);
       printf("%d\n", n) ;
    return;
}
int main(){
    int n;
    printf(" enter n");
    scanf("%d", &n);
    increase(n);
    return 0;
}  


