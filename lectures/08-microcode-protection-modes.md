- Midterm grades

7 CPUs: Microcode, Protection, Modes
====================================

Central processors
------------------

- Modern computers are distributed systems with many processors
- main CPU, GPU, sound, wifi, cellular, etc
- A "central" processor can be thought of as orchestrating the others

CPU roles
---------

- Running applications
- Running OS
- Handling I/O
- Powering devices (including the whole computer) on and off

Protection and Privilege
------------------------

- Application programs need very limited access
- Certain parts of the operating system need unlimited access

Processor Modes
---------------

- Allow the process to change how instructions are handled
- Some instructions may be unavailable
- Some memory ranges may be unavailable
- Other privileges may be adjusted

Backwards Compatibility
-----------------------

- Processor modes can be used to allow new hardware to behave like old hardware
- Intel CPUs include compatibility mode in 32-bit CPUs to allow them to behave like their older 16-bit CPUs

Changing Modes
--------------

- Automatic - initiated by hardware
- Manual - initiated by instructions

Device I/O
----------

- Hardware may interrupt the processor
- This will move control flow to a new location and likely adjust the processor mode

Operating System
----------------

- The OS needs full control of the system, so it will change modes as needed
- User programs should not have full control, so they operate in a restricted mode they cannot change

Mode register
-------------

- A special purpose register may be used to store the current mode

Privilege Levels
-----------------

- How many privilege levels should we have?
- We need at least 2 in order to isolate application programs from the OS

---

![4-layer protection ring scheme](https://upload.wikimedia.org/wikipedia/commons/2/2f/Priv_rings.svg)

Microcode
=========

Complex instruction sets
------------------------

- How do we implement complex instruction sets in hardware?

Microcode
---------

- We can convert one set of complex instructions (macrocode) into simpler instructions run directly by the CPU (microcode)

Advantages
----------

- Simplifies testing and development
- Microcode generation can be patched to fix hardware problems

Parallel Execution
------------------

- We can run multiple microcode instructions (micro-ops) simultaneously to make better use of available hardware
- We can add more processing engines to run more micro-ops in parallel

---

![micro-ops](https://upload.wikimedia.org/wikipedia/commons/9/97/Micro-operations.svg){height=540px}

Scheduling
----------

- Determining what to run next becomes a complex problem
- Data dependencies and branches must be considered

Out-of-order Execution
----------------------

- Instructions can be run in different order than they come in
- Results must be the same

Conditional Branches
--------------------

- Create additional challenges for out-of-order execution
- Branch prediction is used to improve performance
