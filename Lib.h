// a library integrated data structure and algorithms
// Developed by: Aminullah Taj Muhammad
// https://github.com/AminullahTajMuhammad/Data-structure-in-c-

// ToDo For Data Structure Library
// 1) Template working
// 2) Update All Functions using templates
// 3) Complete Doubly Link List
// 4) Update All Function and Algorithms in pointers.

#include<iostream>
#include<cstdlib>
#define Max_Size 10000
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
		//free(tempNode);
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
class DoublyLinkList {
	private:
		DoublyLinkedListNode *first, *tail;
		
		DoublyLinkedListNode* getNode(int value) {
			DoublyLinkedListNode *newNode = new DoublyLinkedListNode;
			newNode->data = value;
			newNode->previous = NULL;
			newNode->next = NULL;
			return newNode;
		} 
	public:
		DoublyLinkList() {
			first = NULL;
			tail = NULL;
		}
		
		void addNode(int value) {
			DoublyLinkedListNode *temp = getNode(value);
			if(first == NULL) {
				first = temp;
				return;
			}
			first->previous = temp;
			temp->next = first;
			first = temp;
		}
		
		void addNodeFromPosition(int value, int position) {
			int current = 0;
			DoublyLinkedListNode *temp = first;
			while(temp->next != NULL && current < position) {
				temp = temp->next;
				temp->previous = first;
				current++; 
			}
		}
		
		void addNodeFromEnd(int value) {
			
		}
		
		void deleteNodeFromBegining() {
			
		}
		
		void deleteNodeFromPosition(int position) {
			
		}
		
		void deleteNodeFromEnd() {
			
		}
		
		int LengthofLinkList() {
			DoublyLinkedListNode* node = first;
			int count = 0;
			while (node != NULL) {
				node = node->next;
				count++;
			}
			return count;
		}
		
		void display() {
			DoublyLinkedListNode* currentNode = first;
			while (currentNode != NULL) {
				cout << currentNode->data << " ";
				currentNode = currentNode->next;
			}
		}
		void reverseDisplay() {
			
		}

};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

// - - - - - - - - Stack Classes Both Using array and using lis - - - - - - - - //
struct StackNode {
	int data;
	StackNode *next;
};
class StackUsingLinkList {
	private:
		StackNode *head;
	public:
		StackUsingLinkList() : head(NULL) {}
		void push(int value) {
			StackNode* temp = new StackNode;
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		StackNode* pop() {
			StackNode* dltNode = head;
			head = head->next;
			return head;
		}
		void display() {
			StackNode *current = head;
			while(current->next != NULL) {
				cout<<current->data<<" ";
				current = current->next;
			}
		}
};

class StackUsingArray {
private:
	int array[Max_Size], top;
public:
	StackUsingArray() : top(-1) {};
	void push(int insert) {
		if(top > Max_Size) { 
			cout<<"Stack OverFlow"<<endl; 
		} 
		else {
			array[++top] = insert;
			cout<<"Insert into Stack: "<<insert<<endl;
		}
	}
	int pop() {
		int remove;
		if(top < 0) { 
			cout<<"Stack Is under flow"; 
		} 
		else {
			remove = array[top--]; 
		}
		return remove;
	}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

// - - - - - - - - - - Added Queue Class With arrays and linkedList - - - - - - - - - - -//

struct QueueNode {
	int data;
	QueueNode *next;
};
class QueueUsingLinkListed {
	private:
		QueueNode *head;
	public:
		QueueUsingLinkListed() : head(NULL) {}
		void add(int value) {
			QueueNode* temp = new QueueNode;
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		QueueNode* remove() {
			QueueNode* dltNode = head;
			head = head->next;
			return head;
		}
		void display() {
			QueueNode *current = head;
			while(current->next != NULL) {
				cout<<current->data<<" ";
				current = current->next;
			}
		}
};

class QueueUsingArray {
	private:
		int array[Max_Size], top;
	public:
		QueueUsingArray() : top(-1) {};
		void add(int insert) {
			if(top > Max_Size) { cout<<"Queue OverFlow"<<endl; } 
			else {
				array[++top] = insert;
				cout<<insert<<" ";
			}
		}
		int remove() {
			int dlt;
			if(top < 0) { cout<<"Queue Is under flow"; } 
			else { 
				for(int i=top; i>=0; i--) {
					if(i == 0) {	dlt = array[i];		}
				} 
			}
			return dlt;
		}
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -//
// - - - - - - - - - - - - - - - Tree Class Starts From Here - - - - - - - - - - - - - - - - - - //
struct TreeNode {
	int data;
	TreeNode *leftNode, *rigthNode;
};

class TreeClass {
	private:
		TreeNode *root;
	public:
		
		/**
		* TODO
		* 1) Update Insert Function
		* 2) Added Search Function
		* 3) Remove Node Function 
		*/
		
		TreeClass() : root(NULL) {}
		
		TreeNode* creatNode(int data) {
			TreeNode *tempNode = new TreeNode();
			tempNode->data = data;
			tempNode->leftNode = NULL;
			tempNode->rigthNode = NULL;
			root = tempNode;
			return root;
		}
		
		// update this function
		void insertNodeInTree(TreeNode *node, int left_side_value, int right_value_value) {
			// For left side
			if(node->leftNode == NULL) {
				node->leftNode = creatNode(left_side_value);
			} else {
				TreeNode *l_temp = creatNode(left_side_value);
				l_temp->leftNode = node->leftNode;
				node->leftNode = l_temp; 
			}
			// For right side
			if(node->rigthNode == NULL) {
				node->rigthNode = creatNode(right_value_value);
			} else {
				TreeNode *r_temp = creatNode(right_value_value);
				r_temp->rigthNode = node->rigthNode;
				node->rigthNode = r_temp;
			}
			
		}
		// In order Tree treversal 
		void treeTreverse_inOrder(TreeNode *node) {
			if(node == NULL) { return; }
			treeTreverse_inOrder(node->leftNode);
			cout<<node->data;
			treeTreverse_inOrder(node->rigthNode);
		}
		
		//pre order treverse
		void treeTreverse_preOrder(TreeNode *node) {
			if(node == NULL) { return; }
			cout<<node->data;
			treeTreverse_inOrder(node->leftNode);
			treeTreverse_inOrder(node->rigthNode);
		}
		
		// post order treverse
		void treeTreverse_postOrder(TreeNode *node) {
			if(node == NULL) { return; }
			treeTreverse_postOrder(node->leftNode);
			treeTreverse_postOrder(node->rigthNode);
			cout<<node->data;
		}
		
		T_Node* insert(T_Node *node, int value) {
			if(node == NULL) {
				return creatNode(value);
			}
			if(node->data < value) {
				node->leftNode = insert(node->leftNode, value);
			}
			if(node->data > value) {
				node->rigthNode = insert(node->rigthNode, value);
			}
			
			return node;
		}
		bool search(T_Node *node, int value) {
			if(node == NULL) {
				return false;
			}
			if(value == node->data) {
				return true;
			}
			else if(value <= node->data) {	
				return search(node->leftNode, value);
			} 
			else if(value >= node->data) {
				return search(node->rigthNode, value);
			}
		}
	
		bool iterativeSearch(int value, T_Node *node) {
			while(node != NULL) {
				if(node == NULL) {
					return false;
				}
				if(value < node->data) {
					node = node->leftNode;
				} else if(value > node->data) {
					node = node->rigthNode;
				} else {
					return true;
				}
			}
			
			return false;
		}
		
};
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
