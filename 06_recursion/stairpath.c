// stair case path
#include <stdio.h> 
int stair(int n){
    if(n==1) return 1; // base case
    if(n==2) return 2;
    if(n==3) return 4;
    int path = stair(n-1) + stair(n-2) + stair(n-3); // call
    return path;
}
int main(){
int n;
    printf(" enter a number");
    scanf("%d", &n);
    printf(" number of way to reach %d step is: %d",n, stair(n));
    return 0;
}