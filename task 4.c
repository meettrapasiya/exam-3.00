#include <stdio.h>
 
int main() 
{
    double radius, volume,M_PI;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("The volume of the sphere is: %.2lf\n", volume);

}
