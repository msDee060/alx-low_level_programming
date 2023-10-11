# Function pointer

Function pointers in C are pointers that point to functions rather than data. They are used to call functions dynamically at runtime, making your code more flexible and extensible.

Declaration: Function pointers are declared like pointers to any other data type, but they point to functions with a specific signature. 
For example, a function that takes two integers and returns an integer would have the following function pointer declaration:
int (*funcPtr)(int, int);


# Pointers to functions

A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say

int func(int a, float b);
and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:

/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);
Once you've got the pointer, you can assign the address of the right sort of function just by using its name: like an array, a function name is turned into an address when it's used in an expression. You can call the function using one of two forms:

(*func)(1,2);
/* or */
func(1,2);
