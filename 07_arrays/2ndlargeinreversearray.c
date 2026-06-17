#include <stdio.h> 
#include <limits.h>
int main(){
    int arr[7] = {7,6,5,4,3,2,1};
    int max = INT_MIN;    // or it can be equal to arr[0]
    int smax = INT_MIN;   //same as above
     for(int i=0; i<7; i++){
    if(max < arr[i]){    // this whole condition will also work for random order array
    smax = max;     
    max = arr[i];
   }
   /*for random values have same 2 higher digit 
  then add && max != arr[i]  to the else if cond box*/ 

   else if (smax < arr[i]){  // for random order array
    smax = arr[i];        // this cond works in case of max > arr[i]
   }
}
    printf("the second largest number is: %d", smax);
    return 0;
}