#include <stdio.h> 

int main(){
 int arr[5] = {5,4,2,3,1};
 int n =5;
 printf("unsorted array: \n");
 for(int i = 0; i<n; i++){
 printf("%d ",arr[i]);
 }
 for(int i=1;i<=n-1;i++){
    int j = i; //swap value of same pass and have same index
    while(j>=1 && arr[j] < arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
}
printf("\n");
 printf("sorted array: \n");
 for(int i = 0; i<n; i++){
 printf("%d ",arr[i]);
 }
    return 0;
}