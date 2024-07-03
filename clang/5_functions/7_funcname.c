#include <stdio.h>
#include <stdarg.h>

void func_a() {
    printf("This is called from `%s`\n", __func__);
}

void func_b() {
    printf("This is called from `%s`\n", __func__);
}

int main() {
    printf("Test __func__ predefined identifier:\n");
    func_a();
    func_b();

    return 0;
}