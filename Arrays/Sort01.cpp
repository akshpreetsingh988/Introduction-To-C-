/*
Sort 0 1
Send Feedback
You are given an integer array A that contains only integers 0 and 1. Write a function to sort this array. Find a solution which scans the array only once. Don't use extra array.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Output format :
Sorted array elements in a single line separated by space
Constraints :
0 <= N <= 10^7
Sample Input 1:
7
0 1 1 0 1 0 1
Sample Output 1:
0 0 0 1 1 1 1
Sample Input 2:
8
1 0 1 1 0 1 0 1
Sample Output 2:
0 0 0 1 1 1 1 1
*/
void SortZeroesAndOne(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Update in the given array itself. Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    int i,n0=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==0)
        n0++;
    }
    for(i=0;i<n;i++)
    {
        if(i<n0)
            arr[i]=0;
        else
            arr[i]=1;
    }

}
#include <iostream>
#include <algorithm>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	SortZeroesAndOne(input,size);
		
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";	
	return 0;
}


