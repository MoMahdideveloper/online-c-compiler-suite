# Online C Compiler & Algorithms Visualizer (GCC 13.2)

[![GCC 13.2](https://img.shields.io/badge/GCC-13.2%20Standard-blue.svg)](https://onlineccompiler.com/)
[![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/MoMahdideveloper/online-c-compiler-suite/blob/main/online_c_compiler_benchmark.ipynb)
[![Google Site](https://img.shields.io/badge/Google%20Sites-Live%20Portal-green.svg)](https://sites.google.com/view/online-c-compiler-suite)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Live IDE](https://img.shields.io/badge/Online%20IDE-Instant%20Execution-success)](https://onlineccompiler.com/)

A modern, cloud-isolated, in-browser C compilation and visual step-debugging suite. Test, inspect heap/stack memory, and debug complex C algorithms without installing local toolchains, cross-compilers, or GDB.

### 🚀 Live Web Applications & Tools
- **Main Online C Compiler & Debugger**: [https://onlineccompiler.com/](https://onlineccompiler.com/)
- **Interactive Google Colab Notebook**: [Open in Colab (colab.research.google.com)](https://colab.research.google.com/github/MoMahdideveloper/online-c-compiler-suite/blob/main/online_c_compiler_benchmark.ipynb)
- **Google Sites Authority Hub**: [https://sites.google.com/view/online-c-compiler-suite](https://sites.google.com/view/online-c-compiler-suite)
- **Telegraph Technical Architecture**: [Telegra.ph Systems Guide](https://telegra.ph/Online-C-Compiler-In-Browser-GCC-132-Architecture--Memory-DebuggingMoMahdideveloperOnline-C-Compiler-In-Browser-GCC-132-Architec-09-11)
- **Documentation & Web App Client**: [https://momahdideveloper.github.io/online-c-compiler-suite/](https://momahdideveloper.github.io/online-c-compiler-suite/)

---

## Key Features

1. **Production GCC 13.2 Engine**:
   - Supports ISO C17 (`-std=c17`) and upcoming C2x (`-std=c2x`) standards.
   - Configurable optimization levels (`-O0`, `-O1`, `-O2`, `-O3`, `-Os`).
   - Comprehensive diagnostic warnings enabled (`-Wall -Wextra -Wpedantic`).

2. **Interactive Memory & Pointer Visualizer**:
   - Trace dynamic allocations (`malloc`, `calloc`, `realloc`, `free`) in real time.
   - Graphical canvas representing heap chunks, stack frames, and pointer addresses.
   - Automatic detection of dangling pointers, memory leaks, and buffer overruns.

3. **Multi-Architecture Assembly Output**:
   - Live side-by-side assembly inspection for x86_64, ARM64 (AArch64), and RISC-V.
   - Demangled symbols and compiler optimization analysis.

4. **Global Language Portals**:
   - [Spanish / Compilador C Online](https://onlineccompiler.com/es/)
   - [Portuguese / Compilador C Online](https://onlineccompiler.com/pt/)
   - [German / Online C Compiler](https://onlineccompiler.com/de/)
   - [French / Compilateur C en Ligne](https://onlineccompiler.com/fr/)

---

## Included Algorithms & Memory Test Suites

This repository includes reference implementations for verifying compiler optimizations and memory safety:

- `c_memory_visualizer.c`: Demonstrates heap allocation tracing, node traversal, and clean deallocation.
- `dynamic_data_structures.c`: Self-balancing binary tree, circular queues, and pointer arithmetic.

### Running Online Without Setup
You can copy-paste any source file from this repository directly into the [Online C Compiler](https://onlineccompiler.com/) to execute, step through with breakpoints, and inspect CPU registers instantly.

---

## References & Publications
- [Write.as Architecture Overview](https://write.as/uopmovgo7qgoo)
- [Rentry GCC 13.2 Technical Guide](https://rentry.co/online-c-compiler-gcc-ide-guide)
- [JustPaste Technical Specifications](https://justpaste.it/dqx9b)
- [Official Web Client](https://onlineccompiler.com/)

---

## License
MIT License. Free for educational and commercial developer use.
