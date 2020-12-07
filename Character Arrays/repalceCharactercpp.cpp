/*
Replace Character
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd
*/

#include<string.h>

void replaceCharacter(char input[], char c1, char c2) {
    int i;
    int n;
    n=strlen(input);
    
    for(i=0 ; i<n ; i++)
    {
        if(input[i]==c1)
        {
            input[i]=c2;

        }
    }
    
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    
}
#include <iostream>
using namespace std;
#include "Solution.h"

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

