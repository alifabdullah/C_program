#include<stdio.h>
// diclaration/prototype
void price(float x);
int main(){
    float x;
    printf("Enter main price:");
    scanf("%f",&x);
    price(x);
    }

void price(float x)
{
    x=x+(x*0.18);
    printf("%f\n",x);
    
}
/*#include<stdio.h>
void table(float n);
int main(){
    float n;
    printf("Enter First number:");
    scanf("%f",&n);
    table(n);//argument  
    return 0;
}
void table(float n)//parameter
{
    n=n+(0.18*n);
    printf("%f\n",n);

}
*/