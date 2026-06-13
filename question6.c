#include <stdio.h> 
int main(){
int  r;
printf("enter age of ram");
scanf("%d", &r); 
int s;
printf("enter age of shyam");
scanf("%d", &s);
int  j;
printf("enter age of ajay");
scanf("%d", &j);
if ( r<s){ // s out of race 
    if(r < j){
        printf("ram is youngest");
    }
    else {
            printf("ajay is youngest");
        }
    }

else { // r > s
    if(s< j){
        printf("shyam is youngest");
    }
    else{
        printf("ajay is youngest");
    }
}

    return 0;
}
