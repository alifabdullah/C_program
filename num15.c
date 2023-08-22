#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,y1,y2,dis;
    printf("Enter points:");
    scanf("%f\n",&x1);
    scanf("%f\n",&y1); 
    scanf("%f\n",&x2);
    scanf("%f\n",&y2);
   
    printf("distance=%f",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
	return 0;
}