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
	
	DoublyLinkList dList;
	dList.addNode(100);
	dList.addNode(200);
	dList.addNode(300);
	dList.addNode(400);
	dList.addNode(500);
	dList.addNode(600);
	dList.addNode(700);
	dList.addNode(800);
	dList.display();


	return 0;
}
