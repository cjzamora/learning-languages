#include <stdio.h>

int main() {
    // character format specifier
    // scanf - %c
    printf("Character format specifier `%%c`: %c\n", 'A');
    // integer format specifier
    // scanf - %d
    printf("Integer format specifier `%%d`: %d\n", 10);
    // scientific notation
    // scanf - %e
    printf("Scientific notation `%%e`: %e\n", 0.5);
    // float format specifier
    // scanf - %f
    printf("Float format specifier `%%f`: %f\n", 0.5);
    // float type with current precision
    // scanf - %g
    printf("Float type with current precision `%%g`: %g\n", 12345.5679);
    // unsigned integer format specifier
    // scanf - %u
    printf("Unsigned integer `%%u`: %u\n", 10);
    // long integer format specifier
    // scanf - %ld
    printf("Long integer `%%ld`: %ld\n", 1000000L);
    // double format specifier
    // scanf - %lf
    printf("Double `%%lf`: %lf\n", 100000.5);
    // long double format specifier
    // scanf - %Lf
    printf("Long double `%%Lf`: %Lf\n", 10000.5L);
    // unsigned int or unsigned long format specifier
    // scanf - %lu
    printf("Unsigned int or unsigned long `%%lu`: %lu\n", 1000000L);
    // long long format specifier
    // scanf - %lld
    printf("Long long `%%lld`: %lld\n", 1000000000000LL);
    // unsigned long long format specifier
    // scanf - %llu
    printf("Unsigned long long `%%llu`: %llu\n", 1000000000000LL);
    // octal format specifier
    // scanf - %o
    printf("Octal `%%o`: %o\n", 10);
    // pointer format specifier
    // scanf - %p
    int x = 10;
    printf("Pointer `%%p`: %p\n", &x);
    // string format specifier
    // scanf - %s
    printf("String `%%s`: %s\n", "Hello, World!");
    // hexadecimal format specifier
    // scanf - %x
    printf("Hexadecimal `%%x`: %x\n", 0xFF);
    
    return 0;
}