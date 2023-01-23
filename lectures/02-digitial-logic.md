2 Fundamentals of Digital Logic
===============================

Digital Logic
-------------

- Modern computers are formed from digital logic circuits
- Digital refers to the fact that circuits operate in discrete units

Electrical Terminology
---------------------

- Most modern computers are driven by electricity
- Voltage - measure of electric potential
- Current - measure of the flow of electrons

Water analogy
-------------

- Voltage is similar to water pressure
- Current is similar to flow rate

Transistors
-----------

- Mini switch that can be controlled electrically
- A small current is used to control a larger current

---

![BJT Transistor](https://upload.wikimedia.org/wikipedia/commons/9/91/Transistor_Simple_Circuit_Diagram_with_NPN_Labels.svg){height=540px}

Logic Gates
-----------

- Implement Boolean algebra functions (and, or, not)

Not Truth Table
---------------

Input A  Output Q
-------- --------
0        1
1        0

---


![Not Gate](https://upload.wikimedia.org/wikipedia/commons/6/60/NOT_ANSI_Labelled.svg){height=240px}


And Truth Table
---------------

A   B   Q
--- --- ---
0   0   0
0   1   0
1   0   0
1   1   1

---

![And Gate](https://upload.wikimedia.org/wikipedia/commons/b/b9/AND_ANSI_Labelled.svg){height=240px}

Or Truth Table
--------------

A   B   Q
--- --- ---
0   0   0
0   1   1
1   0   1
1   1   1

---

![Or Gate](https://upload.wikimedia.org/wikipedia/commons/1/16/OR_ANSI_Labelled.svg){height=240px}


Nor Truth Table
--------------

A   B   Q
--- --- ---
0   0   1
0   1   0
1   0   0
1   1   0

---

![Nor Gate](https://upload.wikimedia.org/wikipedia/commons/c/c6/NOR_ANSI_Labelled.svg){height=240px}

Nand Truth Table
--------------

A   B   Q
--- --- ---
0   0   1
0   1   1
1   0   1
1   1   0

---

![Nand Gate](https://upload.wikimedia.org/wikipedia/commons/e/e6/NAND_ANSI_Labelled.svg){height=240px}

Fundamental Gates
-----------------

- Nand and Nor gates can be combined to make virtually any digital logic circuit.
- These gates can be constructed from a combination of transistors

DeMorgan's laws
----------------

- $\neg(P\lor Q)\iff(\neg P)\land(\neg Q)$
- $\neg(P\land Q)\iff(\neg P)\lor(\neg Q)$
- [More info](https://en.wikipedia.org/wiki/De_Morgan's_laws)

Integrated Circuit
------------------

- Combine multiple logic gates or other components on a single chip

---

![7400 Series Quad Nand Gate](https://upload.wikimedia.org/wikipedia/commons/c/c6/TexasInstruments_7400_chip%2C_view_and_element_placement.jpg)

Maintaining State
-----------------

- In order to build a complete modern computer, we need to be able to store state
- One of the simplest ways to do this is by using a flip-flop or latch

---

![SR Latch](https://upload.wikimedia.org/wikipedia/commons/9/92/SR_Flip-flop_Diagram.svg){height=240px}

Clocks
------

- Allow hardware to operate without requiring input to change
- Simply emits a regular, alternating signal

Moore's Law
-----------

- Number of transistors on an IC doubles every two years
- First computers used <1000 discrete transistors
- Modern consumer CPUs can use over 50 billion transistors (M1 Max)
- Modern AI/ML wafers may include 2.6 trillion transistors (Cerebras WSE-2)
