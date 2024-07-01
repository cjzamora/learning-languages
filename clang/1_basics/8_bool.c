#include <stdio.h>
#include <stdbool.h>

// implement boolean through typedef enums rather than importing stdbool.h
typedef enum { False, True } Boolean;

// using #define to define boolean
#define _BOOL_ int
#define TRUE 1
#define FALSE 0

bool test_bool_as_return() {
    return true;
}

int main() {
    bool a = true;
    bool b = false;

    printf("Boolean true: %d\n", a);
    printf("Boolean false: %d\n", b);
    printf("\n");

    Boolean c = True;
    Boolean d = False;

    printf("Boolean true (enum): %d\n", c);
    printf("Boolean false (enum): %d\n", d);
    printf("\n");

    _BOOL_ e = TRUE;
    _BOOL_ f = FALSE;

    printf("Boolean true (#define): %d\n", e);
    printf("Boolean false (#define): %d\n", f);
    printf("\n");

    // test boolean as return
    bool g = test_bool_as_return();
    printf("Boolean as return: %d\n", g);
    printf("\n");

    return 0;

}