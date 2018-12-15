#include<iostream>
#include "Lib.h"
using namespace std;
int main() {
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
	cout<<endl;
	
	DoublyLinkListed dList;
	dList.addNode(100);
	dList.addNode(200);
	dList.addNode(100);
	dList.addNode(200);
	dList.addNode(100);
	dList.addNode(200);
	dList.addNode(100);
	dList.addNode(200);
	dList.display();
	
	DoublyLinkedListNode *data = new DoublyLinkedListNode;
	dList.addNodeFromPosition(data,1000, 5);
	dList.display();


	return 0;
}
