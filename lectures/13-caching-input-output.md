12 Caching
==========

---

- Main memory access is much slower than register access or computation
- Caching gives us a tool to improve memory latency

---

![Cache Hierarchy](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Shared_private.png/583px-Shared_private.png)

Caches
------

- Small
- Active
- Transparent
- Automatic

Terms
-----

- Cache hit - requested item was found in and sourced from cache
- Cache miss - requested item was not found in cache

Cache Performance
-----------------

- We want to maximize hits and minimize misses

Latency
-------

Operation        Time
---------------- ---------------
L1 Hit           .5 ns
L2 Hit           7 ns
DRAM             100 ns
4KB from SSD     150,000 ns
LAN roundtrip    500,000 ns
HDD seek         20,000,000 ns
Europe roundtrip 150,000,000 ns 

Cache Types
-----------

- Direct-mapped (1-way set associative)
- n-way set associative
- Fully associative

<!--

Cache Replacement
-----------------

- The algorithm used for cache replacement has a strong impact on performance

Least recently used
-------------------

- An LRU eviction strategy is simple to understand
- When a new item needs to be added to a cache, we remove the oldest item in terms of access time

-->

Implementation
--------------

- Break address into `tag`, `index`, and `offset`
- Tag is stored to confirm full address
- Index is used to retrieve cache set
- Offset is used to retrieve word from cache line

Direct Mapped Cache
-------------------

- One cache set per index
- Simple
- Most vulnerable to conflict misses

---

![Direct Mapped](https://upload.wikimedia.org/wikipedia/commons/a/ab/Direct-Mapped_Cache_Snehal_Img.png)

Fully Associative Cache
-----------------------

- Does not use `index`
- All cache lines live in one set
- Requires search to find cache line
- Complex and slow
- Least vulnerable to conflict misses

---

![Fully Associative](https://upload.wikimedia.org/wikipedia/commons/9/9c/Fully-Associative_Cache_Snehal_Img.png)

Set Associative Cache
---------------------

- Multiple cache lines reside in sets
- Provides complexity/efficiency trade off

---

![Set Associative](https://upload.wikimedia.org/wikipedia/commons/7/71/Set-Associative_Cache_Snehal_Img.png)

---

![AMD K8](https://upload.wikimedia.org/wikipedia/commons/1/11/Cache%2Chierarchy-example.svg){height=540px}

x64
-----

- Cache lines are 64 bytes
- Memory data bus is 64 bits
- Memory is almost always read in 8 word bursts to fill a cache line

13 I/O
======

---

In order to be useful, CPUs need to communicate with external devices.

I/O Devices
-----------

- Keyboards
- Mice
- Displays
- Speakers
- Network

---

Communication
------------

- Data can be fed out of the CPU via special registers or instructions
- Communication may be parallel or serial

Serial Data
-----------

- A single wire is used to communication
- Simple and uses only one pin on the chip

---

![ASCII "K" in RS232](https://upload.wikimedia.org/wikipedia/commons/b/b0/Rs232_oscilloscope_trace.svg){height=540px}

Parallel Data
-------------

- Multiple wires are used for communication
- Uses more pins, but is generally faster

---

![Parallel port pinout](https://upload.wikimedia.org/wikipedia/commons/e/e0/Parallel_port_pinouts.svg){height=540px}

Multiplexing
------------

- Pins are limited, and wider parallel connections are faster, so we reuse the same pins for communication

Unified Memory
--------------

- The system uses one bus
- Devices and memory share a single address space
- From the CPU's perspective, access a device and accessing memory are the same operation

15 Interrupts
============

Polling
-------

- CPUs repeatedly fetch data in order to check if new data is available
- Wastes CPU time
- Doesn't scale to many devices

---

```c
int main() {
  while (!key_is_pressed());

  // do something
}
```

Interrupts
-----------

- Interrupt the CPU and cause it to jump to a new location
- Avoids wasted cycles caused by polling
- Similar to events in high-level languages

---

```c
void key_has_been_pressed () {
  ...
}

int main() {
  on_key_press(&key_has_been_pressed);
}
```
