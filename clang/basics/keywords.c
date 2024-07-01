#include <stdio.h>
#include <string.h>

// test switch/case
void test_switch_case(int x) {
    switch(x) {
        case 1:
            printf("Test \"switch/case\": x = %d\n", x);
            break;
        case 2:
            printf("Test \"switch/case\": x = %d\n", x);
            break;

        default:
            printf("Test \"switch/default\": x = %d\n", x);
            break;
    }

}

// test if/else
void test_if_else(int x) {
    if (x == 10) {
        printf("Test \"if/else\": x = 10 => %s\n", x == 10 ? "true" : "false");
    } else {
        printf("Test \"if/else\": x != 10 => %s\n", x != 10 ? "true" : "false");
    }
}

// test enum
void test_enum() {
    enum color { red, green, blue };
    enum color c;
    c = blue;
    printf("Test \"enum\": c = blue => %d\n", c);
}

// test goto
void test_goto() {
    int i = 0;

    loop:
        printf("Test \"goto\": i = %d\n", i);
        i ++;
        if (i < 3) {
            goto loop;
        }
}

// test static
void test_static() {
    static int i = 0;
    i ++;
    printf("Test \"static\": i = %d\n", i);

}

// NOTE: cannot test this because "extern" variable must be declared in another file
// "extern" keyword is used to declare a global variable
// extern int ext_var;

// "struct" keyword in C is used to declare a structure. A structure is a list of variables,
// they can be of different types, which are grouped together under one data type.
struct Books {
    char title[50];
    char author[50];
    int year;
};

// "union" keyword is used to declare a union. A union is a special data type available in C
// that allows to store different data types in the same memory location.
// NOTE: union uses the same memory location for all it's members.
// When you assign a new value to any member, it overwrites the previous value 
// because they share the same memory space.
// "union" is useful when you want to represent a value in different forms.
// union Data { ... } var1, var2, var3;
union Data {
    char string[50];
    int number;
    float decimal;
}; // one or more variables can be declared here

int main() {
    // "auto" storage class, can only be used within functions
    // "auto" is the default storage class for all local variables
    // "auto" keyword is rarely used
    auto int a = 10;
    printf("Test \"auto\": auto int a = %d\n", a);
    printf("\n");

    // "break" and "continue" are used to control the flow of loop
    for(int i = 0; i <= 10; i ++) {
        if (i == 2) {
            printf("Test \"continue\": i = %d\n", i);
            continue;
        }

        if (i == 8) {
            printf("Test \"break\": i = %d\n", i);
            break;
        }
    }

    printf("\n");

    // "case" and "switch" are used to control the flow of switch statement
    test_switch_case(1);
    test_switch_case(2);
    test_switch_case(3);
    printf("\n");

    // "char" is used to declare character type variables
    char b = 'A';
    printf("Test \"char\": char b = %c\n", b);
    printf("\n");


    // "const" keyword is used to declare constants
    const int c = 20;
    printf("Test \"const\": const int c = %d\n", c);
    printf("\n");

    // "do/while" loop is used to execute a block of statements repeatedly until a given condition is true
    int nn = 1;
    do {
        printf("Test \"do/while\": i = %d\n", nn);
        nn++;
    } while (nn<= 3);

    printf("\n");

    // "double" is used to declare floating point variables
    double d = 10.5;
    printf("Test \"double\": double d = %f\n", d);
    printf("\n");

    // "float" is used to declare floating point variables
    float e = 10.5;
    printf("Test \"float\": float e = %f\n", e);
    printf("\n");

    // "if/else" is used to execute a block of code if a condition is true
    test_if_else(10);
    test_if_else(20);
    printf("\n");

    // "enum" is used to declare an enumeration
    test_enum();
    printf("\n");

    // NOTE: cannot test this because "extern" variable must be declared in another file
    // "extern" keyword is used to declare a global variable
    // printf("Test \"extern\": extern int ext_var = %d\n", ext_var);
    // printf("\n");

    // "goto" keyword is used to jump to a specific part of the program
    test_goto();

    // "int" is used to declare integer type variables
    int f = 10;
    printf("Test \"int\": int f = %d\n", f);
    printf("\n");

    // "short/long/signed/unsigned" are used to modify the data type of a variable
    short int g = 10; // range: -32,768 to 32,767
    unsigned short int h = 10; // range: 0 to 65,535
    unsigned int i = 10; // range: 0 to 4,294,967,295
    long int j = 10; // range: -2,147,483,648 to 2,147,483,647
    unsigned long int k = 10; // range: 0 to 4,294,967,295
    long long int l = 10; // range: -(2^63) to (2^63)-1
    unsigned long long int m = 10; // range: 0 to 18,446,744,073,709,551,615
    signed char n = 10; // range: -128 to 127
    unsigned char o = 10; // range: 0 to 255
    long double p = 10.5; // range: 3.4E +/- 4932

    printf("Test \"short\": short int g = %hd\n", g);
    printf("Test \"unsigned short\": unsigned short int h = %hu\n", h);
    printf("Test \"unsigned\": unsigned int i = %u\n", i);
    printf("Test \"long\": long int j = %ld\n", j);
    printf("Test \"unsigned long\": unsigned long int k = %lu\n", k);
    printf("Test \"long long\": long long int l = %lld\n", l);
    printf("Test \"unsigned long long\": unsigned long long int m = %llu\n", m);
    printf("Test \"signed char\": signed char n = %d\n", n);
    printf("Test \"unsigned char\": unsigned char o = %u\n", o);
    printf("Test \"long double\": long double p = %Lf\n", p);
    printf("\n");

    // "sizeof" is used to get the size of a variable in "bytes"
    printf("Test \"sizeof\": sizeof(int) = %lu\n", sizeof(int));

    // "register" variables tell the compilter to store variables in the CPI register
    // instead of memory. Frequently used variables are kept in the CPU registers 
    // for faster access.
    register char q = 'A';
    printf("Test \"register\": register char q = %c\n", q);
    printf("\n");

    // "static" keyword is used to declare static variables. A static variable is not 
    // limited by a scope and can be used throughout the program. It's value is preserved
    // event after it's scope.
    test_static();
    test_static();
    printf("\n");

    // "struct" keyword is used to declare a structure. A structure is a list of variables,
    // they can be of different types, which are grouped together under one data type.
    struct Books book1;
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Dennis Ritchie");
    book1.year = 1972;

    printf("Test \"struct\": book1.title = %s\n", book1.title);
    printf("Test \"struct\": book1.author = %s\n", book1.author);
    printf("Test \"struct\": book1.year = %d\n", book1.year);
    printf("\n");

    // "typedef" keyword is used to give a data type a new name
    typedef int integer;
    integer r = 10;
    printf("Test \"typedef\": integer r = %d\n", r);
    printf("\n");

    // "union" keyword is used to declare a union. A union is a special data type available in C
    // that allows to store different data types in the same memory location.
    // NOTE: union uses the same memory location for all it's members.
    // When you assign a new value to any member, it overwrites the previous value 
    // because they share the same memory space.
    // "union" is useful when you want to represent a value in different forms.
    union Data data;
    strcpy(data.string, "John Doe");
    printf("Test \"union\": data.string = %s\n", data.string);
    data.number = 20;
    printf("Test \"union\": data.number = %d\n", data.number);
    data.decimal = 70.5;
    printf("Test \"union\": data.decimal = %f\n", data.decimal);
    printf("\n");

    // "volatile" keyword is used to tell the compiler not to optimize the code
    // because the value of the variable may change at any point int time
    volatile int s = 10;
    printf("Test \"volatile\": volatile int s = %d\n", s);
    printf("\n");

    return 0;
}