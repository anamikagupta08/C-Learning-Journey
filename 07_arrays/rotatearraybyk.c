// rotate array by k steps
#include <stdio.h> 
void reverse(int arr[], int a, int b){
    int temp;
    int i =a;
    int j =b;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter %d number: \n", i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter steps to rotate: \n");
    scanf("%d",&k);
    //steps
     k = k%n;
     reverse(arr,0,n-1);
     reverse(arr,0,k-1);
     reverse(arr,k,n-1);
     for(int i=0; i<n; i++){
        printf("%d",arr[i]);
     }
    return 0;
}