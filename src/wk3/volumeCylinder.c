#include <stdio.h>
#include <math.h>

int main(){
    double radius,height;
    double pi = 3.14;
    scanf("%lf%lf",&radius,&height);

    double volume = pi * pow(radius,2) * height;

    printf("%.2lf",volume);

    return 0;
}