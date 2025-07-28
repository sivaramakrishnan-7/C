#include <stdio.h>

int main(){
    double weightPackage, shippingRate, totalShippingCost;
    scanf("%lf%lf",&weightPackage,&shippingRate);

    totalShippingCost = weightPackage * shippingRate;
    printf("%.2lf\n",totalShippingCost);
    return 0;
}