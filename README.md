# Operating System Practicals – Assignment 3 and Assignment 4

The files are arranged according to the assignment grouping specified.

## Folder structure

```text
Main folder/
│
├── 3rd assignment codes/
│   ├── C++ Programs/
│   │   ├── memory_allocation_first_best_worst_fit.cpp
│   │   └── page_replacement_fifo_lru_optimal.cpp
│   └── Virtual Lab Practical/
│       └── Assignment_No_03_Page_Replacement_Lab.txt
│
└── 4th assignment codes/
    ├── C++ Programs/
    │   ├── disk_scheduling_fcfs_sstf_scan_cscan.cpp
    │   └── ip_address_subnet_identification.cpp
    ├── Command Line Practicals/
    │   ├── windows_file_management_commands.txt
    │   ├── linux_file_management_commands.txt
    │   └── linux_system_administration_commands.sh
    └── Virtual Lab Practical/
        └── Assignment_no_04_Contiguous_File_Allocation.txt
```

## Source PDF mapping

### 3rd assignment — first 3 PDFs

1. `Memory_Allocation_First_Best_Worst_Fit.pdf`
   - `C++ Programs/memory_allocation_first_best_worst_fit.cpp`
2. `Page_Replacement_FIFO_LRU_Optimal.pdf`
   - `C++ Programs/page_replacement_fifo_lru_optimal.cpp`
3. `Assignment No=03.pdf`
   - Screenshot guide for the Page Replacement virtual-lab practical.
   - A note is included in `Virtual Lab Practical/` because this PDF does not provide a standalone source-code program.

### 4th assignment — other 5 PDFs

1. `Assignment no =04.pdf`
   - Screenshot guide for Contiguous File Allocation in the virtual lab.
   - A note is included in `Virtual Lab Practical/`; no standalone C++ source code is supplied in this PDF.
2. `Assignment no 04,Q no.02.pdf`
   - `C++ Programs/disk_scheduling_fcfs_sstf_scan_cscan.cpp`
3. `Assignmennt 09,Q no 03.pdf`
   - `C++ Programs/ip_address_subnet_identification.cpp`
4. `File_Management_Windows_and_Linux_Steps.pdf`
   - `Command Line Practicals/windows_file_management_commands.txt`
   - `Command Line Practicals/linux_file_management_commands.txt`
5. `Linux_System_Administration_Practical_With_Screenshots.pdf`
   - `Command Line Practicals/linux_system_administration_commands.sh`

## Compile C++ programs

Use a C++ compiler such as g++:

```bash
g++ "3rd assignment codes/C++ Programs/memory_allocation_first_best_worst_fit.cpp" -o memory
g++ "3rd assignment codes/C++ Programs/page_replacement_fifo_lru_optimal.cpp" -o page
g++ "4th assignment codes/C++ Programs/disk_scheduling_fcfs_sstf_scan_cscan.cpp" -o disk
g++ "4th assignment codes/C++ Programs/ip_address_subnet_identification.cpp" -o subnet
```

Run each executable separately. On Windows, executable names will have `.exe`.

## Safety note

The command files are reference/practical sequences. Read and execute commands individually in a test directory. Some Linux administration commands use `sudo` and can change system settings or files. Do not run the whole file blindly.
