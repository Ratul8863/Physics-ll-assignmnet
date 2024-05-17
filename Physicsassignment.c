#include <stdio.h>
#include <math.h>
int main()
{
    printf("Maxima for double slit diffraction: d sin (Theta) = m(lambda); m = 0, 1, 2, 3, ....\n");
    printf("So m =d sin(Theta)/Lambda\n");
    double lambda, theta, d;
    int result;
    printf("Enter lambda in nm : ");
    scanf("%lf", &lambda);
    if (lambda <= 380 || lambda >= 750)
    {
        printf("\033[0;31m");
        printf("Out of the range.Please enter a valid numñber.\n");
        printf("\033[0m");
        ;
    }
    else
    {
        printf("Enter d in  micrometer : ");
        scanf("%lf", &d);
        d = d * 1000;
        if (lambda > d)
        {
            printf("lambda is greate than d");
        }
        else
        {
            printf("Enter theta :");
            scanf("%lf", &theta);

            result = d * sin(theta * M_PI / 180) / lambda;
            printf("The order of the maxima = %d\n", result);
        }
    }
}
