#ifndef mulligan
#define mulligan

/*
 * Mulligan is organized into abstraction layers.
 */

/* LAYER 1
 * 
 * The bottom layer manages memory, interfacing with the system, and concurrency.
 */
#include <mulligan_memory.h>
#include <mulligan_system.h>
#include <mulligan_threads.h>

#endif