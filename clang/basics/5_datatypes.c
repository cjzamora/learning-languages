#include <stdio.h>

int main() {
    printf("Primitive Data Types:\n\n");

    // by default integer is signed so it can hold negative values
    // unsigned integer can only hold positive values
    // if unsigned integer is used to hold negative values, a conversion will happen
    // using the two's complement method to make it positive
    //
    // ex:
    // unsigned int a = -1;
    // 
    // 1. take the binary representation of 1 (in a 32-bit system)
    // 0000 0000 0000 0000 0000 0000 0000 0001
    // 
    // 2. invert the bits                 (LSB - Least Significant Bit)
    // 1111 1111 1111 1111 1111 1111 1111 1110
    // 
    // 3. add 1 to (LSB) if LSB = 0, then it becomes 1, if LSB = 1,
    // then it becomes 0 carry over to the next bit
    // 
    // ex: 00000 + 1 = 00001, 00001 + 1 = 00010
    // 
    // 1111 1111 1111 1111 1111 1111 1111 1111
    //
    // 4. convert to decimal
    // 4294967295
    // 
    // 0000 0000 0000 0000 0000 0000 0000 0010 = 2
    // 1111 1111 1111 1111 1111 1111 1111 1101
    // 1111 1111 1111 1111 1111 1111 1111 1110 = 4294967294
    int a = 10;
    int b = -9;
    int c = 89u;
    long int d = 100l;

    printf("Integer positive: a = %d\n", a);
    printf("Integer negative: b = %d\n", b);
    printf("Integer unsigned: c = %d\n", c);
    printf("Long integer: d = %ld\n", d);
    printf("\n");

    // characters are stored as ASCII (integer) values
    // characters are stored as 1 byte (8 bits) in memory
    char e = 'A';
    printf("Character: e = %c\n", e);
    printf("Character: e+1 = %c\n", e+1);

    // float is used to store single-precision floating-point numbers
    // occupies 4 bytes in memory (32 bits)
    // can store up to 7 decimal places
    float f = 10.5f;
    float g = 10.5f;
    printf("Float: f = %f\n", f);
    printf("Float: g = %f\n", g);
    // 10.5 = 2 x pow(10, 2)
    printf("Float: g+2E = %f\n", g+2e2);

    // double is used to store double-precision floating-point numbers
    // occupies 8 bytes in memory (64 bits)
    // can store up to 15 decimal places
    double h = 123123123.00;
    double i = 13.1231442414;
    double j = 41224.241224;
    printf("Double: h = %f\n", h);
    printf("Double: i = %f\n", i);
    printf("Double: j = %f\n", j);
    printf("\n");
    
    // void is used to specify the type of variables/functions that do not return a value
    // void is also used to specify the type of pointers that do not have any type
    int k = 10;
    void *l = &k;
    // cast the void pointer to int pointer
    // then dereference the pointer to get the value 
    printf("Void pointer: l = %d\n", *(int*)l);
    printf("\n");

    // size of data types
    printf("Size of data types:\n\n");
    printf("Size of char = %d bytes\n", (int)sizeof(char));
    printf("Size of int = %d bytes\n", (int)sizeof(int));
    printf("Size of float = %d bytes\n", (int)sizeof(float));
    printf("Size of double = %d bytes\n", (int)sizeof(double));

    return 0;
}