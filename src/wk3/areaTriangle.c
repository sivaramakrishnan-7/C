#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    double s = (a + b + c)/2;
    double areaTriangle = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf", areaTriangle);
    return 0;
}