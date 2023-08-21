#include<stdio.h>
#include <stdlib.h>
int main() {
    int n;
    // Read the number from the user.
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("abs (%d)= %d\n", n , abs(n));
    return 0;
}