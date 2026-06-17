#include <stdio.h> 
int main(){
int arr1[7] = {1,2,3,4,5,6,7};
int arr2[7];
int i;
for ( i=0; i<7; i++){
  arr2[i] = arr1[6-i];
}
for(int j=0; j<7; j++ ){
printf("%d\n",arr2[j]);
}
  return 0;
}