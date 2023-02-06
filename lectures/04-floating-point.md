3 Data Representation
=====================

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

Floating Point
--------------

- Binary representation
- Sign represented explicitly
- Normalized to remove leading zeroes in mantissa
- A normalized mantissa will always start with 1, so the leading bit can be dropped
- The exponent is biased to allow negative exponents

---

![IEEE Floating Point](https://upload.wikimedia.org/wikipedia/commons/d/d2/Float_example.svg){height=128px}

Floating Point Range
--------------------

- Floating point numbers can occupy a range greater than a similarly sized integer with a loss of precision
- [Example](https://repl.it/@jncraton/max-int-floating-point)

Data Aggregates
---------------

- We can combine multiple integers, floats, and characters into larger data structures
