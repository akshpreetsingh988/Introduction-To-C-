
/*
Compress the String
Send Feedback
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
Note : Consecutive count of every character in input string is less than equal to 9.


Input Format :
String S
Output Format :
Compressed string 
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
aaabbccdsa
Sample Output 1 :
a3b2c2dsa
Sample Input 2 :
aaabbcddeeeee
Sample Output 2 :
a3b2cd2e5
*/
// input - given string
// You need to update in the given string itself i.e. in input. No need to return or print.
#include<string.h>
void stringCompression(char input[]) {
    int n=strlen(input);
    int idx = 0;
    char opt[2*n+1];
    for(int i=0;i<n;i++)
    {
        int count=1;
        while(i<n-1&&input[i]==input[i+1])
        {
            count++;
            i++;
        }
        //std::cout<<input[i]<<count;
        opt[idx++] = input[i];
        if(count > 1)
            opt[idx++] = char(count + 48);
    }
    opt[idx] = '\0';
    for(int i = 0; i < strlen(opt); i++)
        input[i] = opt[i];
    input[idx] = '\0';
    // Write your code here

}

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    stringCompression(input);
    cout << input << endl;
}

