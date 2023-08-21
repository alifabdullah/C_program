//1
#include<stdio.h>
int main()
{  
    for (int i = 0; i<=10; i+=1)//iterator =i
    {                           //i++ same to i+=1/i+1
      printf("%d\n",i);         //i++ use,then increase(postincrement)
    }                           //++i increase then use(preincrement)
    
    return 0;
}
//2
#include<stdio.h>
int main(){
    for (char ch='a';ch<='z' ; ch++)
    {
       printf("%c\n",ch);
    }
    return 0;
}