/* Problem statement -> https://practice.geeksforgeeks.org/problems/rope-cutting/0 */

#include <iostream>
#include <map>
using namespace std;

int main() {
	// No of Testcases
	int T;
	cin>>T;
	
	while(T--){
	    
	    //Length of the array
	    int size;
	    cin>>size;
	    
	    //array of elements which represents length of ropes
	    int arr[size];
	    for(int i = 0; i < size; i++){
	        cin>>arr[i];
	    }
	    
	    //map that stores the count of similar length ropes
	    map<int, int> countOfsimilarLengths;
	    
	    for(int length : arr){
	        countOfsimilarLengths[length]++;
	    }
	    
	    int noOfRopesLeft = size;
	    if(countOfsimilarLengths.size() <= 1){
	        cout<<0;
	    }
	    else{
	        for(auto ele : countOfsimilarLengths){
	            noOfRopesLeft = noOfRopesLeft - ele.second;
	            if(noOfRopesLeft != 0)
	                cout<<noOfRopesLeft<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}

/* This problem can also be solved using sorting technique */
