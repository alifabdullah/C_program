#include<stdio.h>
#include<math.h>
// diclaration/prototype
void price(float x);
int main(){
    // float x;
    // printf("Enter main price:");
    // scanf("%f",&x);
    // price(x);
    int n;
    scanf("%d",&n);
    printf("%f",pow(n,2));
    return 0;
    
    }

void price(float x)
{
    x=x+(x*0.18);
    printf("%f\n",x);
    
}


