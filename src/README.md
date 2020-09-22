Project 1: Tokenizer
====================
# Instructions:

To run this lab enter the following: ./tokens

The goal of this lab was to create a simple UI and ask the user to input a
string, maintain a log of all the strings, and manipulate the strings into
"tokens".

When the user types a string, the string will then be added into a log
history.

The log code is composed of the history.c and history.h files.

To keep track of the log, linked lists were used.

A linked list node contained an iD and the string that the user has entered in
the past.

The user can then check the log by inputting an integer iD, which is the order of
strings that the user entered.
Even more so the user can also view the log.
This completes the user interface.

To tokenize the strings, entered by the user, the code can be found in tokenizer.h and tokenizer.c
In tokenize, each word was adjusted to the correct index of the char
array.
The goal of this lab was to get familiar with
allocating memory and freeing memory.   This is the aproach we needed to do
when we were finished with history and tokenizer. 

My main concern and problems in this lab was thinking with pointers and
overthinking too much.

Even more so, I also had trouble with my main file, which I had as userInt.c.
I expected too much with scanf, and ultimately had to retry a million
different approaches to compare the user input.  


