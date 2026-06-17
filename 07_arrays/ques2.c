#include <stdio.h> 

int main(){
    int arr[7] = {1,2,3,3,4,2,1};
    for(int i=0; i<7; i++){
       for(int j=i+1; j<7; j++){
        if(arr[i] == arr[j] ){
            i++;
            j = i + 1;
        }
       } 
    }
    return 0;
}