# C++ Class

This is the work for a college level introduction to programming class using c++.

### Hierarchy
This repository is broken up into two directories, hw, and labs.
Each folder contains subfolders with exactly one project worth of code inside. 
These also contain the PDF file of the assignment and any included data files the instructor provided.

### Compilation
The code is standard ISO C++, so any modern compiler should be able to compile the code. The author used gcc 4.9 
Included in the root directory is a gnu Makefile. This file is written in such a way that you can recompile all the code 
(simply type `make` at a prompt) recursively over the entire directory tree, or a single project by typing it's type and number,
for example, `make hw3` will compile hw/hw3 and put it's binary in the same folder as the source.

### Running the code
Since the code for most of these projects has data files, it it recommended to make your working directory to the folder 
in which the binary exists. However, if you do try and run a binary elsewhere, the programs should gracefully close
with a `File not found!` error or equivilent.

### Reading the code
Most of the code is designed for readability, in some cases where the code is not clear, read the ascociated PDF file.
The PDF files are very explicit in their instructions and should clear up any errors.

## Copyright Notice
This code is freely distributed under the BSD license. However, the PDF's are not. 

## Warning to Students at Farmingdale University
Since the professor uses the same projects for multiple years, It is highly recommended that you do *not* use this code.
Acedemic integrity and whatnot.
