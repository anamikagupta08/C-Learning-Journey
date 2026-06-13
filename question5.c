#include <stdio.h> 

int main(){
int age_of_ram;
printf("enter age of ram");
scanf("%d", &age_of_ram);
int age_of_shyam;
printf("enter age of shyam");
scanf("%d", &age_of_shyam);
int age_of_ajay;
printf("enter age of ajay");
scanf("%d", &age_of_ajay);
// int youngest = age_of_ram;
if(age_of_ram<age_of_shyam && age_of_ram<age_of_ajay){
    printf("ram is youngest of all");
}
else if(age_of_shyam<age_of_ram && age_of_shyam<age_of_ajay){
    printf(" shyam is youngest of all");
}
else if(age_of_ajay<age_of_ram && age_of_ajay<age_of_shyam){
    printf("ajay is youngest of all");
}
else{
printf(" age of all are same");
}
    return 0;
}
