Dominic Brugioni
2402157

Description:
This is a program that implements a "lazily-balancing BST" to store faculty and student data from two separate tables (lazyBST instances). The BST follows the rule that the difference of depths in the subtree cannot be greater than 1.5.
The lazily balancing tree is used to organize students and faculty by ID number in order to be efficiently looked up for the following functions at a user's request:

1. Print all students and their information (sorted by ascending id #)
2. Print all faculty and their information (sorted by ascending id #)
3. Find and display student information given the student id
4. Find and display faculty information given the faculty id
5. Add a new student
6. Delete a student given the id
7. Add a new faculty member
8. Delete a faculty member given the id.
9. Change a student’s advisor given the student id and the new faculty id.
10. Remove an advisee from a faculty member given the ids
11. Exit.

When Exit is selected, the program produces an output file, runLog.txt, that gives the information for the faculty and student tables at the time of termination.


Partners:
Dylan Calderon