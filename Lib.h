// a library integrated data structure and algorithms

#include<iostream>
using namespace std;
class Search {
	public:
		// Linear search Using Recursion
		int LinearSearch(int arr[], int start, int end, int value) {
			if(start > end) {
				return -1;
			} else {
				if(arr[start] == value) { 
					return start;
				} else {
					return LinearSearch(arr, start+1, end, value);
				}
			}
		}
		
		// Binary Search using Recursion
		int BinarySearch (int arr[], int start, int end, int value) {
			int mid = (start+end)/2;
			if(start > end) {
				return -1;
			}
			if(value == arr[mid]) {
				return mid;
			} else if(value < arr[mid]) {
				return BinarySearch(arr, start, mid-1, value);
			} else {
				return BinarySearch(arr, mid+1, end, value);
			}
		}
		
		
};
class Sorting {
	public:
		void BubbleSort(int arr[], int size) {
			int temp = 0;
			for(int i=0; i<size; i++) {
				for(int j=0; j<size; j++) {
					if(arr[i] <= arr[j]) {
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for(int i=0; i<size; i++) {
				cout<<" "<<arr[i];
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
	public:
		SinglyLinkList() : first(NULL) { }
		
		void addNode(int value) {
			SinglyLinkListNode* temp = new SinglyLinkListNode;
			temp->data = value;
			temp->next = first;
			first = temp;
		}
		
		void addNodeFromPosition(SinglyLinkListNode* node, int value, int position) {
			SinglyLinkListNode* temp = first;
			if(position < 0) {
				cout<<"Invalid Position: "<<endl;
			} else {
				for(int i=position; i>=0; i--) {
					temp = temp->next;
					
					if(i==0) {
						node->next = temp->next;
						temp->next = node;
					}
				}
			}
		}
		
		void addNodeFromEnd(int value) {
			
		}
		
		// Delete Node from begining
		void deleteNodeFromBegining() {
			SinglyLinkListNode* dltNode = first;
			first = first->next;
		}
		
		void deleteNodeFromPosition(int position) {
			
		}
		
		void deleteNodeFromEnd() {
			
		}
		
		void display() {
			SinglyLinkListNode* currentNode = first;
			while(currentNode != NULL) {
				cout<<currentNode->data<<" ";
				currentNode = currentNode->next;
			}
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
