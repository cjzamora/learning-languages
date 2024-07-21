# ARM Arithmetic Instructions

Here are some of the most common arithmetic instructions in ARM assembly.

## ADD

The `ADD` instruction is used to add two values together. The syntax is as follows:

`add [dest], [op1], [op2]` - Add the values in `[op1]` and `[op2]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, #10 ; Move the value 10 into register r1
add r2, r0, r1 ; r2 = r0 + r1
```

## ADDS

The `ADDS` instruction is similar to `ADD`, but it also sets the `cpsr` flags based on the result of the addition. The syntax is as follows:

`adds [dest], [op1], [op2]` - Add the values in `[op1]` and `[op2]` and store the result in `[dest]`, setting the flags based on the result.

- The `C` flag is set if there is a carry out of the most significant bit.

Example:
```assembly
mov r0, #255 ; Move the value 255 into register r0
mov r1, #1 ; Move the value 1 into register r1
adds r2, r0, r1 ; r2 = r0 + r1, set flags based on result
```

## ADC

The `ADC` instruction is used to add two values together, including the carry flag. The syntax is as follows:

`adc [dest], [op1], [op2]` - Add the values in `[op1]`, `[op2]`, and the carry flag, and store the result in `[dest]`.

Example:
```assembly
mov r0, #255 ; Move the value 255 into register r0
mov r1, #1 ; Move the value 1 into register r1
adc r2, r0, r1 ; r2 = r0 + r1 + carry, set flags based on result
```

## SUB

The `SUB` instruction is used to subtract one value from another. The syntax is as follows:

`sub [dest], [op1], [op2]` - Subtract the value in `[op2]` from `[op1]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #10 ; Move the value 10 into register r0
mov r1, #5 ; Move the value 5 into register r1
sub r2, r0, r1 ; r2 = r0 - r1
```

## SUBS

The `SUBS` instruction is similar to `SUB`, but it also sets the `cpsr` flags based on the result of the subtraction. The syntax is as follows:

`subs [dest], [op1], [op2]` - Subtract the value in `[op2]` from `[op1]` and store the result in `[dest]`, setting the flags based on the result.

- The `N` flag is set if the result is negative.
- The `Z` flag is set if the result is zero.

Example:
```assembly
mov r0, #10 ; Move the value 10 into register r0
mov r1, #5 ; Move the value 5 into register r1
subs r2, r0, r1 ; r2 = r0 - r1, set flags based on result
```

## MUL

The `MUL` instruction is used to multiply two values together. The syntax is as follows:

`mul [dest], [op1], [op2]` - Multiply the values in `[op1]` and `[op2]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, #10 ; Move the value 10 into register r1
mul r2, r0, r1 ; r2 = r0 * r1
```