# Module 2: Functions, Strings, and Command Line Arguments


### Objectives

The goal of this module is to write programs with functions, strings, and command line arguments to gain experience with their usage. 

See the course web page [module2](https://cmsc240-s24.github.io/module/2) for the full directions.

### Table of Contents

* [Exercise 1](#exercise_1)
* [Exercise 2](#exercise_2)

---

## Exercise 1: <a class="anchor" id="exercise_1"></a>

The code for this exercise is in the `exercise1` directory. When you finish and test your code, write below how your code works, and explain how the input is received from the command line via `argc` and `argv[]`. 

#### Write your description of your code below:

 checker1:
 use two pointers leftpoint starts at the beginning (index 0), and rightpoint starts at the end of the string (stringToCheck.length() -1 ). Then for each iteration of the loop, the characters at each pointer are compared, if at any point the characters do not match, the function will return false, if there is no mismatch found, the function will return "true", meaning the word is a palindrome. 

checker2:
creating a string using built in string functions .rbegin() and .rend() to iterate through the string in the reverse order. the return function will return the boolean result of comparing the original string and the reversed copy. if same -> true, if not same -> false. 

Receiveing Input: 

argc: also known as the argument counter is an integer that is used to represent the number of arguments passed into the program, the first one being the programs name.

argv[]: this is a vector of C-string represting the arguments passed to the program. argv[0] will always be the name of the program

---


## Exercise 2: <a class="anchor" id="exercise_2"></a>

The code for this exercise is in the `exercise2` directory. Explain how the main.cpp code has access to the functions `printEven()` and `printOdd()`.  Explain both where the function declarations are stored and the steps the compiler takes to build the `program` executable. 

#### Write your description of the code below:
main.cpp has access to the functions'printEven()' and 'printOdd()' in the function.h library by declaring #include "function.h" at the top of main. 

the 'printEven()' function is declared in the file named one.cpp and 'printOdd()' is declared in the file named two.cpp. The compilers builds the 'program' executable by first making sure to include the local library function.h because of the #include directive and looks for the declaration of these function in the other .cpp and makes main aware of their existence so that there is no error. 
---
