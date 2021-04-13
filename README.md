<h1 align="center" >:rage1:★Simple Shell Project★:rage1:</h1>

 ## Code Language :suspect:
<p align="left">
<code><img src="https://github.com/abranhe/programming-languages-logos/blob/master/src/c/c_48x48.png" alt="C" width="40" height="40" /></code>&nbsp;
</p>

## Description :godmode:
#### This is a team project of Holberton School.
#### 0x16. C - Simple Shell

## What is "the Shell"?
#### Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.

#### On most Linux systems a program called bash (which stands for Bourne Again SHell, an enhanced version of the original Unix shell program, sh, written by Steve Bourne) acts as the shell program. Besides bash, there are other shell programs available for Linux systems.

<details>
  <summary><h3>:eyes: Click here to see Tasks </h3></summary>


  ## *0. README, man, AUTHORS*
  #### •Write a README
  #### •Write a man for your shell.
  #### •You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

  ## *1. Betty would be proud*
  ### *Write a beautiful code that passes the Betty checks*

  ## *2 Simple shell 0.1* 
  ### Write a UNIX command line interpreter.

  #### •Usage: simple_shell

  ### Your Shell should:

  #### •Display a prompt and wait for the user to type a command. A command line always ends with a new line.
  #### •The prompt is displayed again each time a command has been executed.
  #### •The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
  #### •The command lines are made only of one word. No arguments will be passed to programs.
  #### •If an executable cannot be found, print an error message and display the prompt again.
  #### •Handle errors.
  #### •You have to handle the “end of file” condition (Ctrl+D)
  ### *You don’t have to:*

  #### •use the PATH
  #### •implement built-ins
  #### •handle special characters : ", ', `, \, *, &, #
  #### •be able to move the cursor
  #### •handle commands with arguments

  ## *3 Simple shell 0.2*
  ### *Simple shell 0.1 +*

  #### •Handle command lines with arguments
 
  ## *4 Simple shell 0.3*
  ### *Simple shell 0.2 +*

  #### •Handle the PATH

  ## *5 Simple shell 0.4*
  ### *Simple shell 0.3 +*

  #### •Implement the exit built-in, that exits the shell
  #### •Usage: exit
  #### •You don’t have to handle any argument to the built-in exit

  ## *6 Simple shell 1.0*
  ### *Simple shell 0.4 +*

  #### •Implement the env built-in, that prints the current environment

  ## *7 What happens when you type `ls -l *.c` in the shell*
  ### *Write a blog post describing step by step what happens when you type ls -l *.c and hit Enter in a shell. Try to explain every step you know of, going in as much details as you can, give examples and draw diagrams when needed. You should merge your previous knowledge of the shell with the specifics of how it works under the hoods (including syscalls).*

  #### •Have at least one picture, at the top of the blog post
  #### •Publish your blog post on Medium or LinkedIn
  #### •Share your blog post at least on LinkedIn
  #### •Only one blog post by team
  #### •The blog post must be done and published before the first deadline (it will be part of the manual review)
  #### •Please, remember that these blogs must be written in English to further your technical ability in a variety of settings
  ### *When done, please add all urls below (blog post, LinkedIn post, etc.)*

  ## *8 Test suite*
  ### *Contribute to a test suite for your shell.*

  ### *This is a task shared by everyone in the class.*

  #### •Every team (who contributed) will get the same score for this task (The repository owner will not get more points)
  #### •You have to be pro-active and agree on one and unique repository to use for the test suite
  #### •Please provide the link to the repository you contributed to
  #### •Your contribution must be relevant (Correcting typos is nice and always appreciated on the open source sphere, but we won’t consider this a contribution at this point, unless it fixes a bug)
  ### *Guidelines for your test suite repository:*

  #### The test suite should cover every tasks from 0. to 20.
  #### •The test suite should cover every regular cases (many different examples) and possible edge cases
  #### •The entire class should work on the same test suite. Use only one repository (don’t forget the README.md file)
  #### •Start adding tests ASAP and not just before the deadline in order to help everyone from day 0
  #### •You can take (or fork) inspiration from this example, but it is not mandatory to follow this format/way
  #### •Adopt a style and be consistent. You can, for example, follow this style guide. If you choose a style that already exists, add it to the README.md in a style section.    If you write your own, create a Wiki page attached to the project and refer to it in the README.md style section.
  ##### If you choose to use this code, make sure to update the style accordingly
  #### •You should have an AUTHORS file, listing all individuals having contributed content to the repository. Format, see Docker

  ## *9 Simple shell 0.1.1*
  ### *Simple shell 0.1 +*

  #### •Write your own getline function
  #### •Use a buffer to read many chars at once and call the least possible the read system call
  #### •You will need to use static variables
  #### •You are not allowed to use getline

  ## You don’t have to:
  #### •be able to move the cursor

  ## *10 Simple shell 0.2.1*
  ### *Simple shell 0.2 +*

  #### •You are not allowed to use strtok

  ## *11 Simple shell 0.4.1*
  ### *Simple shell 0.4 +*

  #### •handle arguments for the built-in exit
  #### •Usage: exit status, where status is an integer used to exit the shell

  ## *12 Simple shell 0.4.2*
  ### *Simple shell 0.4 +*
  
  #### •Handle Ctrl+C: your shell should not quit when the user inputs ^C
  ### man 2 signal.

  ## *13 setenv, unsetenv*
  ### *Simple shell 1.0 +*

  ### *Implement the setenv and unsetenv builtin commands*

  #### setenv
  ##### •Initialize a new environment variable, or modify an existing one
  ##### •Command syntax: setenv VARIABLE VALUE
  ##### •Should print something on stderr on failure
  #### unsetenv
  ##### •Remove an environment variable
  ##### •Command syntax: unsetenv VARIABLE
  ##### •Should print something on stderr on failure

  ## *14 cd*
  ### *Simple shell 1.0 +*

  ### *Implement the builtin command cd:*

  #### •Changes the current directory of the process.
  #### •Command syntax: cd [DIRECTORY]
  #### •If no argument is given to cd the command must be interpreted like cd $HOME
  #### •You have to handle the command cd -
  #### •You have to update the environment variable PWD when you change directory
      man chdir, man getcwd

  ## *15 ;*
  ### *Simple shell 1.0 +*

  #### •Handle the commands separator ; 

  ## *16 && and ||*
  ### *Simple shell 1.0 +*

  #### •Handle the && and || shell logical operators

  ## *17 alias*
  ### Simple shell 1.0 +

  #### •Implement the alias builtin command
  #### •Usage: alias [name[='value'] ...]
      alias: Prints a list of all aliases, one per line, in the form name='value'
      alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
      alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value

  ## *18 Variables*
  ### *Simple shell 1.0 +*

  #### •Handle variables replacement
  #### •Handle the $? variable
  #### •Handle the $$ variable

  ## *19 Comments*
  ### *Simple shell 1.0 +*

  #### •Handle comments (#)

  ## *20 help*
  ### *Simple shell 1.0 +*

  #### •Implement the help built-in
  #### •Usage: help [BUILTIN]

  ## *21 History*
  ### *Simple shell 1.0 +*

  #### •Implement the history built-in, without any argument
  #### •The history built-in displays the history list, one command by line, preceded with line numbers (starting at 0)
  #### •On exit, write the entire history, without line numbers, to a file named .simple_shell_history in the directory $HOME
  #### •When the shell starts, read the file .simple_shell_history in the directory $HOME if it exists, and set the first line number to the total number of lines in the file modulo 4096

  ## *22 File as input*
  ### *Simple shell 1.0 +*

  #### Usage: simple_shell [filename]
  #### •Your shell can take a file as a command line argument
  #### •The file contains all the commands that your shell should run before exiting
  #### •The file should contain one command per line
  #### •In this mode, the shell should not print a prompt and should not read from stdin
 </details>
 
 ## How 2 Install
 #### First, clone this repository "https://github.com/elyoguictm/simple_shell":
 #### Now, go to "simple shell" directory (cd simple_shell)
 #### Compile, check the "Compiler" section
 #### Run the shell with ./hsh and enjoy
 
 ## Complier
### *You have to use the next compilator:*
     gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
 
 ## Usage
 #### Interactive mode:
     $ ./hsh
     ($) /bin/ls
     hsh main.c shell.c
     ($)
     ($) exit
     $
     
 #### Non Interactive mode:
     $ echo "/bin/ls" | ./hsh
     hsh main.c shell.c test_ls_2
     $
     $ cat test_ls_2
     /bin/ls
     /bin/ls
     $
     $ cat test_ls_2 | ./hsh
     hsh main.c shell.c test_ls_2
     hsh main.c shell.c test_ls_2
     $
 
 ## Authors

* **Gabriel Ferreira:feelsgood:** - [elyoguictm](https://github.com/elyoguictm)
* **Federico Blengio:goberserk:** - [fedeblengio](https://github.com/fedeblengio)
