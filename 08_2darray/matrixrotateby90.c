#include <stdio.h> 

int main(){
int n;
//initalize
    printf("enter number of rows/ columns");
    scanf("%d",&n);
    int arr[n][n];
    //input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        printf("enter all number\n");
        scanf("%d",&arr[i][j]);
    }
}
// transpose
 for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] =  temp;
        }
    }
    //rotate
    for(int i=0; i<n;i++){
        int j=0;
        int k=n-1;
        int temp;
        while(j<k){
            temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k]= temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}