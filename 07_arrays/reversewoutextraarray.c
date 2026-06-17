// copy the content by reversing the arrsy without using another array
#include <stdio.h> 
void reverse(int arr[7]){
    int i = 0;
    int j = 6;
    int temp;
    while(i<j){
        // arr[i] and arr[j]
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr);
    for(int i =0; i <7; i++){
        printf("%d",arr[i]);
    }
    return 0;
}