# 🧠 C - malloc, free

---

## 🗂️ Table of Contents
1. [Project Description](#project-description)  
2. [Resources](#resources)  
3. [Learning Objectives](#learning-objectives)  
4. [Requirements](#requirements)  
5. [Tasks & Learnings](#tasks--learnings)  
   - [0. Float like a butterfly, sting like a bee](#task0)  
   - [1. The woman who has no imagination has no wings](#task1)  
   - [2. He who is not courageous enough to take risks will accomplish nothing in life](#task2)  
   - [3. If you even dream of beating me you'd better wake up and apologize](#task3)  
   - [4. It's not bragging if you can back it up](#task4)  
   - [5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](#task5)  
   - [6. I will show you how great I am](#task6)  
6. [Compilation & Execution](#compilation--execution)  
7. [Author](#author)  
8. [License & Acknowledgments](#license--acknowledgments)

---
🌟 Introduction

Memory management is one of the most fundamental and powerful aspects of programming in C.
Unlike higher-level languages, C gives you full control over how memory is used and released — which means you are also fully responsible for avoiding memory leaks and segmentation faults.

This project, C - malloc, free, introduces the concepts of dynamic memory allocation and manual memory control using malloc() and free().
It is designed to build a solid understanding of how the heap works and how to manipulate memory safely and efficiently.

You will learn to:

Allocate and initialize memory dynamically.

Handle multi-dimensional arrays.

Prevent memory leaks by freeing allocated memory properly.

Use Valgrind to check for memory errors.

---

## 🧾 Project Description

This project introduces dynamic memory allocation in C using the functions `malloc()` and `free()`.  
You will learn how to allocate, use, and free memory manually, and understand how to prevent memory leaks in your programs.

---

## 📚 Resources

### Read or watch:
- **0x0A - malloc & free - quick overview**  
- **Dynamic memory allocation in C - malloc, calloc, realloc, free**  
- `man malloc`  
- `man free`

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain to anyone:

- The difference between **automatic** and **dynamic** memory allocation  
- What `malloc` and `free` are, and how to use them properly  
- When and why to use dynamic memory  
- How to check for memory leaks using **Valgrind**

---

## ⚙️ Requirements

- **Compilation:** Ubuntu 20.04 LTS with `gcc`
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- **Code style:** Betty (`betty-style.pl` and `betty-doc.pl`)
- **No global variables**
- **Maximum of 5 functions per file**
- **Allowed standard functions:** `malloc` and `free`
- **All prototypes** must be included in `main.h`

---

## 🧩 Tasks & Learnings

---

### 🥇 0. Float like a butterfly, sting like a bee <a name="task0"></a>

**File:** `0-create_array.c`  
**Prototype:**
```c
char *create_array(unsigned int size, char c);
```

#### 💡 Description
Creates an array of chars and initializes it with a specific character.

#### 🧠 What I learned
- How to use `malloc` to allocate memory dynamically  
- How to check for failed allocations (`NULL` return)  
- How to initialize memory manually

#### 🧩 Example
```bash
$ ./create_array
0x48 0x48 0x48 0x48 ...
```

---

### 🥈 1. The woman who has no imagination has no wings <a name="task1"></a>

**File:** `1-strdup.c`  
**Prototype:**
```c
char *_strdup(char *str);
```

#### 💡 Description
Duplicates a string by allocating new memory and copying its contents.

#### 🧠 What I learned
- Measuring string length before allocation  
- Copying data into a new memory block  
- Properly null-terminating strings

#### 🧩 Example
```bash
$ ./strdup
Duplicated
```

---

### 🥉 2. He who is not courageous enough to take risks will accomplish nothing in life <a name="task2"></a>

**File:** `2-str_concat.c`  
**Prototype:**
```c
char *str_concat(char *s1, char *s2);
```

#### 💡 Description
Concatenates two strings into a newly allocated memory space.

#### 🧠 What I learned
- Combining two memory blocks into one  
- Treating `NULL` inputs as empty strings  
- Managing pointers and string offsets

#### 🧩 Example
```bash
$ ./str_concat
Best School
```

---

### 🏅 3. If you even dream of beating me you'd better wake up and apologize <a name="task3"></a>

**File:** `3-alloc_grid.c`  
**Prototype:**
```c
int **alloc_grid(int width, int height);
```

#### 💡 Description
Creates a 2D grid of integers, initialized to 0.

#### 🧠 What I learned
- Allocating arrays of pointers  
- Allocating each row separately  
- Freeing partially allocated memory when an error occurs

#### 🧩 Example
```bash
$ ./alloc_grid
0 0 0 0 0 0
0 0 0 0 0 0
...
```

---

### 🏆 4. It's not bragging if you can back it up <a name="task4"></a>

**File:** `4-free_grid.c`  
**Prototype:**
```c
void free_grid(int **grid, int height);
```

#### 💡 Description
Frees all dynamically allocated memory used by a 2D grid.

#### 🧠 What I learned
- How to properly free nested memory structures  
- Avoiding memory leaks with proper cleanup loops  
- Using Valgrind to verify memory release

#### 🧩 Example (Valgrind output)
```
All heap blocks were freed -- no leaks are possible
```

---

### 🧱 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe <a name="task5"></a>

**File:** `100-argstostr.c`  
**Prototype:**
```c
char *argstostr(int ac, char **av);
```

#### 💡 Description
Concatenates all program arguments into a single string, separated by newlines.

#### 🧠 What I learned
- Handling `argc` and `argv` parameters in `main()`  
- Calculating memory size before allocation  
- Building a large string dynamically from multiple arguments

#### 🧩 Example
```bash
$ ./args I will "show you" how great I am
I
will
show you
how
great
I
am
```

---

### 🥇 6. I will show you how great I am <a name="task6"></a>

**File:** `101-strtow.c`  
**Prototype:**
```c
char **strtow(char *str);
```

#### 💡 Description
Splits a string into individual words and returns an array of dynamically allocated strings.

#### 🧠 What I learned
- Managing arrays of strings (`char **`) dynamically  
- Parsing words by detecting delimiters  
- Freeing complex memory structures on failure

#### 🧩 Example
```bash
$ ./strtow
Best
School
#cisfun
```

---

## 🧰 Compilation & Execution

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file>.c -o <executable>
./<executable>
```

**Example:**
```bash
gcc 3-main.c 3-alloc_grid.c -o alloc_grid
./alloc_grid
```

---
🏁 Conclusion

Through this project, I’ve gained a deeper understanding of how C manages memory on a low level.
By implementing each task, I learned to:

Think carefully about memory ownership and allocation size.

Debug and fix memory leaks and dangling pointers.

Use memory dynamically to create flexible data structures.

Understanding malloc and free is a critical milestone in becoming a proficient C programmer.
These skills are the foundation for more advanced concepts such as linked lists, hash tables, dynamic strings, and file handling — all of which rely on correct memory management.

“Good memory management is invisible when done right, but catastrophic when done wrong.”

---

## 👤 Author
**SARA REBATI**  
[https://github.com/SaraEstelle]

---

## 📜 License & Acknowledgments
This project is licensed under the **MIT License**.  
Special thanks to **Holberton School Thonon-les-Bains** for creating challenging and instructive C programming projects.

