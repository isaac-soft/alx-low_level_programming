Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded

Quiz
Question #0
What is 0x89 in base10? 137

Question #1
What is 0x89 in base2? 0b10001001

Question #2
What is 0b001010010 in base10? 82

Question #3
What is 0b01101101 in base16? 0x6D

Question #4
What is 98 in base2? 0b01100010

Question #5
What is 98 in base16? 0x62

Question #6
0x01 & 0x01 = ? 0x01

Question #7
0x01 | 0x01 = ? 0x01

Question #8
0x01 & 0x00 = ? 0x00

Question #9
0x01 | 0x00 = ? 0x01

Question #10
0x66 & 0x22 = ? 0x22

Question #11
0x44 | 0x22 = ? 0x66

Question #12
0x89 & 0x01 = ? 0x01

Question #13
0x88 & 0x01 = ? 0x00

Question #14
0x02 >> 1 = ? 0x01

Question #15 0x11

Question #16
0x01 << 1 = ? 0x02

Question #17
0x13 << 1 = ? 0x26 0x98

Question #18
~ 0x12 = ? 0xED

Question #19
~ 0x98 = ? 0x67

Task 0
Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

Task 1
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators

Task 2
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured

Task 3
Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

Task 4
Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

Task 5
Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

Task 6
Write a function that checks the endianness.

Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian

Task 7
Find the password for this program.

Save the password in the file 101-password
Your file should contain the exact password, no new line, no extra space
