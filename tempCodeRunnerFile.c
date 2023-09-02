#include<stdio.h>
int main(){
    int km;
    float lt;
    printf("Test Data :");
    printf("Input total distance in km:");
    scanf("%i",&km);
    printf("Input total fuel spent in liters:");
    scanf("%.2f",&lt);
    printf("Expected Output:");
    printf("Average consumption (km/lt)%.3f",km/lt);
    printf("\n");
}
