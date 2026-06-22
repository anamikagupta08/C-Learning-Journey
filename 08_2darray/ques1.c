#include <stdio.h> 

int main(){   
 int arr[5][5];
 for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
       arr[i][j] = 10; // storing first
}
printf("\n");
 }
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
    printf("%d ", arr[i][j]); //then printing
    }
    printf("\n");
}
    return 0;
}