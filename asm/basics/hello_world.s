.section __TEXT, __text, regular, pure_instructions
.macosx_version_min 10, 12
.globl _main
.align 4, 0x90

_main:
    # Write "Hello, World!\n" to stdout

    # syscall number for sys_write
    movl $0x2000004, %eax
    # file descriptor 1 is stdout
    movl $1, %edi        
    # pointer to the message          
    leaq message(%rip), %rsi    
    # message length   
    movl $15, %edx                 
    syscall

    # Exit the program

    # syscall number for sys_exit
    movl $0x2000001, %eax    
    # exit code 0      
    xorl %edi, %edi                
    syscall

.section __TEXT,__cstring
message:
    .asciz "Hello, World!\n"