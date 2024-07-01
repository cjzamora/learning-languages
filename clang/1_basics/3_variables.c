#include <stdio.h>
#include "external/hello.h"

// global variable (can be accessed in any scope/block)
int a = 20;

// doing this will cause an error because this is already declared in "external/hello.h"
// as "extern char hello_ext[50];"
// int hello_ext = 10;
// declaring inside a function will not cause an error because local variables are prioritized

// macros is also used to define consttant and global variables
// but the problem with macros is that it does not have a type checking
// and is also prone to errors because the preprocessor will replace the value of the macro
// with the literal value of the macro
#define MAX 100

// enums is used to declare a set of named integer constants
// if value is not defined, it will be the value of the previous variable + 1
enum VARS { var = 10, var2 = 20, var3 };
// another way to define enums, the value will be the value of the previous variable + 1
// value will be kind of like an array index
enum VARS2 { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

void test_static() {
    static int i = 0;
    i++;
    printf("Test \"static\": i = %d\n", i);
}

int main() {
    // local variable (can be accessed only in this scope/block)
    int b = 10;
    printf("Test \"global variable\": a = %d\n", a);
    printf("Test \"local variable\": b = %d\n", b);
    printf("\n");

    // test static
    test_static();
    test_static();
    printf("\n");

    // auto variable (default variable type)
    auto int c = 30;
    printf("Test \"auto variable\": c = %d\n", c);
    printf("\n");

    // external variable
    printf("Test \"print_hello_ext\": \n");
    print_hello_ext();
    printf("\n");

    // register variable (store in CPU register instead of memory)
    register int d = 40;
    printf("Test \"register variable\": d = %d\n", d);
    printf("\n");

    // const variable (cannot be modified)
    const int e = 50;
    printf("Test \"const variable\": e = %d\n", e);
    printf("\n");

    // const variable with pointer
    const int *f = &e;
    printf("Test \"const variable with pointer\": f = %d\n", *f);
    printf("\n");

    // macros
    printf("Test \"macros\": MAX = %d\n", MAX);

    // re-define macros
    #ifdef MAX
    #undef MAX
    #define MAX 200
    #endif

    printf("Test \"re-defined macros\": MAX = %d\n", MAX);
    printf("\n");

    // enums
    printf("Test \"enums\": var = %d, var2 = %d\n", var, var2);
    printf("Test \"enums\": var3 (no value defined) = %d\n", var3);

    printf("Test \"enums\": with no value defined\n");
    printf("Mon = %d, Tue = %d, Wed = %d, Thu = %d, Fri = %d, Sat = %d, Sun = %d\n", Mon, Tue, Wed, Thu, Fri, Sat, Sun);

    return 0;
}