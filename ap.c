// Code by Wneljae
#include <stdio.h>
#include <math.h>

int main() {
    double secon_no = 20.0;
    double whole_no = 50.0;
    double double_no = 3.50;
    float float_no = 3.50235;
    
    // Trigonometric Functions: 
    
    printf("sine of %f is %f\n", float_no, sin(float_no));
    printf("cosine of %f is %f\n", float_no, cos(float_no));
    printf("tangent of %f is %f\n", float_no, tan(float_no));
    printf("arcsine of %f is %f\n", float_no, asin(float_no));
    printf("arccosine of %f is %f\n", float_no, acos(float_no));
    
    // Exponential and Logarithmic Functions:
    
    printf("exp of %f is %f\n", float_no, exp(float_no));
    printf("log of %f is %f\n", float_no, log(float_no));
    printf("log10 of %f is %f\n", float_no, log10(float_no));
    
    // Power and Absolute Functions:
    
    printf("%f raised to the power of %.0f is %f\n", float_no, secon_no, pow(float_no, secon_no));
    printf("square root of %.f is %lf\n", whole_no, sqrt(whole_no));
    printf("absolute value of %lf is %lf\n", float_no, fabs(float_no));
    
    // Rounding Functions:
    
    printf("ceil of %f is %f\n", float_no, ceil(float_no));
    printf("largest integer value less than or equal of %.f is %.f\n", whole_no, floor(whole_no));
    printf("round of %f is %0.f\n", float_no, round(float_no));
    

    return 0;
}