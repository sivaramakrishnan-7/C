#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    double discriminant = (b*b) - (4 * a * c);
    x1 = (-b + sqrt(discriminant))/ (2 * a);
    x2 = (-b - sqrt(discriminant))/ (2 * a);

    printf("%.2lf %.2lf",x1,x2);
}