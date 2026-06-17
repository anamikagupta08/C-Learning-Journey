#include <stdio.h> 

int main(){
int n;
    printf("enter a number");
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n; i++){
        printf("enter %d number\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++){
        if(j%2 != 0){
           // arr[j] *=2;  ( another way to write below condition) 
            int multi = arr[j]*2;
            printf("%d\n",multi);
        }
        else {
           // arr[j]  +=10;
            int add = arr[j] + 10;
            printf("%d\n",add);
        }
    }
    return 0;
}