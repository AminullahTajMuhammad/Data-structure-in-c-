// a library integrated data structure and algorithms

#include<iostream>
#include<cstdlib>
using namespace std;
class Search {
public:
	// Linear search Using Recursion
	int LinearSearch(int arr[], int start, int end, int value) {
		if (start > end) {
			return -1;
		}
		else {
			if (arr[start] == value) {
				return start;
			}
			else {
				return LinearSearch(arr, start + 1, end, value);
			}
		}
	}

	// Binary Search using Recursion
	int BinarySearch(int arr[], int start, int end, int value) {
		int mid = (start + end) / 2;
		if (start > end) {
			return -1;
		}
		if (value == arr[mid]) {
			return mid;
		}
		else if (value < arr[mid]) {
			return BinarySearch(arr, start, mid - 1, value);
		}
		else {
			return BinarySearch(arr, mid + 1, end, value);
		}
	}


};
class Sorting {
public:
	void BubbleSort(int arr[], int size) {
		int temp = 0;
		for (int i = 0; i<size; i++) {
			for (int j = 0; j<size; j++) {
				if (arr[i] <= arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (int i = 0; i<size; i++) {
			cout << " " << arr[i];
		}
	}
};


//--------------------Link List Class in data structures--------------------------//


// ---------- Node of link list------------------------//
struct SinglyLinkListNode {
	int data;
	SinglyLinkListNode* next;
};

//- - - - - - - - Linklist class - - - - - - - - - //
class SinglyLinkList {
private:
	SinglyLinkListNode* first;
	int addNodeInteger;
public:
	SinglyLinkList() : addNodeInteger(0), first(NULL) { }

	void addNode(int value) {
		addNodeInteger++;
		SinglyLinkListNode* temp = new SinglyLinkListNode;
		temp->data = value;
		temp->next = first;
		first = temp;
	}

	void addNodeFromPosition(SinglyLinkListNode* node, int value, int position) {
		SinglyLinkListNode* temp = first;
		if (position < 0) {
			cout << "Invalid Position: " << endl;
		}
		else {
			for (int i = position; i >= 0; i--) {
				temp = temp->next;

				if (i == 0) {
					node->next = temp->next;
					temp->next = node;
				}
			}
		}
	}

	void addNodeFromEnd(int value) {
		SinglyLinkListNode* tempNode = first;

		for (int i = 0; i<addNodeInteger; i++) {

			if (tempNode->next != NULL) {
				tempNode = tempNode->next;
			}
			else {
				SinglyLinkListNode* newNode = new SinglyLinkListNode;
				tempNode->next = newNode;
				newNode->data = value;
				break;
			}

		}
	}

	// Delete Node from begining
	void deleteNodeFromBegining() {
		SinglyLinkListNode* dltNode = first;
		first = first->next;
	}

	void deleteNodeFromPosition(int position) {
		SinglyLinkListNode* node = new SinglyLinkListNode;
		SinglyLinkListNode* temp = new SinglyLinkListNode;

		int curr = 0;
		// dummyHead is useful if we have to remove the head,
		// with the help of dummyHead, checking separately for the head case is not required.
		node->next = first;
		temp = node;

		while (temp->next != NULL && curr < position){
			temp = temp->next;
			curr++;
		}

		if (curr == position){
			temp->next = temp->next->next;
			first = node->next;
		}

		else{
			cout << "your linked list is greater than my linked list.";
		}
	}


	void deleteNodeFromEnd() {
		SinglyLinkListNode *tempNode = first;
		while(tempNode->next != NULL) {
			tempNode = tempNode->next;
		}
		
		// free the memory deleted node from list
		free(tempNode);
	}

	void display() {
		SinglyLinkListNode* currentNode = first;
		while (currentNode != NULL) {
			cout << currentNode->data << " ";
			currentNode = currentNode->next;
		}
	}

	int LengthofLinkList() {
		SinglyLinkListNode* node = first;
		int count = 0;
		while (node != NULL) {
			node = node->next;
			count++;
		}

		return count;
	}
};
//- - - - - - - - - - - - - - - - - - - - - - - - - //

// - - - - - - - Added Doubly LinkedList Node - - - - - - - - - //
struct DoublyLinkedListNode {
	DoublyLinkedListNode* previous;
	int data;
	DoublyLinkedListNode* next;
};

//------------- Doubly LinkedLIst Class------------------------//
class DoublyLinkLised {

};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
