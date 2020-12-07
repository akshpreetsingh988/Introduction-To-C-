/*
Largest Row or Column
Send Feedback
Given an NxM 2D array, you need to find out which row or column has largest sum (sum of its elements) overall amongst all rows and columns.
Input Format :
 Line 1 : 2 integers N and M respectively, separated by space 
 Line 2: Single line having N*M elements entered in row wise manner, each separated by space.
Output Format :
 If row sum is maximum then - "row" row_num max_sum
 If column sum is maximum then - "column" col_num max_sum
Constraints :
0 <= N <= 10^4
0 <= M <= 10^4
Note : If there are more than one rows/columns with maximum sum consider the row/column that comes first. And if ith row and jth column has same sum (which is largest), consider the ith row as answer.
Sample Input 1 :
2 2 
1 1 1 1
Sample Output 1 :
row 0 2
Sample Input 2 :
3 3
3 6 9 1 4 7 2 8 9
Sample Output 2 :
column 2 25
*/

void findLargest(int [][1000], int m, int n){

 int m=input.length;
  int n=input[0].length;
  int max = Integer.MIN_VALUE;
  int q = 0;
  int sum=0;
  String s = "";
 // int a[]=new int [m+n];
  //for row sum
  for(int i=0; i<n; i++)
  {
    sum=0;
    for(int j=0; j<m; j++)
    {
      sum =sum +input[i][j];

    }
    if(sum>max){
      max = sum;
      q = i;
      s = "row";
    }
    }
  // for col
  for(int i=0; i<m; i++)
  {
    sum=0;
    for(int j=0; j<n; j++)
    {
      sum=sum+input[j][i];

    }
  if(sum>max){
    max = sum;
    q = i;
    s = "column";
  } 
  }
  System.out.println(s + " "  + q + " " + max);
}
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */


}
#include<iostream>
using namespace std;
#include "Solution.h"

int main() {
    int row, col;
    cin >> row >> col;

    int input[1000][1000]; 
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input, row, col);
}
