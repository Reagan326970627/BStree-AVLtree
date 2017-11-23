#include <iostream>


using namespace std;


int minNodes(int h){
    int result;
    if (h==0) {return 0;}
    else if (h==1) {return 1;}
    else if (h==2) {return 2;}
    else {
        result=minNodes(h-1)+minNodes(h-2)+1;
        return result;
    }
}


int main(){

	cout << "Please enter the height of the avl tree: ";
	int x = 0;
	cin >> x;

	cout << "The minimum number of nodes for a tree with height " << x << " is: ";
	cout << minNodes(x) << endl;

	return 0;
}
