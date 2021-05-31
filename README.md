# GNL
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

`It is also opportunity to learn a new concept in C programming: static variables.`

| return value | meaning |
| --- | --- |
| 1 | a line has been read |
| 0 | end of file (EOF) has been reached |
| -1 | an error happened |

Allowed built-in functions: **read**, **malloc**, **free**.

Function prototype: `int get_next_line(int fd, char **line);`

Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the EOF.

The get_next_line fuction should work well when it reads from a file and when it reads from the standart input.

get_next_line program can compile with the flag `-D BUFFER_SIZE=xx`: 
`gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c`
`BUFFER_SIZE=xx` means that you are able to read from file `xx` bytes.

**Example:**



## Bonus part
1)  get_next_line should be with a single *static variable*.
2) capability to manage multiple file descriptor with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

## Usage
1. add `#include "get_next_line.h"` in your project. 
2. Use it the way you want.
