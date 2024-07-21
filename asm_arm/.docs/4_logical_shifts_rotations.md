# ARM Logical Shifts and Rotations Instructions

Here are some of the most common logical shifts and rotations instructions in ARM assembly.

## LSL

The `LSL` instruction is used to perform a logical shift left operation on a value. The syntax is as follows:

`lsl [dest], [op1], [op2]` - Perform a logical shift left operation on the value in `[op1]` by `[op2]` bits and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
lsl r1, r0, #2 ; r1 = r0 << 2
```

## LSR

The `LSR` instruction is used to perform a logical shift right operation on a value. The syntax is as follows:

`lsr [dest], [op1], [op2]` - Perform a logical shift right operation on the value in `[op1]` by `[op2]` bits and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
lsr r1, r0, #2 ; r1 = r0 >> 2
```

## ASR

The `ASR` instruction is used to perform an arithmetic shift right operation on a value. The syntax is as follows:

`asr [dest], [op1], [op2]` - Perform an arithmetic shift right operation on the value in `[op1]` by `[op2]` bits and store the result in `[dest]`.

Example:
```assembly
mov r0, #-5 ; Move the value -5 into register r0
asr r1, r0, #2 ; r1 = r0 >> 2
```

## ROR

The `ROR` instruction is used to perform a rotate right operation on a value. The syntax is as follows:

`ror [dest], [op1], [op2]` - Perform a rotate right operation on the value in `[op1]` by `[op2]` bits and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
ror r1, r0, #2 ; r1 = r0 rotated right by 2 bits
```

## MOV + LSL/LDR

The `MOV` instruction can be combined with a logical shift left operation to achieve the same result as a multiply operation. The syntax is as follows:

`mov [dest], [op1], lsl [op2]` - Perform a logical shift left operation on the value in `[op1]` by `[op2]` bits and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, r0, lsl #2 ; r1 = r0 * 4
```