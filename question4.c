// Program to calculate profit or loss based on cost and selling price
#include <stdio.h> 

int main(){
int cost_price;
int selling_price;
printf("enter cost price");
scanf("%d", &cost_price);
printf("enter selling price");
scanf("%d", &selling_price);
if(selling_price > cost_price){
    int profit = selling_price - cost_price;
    printf(" profit is : %d", profit);
}
else if( selling_price < cost_price){
    int loss = cost_price - selling_price;
    printf(" loss is : %d", loss);
}
else {
    printf(" no profit no loss");
}
    return 0;
}