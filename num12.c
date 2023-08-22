#include<stdio.h>
int main(){
    char id[10];
    int Hrs,slr;
    printf("Input the Employees ID(Max. 10 chars):");
    scanf("%s",&id);
    printf("Input the working hrs:");
    scanf("%i",&Hrs);
    printf("Salary amount/hr:");
    scanf("%i",&slr);
    printf("Expected Output:\n");
    printf("Employees ID =%s\n",id);
    float tslr;
    tslr=Hrs*slr;
    printf("Salary = %.2f\n",tslr);
}