#include<stdio.h>
int main(){
    int day,years,weeks,days;
    printf("Enter days:");
    scanf("%d",&day);
    years=day/365;
    weeks=(day%365)/7;
    days=day-((years*365)+(weeks*7));
    printf("yeras:%d\nweeks:%d\nDays:%d\n",years,weeks,days);
}