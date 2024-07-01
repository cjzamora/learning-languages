#include <stdio.h>

int main() {
    // Prefixes:
    // 0: octal
    // 0x: hexadecimal
    // 0b: binary

    // decimal literal (base 10): A non-zero digit followed by zero or more decimal digits
    printf("Integer literal: %d\n", 10);
    printf("Integer literal: %d\n", 100);
    printf("\n");

    // octal literal (base 8): A zero followed by one or more octal digits
    printf("Octal literal: %d\n", 010);
    printf("Octal literal: %d\n", 06210);
    printf("\n");

    // hexadecimal literal (base 16): 0x or 0X followed by one or more hexadecimal digits
    printf("Hexadecimal literal: %d\n", 0x10);
    printf("Hexadecimal literal: %d\n", 0x1A);
    printf("\n");

    // binary literal (base 2): 0b or 0B followed by one or more binary digits
    printf("Binary literal: %d\n", 0b100);
    printf("Binary literal: %d\n", 0b101);
    printf("\n");

    // suffixes:
    // u: unsigned
    // l: long
    // ll: long long
    // f: float
    // d: double
    // ld: long double

    // floating point literal: A decimal point, an exponent, or both
    printf("Floating point literal: %f\n", 10.5);
    printf("Floating point literal: %f\n", 10.5f);
    printf("Floating point literal: %f\n", 10.5e2);
    printf("\n");

    // character literal: A single character enclosed in single quotes
    printf("Character literal: %c\n", 'A');
    printf("Character literal: %c\n", 'B');
    printf("\n");

    // string literal: A sequence of characters enclosed in double quotes
    char word[] = "Hello, World 2!";
    printf("String literal: %s\n", "Hello, World!");
    printf("String literal: %s\n", word);
    printf("\n");

    // escape sequence: A backslash followed by a character
    // \n: newline
    // \t: tab
    // \b: backspace
    // \r: carriage return
    // \f: form feed
    // \': single quote
    // \": double quote
    // \\: backslash
    printf("Escape sequence: Hello,\tworld\tfrom\nC language!");

    return 0;
}