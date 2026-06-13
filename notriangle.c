/*printing
1
AB
123
ABCD*/
#include <stdio.h> 

int main(){
    int n;
    printf("enter number of rows");
    scanf("%d", &n);

    for( int i=1; i<=n; i++){
        int a =1;
        char ch = 65;
    for(int j = 1; j<=2*i-1; j++){
        printf("%d", a);
        a++;
    }
    printf("\n");
    for(int k =1; k<=2*i; k++){
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    }
    return 0;
}