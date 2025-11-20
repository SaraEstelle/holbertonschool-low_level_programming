🧠 C - Function pointers

🗂️ Table of Contents

• 	🌟 Introduction
• 	🧾 Project Description
• 	📚 Resources
• 	🎯 Learning Objectives
• 	⚙️ Requirements
• 	🧩 Tasks & Learnings
• 	What's my name
• 	If you spend too much time thinking about a thing, you'll never get it done
• 	To hell with circumstances; I create opportunities
• 	A goal is not always meant to be reached, it often serves simply as something to aim at
• 	Most hackers are young because young people tend to be adaptable
• 	🧰 Compilation & Execution
• 	🏁 Conclusion
• 	👤 Author
• 	📜 License & Acknowledgments

🌟 Introduction

Function pointers are one of the most powerful features in C. They allow you to store the address of a function in a variable and call it dynamically. This makes your programs more flexible, modular, and adaptable.
This project, C - Function pointers, introduces the concept of pointers to functions, their usage, and how they can be applied to build dynamic programs such as calculators and iterators.
You will learn to:
• 	Declare and use function pointers.
• 	Pass functions as arguments to other functions.
• 	Implement dynamic behavior in C programs.
• 	Build a simple calculator using function pointers.
• 	Explore advanced concepts like printing opcodes of your own program.

🧾 Project Description

This project focuses on the use of function pointers in C. You will implement functions that print names, iterate arrays, search integers, and perform arithmetic operations dynamically. Finally, you will write a program that prints its own opcodes.

📚 Resources

Read or watch:
• 	Function Pointer in C
• 	Pointers to functions
• 	Function Pointers in C / C++
• 	Why pointers to functions?
• 	Everything you need to know about pointers in C

🎯 Learning Objectives

By the end of this project, you should be able to explain:
• 	What function pointers are and how to use them.
• 	What a function pointer exactly holds.
• 	Where a function pointer points to in virtual memory.

⚙️ Requirements

• 	Compilation: Ubuntu 20.04 LTS with 
• 	Style: Betty ( and )
• 	No global variables
• 	Maximum of 5 functions per file
• 	Allowed functions: , ,  (and  in specific tasks)
• 	All prototypes must be included in 
• 	Header files must be include guarded

🧩 Tasks & Learnings

🥇 0. What's my name
File: 
Prototype: 
💡 Description
Prints a name using a function pointer.
🧠 What I learned
• 	How to pass a function as a parameter.
• 	Using function pointers to change behavior dynamically.

🥈 1. If you spend too much time thinking about a thing, you'll never get it done
File: 
Prototype: 
💡 Description
Executes a function on each element of an array.
🧠 What I learned
• 	Iterating arrays with function pointers.
• 	Applying different actions (print, hex, etc.) dynamically.

🥉 2. To hell with circumstances; I create opportunities
File: 
Prototype: 
💡 Description
Searches for an integer in an array using a comparison function.
🧠 What I learned
• 	Implementing search logic with function pointers.
• 	Returning indexes based on dynamic conditions.

🏅 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Files: , , , 
💡 Description
A simple calculator program using function pointers. Supports , , , , .
🧠 What I learned
• 	Building a modular calculator with function pointers.
• 	Handling errors (invalid operator, division by zero).
• 	Using structures to map operators to functions.

🏆 4. Most hackers are young because young people tend to be adaptable
File: 
💡 Description
Program that prints the opcodes of its own main function.
🧠 What I learned
• 	Printing raw machine code in hexadecimal.
• 	Understanding how compiled C code translates to assembly.

🧰 Compilation & Execution

Example:


🏁 Conclusion

This project strengthened my understanding of function pointers in C. I learned to:
• 	Pass functions as arguments.
• 	Dynamically execute different behaviors.
• 	Build a calculator using function pointers.
• 	Explore low-level concepts like opcodes.
“Function pointers are the key to flexibility: they let your code adapt and evolve.”

👤 Author
SARA REBATI [https://github.com/SaraEstelle]

📜 License & Acknowledgments
This project is licensed under the MIT License.
Special thanks to Holberton School Thonon-les-Bains for designing challenging and instructive C programming projects.
