/*
Sort 0 1 2
Send Feedback
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
0 <= n <= 10^7
Sample Input 1:
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
5
0 1 0 0 1
Sample Output 2:
0 0 0 1 1 
*/
// arr - input array
// n - size of array
#include <bits/stdc++.h>

    
    
void sort012(int arr[], int n) {
 int i, cnt0 = 0, cnt1 = 0, cnt2 = 0; 
  
    // Count the number of 0s, 1s and 2s in the array 
    for (i = 0; i < n; i++) { 
        switch (arr[i]) { 
        case 0: 
            cnt0++; 
            break; 
        case 1: 
            cnt1++; 
            break; 
        case 2: 
            cnt2++; 
            break; 
        } 
    } 
  
    // Update the array 
    i = 0; 
  
    // Store all the 0s in the beginning 
    while (cnt0 > 0) { 
        arr[i++] = 0; 
        cnt0--; 
    } 
  
    // Then all the 1s 
    while (cnt1 > 0) { 
        arr[i++] = 1; 
        cnt1--; 
    } 
  
    // Finally all the 2s 
    while (cnt2 > 0) { 
        arr[i++] = 2; 
        cnt2--; 
    } 
      
} 


#include <iostream>
#include <algorithm>
#include "solution.h"
using namespace std;


int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	
	sort012(arr_first,size_first);
		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}

