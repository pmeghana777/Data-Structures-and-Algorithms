/* Problem statement is available here -> https://practice.geeksforgeeks.org/problems/count-the-zeros/0 */

#include <iostream>
using namespace std;

int main() {

	// Number of Test Cases
	int T;
	cin>>T;

	while(T--){

		//Length of the array
		int size;
		cin>>size;

		//Sorted array of 1's and 0's
	    	int arr[size];
	    	for(int i = 0 ; i < size ; i++){
	        	cin>>arr[i];
	    	}

		//Search for the first occurence of zero in the array using binary search 
	    	int low = 0;
	    	int high = size - 1;
	    	int mid = low + ( high - low ) / 2;
	    	int indexOfFirstZero = size;
	    	while(low <= high){
			if( arr[mid] == 0 ){
	            		indexOfFirstZero = mid;
	            		high = mid - 1;
	        	}
	        	else{
	            		low = mid + 1;
	        	}
	        	mid = low + ( high - low ) / 2;
	    	}

	    	cout<<size - indexOfFirstZero<<endl;
	}
	return 0;
}
