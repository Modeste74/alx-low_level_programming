This directory will be used for the makefile project

0. make -f 0-Makefile
----------------------
Create your first Makefile.
Requirements:
a. name of the executable: school
b. rules: all
	i. The all rule builds your executable
c. variables: none

1. make -f 1-Makefile
----------------------
Requirements:
a. name of the executable: school
b. rules: all
	i. The all rule builds your executable
c. variables: CC, SRC
	i. CC: the compiler to be used
	ii. SRC: the .c files

2. make -f 2-Makefile
-----------------------
Create your first useful Makefile.
Requirements:
a. name of the executable: school
b. rules: all
	i. The all rule builds your executable
c.variables: CC, SRC, OBJ, NAME
	i. CC: the compiler to be used
	ii. SRC: the .c files
	iii. OBJ: the .o files
	iv. NAME: the name of the executable
d. The all rule should recompile only the updated source files
e. You are not allowed to have a list of all the .o files

3. make -f 3-Makefile
---------------------
Requirements:
a. name of the executable: school
b. rules: all, clean, oclean, fclean, re
	i. all: builds your executable
	ii. clean: deletes all Emacs and Vim temporary files along with the executable
	iii. oclean: deletes the object files
	iv. fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	v. re: forces recompilation of all source files
c. variables: CC, SRC, OBJ, NAME, RM
	i. CC: the compiler to be used
	ii. SRC: the .c files
	iii. OBJ: the .o files
	iv. NAME: the name of the executable
	v. RM: the program to delete files
d. The all rule should recompile only the updated source files
e. The clean, oclean, fclean, re rules should never fail
f. You are not allowed to have a list of all the .o files

4. A complete Makefile
----------------------
Requirements:
a. name of the executable: school
b. rules: all, clean, fclean, oclean, re
	i. all: builds your executable
	ii. clean: deletes all Emacs and Vim temporary files along with the executable
	iii. oclean: deletes the object files
	iv. fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	v. re: forces recompilation of all source files
c. variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	i. CC: the compiler to be used
	ii. SRC: the .c files
	iii. OBJ: the .o files
	iv. NAME: the name of the executable
	v. RM: the program to delete files
	vi. CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
d. The all rule should recompile only the updated source files
e. The clean, oclean, fclean, re rules should never fail
f. You are not allowed to have a list of all the .o files

5. Island Perimeter
--------------------
Technical interview preparation:
	a. You are not allowed to google anything
	b. Whiteboard first

Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
a. grid is a list of list of integers:
	i. 0 represents a water zone
	ii. 1 represents a land zone
	iii. One cell is a square with side length 1
	iv. Grid cells are connected horizontally/vertically (not diagonally).
	v. Grid is rectangular, width and height don’t exceed 100
b. Grid is completely surrounded by water, and there is one island (or nothing).
c. The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
d. Requirements:
	i. First line contains #!/usr/bin/python3
	ii. You are not allowed to import any module
	iii. Module and function must be documented

6. make -f 100-Makefile
#advanced task
--------------------------
Requirements:
a. name of the executable: school
b. rules: all, clean, fclean, oclean, re
	i. all: builds your executable
	ii. clean: deletes all Emacs and Vim temporary files along with the executable
	iii. oclean: deletes the object files
	iv. fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	v. re: forces recompilation of all source files
c. variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	i. CC: the compiler to be used
	ii. SRC: the .c files
	iii. OBJ: the .o files
	iv. NAME: the name of the executable
	v. RM: the program to delete files
	vi. CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
d. The all rule should recompile only the updated source files
e. The clean, oclean, fclean, re rules should never fail
f. You are not allowed to have a list of all the .o files
g. You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
h. You are not allowed to use the string $(CC) more than once in your Makefile
i. You are only allowed to use the string $(RM) twice in your Makefile
j. You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
k. You are not allowed to have an $(OBJ) rule
l. You are not allowed to use the %.o: %.c rule
m. Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
n. Your Makefile should not compile if the header file m.h is missing
