#include<stdio.h>

int main(){
    int p,Q,R,S,dis;
    printf("Enter p:");
    scanf("%i",&p);
    printf("Enter Q:");
    scanf("%i",&Q);
    printf("Enter R:");
    scanf("%i",&R);
    printf("Enter S:");
    scanf("%i",&S);
if (Q>R && S>p&&(R+S)>(p+Q) /* condition */)
{
   printf("Correct values"); /* code */
}
else{
    printf( "Wrong values");
}}
