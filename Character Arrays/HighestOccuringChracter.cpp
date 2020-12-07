/*
Highest Occurring Character
Send Feedback
Given a string, S, find and return the highest occurring character present in the given string.
If there are 2 characters in the input string with same frequency, return the character which comes first.


Note : Assume all the characters in the given string are lowercase.


Input format :
String S
Output format :
Highest occurring character
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x
*/
#include<cstring>


#define ASCII_SIZE 256 


char highestOccurringChar(char input[]) {


    // Write your code here




  




{ 


    // Create array to keep the count of individual 
    // characters and initialize the array as 0 
    int count[ASCII_SIZE] = {0}; 
    // Construct character count array from the input 
    // string. 
    int len = strlen(input); 
    int max = 0;  // Initialize max count 
    char result;   // Initialize result
    // Traversing through the string and maintaining 
    // the count of each character 
     for (int i = 0; i < len; i++) { 
        count[input[i]]++; 
    } 
    for (int i = 0; i < len; i++) { 
        //count[input[i]]++; 
        if (max < count[input[i]]) { 
            max = count[input[i]]; 
            result = input[i]; 
        }
    } 

    return result; 
} 
}








#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    cout << highestOccurringChar(input) << endl;
}


