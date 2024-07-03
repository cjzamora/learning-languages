#include <stdio.h>

/**
 * There are a lot of ways to define the main function.
 *  
 * Standard C:
 * int main() {}
 * int main(void) {}
 * int main(int argc, char* argv[]) {}
 * int main(int argc, char** argv) {}
 * int main(int argc, char* argv[], char* envp[]) {}
 * int main(int argc, char** argv, char** envp) {}
 * 
 * Non-standard C:
 * void main() {}
 * void main(void) {}
 * void main(int argc, char* argv[]) {}
 * void main(int argc, char** argv) {}
 * void main(int argc, char* argv[], char* envp[]) {}
 * void main(int argc, char** argv, char** envp) {}
 */
int main(int argc, char** argv, char** envp) {
    printf("Hello, World!\n");
    printf("argc: %d\n", argc);
    printf("argv: %s\n", *argv);
    printf("envp: %s\n", *envp);

    return 0;
}