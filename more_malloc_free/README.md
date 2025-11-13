🧠 C - More malloc, free
🗂️ Table of Contents
Project Description

Resources

Learning Objectives

Requirements

Tasks & Learnings

Trust no one

string_nconcat

_calloc

array_range

_realloc

We must accept finite disappointment, but never lose infinite hope

Compilation & Execution

Author

License & Acknowledgments

🌟 Introduction
Dynamic memory management is an essential skill in C. Unlike higher-level languages, C gives you full control over memory allocation and deallocation. This also comes with great responsibility: avoiding memory leaks and segmentation faults.

This project, C - More malloc, free, deepens the use of malloc, free, and associated functions such as calloc and realloc. You will learn how to handle memory safely and efficiently, and how to build robust programs.

You will learn to:

Allocate and free memory dynamically.

Use calloc and realloc to manage memory blocks.

Create dynamic arrays of integers.

Write a program to multiply large numbers in base 10.

🧾 Project Description
This project introduces advanced memory management functions in C. You will implement your own versions of calloc, realloc, as well as utility functions to manipulate strings and arrays.

📚 Resources
Read or watch:

Do I cast the result of malloc?

man exit

man calloc

man realloc

🎯 Learning Objectives
By the end of this project, you should be able to explain:

How to use the exit function.

The role and usage of calloc and realloc.

How to create and manage dynamic arrays.

How to manipulate memory for complex operations such as multiplying large numbers.

⚙️ Requirements
Compilation: Ubuntu 20.04 LTS with gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Style: Betty (betty-style.pl and betty-doc.pl)

No global variables

Maximum of 5 functions per file (unless otherwise specified)

Allowed functions: malloc, free, exit

All prototypes must be included in main.h

🧩 Tasks & Learnings
🥇 0. Trust no one
File: 0-malloc_checked.c Prototype: void *malloc_checked(unsigned int b);

💡 Description Allocates memory using malloc. Terminates the program with exit code 98 if allocation fails.

🧠 What I learned

How to check for allocation errors.

How to use exit to handle failures.

🥈 1. string_nconcat
File: 1-string_nconcat.c Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

💡 Description Concatenates two strings by allocating new memory space.

🧠 What I learned

Treating NULL strings as empty.

Combining two strings in dynamic memory.

🥉 2. _calloc
File: 2-calloc.c Prototype: void *_calloc(unsigned int nmemb, unsigned int size);

💡 Description Allocates an array of nmemb elements of size bytes each, initialized to zero.

🧠 What I learned

Initializing memory to zero.

Reproducing the behavior of calloc.

🏅 3. array_range
File: 3-array_range.c Prototype: int *array_range(int min, int max);

💡 Description Creates an array of integers from min to max.

🧠 What I learned

Generating dynamic numeric sequences.

Checking bounds and handling errors.

🏆 4. _realloc
File: 100-realloc.c Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

💡 Description Reallocates a memory block by copying existing data.

🧠 What I learned

Adjusting the size of a memory block.

Handling special cases (ptr == NULL, new_size == 0).

🧱 5. We must accept finite disappointment, but never lose infinite hope
File: 101-mul.c

💡 Description Program that multiplies two large positive numbers passed in base 10.

🧠 What I learned

Handling strings representing numbers.

Implementing manual multiplication in C.

Managing argument and format errors.

🧰 Compilation & Execution
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file>.c -o <executable>
./<executable>
Example:

bash
gcc 1-main.c 1-string_nconcat.c -o string_nconcat
./string_nconcat
🏁 Conclusion
This project strengthened my understanding of memory management in C. I learned to:

Properly allocate and free memory.

Write my own versions of standard functions (calloc, realloc).

Manipulate dynamic structures such as arrays and strings.

Implement complex algorithms (large number multiplication) using only dynamic memory.

“Memory is a powerful weapon: used well, it builds; used poorly, it destroys.”

👤 Author
SARA REBATI [https://github.com/SaraEstelle]

📜 License & Acknowledgments
This project is licensed under the MIT License. Special thanks to Holberton School Thonon-les-Bains for designing challenging and instructive C programming projects.
