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
     int maxi;  //maxj;
     for (i= 0; i<n; i++){
        int sum = 0;
        for( j=0; j<m; j++){
            sum += arr[i][j];
            if(max < sum){
                max = sum;
              maxi =i;
         //maxj =j;
     }
    } 
}
      printf(" sum of maximum number is %d",max);
      printf(" row = %d",maxi);

      
    //printf("maximum number is %d",max);  
    //printf("index of maximum element is %d %d:",maxi,maxj);
     return 0;
}