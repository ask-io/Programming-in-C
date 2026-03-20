//Using Macros
#include <stdio.h>
#define PI 3.14

int main() {
    float r, h;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);
    
    printf("Area of Circle: %.2f\n", PI * r * r);
    printf("Area of Cylinder: %.2f\n", 2 * PI * r * (r + h));
    return 0;
}