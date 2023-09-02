#include<stdio.h>
#include<math.h>
int main(){
    float p,Q,R,S,dis;
    printf("Enter p:");
    scanf("%f",&p);
    printf("Enter Q:");
    scanf("%f",&Q);
    printf("Enter R:");
    scanf("%f",&R);
    
    dis=Q*Q-4*p*R;
    if (dis>0&&p!=0/* condition */)
    {
        float x, y;
		S = sqrt(dis);
		x = (-Q + dis)/(2*p);
		y = (-Q - dis)/(2*p);
		printf("Root1 = %.5lf\n", p);
		printf("Root2 = %.5lf\n", Q); /* code */
    }
    

}