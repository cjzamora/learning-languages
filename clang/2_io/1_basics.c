#include <stdio.h>

void clear_buffer() {
    while((getchar()) != '\n');
}

int main() {
    int num;
    char y;
    float f;
    char str[100];

    // integer input
    printf("Test \"scanf\" function\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    printf("\n");
    
    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // float input
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("You entered: %f\n", f);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // char input
    printf("Enter a character: ");
    scanf("%c", &y);
    printf("You entered: %c\n", y);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // string read a word
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // string - sentence using scan sets
    // %[^\n]s - read until newline
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    printf("You entered: %s\n", str);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // string - accepting specific characters
    // %[abc]s - read only a, b, c
    char abc[100];
    printf("Enter a string with only a, b, c: ");
    scanf("%[abc]s", abc);
    printf("You entered: %s\n", abc);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // string - non digit characters
    // %[^0-9]s - read until a digit is found
    char non_digit[100];
    printf("Enter a string with no digits: ");
    scanf("%[^0-9]s", non_digit);
    printf("You entered: %s\n", non_digit);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // string - alpha numeric characters
    // %[a-zA-Z0-9]s - read until a non alpha numeric character is found
    char alpha_numeric[100];
    printf("Enter a string with only alpha numeric characters: ");
    scanf("%[a-zA-Z0-9]s", alpha_numeric);
    printf("You entered: %s\n", alpha_numeric);
    printf("\n");

    // clear buffer or put a space between scanf (scanf(" %c", &y))
    clear_buffer();

    // printf - print output to user
    printf("Test \"printf\" function\n");
    printf("Test print integer: %d\n", 10);
    printf("Test print float: %f\n", 10.5);
    printf("Test print string: %s\n", "Hello World");
    printf("Test print character: %c\n", 'A');
    printf("\n");

    return 0;
}