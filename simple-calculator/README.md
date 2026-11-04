# Simple Calculator

This is a project for the Holberton School's C unit. The simple calculator displays a menu of choices to the user, and loops the menu until a valid choice is selected. 
The calculator can currently add or subtract two numbers.

## How to compile this program
After cloning the repository, run the following:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## How to run this program
Once the compilation has run successfully, you can run the code with the following:

```
./calculator
```

## Supported operations
- 1: Add two integers 
- 2: Subtract one integer from another
- 0: Quit the program

## Known limitations
- Only adds and subtracts numbers
- Empty choice doesn't auto-complete
