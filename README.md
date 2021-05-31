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

<table>
  <tr>
    <td align="center">Reading from a file</td>
    <td align="center">Reading from the standart input</td>
  </tr>
  <tr>
    <td><img  src="https://user-images.githubusercontent.com/84783740/120178708-73077300-c212-11eb-8761-4b6bcce7b114.png"></td>
    <td><img  src="https://user-images.githubusercontent.com/84783740/120188052-4b1e0c80-c21e-11eb-8e67-b4f2a83c9553.png"></td>
  </tr>
</table>

<table>
  <tr>
    <td align="center">File test.txt</td>
    <td align="center">Result</td>
  </tr>
  <tr>
    <td><img src="https://user-images.githubusercontent.com/84783740/120178739-7a2e8100-c212-11eb-99dd-4d76fb003b09.png"></td>
    <td><img src="https://user-images.githubusercontent.com/84783740/120178754-7ef33500-c212-11eb-93c5-e7403105ccdf.png"></td>
  </tr>
</table>

<table>
  <tr>
    <td align="center">Result: standart input</td>
  </tr>
  <tr>
    <td><img src="https://user-images.githubusercontent.com/84783740/120188059-4fe2c080-c21e-11eb-90f2-13d6b5188c03.png"></td>
  </tr>
</table>

## Bonus part
1)  get_next_line should be with a single *static variable*.
2) capability to manage multiple file descriptor with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

<table>
  <tr>
    <td align="center">File test.txt</td>
    <td align="center">File test1.txt</td>
    <td align="center">File test2.txt</td>
  </tr>
  <tr>
    <td><img src="https://user-images.githubusercontent.com/84783740/120193733-6ccec200-c225-11eb-9325-be99a96f85e1.png"></td>
    <td><img src="https://user-images.githubusercontent.com/84783740/120193742-70624900-c225-11eb-9ac5-73a6a0a9df45.png"></td>
    <td><img src="https://user-images.githubusercontent.com/84783740/120193751-72c4a300-c225-11eb-9e63-87c804cf698b.png"></td>
  </tr>
</table>

<table>
  <tr>
    <td align="center">Reading from different files</td>
    <td align="center">Result</td>
  </tr>
  <tr>
    <td><img src="https://user-images.githubusercontent.com/84783740/120193797-7d7f3800-c225-11eb-86db-efe80b7d5634.png"></td>
    <td><img src="https://user-images.githubusercontent.com/84783740/120193813-81ab5580-c225-11eb-8867-28dc64e3207b.png"></td>
  </tr>
</table>

## Usage
1. add `#include "get_next_line.h"` in your project or `#include "get_next_line_bonus.h"` if you want to read from different files. You should also add all `*.c` and `*.h` files.
2. Use it the way you want.
