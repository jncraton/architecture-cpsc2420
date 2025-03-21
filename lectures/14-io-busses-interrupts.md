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

- Pins are limited, and wider parallel connection are faster, so we reuse the same pins for communication
14 Buses
========

---

![PCI Express slots](https://upload.wikimedia.org/wikipedia/commons/thumb/3/3e/PCI-E_%26_PCI_slots_on_DFI_LanParty_nF4_SLI-DR_20050531.jpg/640px-PCI-E_%26_PCI_slots_on_DFI_LanParty_nF4_SLI-DR_20050531.jpg)

Bus
---

- Provides communication between devices
- Uses multiplexed parallel connections

---

![System Bus](https://upload.wikimedia.org/wikipedia/commons/6/68/Computer_system_bus.svg)

Fetch and Store
---------------

Core operations of the bus

Fetch
-----

1. Get bus access via control lines
2. Set address on address lines
3. Use control lines to initiate a fetch
4. Wait for operation to complete by testing control lines
5. Read value from data lines

Store
-----

1. Get bus access via control lines
2. Set address on address lines
3. Place value on data lines
4. Use control lines to initiate a store
5. Wait for operation to complete by testing control lines

Multiple buses
--------------

- A system may use multiple buses for different purposes
- This choice can have an impact on performance and complexity

Unified Memory
--------------

- The system uses one bus
- Devices and memory share a single address space
- From the CPUs perspective, access a device and accessing memory are the same operation

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
