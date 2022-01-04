Mulligan
===
because C deserves a second chance
---

# What is Mulligan
Mulligan is an alternative C standard library incorporating modern concepts of abstraction and reliability that are normally not a part of C.
It's designed to be a drop-in replacement for the C standard library, although it can be used in parallel if needed.

# How is Mulligan different?
The first difference is that Mulligan is largely a header-only library.
There are a few primitive abstractions which require a shared object, but that object is small compared to other monolithic libraries.