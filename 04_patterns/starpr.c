#include <stdio.h> 

int main(){
    int n;
    printf("enter number of rows");
    scanf("%d", &n);
    int a =n;
    //int m;
    //printf("enter number of columns");
    //scanf("%d", &m);
    /*i +j = n+1
    j = n + 1 -i condition for inverted triangle ( kyuki agar hum no. of line and no. of star ka plus karege to voh jo no. of rows hai usse ek jydaa hi aayega)*/ 
    for(int i=1; i<=n; i++){
    //for(int j =1; j<=i; j++){ it is for triangle
    for(int j=1; j<=a; j++){
        printf("*");
    
    }
    a = a-1;  // another cond for inverted triangle
    printf("\n");
}
    return 0;
}