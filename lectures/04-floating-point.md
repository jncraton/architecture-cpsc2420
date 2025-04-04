3 Data Representation
=====================

Integer Representation
----------------------

2³   2²  2¹  2⁰
---  --- --- --- ---
8    4   2   1
1    0   0   1   = 9

Multiplication
--------------

- Algorithm similar to the one most of us learned for long decimal multiplication
- Simpler in binary, as the bitwise `and` is multiplication

Decimal Multiplication
----------------------

       256
      x 12
      ----
       512
    + 256
    ------
      3072

Binary Multiplication
---------------------

       1001 (8+1=9)
       x 10 (2)
    -------
       0000
    + 1001
    -------
      10010 (16+2=18)

Binary Multiplication
---------------------

       11010 (16+8+2=26)
       x 101 (4+1=5)
    --------
       11010
    + 00000
     11010
    --------
    10000010 (128+2=130)

Binary Multiplication
---------------------

- Can be implemented using bitwise `and`, `shift`, and `addition`
- Can be implement in software or directly in hardware
- Represents chained addition operations, so will be slower than addition on most systems

---

Do you notice anything special about multiplication by 2?

Fractional Numbers
------------------

- How can we represent fractional numbers?
- We could simply assign a decimal point location to integers
- A fixed point approach limits space and precision when dealing with large and small numbers

Floating Point
--------------

- Represent the significant digits of a number separate from the scale of the number
- Similar to scientific notation

---

Scientific Notation
-------------------

- $6.022 \times 10^{23}$
- Values are represented by a *mantissa* and *exponent*
- $mantissa \times 10^{exponent}$

Floating Point
--------------

- Binary representation
- Sign represented explicitly

Scientific Notation in Binary
-----------------------------

- $mantissa \times 2^{exponent}$
- For example: $1.01 \times 2^{-3}$


IEEE Floating Point
-------------------

- First bit used for sign
- Next 8 bits used for exponent
    - Raw value is biased by -127
- Final 23 bits used for mantissa
- A normalized mantissa will always start with 1, so the leading bit can be dropped

---

![IEEE Floating Point Example](https://upload.wikimedia.org/wikipedia/commons/d/d2/Float_example.svg){height=128px}

- Raw mantissa is 0b01
    - Prepending the implicit 1 gives 1.01
- Unbiased exponent is 0b01111100 (124)
    - Adding the bias (-127) gives -3
- Shifting mantissa by exponent gives 0.00101
- 0.00101 in binary is 0.15625 in decimal

Floating Point Range
--------------------

- Floating point numbers can occupy a range greater than a similarly sized integer with a loss of precision

Example
-------

```c
#include <stdio.h>

int main(void) {
	float f = 16777210;

	for (int i = 0; i < 10; i++) {
		f += 1;
		printf("%f\n", f);
	}
}
```

Special Floating Point Values
-----------------------------

- Zero (+/-) is representable
    - All exponent bits unset, mantissa unset
- Infinity (+/-) is representable
    - All exponent bits set, mantissa unset
- NaN is representable
    - All exponent bits set, all mantissa bits set

Data Aggregates
---------------

- We can combine multiple integers, floats, and characters into larger data structures

---

```c
typedef struct {
  char name[16];
  float x;
  float y;
  float z;
  int hp;
} player;
```
