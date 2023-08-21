
#include <stdio.h>



int main() {
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if (marks<30)
    {
       printf("grade C\n");
    }
    else if (30<=marks<70)
    {
       printf("Grade B\n");
    }
    else if (70<=marks<90)
    {
       printf("Grade A\n");
    }
    else if (90<=marks<=100)
    {
        printf("Grade A+\n");
    }
    
}
