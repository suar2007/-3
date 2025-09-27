#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

int main() {

    double x, y, z, a1, a2, a3, a4, a5;
    printf("enter x:");
    scanf_s("%lf", &x);

    printf("enter y:");
    scanf_s("%lf", &y);

    printf("enter z:");
    scanf_s("%lf", &z);

    a1 = 2*cos(x - (M_PI / 6));
    a2 = 1+(pow(z,2)/(M_PI-(pow(z,2)/5)));
    a3 = M_E + (pow(sin(y), 2));
    a4 = (a1*a2) / a3;
    double result = a4;
    printf("result:%.6lf\n", result);
    return 0;
}
