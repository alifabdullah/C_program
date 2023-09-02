#include<stdio.h>
#include<math.h>
float squre(float side);
float circleArea(float rad);
float ractenglearea(float a,float b);
int main(){
    float side = 22 , a = 4 , b = 5,rad = 4;
    squre(side);
    circleArea( rad);
    
     return 0;
    
    }

    float squre(float side)
    {
        float area;
        area=side*side;
        printf("%f\n",area);
    return side;
    }

    float circleArea(float rad)
    {
        float area;
        area= M_PI * rad * rad;
        printf("%f\n",area);

    return area ;
    }

    float ractenglearea(float a, float b)
    {
    return a * b;
    }
