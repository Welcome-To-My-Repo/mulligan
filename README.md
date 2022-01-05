Mulligan
===
because C deserves a second chance
---

# What is Mulligan
Mulligan is an alternative C standard library incorporating modern concepts of abstraction and reliability that are normally not a part of C.
It's designed to be a drop-in replacement for the C standard library, although it can be used in parallel if needed.

# How is Mulligan different?

## Lightweight

Mulligan is a header-only library.
There are a number of reasons to avoid using dynamic linking in modern software. 
Software that uses load-time linking loads much slower and nothing contained in the linked objects can be optimized with the rest of the program.
This all leads to larger and more inefficient software.