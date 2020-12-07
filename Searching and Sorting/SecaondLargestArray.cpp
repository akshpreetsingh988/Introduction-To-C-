/*
Second Largest in array
Send Feedback
Given a random integer array of size n, find and return the second largest element present in the array.
If n <= 1 or all elements are same in the array, return -2147483648 i.e. -2^31.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Second largest element
Constraints :
0 <= N <= 10^7
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
13
Sample Input 2:
5
9 3 6 2 9
Sample Output 2:
6
Sample Input 3:
2
6 6
Sample Output 3:
-2147483648

*/
// n - size of array
#include<limits.h>
int FindSecondLargest(int arr[], int n){
  int first=INT_MIN;
  int second=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>first&&arr[i]>second)
        {
            second=first;
            first=arr[i];
        }
        if(arr[i]<first&&arr[i]>second)
        {
            second=arr[i];
        }
        
    }
    return second;






}
#include <iostream>
using namespace std;
#include "solution.h"
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindSecondLargest(input,size);
	
	return 0;

}
