#include <stdio.h> 

int main(){
    int n;
    printf("enter number of lines");
    scanf("%d", &n);

    for( int i=1; i<=n; i++){ 
    for(int j = 1; j<=n-i; j++){ // for speces
        printf(" ");
    }
    for(int k =1; k<=i; k++){ // for parellelogram
    // for(int k =1; k<=(2*i-1); k++){     //for rhombus
        printf("*");
       
    }
    printf("\n");
    }
    return 0;
}