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
        printf("enter all number of first matrix\n");
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}
int p;
printf("enter no of rows of 2nd matrix:");
scanf("%d",&p);
int q;
printf("enter no of columns of 2nd matrix:");
scanf("%d",&q);
// input 2nd matrix
int b[p][q];
for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
        printf("enter all number of second matrix\n");
        scanf("%d",&b[i][j]);
    }
    printf("\n");
}
//check
if(n!=p){
    printf("the matrices can't be multiplied");
}
else{
// multiplication
int result[m][q];
for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            result[i][j] = 0;
            // i row of a matrix, j column of b matrix
            for(int k=0; k<n; k++){
                result[i][j] = result[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    //output
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
}
 return 0;
}
