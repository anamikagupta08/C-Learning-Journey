// sum of array
#include <stdio.h> 

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        printf("enter %d number\n",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    //int product = 1;
    for(int j =0; j<n; j++){
      sum = sum + arr[j];
    // product = product*arr[j];

    }
    printf("sum of numbers is %d", sum);
   // printf("product is %d",product);
    return 0;
}