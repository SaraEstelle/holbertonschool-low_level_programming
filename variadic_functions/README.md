🧠 C - Variadic functions
🗂️ Table of Contents
• 	🌟 Introduction
• 	🧾 Project Description
• 	📚 Resources
• 	🎯 Learning Objectives
• 	⚙️ Requirements
• 	🧩 Tasks & Learnings
• 	Beauty is variable, ugliness is constant
• 	To be is to be the value of a variable
• 	One woman's constant is another woman's variable
• 	To be is to be the value of a variable (print_all)
• 	Real programmers can write assembly code in any language
• 	🧰 Compilation & Execution
• 	🏁 Conclusion
• 	👤 Author
• 	📜 License & Acknowledgments

🌟 Introduction
Variadic functions are a powerful feature in C that allow you to pass a variable number of arguments to a function. They are widely used in functions like  and .
This project, C - Variadic functions, introduces the use of macros from  such as , , and . You will learn how to build flexible functions that can handle multiple arguments, and how to manage them safely.
You will learn to:
• 	Define and use variadic functions.
• 	Apply , , and  macros.
• 	Handle optional arguments gracefully.
• 	Print and manipulate different data types dynamically.

🧾 Project Description
This project focuses on implementing variadic functions in C. You will write functions that sum integers, print numbers, print strings, and print arguments of different types. Additionally, you will write a small assembly program to print "Hello, World".

📚 Resources
Read or watch:
• 	
• 	Variadic Functions
• 	Const Keyword
man or help:
• 	

🎯 Learning Objectives
By the end of this project, you should be able to explain:
• 	What variadic functions are.
• 	How to use , , and .
• 	Why and how to use the  type qualifier.

⚙️ Requirements
• 	Compilation: Ubuntu 20.04 LTS with 
• 	Style: Betty ( and )
• 	No global variables
• 	Maximum of 5 functions per file
• 	Allowed functions: , , ,  (only in specific tasks)
• 	All prototypes must be included in 
• 	Header files must be include guarded

🧩 Tasks & Learnings
🥇 0. Beauty is variable, ugliness is constant
File: 
Prototype: 
💡 Description
Returns the sum of all its parameters. If , return 0.
🧠 What I learned
• 	How to initialize and traverse variadic arguments.
• 	Using , , and .

🥈 1. To be is to be the value of a variable
File: 
Prototype: 
💡 Description
Prints numbers separated by a string, followed by a new line.
🧠 What I learned
• 	Handling separators between arguments.
• 	Managing NULL values for separators.

🥉 2. One woman's constant is another woman's variable
File: 
Prototype: 
💡 Description
Prints strings separated by a string, followed by a new line. If a string is NULL, print .
🧠 What I learned
• 	Handling NULL strings safely.
• 	Printing dynamic lists of strings.

🏅 3. To be is to be the value of a variable (print_all)
File: 
Prototype: 
💡 Description
Prints anything based on a format string (, , , ). Ignores unknown specifiers.
🧠 What I learned
• 	Parsing format specifiers.
• 	Printing multiple data types dynamically.
• 	Managing constraints (loops, variables).

🏆 4. Real programmers can write assembly code in any language
File: 
💡 Description
A 64-bit assembly program that prints "Hello, World", followed by a new line.
🧠 What I learned
• 	Basics of NASM assembly.
• 	Using system calls () in assembly.

🧰 Compilation & Execution

Example:


🏁 Conclusion
This project strengthened my understanding of variadic functions in C. I learned to:
• 	Properly manage variable arguments.
• 	Print and manipulate multiple data types dynamically.
• 	Write flexible functions that adapt to different inputs.
• 	Explore assembly programming basics.
“Flexibility in code is power: variadic functions make your programs adaptable and dynamic.”

👤 Author
SARA REBATI [https://github.com/SaraEstelle]

📜 License & Acknowledgments
This project is licensed under the MIT License.
Special thanks to Holberton School Thonon-les-Bains for designing challenging and instructive C programming projects.
