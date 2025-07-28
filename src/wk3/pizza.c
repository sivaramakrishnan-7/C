#include <stdio.h>

int main(){
   double diameter, costPerInch,costPerTop, totalCost;
   double pi = 3.14;
   int numToppings;
   scanf("%lf%lf%lf",&diameter,&costPerInch,&costPerTop);
   scanf("%d",&numToppings);

   double radius = diameter / 2.0;
   double area = pi * radius * radius;
   double basecost = area * costPerInch;
   double toppingcost = numToppings * costPerTop;

   totalCost = basecost + toppingcost;
   printf("%.2lf",totalCost);
   return 0;

}