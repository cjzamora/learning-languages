#include <stdio.h>
#include "hello.h"

char hello_ext[50] = "Hello World from external file!";

void print_hello_ext() {
    printf("external/hello.h: %s\n", hello_ext);
}