/*
Swap Alternate
Send Feedback
Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.
Input Format :
Line 1 : An Integer N(size of the array)
Line 2 : N integers which are elements of the array, separated by a single space
Output Format :
Elements after swapping in a single line, separated by a single space.
Constraints :
0 <= N <= 10^7
Sample Input 1:
6
9 3 6 12 4 32
Sample Output 2 :
3 9 12 6 32 4
Sample Input 1:
9
9 3 6 12 4 32 5 11 19
Sample Output 2 :
3 9 12 6 32 4 11 5 19
*/


void swapAlternate(int arr[],int size){
 
     int k;
    for(int i=0 ;i<size-1;i=i+2)
    {
        k=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=k;
    }
    
}     /* Don't write main().
     Don't read input, it is passed as function argument.
     Taking input and printing output is handled automatically.
      */
#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
  int size;  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  } 
  swapAlternate(arr, size);
 for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}




