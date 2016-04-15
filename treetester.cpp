/*----- treetester.cpp -----------------------------------------------------
                Program for testing class template BST.
 ------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
   // Testing Constructor and empty()
   BST<int> intBST;            // test the class constructor
   cout << "Constructing empty BST\n";
   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing inorder
   cout << "Inorder Traversal of BST: \n\n\n";
   intBST.inorder(cout);


   intBST.insert(500);

   intBST.insert(750);
   intBST.insert(250);

   intBST.insert(125);
   intBST.insert(375);

   intBST.insert(625);
   intBST.insert(875);

   intBST.insert(120);
   intBST.insert(130);

   intBST.insert(370);
   intBST.insert(380);
/*
   intBST.insert(630);
   intBST.insert(620);

   intBST.insert(870);
   intBST.insert(880);
   intBST.insert(835);

*/



/*
   // Testing insert
   cout << "\nNow insert a bunch of integers into the BST."
           "\nTry items not in the BST and some that are in it:\n";
   int number;
   for (;;)
   {
      cout << "Item to insert (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      intBST.insert(number);
   }
*/
   intBST.graph(cout);
   cout << endl << endl;

   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";
   cout << "Inorder Traversal of BST: \n";
   intBST.inorder(cout);

   cout << endl;

   cout << endl << "Number of leaves = " << intBST.leafCount() << endl;
   cout << endl << "Tree height = " << intBST.heightCount() << endl;

/*
   // Testing search()
   cout << "\n\nNow testing the search() operation."
           "\nTry both items in the BST and some not in it:\n";
   for (;;)
   {
      cout << "Item to find (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      cout << (intBST.search(number) ? "Found" : "Not found") << endl;
   }

   // Testing remove()
   cout << "\nNow testing the remove() operation."
           "\nTry both items in the BST and some not in it:\n";
   for (;;)
   {
      cout << "Item to remove (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      intBST.remove(number);
      intBST.graph(cout);
   }
   cout << "\nInorder Traversal of BST: \n";
   intBST.inorder(cout);
   cout << endl;
   */
   return 0;
}
