Project 1: Tokenizer
====================
# Instructions:

To run this lab enter the following: ./tokens

The user interface works as follows:
* Enter 0, is to view the history (all the strings the user has entered is stored)
* Enter 1, is to recall at certain history ( the strings are organized by ID number)
* Enter 2, enter a new sentence (the user can enter sentences which will be organized,
and added to the history)
* Enter 3, to quit (no longer input, view history so forth)

If the users enters 0, the user will see the history and each string with its
appropiate ID, in order.

If the user enter 1,the user can enter a number, after the ! symbol to recall a
string with an ID. The number is the ID, and the string that is assigned to
that ID will be printed.

If the user enters 2, the user can enter a string, after the $ symbol. The
string will then be assigned with an ID and will be part of the history of
strings.

If the user enters q, the User Interface will end and the user will no longer
be able to enter or access the User Interface options.
=======================================================


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


