#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Test Data :");
    printf("Input the first integer:");
    scanf("%d",&n1);
    printf("Input the second integer: ");
    scanf("%d",&n2);
    printf("Input the third integer: ");
    scanf("%d",&n3);
    printf("Expected Output:\n");
    if (n1>n2&&n1>n3/* condition */)
    {
     printf("Maximum value of three integers:%d",n1);   /* code */
    }
    else if (n2>n1&&n2>n3/* condition */)
    {
     printf("Maximum value of three integers:%d",n2);   /* code */
    }
    else
    {
     printf("Maximum value of three integers:%d",n3);   /* code */
    }
}