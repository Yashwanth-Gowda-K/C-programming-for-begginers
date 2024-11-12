#include <stdio.h>
int main(){
    float principle , rate , time, simple_interest;
    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("enter the rate of interest");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simple_interest =(principle * rate * time) / 100;

    printf("The simple interest is: %2f\n" , simple_interest);

    return 0;
}