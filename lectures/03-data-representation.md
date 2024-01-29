3 Data and Program Representation
=================================

Abstraction
-----------

- Digital logic provides the building blocks for the modern computer
- Meaningful computation on top of this system is unmanageable without abstraction
- Abstraction is the hiding of details behind interfaces

Logic Levels
------------

- Voltages thresholds such as 1.8V may be meaningful inside our RAM or CPU
- We **abstract** them as simply `true` and `false` or `1` and `0`

Bits and Bytes
--------------

- Data representation builds from digital logic
- A binary digit (**bit**) is can represent either a `0` or a `1`
- Multiple bits can be combined to represent larger values, such as a byte
- Modern systems use 8 bits in a byte

Possible values in a word
-------------------------

- A given number of bits can be used to represent a fixed number of integer values
- 8 bits can represent 256 values
- 16 bit can represent 65536 values
- In general we can represent $2^n$ values using $n$ bits

Hexadecimal
-----------

- Large strings of `1`s and `0`s can be challenging
- We may prefer base 16 (hexadecimal) to store bytes
- 1 base 16 digit represents 4 bits
- 2 base 16 digits represent a byte

Notation for constants
----------------------

- Hex constants often being with 0x e.g. 0xFFFF
- Binary constants often begin with 0b e.g. 0b1110111

Character Sets
--------------

- It is frequently useful to represent text, and not just numbers
- We need a way to map numbers to characters
- ASCII defines 128 characters that can be encoded in 7 bits

---

![ASCII Code Chart](https://upload.wikimedia.org/wikipedia/commons/4/4f/ASCII_Code_Chart.svg)

Unicode
-------

- 7 bits can represent all characters in basic English
- It is insufficient to handle other languages and uses (such as emojis)
- The Unicode standard is able to handle these characters


Binary Arithmetic
-----------------

- We can represent arbitrary numbers in binary as we can in decimal
- Each position represents the next highest power of the base

---

![Counting to 31 in binary](https://upload.wikimedia.org/wikipedia/commons/7/75/Binary_counter.gif){height=492px}

Unsigned Integers
-----------------

- The positional representation described supports only values greater than zero
- It also suffers from integer overflow and underflow
- [Example](https://repl.it/@jncraton/UnevenCraftyParallelport)

---

![Odometer Overflow](https://upload.wikimedia.org/wikipedia/commons/5/53/Odometer_rollover.jpg)

Endianness
---------

- Some systems store high bytes first others store high bytes last
- They are called big endian and little endian
- Most modern systems are little endian

---

![Big Endian](https://upload.wikimedia.org/wikipedia/commons/5/54/Big-Endian.svg)
![Little Endian](https://upload.wikimedia.org/wikipedia/commons/e/ed/Little-Endian.svg)

Negative Numbers
----------------

- Sign-magnitude - store the sign in a bit
- Two's complement - a negative is represented by subtracting 1 from the positive form and inverting every bit

Two's complement
----------------

- Allows a single piece of hardware for signed and unsigned operations
- The high bit value is negative

Example
-------

Value -8  4   2   1
----- --- --- --- ---
0     0   0   0   0
1     0   0   0   1
7     0   1   1   1
-7    1   0   0   1
-1    1   1   1   1
