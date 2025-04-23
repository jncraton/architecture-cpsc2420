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
