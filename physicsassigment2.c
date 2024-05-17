#include <stdio.h>
#include <math.h>

int main()
{
    double angle_degrees = 45.0;
    double angle_radians = angle_degrees * (M_PI / 180.0);
    double ratio = 1.0 / sin(angle_radians);
    printf("The ratio of the slit width to the wavelength for \nthe first diffraction minimum at %.2f degree is: %.2f\n", angle_degrees, ratio);
}
