#include<stdio.h>
void prntHW(int count);
int main(){
prntHW(5);
    return 0;
}

void prntHW(int count)
{
    if (count==0)
    {
       return;
    }
    
    printf("Hello World\n");
    prntHW(count-1);
}
