# My-C-Projects

This repository represents my journey through the **42 curriculum**, where I rebuilt core C standard library functions from first principles.  
The goal was not only correctness, but **precision, discipline, and a deep understanding of how C works at a low level**.

Every function in this repository reflects:

- Careful **memory management**
- Explicit **pointer reasoning**
- Defensive programming against edge cases
- Respect for **single-responsibility** and clean architecture

---

## Core Principles

- **No blind coding** — every line exists for a reason  
- **No hidden allocations** — memory is calculated before it is requested  
- **No monolithic functions** — logic is decomposed into clear, testable steps  
- **No leaks** — every allocation has a defined lifetime  

---

## Example: `ft_split` — Design & Implementation

One of the best examples of my approach is `ft_split`.

Rather than implementing it as a single, dense function, I deliberately split it into **multiple focused functions**, each responsible for exactly one task.

This was a design choice driven by **clarity, correctness, and full control over memory**.

---

### 1. Counting the Required Memory

Before allocating anything, I first compute **exactly how many substrings** will be produced.

This step is critical because:

- It prevents over-allocation
- It ensures `malloc` is called **once** for the pointer array
- It guarantees predictable and deterministic memory usage

Key ideas:

- Iterate through the string once
- Skip delimiter characters
- Detect transitions from delimiter → non-delimiter
- Count only valid words, not characters

This reinforces the principle that **allocation should always be informed, never guessed**.

---

### 2. Allocating and Filling Each Substring

After determining the number of words, I traverse the string a second time to build each token.

For each word:

- I locate the start and end indices
- Compute the word length using `end - start`
- Allocate **exactly `length + 1` bytes** (including the null terminator)
- Copy characters manually using index-based pointer arithmetic
- Explicitly append `'\0'` at the end

This demonstrates:

- Precise control over pointers and offsets
- Understanding that strings are **raw memory regions**
- Explicit ownership of how data is written byte by byte

No library shortcuts are used — the entire data flow is transparent.

---

### 3. Cleanup and Safety

Memory safety is treated as a first-class concern.

If **any allocation fails** during execution:

- Previously allocated memory must be released
- No dangling pointers are left behind
- The function exits in a well-defined state

This guarantees:

- No memory leaks
- No undefined behavior
- Correct handling of partial allocation failures

This level of rigor is essential in real-world and low-level systems programming.

---

## What This Shows

The structure of `ft_split` demonstrates that I:

- Understand **how pointers traverse memory**
- Know **how and when to allocate**
- Can calculate memory requirements *before* calling `malloc`
- Respect **function responsibility boundaries**
- Write C code that is **predictable, safe, and maintainable**

This methodology is applied consistently across the entire repository.

---

## Why This Matters

C does not forgive mistakes.

By rebuilding these functions from scratch, I learned to:

- Think in terms of **memory layout**
- Treat pointers as **addresses**, not abstractions
- Write code that remains robust under stress and edge cases

This repository is not just a collection of functions —  
it is proof of **discipline, understanding, and an engineering mindset**.


