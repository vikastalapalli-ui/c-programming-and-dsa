#include <stdio.h>

#define PI 3.14159
#define AREA_OF_CIRCLE(r) (PI * (r) * (r))

int main() {
    float radius = 5.0;
    float area = AREA_OF_CIRCLE(radius);
    
    printf("Radius: %.2f\n", radius);
    printf("Area of Circle: %.2f\n", area);
    
    return 0;
}
