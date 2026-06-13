#include <stdio.h> 

int main(){
    int age;
    printf(" enter age");
    scanf("%d", &age);
/*Age below 5 → Free
Age 5 to 12 → 100rs
Age 13 to 60 → 200rs
Age above 60 → 150rs

Take age as input and print the ticket price!*/
if( age < 5)
printf("ticket is free");
else if( age <= 12)
printf("ticket is of cost 100");
else if(age <= 60)
printf("ticket is of cost 200");
else if(age > 60)
printf("ticket is of cost 150");
if(age < 0 && age > 100){
    printf(" invalid age number");
}
    return 0;
}
