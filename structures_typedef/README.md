🐶 C - Structures, typedef

🗂️ Table of Contents

Project Description

Resources

Learning Objectives

Requirements

Tasks & Learnings

Poppy

A dog is the only thing on earth that loves you more than you love yourself

A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

A door is what a dog is perpetually on the wrong side of

How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Compilation & Execution

Author

License & Acknowledgments

🌟 Introduction

Structures in C allow you to group multiple variables under a single type, making it easier to model complex objects. Combined with typedef, they provide a cleaner and more flexible syntax.

This project, C - Structures, typedef, introduces the creation and usage of structures, as well as defining new types with typedef. You will learn how to manipulate structures, initialize them, print their contents, free their memory, and create robust functions to manage dynamic objects.

You will learn to:

Define and use structures in C.

Simplify type declarations with typedef.

Dynamically create and manage structured objects.

Properly free memory associated with structures.

🧾 Project Description
This project introduces the manipulation of structures and the use of typedef in C. You will implement functions to create, initialize, print, and free structures representing dogs.

📚 Resources

Read or watch:

0x0d. Structures.pdf

struct (C programming language)

Documentation: structures

0x0d. Typedef and structures.pdf

typedef

Programming in C by Stephen Kochan – Chapter 8

The Lost Art of C Structure Packing (advanced, optional)

🎯 Learning Objectives

By the end of this project, you should be able to explain:

What structures are, when and why to use them.

How to use typedef effectively.

⚙️ Requirements

Compilation: Ubuntu 20.04 LTS with gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Style: Betty (betty-style.pl and betty-doc.pl)

No global variables

Maximum of 5 functions per file

Allowed functions: printf, malloc, free, exit

All prototypes must be included in dog.h

All header files must be include-guarded

🧩 Tasks & Learnings

🥇 0. Poppy

File: dog.h

💡 Description Define a structure struct dog with the fields: name (char *), age (float), owner (char *).

🧠 What I learned

How to declare a structure in C.

How to group multiple data types into one object.

🥈 1. A dog is the only thing on earth that loves you more than you love yourself

File: 1-init_dog.c Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

💡 Description Initializes a variable of type struct dog.

🧠 What I learned

Passing structures by pointer.

Initializing structure fields.

🥉 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

File: 2-print_dog.c Prototype: void print_dog(struct dog *d);

💡 Description Prints the information of a dog structure. If a field is NULL, prints (nil). If d is NULL, prints nothing.

🧠 What I learned

Handling NULL values in structures.

Formatting output with printf.

🏅 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

File: dog.h

💡 Description Define a new type dog_t as an alias for struct dog.

🧠 What I learned

Using typedef to simplify syntax.

Making code more readable and concise.

🏆 4. A door is what a dog is perpetually on the wrong side of

File: 4-new_dog.c Prototype: dog_t *new_dog(char *name, float age, char *owner);

💡 Description Creates a new dog by dynamically allocating memory and copying name and owner. Returns NULL if allocation fails.

🧠 What I learned

Dynamically allocating structures.

Copying strings into structures.

Handling allocation errors.

🧱 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

File: 5-free_dog.c Prototype: void free_dog(dog_t *d);

💡 Description Frees the memory associated with a dog.

🧠 What I learned

Properly freeing memory in structures.

Using Valgrind to confirm no memory leaks.

🧰 Compilation & Execution
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file>.c -o <executable>
./<executable>
Example:

bash
gcc 2-main.c 2-print_dog.c -o print_dog
./print_dog

---

🏁 Conclusion
This project gave me a deeper understanding of structures and typedef in C. I learned to:

Define and manipulate structures.

Simplify type declarations with typedef.

Dynamically create and manage structured objects.

Free memory correctly to avoid leaks.

“Structures give shape to data; when used well, they turn chaos into clarity.”

👤 Author
SARA REBATI [https://github.com/SaraEstelle]

📜 License & Acknowledgments
This project is licensed under the MIT License. Special thanks to Holberton School Thonon-les-Bains for designing challenging and instructive C programming projects.
