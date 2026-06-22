#include <stdio.h>
#include<limits.h> 
int main(){
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
     int m;
    printf("enter number of columns");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        printf("enter number\n");
        scanf("%d",&arr[i][j]);
    }
}
     int max = INT_MIN;
     int i,j;
     int maxi, maxj;
     for (i= 0; i<n; i++){
        for( j=0; j<m; j++){
     if(max < arr[i][j]){
         max = arr[i][j];
         maxi =i;
         maxj =j;

     }
    } 
}
    printf("maximum number is %d",max);  
    printf("index of maximum element is %d %d:",maxi,maxj);
     return 0;
}