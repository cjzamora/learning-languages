# ARM Data Movement Instructions

Here are some of the most common data movement instructions in ARM assembly.

## MOV

The `MOV` instruction is used to move data from one register to another. The syntax is as follows:

`mov [reg], [val]` - Move the value `[val]` into the register `[reg]`.

- `val` can be a constant value by using the `#[val]` symbol.
- `val` can be a register by using the `r0` as value.
- `val` can be a label address by using the `=label` symbol.

Example:
```assembly
.data
list:
    .word 10, 20, 30 ; This are stored in stack memory

mov r0, #5 ; Move the value 5 into register r0
mov r1, r0 ; Move the value in register r0 into register r1
mov r2, =list ; Move the address of the label list into register r2
```

## LDR

The `LDR` instruction is used to load data from memory into a register. The syntax is as follows:

`ldr [reg], [mem]` - Load the value at memory location `[mem]` into the register `[reg]`.

- `mem` can be a constant value by using the `#[mem]` symbol.
- `mem` can be a register by using the `r0` as value.
- `mem` can be a label address by using the `=label` symbol.

Example:
```assembly
mov r0, #0xfff ; Move the value 0xfff into register r0
ldr r1, [r0] ; Load the value at memory location 0xfff into register r1
```

## STR

The `STR` instruction is used to store data from a register into memory. The syntax is as follows:

`str [reg], [mem]` - Store the value in register `[reg]` into memory location `[mem]`.

- `mem` can be a constant value by using the `#[mem]` symbol.
- `mem` can be a register by using the `r0` as value.
- `mem` can be a label address by using the `=label` symbol.

Example:
```assembly
mov r0, #0xfff ; Move the value 0xfff into register r0
mov r1, #0x10 ; Move the value 0x10 into register r1
str r1, [r0] ; Store the value in register r1 into memory location 0xfff
```

## PUSH

The `PUSH` instruction is used to push a register onto the stack memory. The syntax is as follows:

`push [reg]` - Push the value in register `[reg]` onto the stack memory.

- The stack pointer is decremented by 4 bytes before the value is stored.
- The value in the register is stored at the memory location pointed by the stack pointer.
- The stack pointer is updated to point to the next available memory location.
- The stack grows downwards.
- The stack pointer is stored in the register `sp`.
- `[reg]` can be a list of registers separated by commas.

Example:
```assembly
mov r0, #0x10 ; Move the value 0x10 into register r0
push r0 ; Push the value in register r0 onto the stack memory
```

## POP

The `POP` instruction is used to pop a register from the stack memory. The syntax is as follows:

`pop [reg]` - Pop the value from the stack memory into the register `[reg]`.

- The value in the memory location pointed by the stack pointer is loaded into the register.
- The stack pointer is incremented by 4 bytes after the value is loaded.
- The stack pointer is updated to point to the next available memory location.
- The stack grows downwards.
- The stack pointer is stored in the register `sp`.
- `[reg]` can be a list of registers separated by commas.

Example:
```assembly
pop r0 ; Pop the value from the stack memory into register r0
```