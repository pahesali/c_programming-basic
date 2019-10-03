#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    float a, b, c, x1, x2, delta;

    // a(x^2) + bx + c = 0
    printf("Enter term value a: ");
    scanf("%f", &a);
    printf("Enter term value b: ");
    scanf("%f", &b);
    printf("Enter term value c: ");
    scanf("%f", &c);

    // Calculate x1 and x2
    delta = (b*b) - (4*a*c);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    // Results
    if(delta < 0){
        printf("The equation has no real roots\n");
    } else {
        printf("The value of x1: %.2f\n", x1);
        printf("The value of x2: %.2f\n", x2);
    }
    return 0;
}
