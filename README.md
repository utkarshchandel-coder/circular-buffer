<<<<<<< HEAD
# Circular Buffer in C

## 🔁 Why Circular Buffer in Embedded Systems?

In embedded systems, data often arrives continuously (e.g., UART, CAN). Since dynamic memory allocation is avoided, a circular buffer allows efficient, fixed-size data storage with real-time performance and no memory fragmentation.
=======
# Circular Buffer in 

## 🔁 Why Circular Buffer in Embedded Systems?

In embedded systems, data often arrives continuously (e.g., UART, CAN). Since dynamic memory allocation is avoided, a circular buffer provides efficient, fixed-size data handling with real-time performance and no memory fragmentation.

---
>>>>>>> 376cc66 (Enhanced README: added system-level context and improved formatting)

## Overview

This project implements a **circular buffer (ring buffer)** in C, commonly used in embedded systems for efficient, non-blocking data handling.

It supports safe data insertion and retrieval using **wrap-around logic** and **buffer state checks**.

---

## Features

* Fixed-size buffer (`BUFFER_SIZE = 256`)
* O(1) insertion and removal
* Circular wrap-around using modulo operation
* Buffer full and empty condition handling
* Prevents data overwrite
* Lightweight and suitable for embedded systems

---

## How It Works

* `write_index` → points to where new data is written
* `read_index` → points to where data is read
* When index reaches the buffer limit, it wraps around to the beginning using modulo operation (% BUFFER_SIZE), ensuring continuous reuse of memory.

---

## Example Output

Data: 10
Data: 20

---

## File Structure

* `circular_buffer.h` → Structure, macros, and function declarations
* `circular_buffer.c` → Implementation
* `main.c` → Test program
---

## 📚 API Summary

void cbuffer_initialize(CircularBuffer *cbuffer);
int cbuffer_put(CircularBuffer *cbuffer, uint8_t data);
int cbuffer_get(CircularBuffer *cbuffer, uint8_t *data);
int cbuffer_is_full(CircularBuffer *cbuffer);
int cbuffer_is_empty(CircularBuffer *cbuffer);
int cbuffer_data_available(CircularBuffer *cbuffer);
---

## Key Functions

* `cbuffer_initialize()` → Initializes buffer
* `cbuffer_put()` → Adds data safely
* `cbuffer_get()` → Reads data safely
* `cbuffer_is_full()` → Checks if buffer is full
* `cbuffer_is_empty()` → Checks if buffer is empty
* `cbuffer_data_available()` → Returns number of stored elements

---

## Use Cases

* UART communication buffers
* Sensor data streaming
* Real-time embedded systems
* Producer-consumer systems

---

## Improvements (v2)

* Implemented circular wrap-around logic
* Added full and empty buffer checks
* Prevented invalid reads and overwrites
* Improved robustness for embedded applications

---

## Future Improvements

* Interrupt-safe version (for ISR usage)
* Thread-safe version (RTOS support)
* Dynamic buffer size support


