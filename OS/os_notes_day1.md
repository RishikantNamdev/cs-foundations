# OS Basics — Day 1

## 1. What is a process?
A process is a program in execution with its own virtual address space and OS-managed resources.
It provides isolation so one process cannot directly access another process’s memory.
This isolation improves safety but increases overhead.

## 2. What is a thread?
A thread is the smallest unit of execution inside a process.
Multiple threads share the same address space and resources of the process.
Each thread has its own stack and CPU registers.

## 3. What is context switching?
Context switching occurs when the OS switches the CPU from one execution unit to another.
The CPU state (registers, instruction pointer, stack pointer) is saved and restored.
This allows multitasking but introduces overhead.

## 4. Why are threads cheaper than processes?
Threads are cheaper because they share the same address space and resources.
Creating or switching threads requires saving less state than processes.
This reduces memory and scheduling overhead.

## 5. Why can too many threads hurt performance?
Too many threads increase context switching and scheduling overhead.
They also cause contention for shared resources and reduce cache efficiency.
Beyond a point, overhead dominates and performance degrades.
