#include <stdio.h> 
#include <limits.h>
int main(){
    int arr[7] = {1,2,4,6,7,8,9};
    int max = INT_MIN;    // or it can be equal to arr[0]
    int smax = INT_MIN;   //same as above
    // main approch for finding largest number
   /* for(int i=0; i<7; i++){
       if(max < arr[i])  max = arr[i];
    }
    // max = 9;
    for(int i=1; i<7; i++){
        if(smax < arr[i] && arr[i] != max ){
            smax = arr[i];
        }
    }*/
   // another approch to solve this question
   for(int i=0; i<7; i++){
    if(max < arr[i]){
    smax = max; // smax is now previous max value
    max = arr[i]; // max is now a new and largest max value 
   }
}
    printf("the second largest number is: %d", smax);
     return 0;
}