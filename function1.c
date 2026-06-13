#include <stdio.h> 

int main(){
    int n;
    printf("enter number of lines");
    scanf("%d", &n);
    int a = 1;
    for( int i=1; i<=n; i++){
    for( int k = 1; k<=i; k++){
     printf("%d ",a);
     a++;
    }
    printf("\n");
}
    return 0;

}