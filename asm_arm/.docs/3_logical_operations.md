
# ARM Logical Operation Instructions

Here are some of the most common logical operation instructions in ARM assembly.

## AND

The `AND` instruction is used to perform a bitwise AND operation on two values. The syntax is as follows:

`and [dest], [op1], [op2]` - Perform a bitwise AND operation on the values in `[op1]` and `[op2]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, #3 ; Move the value 3 into register r1
and r2, r0, r1 ; r2 = r0 & r1
```

## ORR

The `ORR` instruction is used to perform a bitwise OR operation on two values. The syntax is as follows:

`orr [dest], [op1], [op2]` - Perform a bitwise OR operation on the values in `[op1]` and `[op2]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, #3 ; Move the value 3 into register r1
orr r2, r0, r1 ; r2 = r0 | r1
```

## EOR

The `EOR` instruction is used to perform a bitwise exclusive OR (XOR) operation on two values. The syntax is as follows:

`eor [dest], [op1], [op2]` - Perform a bitwise XOR operation on the values in `[op1]` and `[op2]` and store the result in `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mov r1, #3 ; Move the value 3 into register r1
eor r2, r0, r1 ; r2 = r0 ^ r1
```

## MVN

The `MVN` instruction is used to move a value into a register with the bits inverted (this is equivalent to `~` NOT/negation in high level languages). The syntax is as follows:

`mvn [dest], [op1]` - Move the bitwise NOT of `[op1]` into `[dest]`.

Example:
```assembly
mov r0, #5 ; Move the value 5 into register r0
mvn r1, r0 ; r1 = ~r0
```