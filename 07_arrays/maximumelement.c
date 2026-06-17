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
    //int max = -1;
     int max = arr[0];
    for (int j =0; j <n; j++){
     if(max < arr[j]){
         max = arr[j];
     }
    } 
    printf("maximum number is %d",max);  
     return 0;
}