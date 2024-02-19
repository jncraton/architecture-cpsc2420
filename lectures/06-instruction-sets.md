Course Updates
--------------

- Exam 3/1 during lab time
- Review assignment posted
- Presentation Dates
- Lab questions?

5 Processor Types and Instruction Sets
=====================================

Necessary Operations
--------------------

- In order to compute any computable function, a CPU needs to support only a small number of operations
- For example, `increment`, `decrement`, and `branch_if_not_zero` are sufficient

Examples
--------

- `li 0`, `li 1` (load immediate)
- `add` (with clobbering)
- `mov`
- `add` (no clobbering)

---

Add `a` and `b` storing result in `b`

```c
#include <stdio.h>

int main(void) {
  int a = 5;
  int b = 10;
  int c = a; // Prevent clobbering

  while (c) {
    c--;
    b++;
  }

  printf("a: %d b: %d c: %d\n", a, b, c);
}
```

Single instruction computers
----------------------------

- A complete computer can be created using [only a single instruction](https://en.wikipedia.org/wiki/One-instruction_set_computer)
- An example instruction is `decrement_and_branch_if_not_zero`

Included Operations
-------------------

- A very small instruction set is not convenient for the programmer or efficient for the hardware
- We include more complex operations for reasons of efficiency and convenience rather than to be able to compute new functions

Trade offs
---------

- Convenience
- Speed
- Hardware cost
- Power efficiency
- Thermal efficiency

Instruction Set
---------------

- The set of instruction types that a CPU can decode and execute
- The instruction set specification will describe exactly how each instruction is executed

Instruction Format
------------------

- Specified binary representation of instructions

Opcodes
-------

- Typically a number representing the operation to perform

Operands
--------

- The value(s) needed to perform an operation

Results
-------

- Value returned by operation
- Storage location may be fixed or read from the instruction

Instruction Format
------------------

- Typically a binary string
- Divided into opcodes, operands, and values

---

![MIPS addi instruction](https://upload.wikimedia.org/wikipedia/commons/2/2a/Mips32_addi.svg){height=360px}

Variable Length Instructions
----------------------------

- Some instructions need fewer operands than others
- It may be advantageous to use variable length instructions for space efficiency
- Fixed length instructions are much easier to decode in hardware

Registers
---------

- Provide high-speed data storage
- Use fetch and store operations
- A typical computer will have less than 100

Floating Point Registers
------------------------

- Systems may have separate registers for different purposes
- Floating point is on common example of this

Typical Use
-----------

```
load memory location to R0
load memory location to R1
add R0 and R1, store result in R1
write R1 to a memory location
```

Register allocation
-------------------

- When creating programs it important to choose wisely how to use registers
- They are very limited, and memory access is expensive

Extended Registers
------------------

- Some systems may allow registers to be combined to store larger values
- For example, loading a double-length integer into R0 and R1

Instruction Set Sizes
---------------------

- Reduced Instruction Set Computer (RISC)
- Complex Instruction set Computer (CISC)
- RISC provides simpler CPUs but longer programs
- RISC processors typically execute instructions in one cycle

RISC Execution Pipeline
-----------------------

1. Instruction fetch
2. Instruction decode and register fetch
3. Execute
4. Memory access
5. Register write back

Pipeline
--------

- Hardware executes each step of the process in turn
- We can exploit this fact to execute multiple instructions in parallel

---

![Pipeline Example](https://upload.wikimedia.org/wikipedia/commons/2/21/Fivestagespipeline.png)

Stalls
------

- Instructions frequently depend on data from prior instructions
- In some cases, we may not be able execute an instruction immediately

---

![Full pipeline](https://upload.wikimedia.org/wikipedia/commons/c/cb/Pipeline%2C_4_stage.svg){height=540px}

---

![Pipeline stall addressed with bubble](https://upload.wikimedia.org/wikipedia/commons/6/67/Pipeline%2C_4_stage_with_bubble.svg){height=540px}

---

![Bubble insertion](https://upload.wikimedia.org/wikipedia/commons/d/d0/Data_Forwarding_%28Two_Stage%29.svg){height=360px}

Forwarding
----------

It is sometimes possible to forward data directly from the output of one instruction to the input of another, saving a bubble in the pipeline.

Other Stalls
------------

- Branches
- Subroutine calls
- Slow I/O such as main memory

Types of Operations
-------------------

- Arithmetic (integer)
- Logical (Boolean)
- Floating point
- Data access and transfer
- Branch
- Processor control

Program Counter
---------------

- Used to track location of current instruction in fetch-execute cycle
- Stored in special-purpose register
- Also known as the instruction pointer

Condition Codes
---------------

- Used to store status of instruction internally
- Can be used for decisions later
- For example, one instruction may compare two integers while a second will branch if they were not equal

Subroutines
-----------

- `jmp`, `branch`, or similar instructions allow adjustments to control flow
- Subroutines can be implemented by storing arguments in pre-determined registers or memory locations
- Callees know how to pick up arguments and store results for the caller
