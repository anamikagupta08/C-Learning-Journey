#include <stdio.h> 
void palindrome(int arr[7]){
    int i = 0;
    int j = 6;
    while(i<j){
        if( arr[i] == arr[j]){
            i++;
          j--;
        }
        else{
          printf("it is not in palindrome");
            return;
        }
    }
    printf(" it is a palindrome");
}
int main(){
    int arr[7] = {1,2,3,4,5,2,1};
    palindrome(arr);
    return 0;
}