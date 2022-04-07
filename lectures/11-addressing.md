- Presentations
- Lab questions?

10 Physical Memory and Addressing
=================================

Random Access Memory
--------------------

- Most memory used by running programs is random access
- Programs can read and write arbitrary data values

Static RAM
----------

- Extension of digital logic
- Gates are combined to form latches (also called flip-flops)
- Latches can be used to store data for later use
- The term static can be confusing, but SRAM is volatile

---

![SR latch using NOR gates](https://upload.wikimedia.org/wikipedia/commons/5/53/RS_Flip-flop_%28NOR%29.svg){height=540px}

SRAM Usage
----------

- SRAM is fast
- SRAM uses many transistors that must be powered so it consumes power and generates heat
- SRAM is typically only used where speed is critical

Dynamic RAM
-----------

- Store charge in a capacitor to represent a high value
- Read capacitor state to determine bit value
- Capacitors hold their charge without power, so are more efficient than SRAM designs

Capacitors
----------

- Store electric charge
- When a voltage is applied, a charge gathers
- Charge slowly discharges over time

Refresh
-------

- Charge is lost over time
- A circuit is needed to frequently refresh the charge
- A refresh reads the current value and stores it again at the proper level of charge
- Refreshes typically happen every 64ms or more

Density
-------

- Memory cells per square area
- Memory density has historically doubled every 18 months following Moore's law

---

![Moore's Law](https://upload.wikimedia.org/wikipedia/commons/thumb/0/00/Moore%27s_Law_Transistor_Count_1970-2020.png/1280px-Moore%27s_Law_Transistor_Count_1970-2020.png)

Bandwidth
---------

- Bytes written per time
- Bytes read per time
- Read and write speed may be drastically different

Latency
-------

- Time required to execute a memory operation
- Memories may be high bandwidth and high latency

Memory Access
-------------

- Memory data is transmitted over the memory bus
- Memory locations are addressed using an index into an array of memory words
- Word size may vary by system

---

Address
------- -----------
0       32-bit word
1       32-bit word
2       32-bit word
3       32-bit word
4       32-bit word
5       32-bit word
6       32-bit word

Operations
----------

- Read - gets data from a memory address
- Write - stored data to a memory address

Byte addressing
---------------

- Programmers often want to access specific bytes
- A memory controller can handle retrieving the appropriate word from memory and then the correct byte from the word

----

Word     Byte
-------  ---- ---- ---- ----
0        0    1    2    3
1        4    5    6    7
2        8    9    10   11
3        12   13   14   15

Powers of Two
-------------

- Modular arithmetic needed to convert from byte to word addresses is generally expensive
- It becomes very cheap if we use powers of two

Alignment
---------

- It is expensive to request a word-sized value that does not begin on a word boundary
- We say that this value is not aligned
- On many architectures this will not be allowed or will come at a significant performance cost

Address Space
-------------

- We can only access as much memory as we have addresses
- For 32-bit addresses, this is 2^32 words
- Addresses often need to be stored themselves, so longer addresses than needed have a storage cost
