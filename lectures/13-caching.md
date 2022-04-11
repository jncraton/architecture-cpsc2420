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

Cache Replacement
-----------------

- The algorithm used for cache replacement has a strong impact on performance

Least recently used
-------------------

- An LRU eviction strategy is simple to understand
- When a new item needs to be added to a cache, we remove the oldest item in terms of access time

