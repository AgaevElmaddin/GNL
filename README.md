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

**Examples:**

*Reading from a file*

<img width="330" alt="Screen Shot 2021-05-31 at 12 14 59 PM" src="https://user-images.githubusercontent.com/84783740/120178708-73077300-c212-11eb-8761-4b6bcce7b114.png">

file test.txt

<img width="617" alt="Screen Shot 2021-05-31 at 12 13 18 PM" src="https://user-images.githubusercontent.com/84783740/120178739-7a2e8100-c212-11eb-99dd-4d76fb003b09.png">

result

<img width="756" alt="Screen Shot 2021-05-31 at 12 12 42 PM" src="https://user-images.githubusercontent.com/84783740/120178754-7ef33500-c212-11eb-93c5-e7403105ccdf.png">

<img width="277" alt="Screen Shot 2021-05-31 at 2 03 12 PM" src="https://user-images.githubusercontent.com/84783740/120188052-4b1e0c80-c21e-11eb-8e67-b4f2a83c9553.png">
<img width="747" alt="Screen Shot 2021-05-31 at 2 02 41 PM" src="https://user-images.githubusercontent.com/84783740/120188059-4fe2c080-c21e-11eb-90f2-13d6b5188c03.png">

<table>
  <tr>
    <td>:Reading from a file:</td>
     <td>:Reading from the standart input:</td>
  </tr>
  <tr>
    <td><img width="530" src="https://user-images.githubusercontent.com/84783740/120178708-73077300-c212-11eb-8761-4b6bcce7b114.png"></td>
    <td><img width="477" src="https://user-images.githubusercontent.com/84783740/120188052-4b1e0c80-c21e-11eb-8e67-b4f2a83c9553.png"></td>
  </tr>
</table>

## Bonus part
1)  get_next_line should be with a single *static variable*.
2) capability to manage multiple file descriptor with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

## Usage
1. add `#include "get_next_line.h"` in your project. 
2. Use it the way you want.
