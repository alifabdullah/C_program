
#include <stdio.h>
#include<math.h>


int main() {
    // Get the angle from the user.
    float angle;
    printf("Enter an angle in degrees: ");
    scanf("%f", &angle);

    // Convert the angle to radians.
    angle = angle *M_PI/ 180.0;

    // Calculate the sine of the angle.
    float sine = sin(angle);

    // Print the sine of the angle.
    printf("The sine of %f degrees is %f.\n", angle, sine);

    return 0;
} 