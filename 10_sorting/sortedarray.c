//soted array is given to find sum of two number equals to the given no.
#include <stdio.h> 
int main(){
    int arr[] = {1,2,3,4,5,8,9,10};
    int n = 8;
    int i = 0;
    int j = n -1;
    int target;
    printf("enter the target number: ");
    scanf("%d",&target);
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("sum is equal to target number");
            break;
        }
        else if(arr[i]+arr[j] > target) {
        j--;
        }
        else {
     i++;  
    }
}
    return 0;
}