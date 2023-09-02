#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,dis;
    printf("Enter points:");
    scanf("%f",&x1);
    printf("Enter points:");
    scanf("%f",&x2);
    printf("Enter points:");
    scanf("%f",&y1);
    printf("Enter points:");
     scanf("%f",&y2);
    dis =((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("distance%f",sqrt(dis));
    
}
