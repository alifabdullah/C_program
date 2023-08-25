//1
/*#include<stdio.h>
int main()
{  
    for (int i = 0; i<=10; i++)//iterator =i
    {                           //i++ same to i+=1/i+1
      printf("%d\n",i);         //i++ use,then increase(postincrement)
    }                           //++i increase then use(preincrement)
    
    return 0;
}
//2
/*#include<stdio.h>
int main(){
    for (char ch='A';ch<='Z' ; ch++)
    {
       printf("%c\n",ch);
    }
    return 0;
}
//3
#include<stdio.h>
int main(){
   int i=1;
   while (i<=10)
   {
    printf("%d\n",i);
    i=i+1;
   }
   
}*/
//4
#include<stdio.h>
int main(){
   int n;
   printf("enter the Value:");
   scanf("%d",&n);
   for (int i = 0; i <=n; i=i+5)
   {
    printf("%d\n",i);
   }}
   