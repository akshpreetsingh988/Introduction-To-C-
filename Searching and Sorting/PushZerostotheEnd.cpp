/*
Push Zeros to end
Send Feedback
Given a random integer array, push all the zeros that are present to end of the array. The respective order of other elements should remain same.
Change in the input array itself. You don't need to return or print elements. Don't use extra array.
Note : You need to do this in one scan of array only.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Elements of the array separated by a single space.
Output Format :
Array elements in a single line (separated by single space)
Constraints :
0 <= N <= 10^7
Sample Input 1:
7
2 0 4 1 3 0 28
Sample Output 1:
2 4 1 3 28 0 0
Sample Input 2:
5
0 3 0 2 0
Sample Output 2:
3 2 0 0 0
*/
// arr - input array
// n - size of array

void PushZeroesEnd(int arr[], int n){
   
  int count = 0;  // Count of non-zero elements 
  
    // Traverse the array. If element encountered is non- 
    // zero, then replace the element at index 'count'  
    // with this element 
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i]; // here count is  
                                   // incremented 
  
    // Now all non-zero elements have been shifted to  
    // front and  'count' is set as index of first 0.  
    // Make all elements 0 from count to end. 
    while (count < n) 
        arr[count++] = 0; 
} 
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */


#include <iostream>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	
	return 0;

}

