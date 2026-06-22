#include <stdio.h> 

int main(){
    int student = 4;
    int column = 2 ;
     
 int arr[4][2];
 for(int i=0; i<4; i++){
    printf("enter rollno: ");
    scanf("%d",&arr[i][0]);
    printf("enter marks: ");
    scanf("%d",&arr[i][1]);
}
for(int i=0; i<4; i++){
    for(int j=0; j<2; j++){
    printf("%d", arr[i][j]);
    }
    printf("\n");
}
    return 0;
}