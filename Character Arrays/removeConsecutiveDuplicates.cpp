/*
Remove Consecutive Duplicates
Send Feedback
Given a string, S, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
*/
// input - given string
// You need to update in the input string itself. No need to return or print anything
#include <bits/stdc++.h>
void removeConsecutiveDuplicates(char S[]) { if (S[0] == '\0') 
        return; 
  
    // if the adjacent characters are same 
    if (S[0] == S[1]) { 
          
        // Shift character by one to left 
        int i = 0;  
        while (S[i] != '\0') { 
            S[i] = S[i + 1]; 
            i++; 
        } 
  
        // Check on Updated String S 
        removeConsecutiveDuplicates(S); 
    } 
  
    // If the adjacent characters are not same 
    // Check from S+1 string address 
   removeConsecutiveDuplicates(S + 1); 
} 
    // Write your code here


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}

