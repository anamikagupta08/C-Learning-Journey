#include <stdio.h> 

int main(){  
   int n,m;
   printf("enter n,m:") ;
   scanf("%d %d", &n, &m);
 int arr1[n][m];
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
       printf("enter  1sr array number");
       scanf("%d",&arr1[i][j]);
}
printf("\n");
 }
int arr2[n][m];
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
       printf("enter 2nd array number");
       scanf("%d",&arr2[i][j]);
}
printf("\n");
 }
 int sum[n][m];
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
       sum[i][j]  = arr1[i][j] + arr2[i][j];
    }
    printf("\n");
}
        
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    printf("%d ", sum[i][j]); 
    }
    printf("\n");
}
int total = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      total = total + sum[i][j];
    }
    printf("total sum = %d", total);
   }
    return 0;
}