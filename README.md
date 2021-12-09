# simple_shell
## Colaborative project
	Hernan Echeverri R. 
	Andrés Felipe Pérez Martínez.
# 0x16. C - Simple Shell

### Write a simple UNIX command interpreter.
## Learning Objectives

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of `main`
- How does the shell use the `PATH` to find the programs
- How to execute another program with the `execve` system call
- How to suspend the execution of a process until one of its children terminates
- What is `EOF` / “end-of-file”?



## Compilation

Use the command: 

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## How to use

1. Open terminal. 
2. git clone git@github.com:anfepema700/simple_shell.git 
3. execute the compilation ./hsh

### Examples of use command
in this project you can use the command like this: 

- ls. 
- /bin/ls
- ls -l

this is a bit examples of command availables

after execute you looks the content of current repository: 

~/simple_shell$ ls
AUTHORS    comparar_cadenas.c  leer_linea.c  simple_shell.h
README.md  ejecutar.c          procesos.c

![image-20211208191142170](C:\Users\ANFEPEMA\AppData\Roaming\Typora\typora-user-images\image-20211208191142170.png)





Simple command with argument

At the prompt type usual commands like ls giving its full path /bin/ls in my case and use the arguments -l in this case.

`$ /bin/ls`



![image-20211208191240955](C:\Users\ANFEPEMA\AppData\Roaming\Typora\typora-user-images\image-20211208191240955.png)



Note: if you dont give the PATH an error message will indicate Command not found.



### Non interactive mode

At the TERMINAL prompt outside the hsh program type: `echo "/bin/ls" | valgrind ./hsh`

That will send the instructions via pipe to ./hsh as arguments

The result should be the same as typing /bin/ls directly in the ./hsh program

### Non interactive mode with arguments
At the TERMINAL prompt outside the hsh program type: `echo "/bin/ls -l" | valgrind ./hsh`

That will send the instructions via pipe to ./hsh as arguments

The result should be the same as typing /bin/ls -l directly in the ./hsh program



### Built ins

Two builtins were implemented `env` and `exit`
### env
Display the vars in environ one by line.
Type **env** at the prompt of ./hsh program
You should see something like that in your screen

	TERM_PROGRAM=Apple_Terminal
	SHELL=/bin/bash
	TERM=xterm-256color
	TMPDIR=/var/folders/x3/99rxpk913hs7crrhgqyrc4gw0000gn/T/
	TERM_PROGRAM_VERSION=433
	OLDPWD=/Users/user
	TERM_SESSION_ID=40476BB1-FE99-4432-8EEF-5B7E19E0099A
	USER=user
	SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.UHyOZuZfWC/Listeners
	PATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/share/dotnet:~/.dotnet/tools:/Library/Frameworks/Mono.framework/Versions/Current/Commands
	PWD=/Users/user/simple_shell
	XPC_FLAGS=0x0
	XPC_SERVICE_NAME=0
	SHLVL=1
	HOME=/Users/user
	LOGNAME=user
	LC_CTYPE=UTF-8
	_=./hsh

### exit
End the execution of ./hsh program
Type **exit** at the prompt of ./hsh program
The prompt get back to the TERMINAL

# FLOWCHAR

![](https://github.com/josenoguera-94/proyecto_veterinaria/blob/sprint2/HernanEcheverriR/simpleshell.png)
