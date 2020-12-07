/*
Wave Print
Send Feedback
Given a two dimensional N*M array, print the array in a sine wave order. i.e. print the first column top to bottom, next column bottom to top and so on.
Note : Print the elements separated by space.
Input format :
N, M, array elements (separated by space)
Output format :
Elements of matrix in wave form in a single line and space separated
Constraints :
0 <= N <= 10^4
0 <= M <= 10^4
Sample Input 1:
3 4 1  2  3  4 5  6  7  8 9 10 11 12
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
Sample Input 2:
5 3 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Sample Output 2:
1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 
*/
#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
	for(int i=0;i<col; i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
            {
                cout<<input[j][i]<<" ";
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<input[j][i]<<" ";
            }
        }
    }
}


#include <iostream>
#include "solution.h"
using namespace std;

int main()
{

	int row, col;
	cin >> row >> col;
	int **input = new int *[row];
	for (int i = 0; i < row; i++)
	{
		input[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> input[i][j];
		}
	}
	wavePrint(input, row, col);
	cout << endl;
}
