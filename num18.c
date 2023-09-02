#include<stdio.h>
int main(){
    int day ,Y,M,W,D;
    printf("Inpus days:");
    scanf("%i",&day);
    Y=day/365;
    M=(day-(Y*365))/30;
    W=(day-(Y*365)-M*30)/7;
    D=(day-(Y*365)-(M*30)-(W*7));
    printf("Y.M.W.D=%d. %d. %d. %d",Y,M,W,D);

}