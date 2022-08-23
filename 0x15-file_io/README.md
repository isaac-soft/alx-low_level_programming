 0x15. C - File I/O

Quiz
What is the unistd symbolic constant for the standard input?
STDIN_FILENO

What is the unistd symbolic constant for the standard output?
STDOUT_FILENO

What is the unistd symbolic constant for the Standard error?
STDERR_FILENO

What is the oflag used to open a file with the mode read only?
O_RDONLY

What is the oflag used to open a file in mode read + write?
O_RDWR

What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
O_WRONLY | O_CREAT | O_APPEND

is open a function or a system call? (select all valid answers)
it’s a function
it’s a system call
it’s a function provided by the kernel

What system call would you use to write to a file descriptor? (select all correct answers)
write

Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):
executable
system call

What is the return value of the system call open if it fails?
-1

Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):
3

why? #AlwaysAskWhy
Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.

Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers):
2
1 << 1
3 & 2
(O_WRONLY << 1)

What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
The text will be printed on the terminal on the standard output

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.
True

Task 0
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0

Task 1
Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if filename is NULL return -1
if text_content is NULL create an empty file

Task 2
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL return -1
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

Task 3
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL return -1
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

Task 4
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
You are allowed to use lseek once
You are allowed to use read a maximum of 2 times at runtime
You are allowed to have as many functions as you want in your source file
You are allowed to use printf
man elf, readelf
