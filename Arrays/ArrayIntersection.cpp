/*
Array Intersection
Send Feedback
Given two random integer arrays(ARR1 and ARR2) of size M and N. You need to print their intersection; that is, an intersection is defined when both the arrays contain a particular value or to put it in other words when there is a common value in both the arrays.
Input arrays can contain duplicate elements.
Note : Order of the intersection elements is not important


Input format :
Line 1 : An integer N(size of the first array)
Line 2 : N elements of the array separated by a single space.
Line 3 : An integer M(size of the second array)
Line 4 : M elements of the array separated by a single space.
Output format :
Print the intersection elements on different lines
Constraints :
0 <= M <= 10^4, and
0 <= N <= 10^4
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7 
Sample Output 1 :
2 
4 
3
Sample Input 2 :
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 
2
1
Explanation for Sample Output 2 :
Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.
*/
#include<climits>
void intersection(int input1[], int input2[], int size1, int size2) 
{ int i,j;
    for(i=0; i<size1; i++)
    {
        for(j=0;j<size2; j++)
        {
            if(input1[i]==input2[j])
            {
                input2[j]=INT_MIN;
                cout<<input1[i]<<endl;
                break;
                
            }
            
            
        }    
        
    }
   
}

#include <iostream>
#include <algorithm>
using namespace std;
#include "solution.h"

int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];	
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];	
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	
	
	intersection(input1,input2,size1,size2);

		
	return 0;
}

