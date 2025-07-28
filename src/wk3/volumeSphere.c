#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14;
    double radius;
    scanf("%lf",&radius);

    double volume = (4.0/3.0)*pi*(pow(radius, 3));
    printf("%.2lf\n", volume);
    return 0;
}