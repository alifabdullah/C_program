/*#include<stdio.h>
int main()
{

int year;
printf("enter year:");
scanf("%d",&year);
if (((year%400==0)||(year%100!=0))&&(year%4==0))
{
    printf("leap year");
}
else
{
    printf("Not Leap year");
}
}*/
/*#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}*/
/*#include<stdio.h>
int main(){
    int Y;
    printf("Enter the year");
    scanf("%d",Y);

    if (Y%400 == 0)
    
    printf(" leap year"); 
    
    else if (Y%100 == 0)
    
        printf("Not leap year");
    
    else if (Y%4 == 0)
    
        printf( "is Leap Year");
    
    else 
        printf("%d is not Leap Year",Y);
    }*/
/*#include<stdio.h>
int main(){
    int Y;
    printf("Enter the year");
    scanf("%d",Y);
if (Y%400==0){
    if (Y%100==0){
        if (Y%4==0){
          
        }
       
    }
  
} 
}*/
/*#include<stdio.h>
int main(){
    int Y;
    printf("Enter the year");
    scanf("%d",Y);


    if (Y%4==0){
        if (Y%100==0 && Y%400==0){

            printf("Leap year");

        }else {printf("not leap year");}

    
    }
    else{ printf("Not Leap Year");}


}*/
/* #include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            printf("%d is not a leap year.\n", year);
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/
 #include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year); 
    if (year%4==0)
    {
        if (year%400==0&&year%100==0)
        {
          printf("Leap year");
        }
       else{ printf("not leap year1");}
    }
    else{printf("not leap year2");}
    return 0;
}
    
       


