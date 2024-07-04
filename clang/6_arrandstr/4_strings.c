#include <stdio.h>
#include <string.h>

void print_string(char str[]) {
    printf("String from function: %s\n", str);
}

int main() {
    // basic string
    // - assigning is only possible at the time of declaration
    // - cannot be modified unless using strcpy, or modify it one by one
    char str[] = "Hello, World!";
    printf("String: %s\n", str);
    printf("Length: %ld\n", strlen(str));
    printf("\n");

    // pass string to function
    print_string(str);
    printf("\n");

    // character pointer
    // - can be modified
    char *ptr = str;
    printf("String from pointer: ");
    // print one by one
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n\n");

    // some basic string functions
    printf("Basic string functions: \n");
    char str2[50];

    // ANSI C string functions
    // strcpy - copy string
    strcpy(str2, "Hello, World!");
    // strcpy(str2, str2);
    printf("strcpy: %s\n", str2);
    // strcat - concatenate string
    printf("strcat: %s\n", strcat(str2, " Good Morning!"));
    // strlen - length of string
    printf("strlen: %ld\n", strlen(str2));
    // strcmp - compare string
    // - return 0 if equal
    // - return < 0 if str1 < str2
    // - return > 0 if str1 > str2
    printf("strcmp: %d\n", strcmp("Hello!", "Hello!!"));
    // strchr - find first occurrence of character in string
    // - return NULL if not found
    // - return pointer to the first occurrence, 
    //   it will print the rest of the string from that first occurrence
    printf("strchr: %s\n", strchr(str2, 'o'));
    // strstr - find first occurrence of substring in string
    // - return NULL if not found
    // - return pointer to the first occurrence,
    //   it will print the rest of the string from that first occurrence
    printf("strstr: %s\n", strstr(str2, "Good"));
    // strtok - split string into tokens
    // - return NULL if no more tokens
    // - return pointer to the token
    char *token = strtok(str2, " ");
    // print comma separated tokens
    // do not print comma for the last token
    printf("strtok: ");
    while(token != NULL) {
        printf("%s", token);
        token = strtok(NULL, " ");
        if(token != NULL) {
            printf(" | ");
        }
    }

    printf("\n");

    return 0;
}