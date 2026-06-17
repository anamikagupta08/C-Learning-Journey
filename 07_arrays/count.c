#include <stdio.h> 

int main(){
int x;
printf(" enter x");
scanf("%d",&x);
int arr[6] ={1,2,3,4,6,7};
int count = 0;
for(int i=0; i<6; i++){
   if(arr[i] > x){
    count++;
    }
}
 printf("count of greater number is: %d",count);
    return 0;
} 