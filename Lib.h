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
