#include <stdio.h>

int main() {
    // escape sequence: A backslash followed by a character
    // \a: alert
    // \n: newline
    // \t: tab
    // \b: backspace
    // \r: carriage return
    // \f: form feed
    // \': single quote
    // \": double quote
    // \\: backslash
    // \v: vertical tab
    // \? question mark
    // \xhh: hexadecimal number
    // \ooo: octal number
    printf("Escape sequence: alert\a\n");
    printf("Escape sequence: newline\n");
    printf("Escape sequence: tab\ttab\n");
    printf("Escape sequence: backspace\b\n");
    printf("Escape sequence: carriage return\r\n");
    printf("Escape sequence: form feed\f\n");
    printf("Escape sequence: single quote: \'\n");
    printf("Escape sequence: double quote: \"\n");
    printf("Escape sequence: backslash: \\\n");
    printf("Escape sequence: vertical tab\v\n");
    printf("Escape sequence: question mark\?\n");
    printf("Escape sequence: hexadecimal number: \x41\n");
    printf("Escape sequence: octal number: \101\n");
    
    return 0;
}