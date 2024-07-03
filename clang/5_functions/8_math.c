#include <stdio.h>
#include <math.h>

int main() {
    printf("Testing math functions:\n");
    printf("\n");

    // ceil - smallest integer value greater than or equal to x
    printf("ceil(2.3) = %.1f\n", ceil(2.3));
    // floor - largest integer value less than or equal to x
    printf("floor(2.3) = %.1f\n", floor(2.3));
    // fabs - absolute value
    printf("fabs(-2.3) = %.1f\n", fabs(-2.3));
    // log - natural logarithm
    printf("log(2.3) = %.1f\n", log(2.3));
    // log10 - base 10 common logarithm
    printf("log10(2.3) = %.1f\n", log10(2.3));
    // pow - power
    printf("pow(2, 3) = %.1f\n", pow(2, 3));
    // sqrt - square root
    printf("sqrt(2.3) = %.1f\n", sqrt(2.3));
    // fmod - remainder of division
    printf("fmod(2.3, 2) = %.1f\n", fmod(2.3, 2));
    // sin - sine
    printf("sin(2.3) = %.1f\n", sin(2.3));
    // cos - cosine
    printf("cos(2.3) = %.1f\n", cos(2.3));
    // tan - tangent
    printf("tan(2.3) = %.1f\n", tan(2.3));
    // asin - arc sine
    printf("asin(2.3) = %.1f\n", asin(2.3));
    // acos - arc cosine
    printf("acos(2.3) = %.1f\n", acos(2.3));
    // atan - arc tangent
    printf("atan(2.3) = %.1f\n", atan(2.3));
    // atan2 - arc tangent of y/x
    printf("atan2(2.3, 2) = %.1f\n", atan2(2.3, 2));
    // sinh - hyperbolic sine
    printf("sinh(2.3) = %.1f\n", sinh(2.3));
    // cosh - hyperbolic cosine
    printf("cosh(2.3) = %.1f\n", cosh(2.3));
    // tanh - hyperbolic tangent
    printf("tanh(2.3) = %.1f\n", tanh(2.3));
    // asinh - hyperbolic arc sine
    printf("asinh(2.3) = %.1f\n", asinh(2.3));
    // acosh - hyperbolic arc cosine
    printf("acosh(2.3) = %.1f\n", acosh(2.3));
    // atanh - hyperbolic arc tangent
    printf("atanh(2.3) = %.1f\n", atanh(2.3));
    // modf - integral and fractional part
    double integral;
    double fractional = modf(2.3, &integral);
    printf("modf(2.3) = %.1f + %.1f\n", integral, fractional);
    // exp - exponential
    printf("exp(2.3) = %.1f\n", exp(2.3));
    // ldexp - x * 2^exp
    printf("ldexp(2.3, 2) = %.1f\n", ldexp(2.3, 2));
    // frexp - x = m * 2^exp
    int exp;
    double mantissa = frexp(2.3, &exp);
    printf("frexp(2.3) = %.1f * 2^%d\n", mantissa, exp);
    // hypot - sqrt(x^2 + y^2)
    printf("hypot(2.3, 2) = %.1f\n", hypot(2.3, 2));
    // cbrt - cubic root
    printf("cbrt(2.3) = %.1f\n", cbrt(2.3));
    
    return 0;
}