Be sure to read sections 12.1 - 12.4 of Chapter 12 in the textbook before starting this assignment.

Beginning with the BST (binary search tree) class template of Figure 12.7 in Chapter 12, add the following 2 member functions.

height - a recursive function to return the height of a BST (see Exercises 12.4 problem 24 on page 697).

leafCount - a recursive function to return the number of leaves in a BST (see Exercises 12.4 problem 25 on page 697).

There are some hints in the textbook. You will also need to add code to a driver program to allow you to test these new functions. Remember that an electronic copy of the code from Figure 12.7 can be downloaded from the author's web site.

http://cs.calvin.edu/books/c++/ds/2e/SourcePrograms/Chap12/Figures12.1-8/

Note: If you get a compiler error on the declarations like:

BST<DataType>::BinNodePointer locptr = myRoot;

you should be able to replace them with:

BinNodePointer locptr = myRoot;

Remember that any time you write a recursive function for a linked class like the binary search tree class, you have to write 2 functions. One function is the recursive function that has a node pointer as a parameter. But node pointers are private to the tree class, so this recursive function must be a private function. A second public function must be provided that then calls the recursive function.

The textbook notes that almost all recursive functions for trees will have a base case for a NULL node pointer. But remember that recursive functions can have more than one base case. For recursive functions that processes a tree, another base case might be that the node pointer points to a leaf node.

These 2 functions are a little different from the traversal functions is the textbook. The traversal functions are void functions. These are value-returning functions. Here is an algorithm for calculating the height of a binary tree:

if the tree is empty (root pointer is NULL)   
    height of the tree is zero
otherwise   
    calculate the height of the left subtree   
    calculate the height of the right subtree   
    height of the tree is 1 + maximum of height of left subtree and height of right subtree
Upload all source files including your driver program
