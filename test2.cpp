#include<iostream>
#include "Lib.h"
using namespace std;
using namespace std;
struct LinkListNode {
	int data;
	LinkListNode* next;
};
int main() {
	LinkListNode* newNode = new LinkListNode;
	SinglyLinkList list;
	list.addNode(10);
	list.addNode(20);
	list.addNode(30);
	list.addNode(40);
	list.addNode(50);
	list.addNode(60);
	list.display();
	cout<<endl;
	
	list.deleteNodeFromEnd();
	list.display();
	return 0;
}
