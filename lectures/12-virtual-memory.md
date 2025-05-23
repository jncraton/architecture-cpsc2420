11 Virtual Memory
=================

---

![Motherboard](https://upload.wikimedia.org/wikipedia/commons/b/b7/Computer-motherboard.jpg){height=540px}

Virtual Memory
--------------

- Hides details or limitation of underlying memory behind a modified address space

Byte Addressing
---------------

- A memory controller that allows addressing by byte rather than word is an example of a simple virtual memory system

Memory Management Unit
----------------------

- MMU
- Creates a virtual address space for the processor
- All addresses used by the CPU are virtual addresses translated by the MMU

---

![Virtual Memory System](https://upload.wikimedia.org/wikipedia/commons/thumb/d/dc/MMU_principle_updated.png/640px-MMU_principle_updated.png)

Multiple memory system
----------------------

- An MMU can connect memories with different properties (word size, etc) into a single unified address space
- Memory requests are translated by the MMU and directed to the appropriate location in a physical memory

Example Implementation
----------------------

```python
if addr < 1000:
  memory1.fetch(addr)
else:
  memory2.fetch(addr - 1000)
```

Implementation
--------------

- Subtraction is too slow to be handled by the MMU
- Split address into memory page portion and physical address portion
- Look up page using high bits
- Use low bits as address in real memory
- Page sizes must be powers of 2 for optimal performance

---

Address: 0x01234567

Page Number     Offset
-------------   ------
First 20 bits   Remaining 12 bits
0x01234         0x567

Holes
-----

- Virtual memory need not be contiguous
- The memory range may contain holes that do not map to a real memory
- Accessing these will result in an error

---

Most systems generally just have one type of main physical memory. 

Why do we use virtual memory at all?

Benefits
--------

- Homogeneous integration of hardware
- Ease of programming
- Support for multiprogramming
- Protection of programs and data

Homogeneous Integration
----------------------

- Different heterogeneous memories can be mapped to a uniform memory space
- Systems with a main memory and GPU memory can access all memory in the same way

Ease of programming
-------------------

- Special instructions are not required to select memories
- A memory address is always just a memory address
- Copying between different physical memories is simple
- Using data between memories is simple

Multiprocessing
---------------

- Virtual memory is needed to implement restrictions for process memory access and protection

---

Address   Process Purpose
-------- -------- --------
0x1010    Spotify Username
0x1020    Spotify Password
0x8010    Zoom    Username

What happens if Zoom accesses memory location 0x1020?

Data Protections
----------------

- Virtual memory can be used to secure program data
- Some pages can be marked as execute only or read-only

---

![Process Memory](https://upload.wikimedia.org/wikipedia/commons/6/6e/Virtual_memory.svg){height=540px}

---

![Protection Rings](https://upload.wikimedia.org/wikipedia/commons/2/2f/Priv_rings.svg){height=540px}

Partitions
--------

- Early attempt at virtual memory
- Each process is assigned its own address space that is a subset of the total
- Process may have a *base* and *bound* that define their memory space

Partition Weaknesses
--------------------

- Inflexible
- Course-grained

Paging
------

- Memory is assigned to a process in blocks (pages) as needed
- Pages are mapped to physical memory by the MMU

---

![Page mapping](https://upload.wikimedia.org/wikipedia/commons/3/32/Virtual_address_space_and_physical_address_space_relationship.svg){height=540px}

Paging
------

- Requires a page table to be stored
- Lookups can be slow

Caching
-------

- Page table lookups can be slow
- We can cache lookups to improve performance of repeated accesses
- This cache is called the translation lookaside buffer (TLB)

---

![TLB Mapping Pages to Frames](https://upload.wikimedia.org/wikipedia/commons/6/6e/Translation_Lookaside_Buffer.png)

Demand Paging
-------------

- An operating systems running low on memory can store less used pages to disk
- Pages can be loaded back from disk on demand
- The storage for pages may reside on a swap partition, swap file, or page file depending on OS conventions

Security
--------

- Processes can't read or write memory that hasn't been mapped
- Address space becomes private

Buffer Overflows
----------------

- A buffer overflow or other memory error can allow an attacker to gain control over a process
- A return address can be overwritten to point to an area of memory controlled by a user
- The user now has complete control over the execution

---

![Stack](https://upload.wikimedia.org/wikipedia/commons/thumb/9/93/Stack_Overflow_3.png/419px-Stack_Overflow_3.png){height=540px}

---

![Buffer Overflow Setting Return Address](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Stack_Overflow_4.png/507px-Stack_Overflow_4.png){height=540px}

NX Bit
------

- Modern CPUs have a feature that allows memory pages to be marked as not being executable to make certain classes of attacks harder to exploit.

