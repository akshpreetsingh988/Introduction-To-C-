/*
Trim Spaces
Send Feedback
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/
#include<string.h>
void trimSpaces(char input[]) {
    int i,n,j;
    n=strlen(input);
    for(i=0 ; i<n ; i++)
    {
       if(input[i]==' ')
        {
            int j=i;
            while(input[j]!='\0')
            {
              input[j]=input[j+1];
              j++;                   
            }
            i--;
        }
    }
    
    
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */

}
#include <iostream>
using namespace std;
#include "Solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


