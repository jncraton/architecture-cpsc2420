8 Assembly Languages
====================

High-level languages
--------------------

Provide abstractions to developers to make programming fast, reliable, and effective

High-level languages
-------------------

- Many-to-one translation
- Hardware independence
- Application orientation
- General-purpose
- Powerful abstractions

Low-level languages
-------------------

Provide minimal abstraction over hardware to allow direct control over systems

Low-level languages
-------------------

- One-to-one translation
- Hardware dependence
- Systems programming orientation
- Special-purpose
- Few abstractions

Assembly language
-----------------

- Family of languages that translate directly to machine instructions
- Different hardware architectures will have different assembler language
- Multiple flavors of assembly language may be used with the same hardware

Syntax
------

Generally one instruction per line using the form:

```nasm
label: opcode operand1, operand2
```

Labels are typically optional.

Operand Ordering
----------------

- Languages may differ on operand order
- Some are left-to-right while others may be right-to-left

Operand Types
-------------

- Many processors allow different operand types in instructions
- Assembly languages need to support this feature

```nasm
; copy value in r1 to r2
mov r2,r1
; copy value in r1 to memory location pointed to by r2
mov (r2),r1
```

Conditional Paradigm
--------------------

- Assembly typically has not `if` statement
- How can we emulate this behavior?

---

```c
if (a == b) {
  do_something();
}
next_statement();
```

---

```nasm
      cmp r1, r2
      bne done
      ; do something
done: ; next statement
```

Definite iteration
------------------

- How can we create a `for` loop without `for`?

---

```c
for (int i = 0; i<10; i++) {
  \\ repeat something
}
```

---

```nasm
start: cmp r4,10
       jge done
       ; repeat something
       inc r4
       jmp start
done:  ; next statement
```
