.section __TEXT, __text, regular, pure_instructions
.macosx_version_min 10, 12
.globl _main
.align 4, 0x90

_main:
    movl    $0x2000004,         %eax    ; syscall number for sys_write
    movl    $1,                 %edi    ; file descriptor 1 (stdout)
    leaq    message(%rip),      %rsi    ; pointer to the message   
    movl    $15,                %edx    ; message length
    syscall                             ; write the message 

    movl    $0x2000001,         %eax    ; syscall number for sys_exit
    xorl    %edi,               %edi    ; exit code 0 
    syscall                             ; exit the program

.section __TEXT, __cstring
message:
    .asciz  "Hello, World!\n"