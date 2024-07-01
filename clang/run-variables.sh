echo "Compiling external/hello.c and variables.c"

gcc -c ./clang/basics/external/hello.c -o ./clang/.bin/basics/external/hello.o -Wall
gcc -c ./clang/basics/variables.c -o ./clang/.bin/basics/variables.o -Wall

echo "Linking external/hello.o and variables.o"
gcc ./clang/.bin/basics/external/hello.o ./clang/.bin/basics/variables.o -o ./clang/.bin/basics/variables -Wall

echo ""
./clang/.bin/basics/variables