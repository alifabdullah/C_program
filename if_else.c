#include<stdio.h>
int main()
{
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    if (number>=0)
    {
    printf("positive\n");
          if (number%2==0)
         {
           printf("even\n");}///////////If in If
          else
        {
           printf("Odd");
         }
    
    }
    //if (number<=0)
    else
    {
       printf("negative");
    }
}