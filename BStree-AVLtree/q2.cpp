#include "binarytree.h"
#include <iostream>


using namespace std;

int main(){

	BinaryTree<int> empty, t1, t2, t3, t4, bst, noBst;
	
	bst.MakeTree(20, empty, empty);
	t1.MakeTree(40, empty, empty);
	t2.MakeTree(30, bst, t1);
	
	noBst.MakeTree(20, empty, empty);
	t3.MakeTree(40, empty, empty);
	t4.MakeTree(15, noBst, t3);
	
	noBst.MakeTree(45, t4, empty);
	bst.MakeTree(45, t2, empty);

	if(bst.isBSTree(bst.getRoot()) && !noBst.isBSTree(noBst.getRoot())){
		cout << "Correct" << endl;
	}
	else{
		cout << "Incorrect" << endl;
	}
}
