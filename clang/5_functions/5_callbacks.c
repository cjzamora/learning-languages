#include <stdio.h>

void func_a(int main) {
    if (main) {
        printf("This is func_a() called by main.\n");
    } else {
        printf("This is func_a() called somewhere else.\n");
    }
}

void func_b(void (*ptr)(int)) {
    printf("This is func_b().\n");
    ptr(0);
}

int main() {
    func_a(1);
    printf("\n");

    // function pointer
    // void - return type
    // (*ptr) - pointer name
    // (int, ...) - parameter list
    //
    // can be called as (*ptr)() or ptr()
    void (*ptr)(int) = &func_a;
    func_b(ptr);

    return 0;
}