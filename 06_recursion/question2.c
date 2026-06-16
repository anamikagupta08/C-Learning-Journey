// sum of number from 1 to n
#include <stdio.h> 
/*void sum(int n, int s){
    if(n==0){     // base case
    printf("%d",s);  // function call
     return;
    }
   sum(n-1,s+n);
    return; recursively calling
} */
int sum (int n){
    if(n==1) return 1;
   int recAns = n + sum(n-1);  // function call using return type
   return recAns;

}
int main(){
    int n;
    printf(" enter n");
    scanf("%d", &n);
    int add =sum(n);
    printf("%d", add);

    return 0;
}  


