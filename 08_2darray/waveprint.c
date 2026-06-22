#include <stdio.h> 

int main(){
int m;
printf("enter no of rows of 1st matrix:");
scanf("%d",&m);
int n;
printf("enter no of columns of 1st matrix:");
scanf("%d",&n);
 // input 1st matrix  
int a[n][m];
for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        printf("enter all number of first matrix");
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
//vertical waves
for(int j=0; j<n; j++){
    if(j%2==0){
        for(int i=0; i<m; i++){
        printf("%d ",a[i][j]);
      }
      printf("\n");

    }
      else{
        for(int i=m-1; i>=0; i--){
            printf("%d ",a[i][j]);
      }
    }
    printf("\n");
}
    return 0;
}