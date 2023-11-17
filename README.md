<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center"> <ins>  0x19.C- Stacks, Queues - LIFO, FIFO README.md File </ins> </H1>

![My alx. ]( https://i.ibb.co/W3Zw2Yt/Alx-enginn-0x19.jpg)

### *This is a team project on 0x19.C- Stacks, Queues - LIFO, FIFO*
  * ***Done by:***
    * ***Bereket Dereje Mekonnen***

![monty.]( https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png)

* File_name:
    *  <ins>**README.md file**</ins>
* Created:
    *  <ins>**On November 15, 2023**</ins>
* Author:
  * <ins>***Bereket Dereje Mekonnen***</ins>,
* Project:
    *  <ins>**0x19. C - Stacks, Queues - LIFO, FIFO**</ins>
* GitHub repository:
    *  <ins>**monty**</ins>
* Directory:
    *  <ins>**bf and monty**</ins>
* Project Tasks:
    *  <ins>**Mandatory and Advanced**</ins>
* Tasks in number:
    *  <ins>**20 Tasks (6-Mandatory & 14-Advanced)**</ins>
* Mandatory_Tasks:
    *  <ins>**From Task 0 to 5**</ins>
* Advanced_Tasks:
    *  <ins>**From Task 6 to 19**</ins>

# 

### **PROJECT_TITLE:**
<h2 align="center"> <ins>0x19.C-Stacks, Queues - LIFO, FIFO </ins> </h2>

### **GITHUB_REPOSITORY:**
<h2 align="center"> <ins>monty</ins> </h2>

![Beki_Shell.]( https://i.ibb.co/6mDGgSp/0x19-1st-struct.png)

<h1 align="center">OPCODES</h1>

## <ins>Table of Allowable Opcodes and what they do.</ins>

| Opcodes and what they do |    |    |   |
|:---:| :---:| :---: |:---| 
|  |    |    |    |
|  |    |     |    |
|  | NO. | Opcode | Function |
|  |    |     |    |
|  |    |    |    |
|  | 1 | push | Add element to the 'top' of stack and 'end' of queue |
|  | 2 | pop | Remove element from 'top' of stack and 'end' of queue |
|  | 3 | pall | Print every member of the structure |
|  | 4 | pint | Prints the member value at the top of stack |
|  | 5 | swap | Swaps the order of the 1st and 2nd elements in stack |
|  | 6 | add | Add top two member values |
|  | 7 | sub | Subtract the top element from the 2nd top element |
|  | 8 | div | Divide the 2nd element by the top element |
|  | 9 | mul | Multiply the top two elements of the stack |
|  | 10 | mod | The remainder when the 2nd element is divided by the top element |
|  | 11 | comment | The ability to parse comments found in bytecode ->'#' |
|  | 12 | pchar | Print character at the top of the stack |
|  | 13 | pstr | Print the character at the top of the stack |
|  | 14 | rotl | Moves element at the top to the bottom of the stack |
|  | 15 | rotr | The bottom of the stack becomes the top |
|  | 16 | queue, stack | Toggles the doubly link list implementation style |
|  | 17 | nop | Opcode should do nothing |
|  |    |     |    |
|  |    |     |    |

![Beki_Shell.]( https://i.ibb.co/mGvWRSR/0x19-2nd-struct.png)


# The Monty language
![monty.]( https://i.ibb.co/ZYBmwT1/Monty-heading.png)    

### The Monty language
  * **Monty 0.98** is a scripting language that is first compiled into **Monty byte codes** (Just like Python).
    * It relies on a **unique stack**, with specific instructions to manipulate it. 
  * <ins>**The goal of this project is**</ins>:
    * to create an interpreter for **Monty ByteCodes files**.

![monty.]( https://i.ibb.co/MBLF7Xh/Monty-java-c-python-pic.jpg)

### <ins>Monty byte code files</ins>
  * Files containing Monty byte codes usually have the **.m** extension. 
    * Most of the industry uses this standard 
      * but it is not required by the specification of the language. 
    * There is **not more than one instruction per line**. 
    * There can be **any number of spaces** before or after
      * the <ins>**opcode and its argument**</ins>:

![monty.]( https://i.ibb.co/vY2HzYm/0x19-1st-monty.png)

####

  * **Monty byte code** files can contain 
    * **blank lines** (empty or made of spaces only, and 
    * any **additional text** after the **opcode** or 
      * its **required argument** is not taken into account:

![monty.]( https://i.ibb.co/LS9rW2w/0x19-2nd-monty.png)
 
### <ins>The Monty Program</ins>
  * Usage: <ins>**monty file**</ins>
    * where **file** is 
      * the path to the file containing Monty byte code
  * If the user does not give any file or more than one argument to your program,
    * print the error message 
      * **USAGE: <ins>monty file</ins>**,
      * followed by a new line, and 
      * exit with the status <ins>**EXIT_FAILURE</ins>**.
  * 
  * If, for any reason, it’s not possible to open the file, 
    * print the error message
      * **Error: <ins>Can't open file</ins> <file>**,
      * followed by a new line, and 
      * exit with the status <ins>**EXIT_FAILURE**</ins>.
        * where **<file>** is the name of the file
  * 
  * If the file contains an invalid instruction, 
    * print the error message 
      * **L<line_number>: <ins>unknown instruction</ins> <opcode>**, 
      * followed by a new line, and 
      * exit with the status <ins>**EXIT_FAILURE**</ins>.
        * where is the line number where the instruction appears.
        * Line numbers always start at 1
  * 
  * The monty program runs the bytecodes line by line and stop if either:
    * it executed properly every line of the file
    * it finds an error in the file
    * an error occured
  * 
  * If you can’t malloc anymore, 
    * print the error message 
      * **Error: <ins>malloc failed</ins>**, 
      * followed by a new line, and 
      * exit with status <ins>**EXIT_FAILURE**</ins>.
  * 
  * You have to use <ins>**malloc**<ins> and <ins>**free**</ins>, and 
    * are not allowed to use any other function 
      * from <ins>**man malloc**</ins> (realloc, calloc, …)

![monty.]( https://i.ibb.co/j55201M/Montys-pic.jpg)

##

<h1 align="center"> <ins>Learning Objectives</ins> </h1>

### **Learning Objectives**
  * At the end of this project,
    * You are expected to be able to explain to anyone,
      * Without the help of Google:

#

<h1 align="center"> <ins>General Learning Objectives</ins> </h1>

### **General Learning Objectives**
  * What do LIFO and FIFO mean
  * What is a stack, and when to use it
  * What is a queue, and when to use it
  * What are the common implementations of stacks and queues
  * What are the most common use cases of stacks and queues
  * What is the proper way to use global variables

###

# *Copyright - Plagiarism*
  * You are tasked to come up with solutions for the tasks below yourself
    * To meet with the above learning objectives.
  * You will not be able to meet the objectives of this or any following project 
    * By copying and pasting someone else’s work.
  * You are not allowed to publish any content of this project.
  * Any form of plagiarism is strictly forbidden
    * And will result in removal from the program.

![monty.]( https://i.ibb.co/N2yV2Y2/Monty-program.png)

#

<h1 align="center"> <ins>Requirements</h1> </ins>

# *General Requirements*
  * Allowed editors: **vi**, **vim**, **emacs**
  * All your files will be compiled on Ubuntu 20.04 LTS using gcc,
    * using the options -Wall -Werror -Wextra -pedantic -std=c89
  * All your files should end with a new line
  * A **README.md** file, 
    * at the root of the folder of the project is mandatory
  * Your code should use the **Betty** style. 
    * It will be checked using **betty-style.pl** and **betty-doc.pl**
  * You allowed to use a maximum of one global variable
  * No more than 5 functions per file
  * You are allowed to use the C standard library
  * The prototypes of all your functions should be
    * included in your header file called **monty.h**
  * Don’t forget to push your header file
  * All your header files should be include guarded
  * You are expected to do the tasks in the order shown in the project

#

# *GitHub Requirements*
  * There should be one project repository per group.
    * If you clone/fork/whatever a project repository with the same name before the second deadline,
      * you risk a 0% score. 

![monty.]( https://i.ibb.co/1RW1V5X/Monty-program1.png)

######

### ***PROJECT_TITLE:*** 
<h2 align="center"> <ins> 0x19.C-Stacks, Queues - LIFO, FIFO</ins></h2>

### ***GITHUB_REPOSITORY:***
<h2 align="center"> <ins> monty</ins></h2> 

#

* File_name: <ins>**README.md file**</ins>
* Created: <ins>**On November 15, 2023**</ins>
* Authors:
  * <ins>***Bereket Dereje Mekonnen***</ins>
* Project: <ins>**0x19.C-Stacks, Queues - LIFO, FIFO**</ins>
* GitHub repository: <ins>**monty**</ins>
* Directory: <ins>**bf and monty**</ins>
* Project Tasks: <ins>**Mandatory and Advanced**</ins>
* Tasks in number: <ins>**20 Tasks (6->Mandatory & 14->Advanced)**</ins>
* Mandatory_Tasks: <ins>**From Task 0 to 5**</ins>
* Advanced_Tasks: <ins>**From Task 6 to 19**</ins>
#

![Write a simple UNIX command interpreter.]( https://res.cloudinary.com/practicaldev/image/fetch/s--vsp8TPQo--/c_imagga_scale,f_auto,fl_progressive,h_420,q_auto,w_1000/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/eqk9up4gzrgz8f7egozd.png)

<h1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</h1> </ins>

<h1 align="center">MANDATORY_TASKS (From Task 0 to 5)</h1>

## **No. 0. push, pall**
  * <ins>**Implement the push and pall opcodes.<ins>**
  * 
  * <ins>**The push opcode</ins>:**
    * The opcode **push** pushes an element to the stack. command. 
      * Usage: **push <int>**
        * where <int> is an integer.
      * 
      * if **<int>** is not an integer or if there is no argument given to **push**,
        * print the error message **L<line_number>:** **usage:** **push integer**,
        * followed by a new line, and exit with the status **EXIT_FAILURE**
          * where is the line number in the file
      * 
      * You won’t have to deal with overflows. 
        * Use the **atoi** function.
 
![monty.]( https://i.ibb.co/0BVsSN5/for-no-0.png)

###

  * <ins>**The pall opcode</ins>**
    * The opcode **pall** prints all the values on the stack, 
      * starting from the top of the stack.
        * Usage **pall**
        * Format: see example
        * if the stack is empty,
          * don’t print anything

##

## **No. 1. pint**
  * <ins>**Implement the pint opcode.</ins>**
  * 
    * <ins>**The pint opcode**</ins>
      * The opcode **pint** prints the value at the top of the stack, followed by a new line.
        * Usage: **pint**
        * If the stack is empty,
          * print the error message **L<line_number>:**
            * **can't pint**,
            * **stack empty**, 
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**

![monty.]( https://i.ibb.co/QpT3vvR/for-no-1.png)

##

## **No. 2. pop**
  * <ins>**Implement the pop opcode.+</ins>**
  * 
    * <ins>**The pop opcode**</ins>
      * The opcode **pop** removes the top element of the stack.
        * Usage: **pop**
        * If the stack is empty,
          * print the error message **L<line_number>:**
            * **can't pop an empty stack**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**

![Beki.]( https://i.ibb.co/C5Gh2VH/for-no-2.png)

##

## **No. 3. swap**
  * <ins>**Implement the swap opcode.**</ins>
  * 
    * <ins>**The swap opcode**</ins>
      * The opcode **swap** swaps the top two elements of the stack.
        * Usage: **swap**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't swap**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**

![Beki.]( https://i.ibb.co/z23zWft/for-no-3.png)

##

## **No. 4. add**
  * <ins>**Implement the add opcode.**</ins>
  * 
    * <ins>**The add opcode**</ins>
      * The opcode **add** adds the top two elements of the stack.
        * Usage: **add**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't add**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
          * The top element of the stack contains the result
          * The stack is one element shorter

![Beki.]( https://i.ibb.co/2KzCpGM/for-no-4.png)

###

## **No. 5. nop**
  * <ins>**Implement the nop opcode.**</ins>
  * 
    * <ins>**The nop opcode**</ins>
      * The opcode **nop** doesn’t do anything.
        * Usage: **nop**


####

<h1 align="center"> <ins> ADVANCED_TASKS (From Task 6 to 19) </ins> </h1>

## **No. 6. sub**
  * <ins>**Implement the sub opcode.**</ins>
  * 
    * <ins>**The sub opcode**</ins>
      * The opcode **sub** subtracts the top element of the stack from the second top element of the stack.
        * Usage: **sub**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't sub**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * The result is stored in the second top element of the stack, and 
        * the top element is removed, 
          * so that at the end:
            * The top element of the stack contains the result
            * The stack is one element shorter

![Beki.]( https://i.ibb.co/rtDkLVN/for-no-6.png)

##

## **No. 7. div**
  * <ins>**Implement the div opcode.**</ins>
  * 
    * <ins>**The div opcode**<ins>
      * The opcode **div** divides the second top element of the stack by the top element of the stack.
        * Usage: **div**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't div**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * The result is stored in the second top element of the stack, and 
        * the top element is removed, 
          * so that at the end:
            * The top element of the stack contains the result
            * The stack is one element shorter
##

## **No. 8. mul**
  * <ins>**Implement the mul opcode.**</ins>
  * 
    * <ins>**The mul opcode**<ins>
      * The opcode **mul** multiplies the second top element of the stack with the top element of the stack.
        * Usage: **mul**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't mul**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * The result is stored in the second top element of the stack, and 
        * the top element is removed, 
          * so that at the end:
            * The top element of the stack contains the result
            * The stack is one element shorter

##

## **No. 9. mod**
  * <ins>**Implement the mod opcode.**</ins>
  * 
    * <ins>**The mod opcode**</ins>
      * The opcode **mod** computes the rest of the division of the second top element of the stack by the top element of the stack.
        * Usage: **mod**
        * If the stack contains less than two elements, 
          * print the error message **L<line_number>:**
            * **can't mod**,
            * **stack too short**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * The result is stored in the second top element of the stack, and 
        * the top element is removed, 
          * so that at the end:
            * The top element of the stack contains the result
            * The stack is one element shorter
        * If the top element of the stack is **0**, 
          * print the error message **L<line_number>:**
            * **division by zero**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
##

## **No. 10. comments**
  * <ins>**Every good language comes with the capability of commenting.**</ins>
    * When the first non-space character of a line is **#**, 
      * treat this line as a comment (don’t do anything).

##

## **No. 11. pchar**
  * <ins>**Implement the pchar opcode.**</ins>
  * 
    * <ins>**The pchar opcode**</ins>
      * The opcode **pchar** prints the char at the top of the stack, followed by a new line.
        * Usage: **pchar**
        * The integer stored at the top of the stack is treated as
          * the **ascii value** of the character to be printed
        * If the value is not in the ascii table (man ascii), 
          * print the error message **L<line_number>:**
            * **can't pchar**,
            * **value out of range**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**
        * If the stack is empty, 
          * print the error message **L<line_number>:**
            * **can't pchar**,
            * **stack empty**,
            * followed by a new line, and 
            * exit with the status **EXIT_FAILURE**

![Beki.]( https://i.ibb.co/G31zNwH/for-no-11.png)

##

## **No. 12. pstr**
  * <ins>**Implement the pstr opcode.**</ins>
  * 
    * <ins>**The pstr opcode**</ins>
      * The opcode **pstr** prints the string starting at the top of the stack, followed by a new line.
        * Usage: **pstr**
        * The integer stored in each element of the stack is treated as
          * the **ascii value** of the character to be printed
        * If the stack contains less than two elements, 
          * The string stops when either:
            * the stack is over,
            * the value of the element is 0,
            * the value of the element is not in the ascii table. 
        * If the stack is empty, 
          * print only a new line

![Beki.]( https://i.ibb.co/f1xq6gm/for-no-12.png)

#####

## **No. 13. rotl**
  * <ins>**Implement the rotl opcode.**</ins>
  * 
    * <ins>**The rotl opcode**</ins>
      * The opcode **rotl**  rotates the stack to the top.
        * Usage: **rotl**
        * The top element of the stack becomes the last one, and 
          * the second top element of the stack becomes the first one.
        * **rotl** never fails

![Beki.]( https://i.ibb.co/8P04W0L/for-no-13png.png)

##

## **No. 14. rotr**
  * <ins>**Implement the rotr opcode.**</ins>
  * 
    * <ins>**The rotr opcode**</ins>
      * The opcode **rotr**   rotates the stack to the bottom.
        * Usage: **rotr**
        * The last element of the stack becomes the top element of the stack.
        * **rotr** never fails

##

## **No. 15. stack, queue**
  * <ins>**Implement the stack and queue opcodes.**</ins>
  * 
    * <ins>**The stack opcode**</ins>
      * The opcode **stack** sets the format of the data to a stack (LIFO). 
        * This is the default behavior of the program.
          * Usage: **stack**

  * 
    * <ins>**The queue opcode**</ins>
      * The opcode **queue** sets the format of the data to a queue (FIFO).
        * Usage: **queue**
  * 
      * <ins>**When switching mode:**</ins>
        * The top of the stack becomes the front of the queue
        * The front of the queue becomes the top of the stack

![Beki.]( https://i.ibb.co/zrhCJcj/for-no-15png.png)

##

## **No. 16. Brainf^ck**
  * File:
    * <ins>**1000-school.bf**</ins>
  * 
  * <ins>**Write a Brainf*ck script that prints School,**</ins>
      * followed by a new line.
    * All your Brainf*ck files should be stored inside the **bf** sub directory.
    * You can install the **bf** interpreter to test your code:
      * **sudo apt-get install bf**
    * Read:
      * **Brainf*ck**

![Beki.]( https://i.ibb.co/qxCpqWR/for-no-16.png)

##

## **No. 17. Add two digits**
  * File:
    * <ins>**1001-add.bf**</ins>
  * 
  * <ins>**Add two digits given by the user.**</ins>
    * Read the two digits from stdin, 
      * add them, and 
      * print the result
    * 
    * The total of the two digits with be 
      * one digit-long (<10).

![Beki.]( https://i.ibb.co/KqHLnqG/for-no-17.png)

##

## **No. 18. Multiplication**
  * File:
      * <ins>**1002-mul.bf**</ins>
  * 
  * <ins>**Multiply two digits given by the user.**</ins>
    * Read the two digits from stdin, 
      * multiply them, and 
      * print the result
    * 
    * The result of the multiplication will be
      * one digit-long (<10).

![Beki.]( https://i.ibb.co/FsVQ3qg/for-no-18.png)

##

## **No. 19. Multiplication level up**
  * File:
        * <ins>**1003-mul.bf**</ins>
   
  * <ins>**Multiply two digits given by the user.**</ins>
    * Read the two digits from stdin, 
      * multiply them, and 
      * print the result,
        * followed by a new line.

![Beki.]( https://i.ibb.co/ssKBC6y/for-no-19.png)

#
