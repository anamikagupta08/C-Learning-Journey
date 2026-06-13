#include <stdio.h> 

int main(){
    int n;
    printf("enter number of lines");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n-1;
    for( int i=1; i<=n; i++){
    for(int j=1; j<=nsp; j++){
        printf(" ");
    }
    nsp = nsp - 1;
    int a = 1;
    for(int k=1; k<=nst; k++){
        printf("%d", a);
        a++;
    }
    nst = nst + 2;
    printf("\n");
    }
    return 0;
}