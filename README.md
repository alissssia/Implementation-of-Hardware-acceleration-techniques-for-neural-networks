# Final Degree Project – Implementation of hardware techniques for permanent fault tolerance in on-chip memories of CNN accelerators

This repository contains my Final Degree Project (TFG), developed at the **School of Engineering and Architecture (EINA)** in 2025. 

## Project Overview

This work focuses on implementing and validating **hardware fault-tolerant mechanisms** in **on-chip memories** of CNN accelerators operating under **aggressive undervolting**. The goal is to reduce energy consumption **without compromising inference accuracy**.

Two state-of-the-art techniques were implemented:
- **Flipping:** Rearranging bits of defective activations to move errors to lower-order positions.
- **Patching:** Recovering critical activations from a fault-free backup cache operating at nominal voltage.

## Methodology

- Initial prototyping in **Logisim** for early validation.
- Development in **SystemVerilog**, tested with **Verilator** and **C++** testbenches.
- Final synthesis and implementation on a **ZedBoard Zynq-7000 FPGA** using **Vivado**.

## Repository Structure

├── implementation/ # Hardware modules (SystemVerilog and C++)
│ ├── cache/ # Backup cache logic
│ ├── mecanismo_flipping/ # Bit-flipping mechanism
│ ├── mecanismo_patching/ # Patching mechanism
│ ├── test_fpga/ # FPGA integration and test modules
│ ├── test_top_mechanisms.cpp # test of both mechanisms together
│ ├── *.sv # modules to integrate both mechanisms
│ └── Makefile # Build script to test both modules
├── *.circ # Logisim designs
