#include <stdio.h> 

int main(){
   int x;
   printf("enter x");
   scanf("%d",&x);
   int a = 1;
   for(int i=2; i<=x-1; i++){
   if(x%i == 0){
    a = 0;
    break;
   }
   } 
   if(x < 2) printf (" it is not a prime");
  else if( a == 1) printf(" number is prime\n");
   else 
   printf("number is composite\n");
    return 0;
}