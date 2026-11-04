# Simple Calculator

This is a project for the Holberton School's C unit. The simple calculator displays a menu of choices to the user, and loops the menu until a valid choice is selected. 
The calculator can currently add, subtract or multiply.

## How to compile this program
Clone this repository and compile the calculator:

```
git clone https://github.com/verymintyfresh/holbertonschool-low_level_programming
cd holbertonschool-low_level_programming/simple-calculator
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
- 3: Multiply two integers together
- 0: Quit the program

## Known limitations
- Only adds, subtracts and multiplies numbers
- Empty choice doesn't auto-complete
