#include <stdio.h>

int main(){
    double weight, height, activityLevel;
    int age, gender;
    double calories = 0.0;

    scanf("%lf%lf%lf",&weight,&height,&activityLevel);
    scanf("%d%d",&age,&gender);

    if (gender == 1){
        calories = (88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age)) * activityLevel;
    }
    else if (gender == 2){
        calories = (447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age)) * activityLevel;
    }

    printf("%.2lf\n", calories);
    return 0;
}